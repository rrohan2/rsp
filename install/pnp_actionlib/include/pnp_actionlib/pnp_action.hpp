#include <rclcpp_action/rclcpp_action.hpp>
#include <rclcpp/rclcpp.hpp>

#include <pnp_msgs/action/pick_and_place.hpp>
#include <pnp_msgs/action/gripper.hpp>
#include <pnp_msgs/action/robot.hpp>

#include <pnp_actionlib/robot_action.hpp>
#include <pnp_actionlib/gripper_action.hpp>

namespace rsp{

  class pnp_action : public rclcpp::Node {

  private:
    rclcpp_action::Server<pnp_msgs::action::PickAndPlace>::SharedPtr pnp_server;

    rclcpp_action::Client<pnp_msgs::action::Robot>::SharedPtr r_client;
    rclcpp_action::Client<pnp_msgs::action::Gripper>::SharedPtr g_client;

    rclcpp::Node::SharedPtr pnp_node;

    rclcpp::CallbackGroup::SharedPtr callback_group1, callback_group2;


  public:
    pnp_action( const std::string& name );  

    rclcpp_action::GoalResponse goal_callback (const rclcpp_action::GoalUUID& id,
		                          pnp_msgs::action::PickAndPlace::Goal::ConstSharedPtr goal);
    
    rclcpp_action::CancelResponse cancel_callback (const std::shared_ptr<rclcpp_action::ServerGoalHandle<pnp_msgs::action::PickAndPlace>> goal_handle );
    
    void accept_goal (const std::shared_ptr<rclcpp_action::ServerGoalHandle<pnp_msgs::action::PickAndPlace>> goal_handle );

    void call_robot_action();
    void call_gripper_action();

    void robot_response_callback( rclcpp_action::ClientGoalHandle<pnp_msgs::action::Robot>::SharedPtr );
    void gripper_response_callback( rclcpp_action::ClientGoalHandle<pnp_msgs::action::Gripper>::SharedPtr );
    
    void robot_feedback_callback( rclcpp_action::ClientGoalHandle<pnp_msgs::action::Robot>::SharedPtr handle,
                            const std::shared_ptr<const pnp_msgs::action::Robot::Feedback> feedback );
    void gripper_feedback_callback( rclcpp_action::ClientGoalHandle<pnp_msgs::action::Gripper>::SharedPtr handle,
                            const std::shared_ptr<const pnp_msgs::action::Gripper::Feedback> feedback );
    
    void robot_result_callback( const rclcpp_action::ClientGoalHandle<pnp_msgs::action::Robot>::WrappedResult& result );
    void gripper_result_callback( const rclcpp_action::ClientGoalHandle<pnp_msgs::action::Gripper>::WrappedResult& result );

  };


  class pnp_client : public rclcpp::Node {

  private:
    rclcpp_action::Client<pnp_msgs::action::PickAndPlace>::SharedPtr pnp_client_;
  
    rclcpp::CallbackGroup::SharedPtr group1;
  
  public:
    pnp_client( const std::string& name );

    void call_pnp_action( const float pick_pos[2], const float place_pos[2]);

    void pnp_response_callback( rclcpp_action::ClientGoalHandle<pnp_msgs::action::PickAndPlace>::SharedPtr );
    
    void pnp_feedback_callback( rclcpp_action::ClientGoalHandle<pnp_msgs::action::PickAndPlace>::SharedPtr handle,
                            const std::shared_ptr<const pnp_msgs::action::PickAndPlace::Feedback> feedback );
    
    void pnp_result_callback( const rclcpp_action::ClientGoalHandle<pnp_msgs::action::PickAndPlace>::WrappedResult& result );
    
  };

}
