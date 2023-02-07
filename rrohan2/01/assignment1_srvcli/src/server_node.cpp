#include<assignment1_srvcli/server.hpp>

int main( int argc, char** argv ){

  rclcpp::init( argc, argv );
  rclcpp::spin( std::make_shared<rsp::service>("average_server"));
  rclcpp::shutdown();
  
  return 0;

}