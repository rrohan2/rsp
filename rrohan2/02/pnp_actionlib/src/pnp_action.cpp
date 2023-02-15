#include <pnp_actionlib/pnp_action.hpp>

using namespace std::chrono_literals;
using namespace std::placeholders;

namespace rsp{

  pnp_action::pnp_action( const std::string& name ):
  Node(name){

    pnp_server = rclcpp_action::create_server<pnp_msgs::action::PickAndPlace>
      ( this,
      	"pnp_server", 
      	std::bind( &pnp_action::goal_callback, this, _1, _2 ),
      	std::bind( &pnp_action::cancel_callback, this, _1 ),
      	std::bind( &pnp_action::accept_goal, this, _1 ) );


    callback_group1 = this->create_callback_group(rclcpp::CallbackGroupType::Reentrant);
    r_client = rclcpp_action::create_client<pnp_msgs::action::Robot>( this, "robot_server",callback_group1);
    r_client->wait_for_action_server();

    callback_group2 = this->create_callback_group(rclcpp::CallbackGroupType::Reentrant);
    g_client = rclcpp_action::create_client<pnp_msgs::action::Gripper>( this, "gripper_server", callback_group2 );
    g_client->wait_for_action_server();
    
  }
  
  rclcpp_action::GoalResponse pnp_action::goal_callback (const rclcpp_action::GoalUUID&, pnp_msgs::action::PickAndPlace::Goal::ConstSharedPtr goal){

    std::cout << "New goal" << std::endl;
    if( !std::isnan(goal->pick_position[0]) || !std::isnan(goal->pick_position[1]) ){
      std::cout << "Accepted goal." << std::endl;
      return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }
    else{
      std::cout << "Rejected Goal." << std::endl;
      return rclcpp_action::GoalResponse::REJECT;
    }    
    
  }
  
  rclcpp_action::CancelResponse pnp_action::cancel_callback (const std::shared_ptr<rclcpp_action::ServerGoalHandle<pnp_msgs::action::PickAndPlace>> ){
    std::cout << "Goal cancelled." << std::endl;
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  void pnp_action::accept_goal(const std::shared_ptr<rclcpp_action::ServerGoalHandle<pnp_msgs::action::PickAndPlace>>
   goal_handle_pnp ){

    std::cout << "server processing" << std::endl;

    const auto pnp_goal = goal_handle_pnp->get_goal();

    auto feedback = std::make_shared<pnp_msgs::action::PickAndPlace::Feedback>();


    rclcpp_action::Client<pnp_msgs::action::Robot>::SendGoalOptions robot_options;
    robot_options.goal_response_callback = std::bind(&pnp_action::robot_response_callback, this, _1);
    robot_options.feedback_callback = std::bind(&pnp_action::robot_feedback_callback, this, _1, _2);
    robot_options.result_callback = std::bind(&pnp_action::robot_result_callback, this, _1);

    rclcpp_action::Client<pnp_msgs::action::Gripper>::SendGoalOptions gripper_options;
    gripper_options.goal_response_callback = std::bind(&pnp_action::gripper_response_callback, this, _1);
    gripper_options.feedback_callback = std::bind(&pnp_action::gripper_feedback_callback, this, _1, _2);
    gripper_options.result_callback = std::bind(&pnp_action::gripper_result_callback, this, _1);

    pnp_msgs::action::Robot::Goal robot_goal;

    pnp_msgs::action::Gripper::Goal gripper_goal;

    feedback->robot_gripper_position = "Move to pick";
    goal_handle_pnp->publish_feedback( feedback );
    
    robot_goal.joint_position[0] = pnp_goal->pick_position[0];
    robot_goal.joint_position[1] = pnp_goal->pick_position[1];

    auto goal_handle_future = r_client->async_send_goal( robot_goal, robot_options );
    
    rclcpp_action::ClientGoalHandle<pnp_msgs::action::Robot>::SharedPtr goal_handle = goal_handle_future.get();
    if (!goal_handle) {
      RCLCPP_ERROR(this->get_logger(), "Goal rejected");
      return;
    }
    auto result_future = r_client->async_get_result(goal_handle);
    rclcpp_action::ClientGoalHandle<pnp_msgs::action::Robot>::WrappedResult wrapped_result = result_future.get();

    feedback->robot_gripper_position = "Closing gripper.";
    goal_handle_pnp->publish_feedback( feedback );
    
    gripper_goal.gripper_position = 0;

    auto goal_handle_future2 = g_client->async_send_goal( gripper_goal, gripper_options );
    rclcpp_action::ClientGoalHandle<pnp_msgs::action::Gripper>::SharedPtr goal_handle2 = goal_handle_future2.get();
    if (!goal_handle2) {
      RCLCPP_ERROR(this->get_logger(), "Goal rejected by server");
      return;
    }
    auto result_future2 = g_client->async_get_result(goal_handle2);
    rclcpp_action::ClientGoalHandle<pnp_msgs::action::Gripper>::WrappedResult wrapped_result2 = result_future2.get();

    feedback->robot_gripper_position = "Moving to place position.";
    goal_handle_pnp->publish_feedback( feedback );
    
    robot_goal.joint_position[0] = pnp_goal->place_position[0];
    robot_goal.joint_position[1] = pnp_goal->place_position[1];

    auto goal_handle_future3 = r_client->async_send_goal( robot_goal, robot_options );
    
    rclcpp_action::ClientGoalHandle<pnp_msgs::action::Robot>::SharedPtr goal_handle3 = goal_handle_future3.get();
    if (!goal_handle3) {
      RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server");
      return;
    }
    auto result_future3 = r_client->async_get_result(goal_handle3);
    rclcpp_action::ClientGoalHandle<pnp_msgs::action::Robot>::WrappedResult wrapped_result3 = result_future3.get();

    feedback->robot_gripper_position = "Opening gripper.";
    goal_handle_pnp->publish_feedback( feedback );
    
    gripper_goal.gripper_position = 1;

    auto goal_handle_future4 = g_client->async_send_goal( gripper_goal, gripper_options );
    rclcpp_action::ClientGoalHandle<pnp_msgs::action::Gripper>::SharedPtr goal_handle4 = goal_handle_future4.get();
    if (!goal_handle4) {
      RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server");
      return;
    }
    auto result_future4 = g_client->async_get_result(goal_handle4);
    rclcpp_action::ClientGoalHandle<pnp_msgs::action::Gripper>::WrappedResult wrapped_result4 = result_future4.get();

    auto result = std::make_shared<pnp_msgs::action::PickAndPlace::Result>();
    result->result = 1;
    goal_handle_pnp->succeed(result);

  }

  void pnp_action::call_robot_action(){}
  void pnp_action::call_gripper_action(){}

  void pnp_action::robot_response_callback
  ( rclcpp_action::ClientGoalHandle<pnp_msgs::action::Robot>::SharedPtr ){}

  void pnp_action::gripper_response_callback
  ( rclcpp_action::ClientGoalHandle<pnp_msgs::action::Gripper>::SharedPtr ){}

  void pnp_action::robot_feedback_callback
  ( rclcpp_action::ClientGoalHandle<pnp_msgs::action::Robot>::SharedPtr ,
    const std::shared_ptr<const pnp_msgs::action::Robot::Feedback> feedback ){

    std::cout << "Robot progress: " << feedback->robot_progress << std::endl;
  
  }
  void pnp_action::gripper_feedback_callback
  ( rclcpp_action::ClientGoalHandle<pnp_msgs::action::Gripper>::SharedPtr ,
    const std::shared_ptr<const pnp_msgs::action::Gripper::Feedback> feedback )
  {

    std::cout << "Gripper progress: " << feedback->gripper_progress << std::endl;
  
  }

  void pnp_action::robot_result_callback
  ( const rclcpp_action::ClientGoalHandle<pnp_msgs::action::Robot>::WrappedResult& result ){

    if(result.result->result)
      std::cout << "Success." << std::endl;
    else
      std::cout << "Failed." << std::endl;
  }
  void pnp_action::gripper_result_callback
  ( const rclcpp_action::ClientGoalHandle<pnp_msgs::action::Gripper>::WrappedResult&
    result )
  {

    if(result.result->result)
      std::cout << "Success." << std::endl;
    else
      std::cout << "Failed." << std::endl;
  }
   
  pnp_client::pnp_client( const std::string& name ) :
    Node(name){
    group1 = this->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);
    pnp_client_ = rclcpp_action::create_client<pnp_msgs::action::PickAndPlace>( this, "pnp_server", group1);
    pnp_client_->wait_for_action_server();

  }

  void pnp_client::call_pnp_action( const float pick_position[2], const float place_position[2]){

    pnp_msgs::action::PickAndPlace::Goal goal;
    goal.pick_position[0] = pick_position[0];
    goal.pick_position[1] = pick_position[1];

    goal.place_position[0] = place_position[0];
    goal.place_position[1] = place_position[1];

    rclcpp_action::Client<pnp_msgs::action::PickAndPlace>::SendGoalOptions options;
    options.goal_response_callback =
      std::bind(&pnp_client::pnp_response_callback, this, _1);
    options.feedback_callback =
      std::bind(&pnp_client::pnp_feedback_callback, this, _1, _2);
    options.result_callback = 
      std::bind(&pnp_client::pnp_result_callback, this, _1);
    
    std::cout << "Sending pnp goal" << std::endl;
    auto goal_handle_future = pnp_client_->async_send_goal( goal, options );
  }
  
  void pnp_client::pnp_response_callback
  ( rclcpp_action::ClientGoalHandle<pnp_msgs::action::PickAndPlace>::SharedPtr )
  {
    std::cout << "PNP client response" << std::endl;
  }

  void pnp_client::pnp_feedback_callback
  ( rclcpp_action::ClientGoalHandle<pnp_msgs::action::PickAndPlace>::SharedPtr ,
    const std::shared_ptr<const pnp_msgs::action::PickAndPlace::Feedback> feedback )
  {
    std::cout << "PNP in progress: " << feedback->robot_gripper_position << std::endl;
  }

  void pnp_client::pnp_result_callback
  ( const rclcpp_action::ClientGoalHandle<pnp_msgs::action::PickAndPlace>::WrappedResult&
    result )
  {
    if(result.result->result)
      std::cout << "PNP success." << std::endl;
    else
      std::cout << "PNP failed." << std::endl;
  }


  
}
