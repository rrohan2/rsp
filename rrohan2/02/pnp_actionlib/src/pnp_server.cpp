#include <pnp_actionlib/pnp_action.hpp>

int main( int argc, char** argv ){

  rclcpp::init( argc, argv );


  std::shared_ptr<rsp::robot_action> s1 = std::make_shared<rsp::robot_action>("robot_node") ;
  std::shared_ptr<rsp::gripper_action> s2 = std::make_shared<rsp::gripper_action>("gripper_node") ;
  std::shared_ptr<rsp::pnp_action> s3 = std::make_shared<rsp::pnp_action>("pnp_node") ;

  rclcpp::executors::MultiThreadedExecutor executor;
  executor.add_node(s1);
  executor.add_node(s2);
  executor.add_node(s3);

  executor.spin();
  
  rclcpp::shutdown();

  return 0;

}
