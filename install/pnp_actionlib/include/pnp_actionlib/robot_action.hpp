#include <rclcpp_action/rclcpp_action.hpp>
#include <rclcpp/rclcpp.hpp>
#include <pnp_msgs/action/robot.hpp>

namespace rsp{

  class robot_action : public rclcpp::Node {
  private:
    rclcpp_action::Server<pnp_msgs::action::Robot>::SharedPtr robot_server;
  
  public:

    robot_action( const std::string& name );

    rclcpp_action::GoalResponse goal_callback (const rclcpp_action::GoalUUID& id, pnp_msgs::action::Robot::Goal::ConstSharedPtr goal);
    
    rclcpp_action::CancelResponse cancel_callback (const std::shared_ptr<rclcpp_action::ServerGoalHandle<pnp_msgs::action::Robot>> goal_handle );
    
    void accept_goal (const std::shared_ptr<rclcpp_action::ServerGoalHandle<pnp_msgs::action::Robot>> goal_handle );
  };

}
