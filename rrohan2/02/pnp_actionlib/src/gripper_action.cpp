#include <pnp_actionlib/gripper_action.hpp>

using namespace std::chrono_literals;
using namespace std::placeholders;

namespace rsp{

  gripper_action::gripper_action( const std::string& name ):
    Node( name ){

    gripper_server = rclcpp_action::create_server<pnp_msgs::action::Gripper>
      ( this,
      	"gripper_server", 
      	std::bind( &gripper_action::goal_callback, this, _1, _2 ),
      	std::bind( &gripper_action::cancel_callback, this, _1 ),
      	std::bind( &gripper_action::accept_goal, this, _1 ) );
    
  }
  
  rclcpp_action::GoalResponse gripper_action::goal_callback (const rclcpp_action::GoalUUID&, pnp_msgs::action::Gripper::Goal::ConstSharedPtr goal){

    if( goal->gripper_position==0 || goal->gripper_position==1){
      std::cout << "Accepted goal." << std::endl;
      return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }
    else{
      std::cout << "reject" << std::endl;
      return rclcpp_action::GoalResponse::REJECT;
    }    
    
  }
  
  rclcpp_action::CancelResponse gripper_action::cancel_callback (const std::shared_ptr<rclcpp_action::ServerGoalHandle<pnp_msgs::action::Gripper>> ){
    std::cout << "cancel" << std::endl;
    return rclcpp_action::CancelResponse::ACCEPT;
  }
  
  void gripper_action::accept_goal (const std::shared_ptr<rclcpp_action::ServerGoalHandle<pnp_msgs::action::Gripper>> goal_handle ){

    std::cout << "Gripper server processing" << std::endl;
    for( int i=0; i<10; i++ ){
      
      auto feedback = std::make_shared<pnp_msgs::action::Gripper::Feedback>();
      feedback->gripper_progress = i/9.0;
      goal_handle->publish_feedback( feedback );
      std::this_thread::sleep_for( 1000ms );
      
    }

    auto result = std::make_shared<pnp_msgs::action::Gripper::Result>();
    result->result = 1;
    goal_handle->succeed(result);
    
  }
  
}
