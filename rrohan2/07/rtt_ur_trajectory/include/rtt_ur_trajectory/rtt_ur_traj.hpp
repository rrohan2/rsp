#include <ReflexxesAPI.h>
#include <RMLPositionFlags.h>
#include <RMLPositionInputParameters.h>
#include <RMLPositionOutputParameters.h>

#include <rtt/TaskContext.hpp>
#include <rtt/InputPort.hpp>
#include <rtt/OutputPort.hpp>

#include <kdl/chainfksolverpos_recursive.hpp>
#include <kdl/chainiksolverpos_lma.hpp>
#include <kdl_parser/kdl_parser.hpp>
#include <kdl/frames.hpp>

#include <rclcpp/rclcpp.hpp>
#include <rtt_ros2_params/rtt_ros2_params.hpp>
#include <rcl_interfaces/msg/set_parameters_result.hpp>

#include <sensor_msgs/msg/joint_state.hpp>
#include <std_msgs/msg/string.hpp>

#include <kdl/frames.hpp>
#include <kdl/jntarray.hpp>
#include <string>

class rtt_ur_traj : public RTT::TaskContext {

private:

  RTT::InputPort<KDL::Frame> port_cart_pos;
  RTT::InputPort<KDL::JntArray> port_joint_pos;
  RTT::OutputPort<sensor_msgs::msg::JointState> port_msr_pos;

  //size_t N;
  ReflexxesAPI* rml;
  RMLPositionInputParameters* ip_q;
  RMLPositionOutputParameters* op_q;
  RMLPositionInputParameters* ip_c;
  RMLPositionOutputParameters* op_c;
  RMLPositionFlags flags;

  RTT::Service::shared_ptr global_ros;
  RTT::Service::shared_ptr global_params;
  RTT::OperationCaller<rclcpp::ParameterValue(std::string)> getparam_operation;
  
  KDL::Chain chain;
  KDL::ChainFkSolverPos_recursive* fk_solver;
  KDL::ChainIkSolverPos_LMA *invkin_solver;

  KDL::JntArray joint_states;
  KDL::JntArray cart_states;

  int n_joints;

  int f1;
  std_msgs::msg::String robo_des;

  std::string robot_description;

  double max_vel,max_acc,max_jerk,vel_k;

public:

  rtt_ur_traj( const std::string& name );
  ~rtt_ur_traj();
  
  virtual bool configureHook();
  virtual bool startHook();

  virtual void updateHook();

  virtual void stopHook();
  virtual void cleanupHook();

  void moveJ( const KDL::JntArray& q );
  KDL::JntArray getJointPos();

  void moveC( const KDL::Frame& fr );
  KDL::Frame getCartPos();

  void updateParams();

  rcl_interfaces::msg::SetParametersResult parametersCallback(const std::vector<rclcpp::Parameter> &parameters);
  void updateVel();
};
