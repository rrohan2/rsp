#include<rclcpp/rclcpp.hpp>
#include<assignment1_msgs/srv/average.hpp>

namespace rsp{

  class client : public rclcpp::Node{

  private:
    rclcpp::Client<assignment1_msgs::srv::Average>::SharedPtr ros_client;

  public:
    client( const std::string& name );
    void call( int a, int b , int c);
    void callback( const rclcpp::Client<assignment1_msgs::srv::Average>::SharedFuture future );
  
  };

}