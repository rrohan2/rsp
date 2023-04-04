#include<rclcpp/rclcpp.hpp>
#include<assignment1_msgs/msg/count.hpp>

namespace rsp{
	
	class subscriber:public rclcpp::Node{

	private:
		rclcpp::Subscription<assignment1_msgs::msg::Count>::SharedPtr ros_subscriber;

	public:
		subscriber(const std::string& name);
		void callback(const assignment1_msgs::msg::Count& data);

	};
}
