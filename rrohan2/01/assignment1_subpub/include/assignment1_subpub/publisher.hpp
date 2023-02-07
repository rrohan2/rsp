#include <rclcpp/rclcpp.hpp>
#include <assignment1_msgs/msg/odd_no.hpp>

namespace rsp{

  class publisher : public rclcpp::Node {
  private:
    rclcpp::Publisher<assignment1_msgs::msg::OddNo>::SharedPtr ros_publisher;
  
  public:
    publisher( const std::string& name );
    void publish(int data);
  };

}