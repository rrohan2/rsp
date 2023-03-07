#include <rclcpp/rclcpp.hpp>
#include <assignment1_msgs/msg/odd_no.hpp>

namespace rsp{

  class subscriber : public rclcpp::Node {
  private:
    rclcpp::Subscription<assignment1_msgs::msg::OddNo>::SharedPtr ros_subscriber;
  
  public:
    subscriber( const std::string& name );
    void callback(const assignment1_msgs::msg::OddNo& oddno);
  };

}
