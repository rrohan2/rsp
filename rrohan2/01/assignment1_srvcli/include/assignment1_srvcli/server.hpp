#include<rclcpp/rclcpp.hpp>
#include<assignment1_msgs/srv/average.hpp>

namespace rsp{

  class service : public rclcpp::Node{

  private:
    rclcpp::Service<assignment1_msgs::srv::Average>::SharedPtr ros_service;
  
  public:
    service( const std::string& name );
    void callback( const std::shared_ptr<assignment1_msgs::srv::Average_Request> request, 
      std::shared_ptr<assignment1_msgs::srv::Average_Response> response );
  
  };

}