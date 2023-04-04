#include <chrono>
#include <functional>
#include <memory>

#include "geometry_msgs/msg/transform_stamped.hpp"
#include "rclcpp/rclcpp.hpp"
#include "tf2_ros/transform_broadcaster.h"
#include <nav_msgs/msg/odometry.hpp>

namespace rsp{
	
	class odom_publisher: public rclcpp::Node{
	
	private:
		rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_subscriber;
  		std::shared_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;

	public:
		odom_publisher(const std::string& name);
		void callback(const nav_msgs::msg::Odometry& data);
  		rclcpp::Rate rate(1);

	};
}
