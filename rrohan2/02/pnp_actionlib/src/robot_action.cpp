#include <pnp_actionlib/robot_action.hpp>

using namespace std::chrono_literals;
using namespace std::placeholders;

namespace rsp{

  robot_action::robot_action( const std::string& name ):
    Node( name ){

    robot_server = rclcpp_action::create_server<pnp_msgs::action::Robot>
      ( this,
      	"robot_server", 
      	std::bind( &robot_action::goal_callback, this, _1, _2 ),
      	std::bind( &robot_action::cancel_callback, this, _1 ),
      	std::bind( &robot_action::accept_goal, this, _1 ) );
    
  }
  
  rclcpp_action::GoalResponse robot_action::goal_callback (const rclcpp_action::GoalUUID&, pnp_msgs::action::Robot::Goal::ConstSharedPtr goal){

    if( !std::isnan(goal->joint_position[0]) || !std::isnan(goal->joint_position[1]) ){
      std::cout << "Accepted goal." << goal->joint_position[0] << ", " << goal->joint_position[1] << std::endl;
      return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }
    else{
      std::cout << "Rejected Goal." << std::endl;
      return rclcpp_action::GoalResponse::REJECT;
    }
    
  }
  
  rclcpp_action::CancelResponse robot_action::cancel_callback (const std::shared_ptr<rclcpp_action::ServerGoalHandle<pnp_msgs::action::Robot>> ){
    std::cout << "cancel" << std::endl;
    return rclcpp_action::CancelResponse::ACCEPT;
  }
  
  void robot_action::accept_goal (const std::shared_ptr<rclcpp_action::ServerGoalHandle<pnp_msgs::action::Robot>> goal_handle ){

    std::cout << "Server processing.." << std::endl;
    auto feedback = std::make_shared<pnp_msgs::action::Robot::Feedback>();
    for( int i=0; i<10; i++ ){
      
      std::this_thread::sleep_for( 1000ms );
      feedback->robot_progress = i/9.0;
      goal_handle->publish_feedback( feedback );
      
    }

    auto result = std::make_shared<pnp_msgs::action::Robot::Result>();
    result->result = 1;
    goal_handle->succeed(result);
    
  }

}
