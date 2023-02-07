#include <assignment1_subpub/subscriber.hpp>


int main( int argc, char** argv ){

  rclcpp::init(argc,argv);
  rclcpp::spin(std::make_shared<rsp::subscriber>("odd_sub"));
  rclcpp::shutdown();
  
  return 0;
}