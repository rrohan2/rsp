#include<assignment1_srvcli/client.hpp>

int main( int argc, char** argv ){

  rclcpp::init( argc, argv );
  std::shared_ptr<rsp::client> client = std::make_shared<rsp::client>("average_client");
  client->call( 4, 5, 9 );
  rclcpp::spin( client );
  rclcpp::shutdown();
    
  return 0;

}
