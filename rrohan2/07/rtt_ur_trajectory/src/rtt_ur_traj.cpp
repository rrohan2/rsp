#include <rtt_ur_trajectory/rtt_ur_traj.hpp>
#include <iomanip>

#include <rtt/internal/GlobalService.hpp>

#include <rtt_ros2/rtt_ros2.hpp>
#include <rtt_ros2_node/rtt_ros2_node.hpp>

#include <tf2_kdl/tf2_kdl.h>

#include <rtt/Component.hpp>

rtt_ur_traj::rtt_ur_traj( const std::string& name ) :
  RTT::TaskContext(name),
  fk_solver(NULL){

  f1 = 0;
  max_vel = 0.5;
  max_acc = 1.0;
  max_jerk = 10.0;
  vel_k = 100.0;

  std::cout << "rtt_ur_traj::rtt_ur_trajectory" << std::endl;

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
  // auto callback_handle_ = node->set_on_parameters_callback(std::bind(&rtt_ur_traj::parametersCallback, this, std::placeholders::_1));

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
  joint_states.resize(n_joints);
  cart_states.resize(6);

  // Declare joint parameters
  rcl_interfaces::msg::ParameterDescriptor descriptor;
  rcl_interfaces::msg::FloatingPointRange range;
  range.set__from_value(-3.15).set__to_value(3.15).set__step(0);
  descriptor.floating_point_range= {range};
  for(int i=0;i<n_joints;i++){
    node->declare_parameter("joint"+std::to_string(i), 0.00, descriptor);
    joint_states(i) = 0.00;
  }

  rcl_interfaces::msg::ParameterDescriptor descriptor2;
  rcl_interfaces::msg::FloatingPointRange range2;
  range2.set__from_value(-5.00).set__to_value(5.00).set__step(0);
  descriptor2.floating_point_range= {range2};

  rcl_interfaces::msg::ParameterDescriptor descriptor3;
  rcl_interfaces::msg::FloatingPointRange range3;
  range3.set__from_value(-1.59).set__to_value(1.59).set__step(0);
  descriptor3.floating_point_range= {range3};

  KDL::Frame temp_f;
  fk_solver->JntToCart(joint_states, temp_f);
  cart_states(0) = temp_f.p(0);
  cart_states(1) = temp_f.p(1);
  cart_states(2) = temp_f.p(2);
  temp_f.M.GetRPY(cart_states(3),cart_states(4),cart_states(5));

  node->declare_parameter("cart_x", cart_states(0), descriptor2);
  node->declare_parameter("cart_y", cart_states(1), descriptor2);
  node->declare_parameter("cart_z", cart_states(2), descriptor2);
  node->declare_parameter("cart_roll", cart_states(3), descriptor);
  node->declare_parameter("cart_pitch", cart_states(4), descriptor);
  node->declare_parameter("cart_yaw", cart_states(5), descriptor);
  moveJ(joint_states);

  rcl_interfaces::msg::ParameterDescriptor descriptor4;
  rcl_interfaces::msg::FloatingPointRange range4;
  range4.set__from_value(0).set__to_value(100).set__step(0);
  descriptor4.floating_point_range= {range4};

  node->declare_parameter("Velocity", vel_k, descriptor4);

  return true;
}

bool rtt_ur_traj::startHook(){
  std::cout << "rtt_ur_traj::startHook" << std::endl;
  KDL::Frame frame0;
  KDL::JntArray a(n_joints);

  for( size_t i=0; i<n_joints; i++ ){
    a(i) = 0;
    ip_q->CurrentPositionVector->VecData[i] = 0.0;
    ip_q->CurrentVelocityVector->VecData[i] = 0.0;
    ip_q->CurrentAccelerationVector->VecData[i] = 0.0;

    ip_q->MaxVelocityVector->VecData[i] = max_vel;
    ip_q->MaxAccelerationVector->VecData[i] = max_acc;
    ip_q->MaxJerkVector->VecData[i] = max_jerk;

    ip_q->SelectionVector->VecData[i] = true;

    ip_c->CurrentVelocityVector->VecData[i] = 0.0;
    ip_c->CurrentAccelerationVector->VecData[i] = 0.0;

    ip_c->MaxVelocityVector->VecData[i] = max_vel;
    ip_c->MaxAccelerationVector->VecData[i] = max_acc;
    ip_c->MaxJerkVector->VecData[i] = max_jerk;

    ip_c->SelectionVector->VecData[i] = true;

  }

  fk_solver->JntToCart(a, frame0);

  ip_c->CurrentPositionVector->VecData[0] = frame0.p(0);
  ip_c->CurrentPositionVector->VecData[1] = frame0.p(1);
  ip_c->CurrentPositionVector->VecData[2] = frame0.p(2);

  double r,p,y;  
  frame0.M.GetRPY(r,p,y);
  ip_c->CurrentPositionVector->VecData[3] = r;
  ip_c->CurrentPositionVector->VecData[4] = p;
  ip_c->CurrentPositionVector->VecData[5] = y;

  return true;
}

void rtt_ur_traj::updateHook(){
  auto node = rtt_ros2_node::getNode(this);

  KDL::JntArray temp_joint_states(n_joints);

  rclcpp::Parameter c1 = node->get_parameter("cart_x");
  rclcpp::Parameter c2 = node->get_parameter("cart_y");
  rclcpp::Parameter c3 = node->get_parameter("cart_z");
  rclcpp::Parameter c4 = node->get_parameter("cart_roll");
  rclcpp::Parameter c5 = node->get_parameter("cart_pitch");
  rclcpp::Parameter c6 = node->get_parameter("cart_yaw");

  rclcpp::Parameter v = node->get_parameter("Velocity");
  double vel_k_new = v.as_double();
  if(vel_k_new!=vel_k){
    vel_k = vel_k_new;
    updateVel();
  }

  for(int i=0;i<n_joints;i++){
    rclcpp::Parameter double_array_param = node->get_parameter("joint"+std::to_string(i));
    temp_joint_states(i) = double_array_param.as_double();
  }

  if(cart_states(0)!=c1.as_double() ||
     cart_states(1)!=c2.as_double() ||
     cart_states(2)!=c3.as_double() ||
     cart_states(3)!=c4.as_double() ||
     cart_states(4)!=c5.as_double() ||
     cart_states(5)!=c6.as_double()){
    KDL::Frame goal;
    goal.p(0) = c1.as_double();
    goal.p(1) = c2.as_double();
    goal.p(2) = c3.as_double();
    goal.M = KDL::Rotation::RPY(c4.as_double(),c5.as_double(),c6.as_double());
    moveC(goal);
  }
  else{
    for(int i=0;i<n_joints;i++){
      if(temp_joint_states(i)!=joint_states(i)){
        moveJ(temp_joint_states);
        break;
      }
    }
  }

  int resultq = rml->RMLPosition( *ip_q, op_q, flags );
  int resultc = rml->RMLPosition( *ip_c, op_c, flags );

  *ip_q->CurrentPositionVector = *op_q->NewPositionVector;
  *ip_q->CurrentVelocityVector = *op_q->NewVelocityVector;
  *ip_q->CurrentAccelerationVector = *op_q->NewAccelerationVector;

  *ip_c->CurrentPositionVector = *op_q->NewPositionVector;
  *ip_c->CurrentVelocityVector = *op_q->NewVelocityVector;
  *ip_c->CurrentAccelerationVector = *op_q->NewAccelerationVector;

  KDL::JntArray q_sol;
  q_sol = getJointPos();

  sensor_msgs::msg::JointState pose;
  pose.header.frame_id = "base_link";
  pose.header.stamp = node->now();
  
  pose.name.resize(n_joints);
  pose.name[0] = "elbow_joint";
  pose.name[1] = "shoulder_lift_joint";
  pose.name[2] = "shoulder_pan_joint";
  pose.name[3] = "wrist_1_joint";
  pose.name[4] = "wrist_2_joint";
  pose.name[5] = "wrist_3_joint";

  pose.position = {q_sol(2),q_sol(1),q_sol(0),q_sol(3),q_sol(4),q_sol(5)};
  port_msr_pos.write(pose);
  
}

void rtt_ur_traj::stopHook(){
  std::cout << "rtt_ur_traj::stopHook" << std::endl;
}

void rtt_ur_traj::cleanupHook(){
  std::cout << "rtt_ur_traj::cleanupHook" << std::endl;
}

void rtt_ur_traj::moveJ( const KDL::JntArray& q ){
  for(int i=0;i<n_joints;i++){
    ip_q->TargetPositionVector->VecData[i] = q(i);
    joint_states(i) = q(i);
  }

  KDL::Frame frame0;
  fk_solver->JntToCart(q, frame0);

  KDL::JntArray temp(n_joints);
  temp(0) = frame0.p(0);
  temp(1) = frame0.p(1);
  temp(2) = frame0.p(2);
  frame0.M.GetRPY(temp(3),temp(4),temp(5));

  for(int i=0;i<n_joints;i++){
    ip_c->TargetPositionVector->VecData[i] = temp(i);
    cart_states(i) = temp(i);
  }
  updateParams();
}

KDL::JntArray rtt_ur_traj::getJointPos(){
  KDL::JntArray q(n_joints);
  for(int i=0;i<n_joints;i++){
    q(i) = ip_q->CurrentPositionVector->VecData[i];
  }
  return q;
}

void rtt_ur_traj::moveC( const KDL::Frame& crt_goal ){
  KDL::JntArray temp(n_joints);
  temp(0) = crt_goal.p(0);
  temp(1) = crt_goal.p(1);
  temp(2) = crt_goal.p(2);
  // crt_goal.M.GetRPY(temp(3),temp(4),temp(5));
  crt_goal.M.GetRPY(temp(3),temp(4),temp(5));

  for(int i=0;i<n_joints;i++){
    ip_c->TargetPositionVector->VecData[i] = temp(i);
    cart_states(i) = temp(i);
  }

  KDL::JntArray q_init;
  q_init = getJointPos();

  KDL::JntArray q_sol(n_joints);
  int retval = invkin_solver->CartToJnt(q_init, crt_goal, q_sol);
  for(int i=0;i<n_joints;i++){
    ip_q->TargetPositionVector->VecData[i] = q_sol(i);
    joint_states(i) = q_sol(i);
  }
  updateParams();
}

KDL::Frame rtt_ur_traj::getCartPos(){
  KDL::Frame frame0;
  KDL::JntArray q(n_joints);
  for(int i=0;i<n_joints;i++){
    q(i) = ip_q->CurrentPositionVector->VecData[i];
  }
  fk_solver->JntToCart(q, frame0);
  return frame0;
}

void rtt_ur_traj::updateParams(){
  auto node = rtt_ros2_node::getNode(this);

  for(int i=0;i<n_joints;i++){
    node->set_parameter(rclcpp::Parameter("joint"+std::to_string(i), ip_q->TargetPositionVector->VecData[i]));
  }

  node->set_parameter(rclcpp::Parameter("cart_x", ip_c->TargetPositionVector->VecData[0]));
  node->set_parameter(rclcpp::Parameter("cart_y", ip_c->TargetPositionVector->VecData[1]));
  node->set_parameter(rclcpp::Parameter("cart_z", ip_c->TargetPositionVector->VecData[2]));
  node->set_parameter(rclcpp::Parameter("cart_roll", ip_c->TargetPositionVector->VecData[3]));
  node->set_parameter(rclcpp::Parameter("cart_pitch", ip_c->TargetPositionVector->VecData[4]));
  node->set_parameter(rclcpp::Parameter("cart_yaw", ip_c->TargetPositionVector->VecData[5]));
}

void rtt_ur_traj::updateVel(){
  for(int i=0;i<n_joints;i++){
    ip_q->MaxVelocityVector->VecData[i] = max_vel*vel_k/100.0;
  }
  ip_c->MaxVelocityVector->VecData[0] = max_vel*vel_k/100.0;
  ip_c->MaxVelocityVector->VecData[1] = max_vel*vel_k/100.0;
  ip_c->MaxVelocityVector->VecData[2] = max_vel*vel_k/100.0;
  ip_c->MaxVelocityVector->VecData[3] = max_vel*vel_k/100.0;
  ip_c->MaxVelocityVector->VecData[4] = max_vel*vel_k/100.0;
  ip_c->MaxVelocityVector->VecData[5] = max_vel*vel_k/100.0;

}

ORO_CREATE_COMPONENT(rtt_ur_traj)