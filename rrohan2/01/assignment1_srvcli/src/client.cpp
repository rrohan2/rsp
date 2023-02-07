#include<assignment1_srvcli/client.hpp>

using namespace std::chrono_literals;

namespace rsp{

  client::client( const std::string& name ):
  Node(name){
    ros_client = create_client<assignment1_msgs::srv::Average>( "average_srv" );
    std::cout << "Waiting for service" << std::endl;
    ros_client->wait_for_service();
    std::cout << "Service ready" << std::endl;
  }

  void client::call( int a, int b, int c){
    auto request = std::make_shared<assignment1_msgs::srv::Average_Request>();
    request->a = a;
    request->b = b;
    request->c = c;
    ros_client->async_send_request( request, std::bind(&client::callback, this, std::placeholders::_1) );
    std::cout << "Request for " << a << "+" << b << "+" << c << "/" << "3" << std::endl;
  }

  void client::callback(const rclcpp::Client<assignment1_msgs::srv::Average>::SharedFuture future){
    auto response = future.get();
    std::cout << "Average of 3 numbers " << response->average << std::endl;
  }
}
