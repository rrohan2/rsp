#include <functional>
#include <memory>
#include <sstream>
#include <string>

#include "geometry_msgs/msg/transform_stamped.hpp"
#include "rclcpp/rclcpp.hpp"
#include "tf2/LinearMath/Quaternion.h"
#include "tf2_ros/transform_broadcaster.h"
#include "turtlesim/msg/pose.hpp"

class TurtleTfBroadcaster : public rclcpp::Node
{
public:
  TurtleTfBroadcaster() : Node("turtle_tf_broadcaster")
  {
    // Get the turtle number from ROS parameter
    turtle = this -> declare_parameter<std::string>("turtlename", "turtle");
    
    // Subscribe to the turtlesim/Pose topic

    std::ostringstream stream;
    stream << "/" << turtle.c_str() << "/pose";
    std::string topic_name = stream.str();


    pose_sub_ = create_subscription<turtlesim::msg::Pose>(
        topic_name, 10, std::bind(&TurtleTfBroadcaster::pose_callback, this, std::placeholders::_1));

    // Setup the transform broadcaster
    tf_broadcaster_ = std::make_shared<tf2_ros::TransformBroadcaster>(this);
  }

private:
  void pose_callback(const turtlesim::msg::Pose::SharedPtr pose_msg)
  {
    // Create the transform message
    geometry_msgs::msg::TransformStamped transform_msg;
    transform_msg.header.stamp = now();
    transform_msg.header.frame_id = "world";
    transform_msg.child_frame_id = turtle.c_str();

    // Set the translation
    transform_msg.transform.translation.x = pose_msg->x;
    transform_msg.transform.translation.y = pose_msg->y;
    transform_msg.transform.translation.z = 0.0;

    // Set the rotation
    tf2::Quaternion quat;
    quat.setRPY(0, 0, pose_msg->theta);
    transform_msg.transform.rotation.x = quat.x();
    transform_msg.transform.rotation.y = quat.y();
    transform_msg.transform.rotation.z = quat.z();
    transform_msg.transform.rotation.w = quat.w();

    // Publish the transform message
    tf_broadcaster_->sendTransform(transform_msg);
  }

  std::string turtle;
  rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr pose_sub_;
  std::shared_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<TurtleTfBroadcaster>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
