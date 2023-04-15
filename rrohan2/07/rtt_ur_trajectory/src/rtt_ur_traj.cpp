#include <rtt_ur_trajectory/rtt_ur_traj.hpp>
#include <iomanip>

#include <rtt/internal/GlobalService.hpp>

#include <rtt_ros2/rtt_ros2.hpp>
#include <rtt_ros2_node/rtt_ros2_node.hpp>
#include <rtt_ros2_params/rtt_ros2_params.hpp>

#include <tf2_kdl/tf2_kdl.h>


#include <rtt/Component.hpp>

rtt_ur_traj::rtt_ur_traj( const std::string& name ) :
  RTT::TaskContext(name),
  fk_solver(NULL){

  std::cout << "rtt_ur_traj::rtt_ur_trajectory" << std::endl;

  // robot_description = this->rosParam<std::string>("robot_description");

  addPort("CmdCartPos", port_cart_pos ).doc("Commanded cartesian positions");
  addPort("CmdJntPos", port_joint_pos ).doc("Commanded joint positions");
  addPort("MsrJntPos", port_msr_pos ).doc("Measured joint positions");
  
  addOperation("MoveC", &rtt_ur_traj::moveC, this, RTT::OwnThread );
  addOperation("MoveJ", &rtt_ur_traj::moveJ, this, RTT::OwnThread );
  
  addOperation("GetC", &rtt_ur_traj::getCartPos, this, RTT::OwnThread );
  addOperation("GetJ", &rtt_ur_traj::getJointPos, this, RTT::OwnThread );
  
  global_ros = RTT::internal::GlobalService::Instance()->getService("ros");
  RTT::OperationCaller<bool(const std::string&)> create_node =
    global_ros->getOperation("create_named_node");
  create_node.ready();

  
}

rtt_ur_traj::~rtt_ur_traj(){
  if( rml ) delete rml;
  if( ip_q ) delete ip_q;
  if( op_q ) delete op_q;
  if( ip_c ) delete ip_q;
  if( op_c ) delete op_q;
  if( fk_solver ) delete fk_solver;
}

bool rtt_ur_traj::configureHook(){

  std::cout << "rtt_ur_traj::configureHook" << std::endl;

  auto node = rtt_ros2_node::getNode(this);
  auto des_client = node->create_client<rcl_interfaces::srv::GetParameters>("/robot_state_publisher/get_parameters");

  while(!des_client->wait_for_service(std::chrono::seconds(1))){
    if(!rclcpp::ok()){
      return false;
    }
    RCLCPP_INFO(node->get_logger(),"service not available");
  }
  auto request = std::make_shared<rcl_interfaces::srv::GetParameters::Request>();
  request->names.push_back("robot_description");
  auto result = des_client->async_send_request(request);
  auto status = result.wait_for(std::chrono::seconds(1));

  if(status == std::future_status::ready){
    auto response = result.get();
    if(response->values.size()>0){
      robot_description = response->values[0].string_value;
      std::cout << "Got description" << std::endl;
    }
    else{
      std::cout <<"Failed description" << std::endl;
      return false;
    }
  }
  else{
    std::cout << "Failed" << std::endl;
    return false;
  }

  RTT::log().setLogLevel( RTT::Logger::Info );
			
  KDL::Tree tree;
  if( kdl_parser::treeFromString( robot_description, tree)){
    RTT::log(RTT::Info) << "Description parsed to a tree" << RTT::endlog();
    if( tree.getChain("world", "tool0", chain)){
      fk_solver = new KDL::ChainFkSolverPos_recursive(chain);
      invkin_solver = new KDL::ChainIkSolverPos_LMA(chain);
    }
    else{
      RTT::log(RTT::Error) << "Failed to parse chain between world and tool0"
			   << RTT::endlog();
    }
  }
  else{
    RTT::log(RTT::Error) << "Failed to parse tree" << RTT::endlog();
  }
  RTT::log(RTT::Info) << "Description parsed to a chain" << RTT::endlog();

  n_joints = chain.getNrOfJoints();
  rml = new ReflexxesAPI(n_joints , getPeriod() );
  ip_q = new RMLPositionInputParameters( n_joints );
  op_q = new RMLPositionOutputParameters( n_joints );
  ip_c = new RMLPositionInputParameters( n_joints );
  op_c = new RMLPositionOutputParameters( n_joints );

  return true;
}

bool rtt_ur_traj::startHook(){
  std::cout << "rtt_ur_traj::startHook" << std::endl;

  for( size_t i=0; i<n_joints; i++ ){

    ip_q->CurrentPositionVector->VecData[i] = 0.0;
    ip_q->CurrentVelocityVector->VecData[i] = 0.0;
    ip_q->CurrentAccelerationVector->VecData[i] = 0.0;

    ip_q->MaxVelocityVector->VecData[i] = 0.10;
    ip_q->MaxAccelerationVector->VecData[i] = 1.0;
    ip_q->MaxJerkVector->VecData[i] = 10.0;

    ip_q->SelectionVector->VecData[i] = true;

  }

  KDL::Frame frame0;
  KDL::JntArray KDLJointArray(n_joints);
  fk_solver->JntToCart(KDLJointArray, frame0);

  return true;
}

void rtt_ur_traj::updateHook(){
  std::cout << "rtt_ur_traj::updateHook" << std::endl;
  
}

void rtt_ur_traj::stopHook(){
  std::cout << "rtt_ur_traj::stopHook" << std::endl;
}

void rtt_ur_traj::cleanupHook(){
  std::cout << "rtt_ur_traj::cleanupHook" << std::endl;
}

// void rtt_ur_traj::moveJ( const KDL::JntArray& q ){
//   // These are goal position/velocities
//   // // This has no business here and should come from an operation/port
//   // ip_q->TargetPositionVector->VecData[0] = q(0);
//   // ip_q->TargetVelocityVector->VecData[0] = 0.0;
// }

// KDL::JntArray rtt_ur_traj::moveC(const KDL::Frame& q){
//   // KDL::JntArray q(chain.getNrOfJoints());
//   // q(0) = ip_q->CurrentPositionVector->VecData[0];
//   // return q;
// }

void rtt_ur_traj::moveJ( const KDL::JntArray& q ){
  for(int i=0;i<n_joints;i++){
    ip_q->TargetPositionVector->VecData[0] = q(0);
  }
  sensor_msgs::msg::JointState pose;
  pose.header.frame_id = "world";
  // pose.position[0] = 0.2; //q(0);
  // pose.position[1] = 0.2; //q(1);
  // pose.position[2] = 0.2; //q(2);
  // pose.position[3] = 0.2; //q(3);
  // pose.position[4] = 0.2; //q(4);
  // pose.position[5] = 0.2; //q(5);
  // port_msr_pos.write(pose);
}

KDL::JntArray rtt_ur_traj::getJointPos(){
  KDL::JntArray q(n_joints);
  for(int i=0;i<n_joints;i++){
    q(i) = ip_q->CurrentPositionVector->VecData[i];
  }
  return q;
}

void rtt_ur_traj::moveC( const KDL::Frame& crt_goal ){
  KDL::JntArray q_init(n_joints);
  for(int i=0;i<n_joints;i++){
    q_init(i) = ip_q->CurrentPositionVector->VecData[i];
  }
  KDL::JntArray q_sol(n_joints);
  for(int i=0;i<n_joints;i++){
    q_sol(i) = 0.3;
  }

  // int retval = invkin_solver->CartToJnt(q_init, crt_goal, q_sol);

  sensor_msgs::msg::JointState pose;
  pose.header.frame_id = "world";
  // pose.position[0] = q_sol(0);
  // pose.position[1] = q_sol(1);
  // pose.position[2] = q_sol(2);
  // pose.position[3] = q_sol(3);
  // pose.position[4] = q_sol(4);
  // pose.position[5] = q_sol(5);
  // port_msr_pos.write(pose);
}

KDL::Frame rtt_ur_traj::getCartPos(){
  return cart_states;
}

ORO_CREATE_COMPONENT(rtt_ur_traj)