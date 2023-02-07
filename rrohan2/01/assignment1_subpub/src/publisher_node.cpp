#include <assignment1_subpub/publisher.hpp>

int main( int argc, char** argv ){

  rclcpp::init( argc, argv );

  rsp::publisher publisher( "odd_pub" );
  
  rclcpp::Rate rate(1);
  
  int odd = 1;

  while(rclcpp::ok()){

    publisher.publish(odd);
    odd = odd+2;
    
    rate.sleep();
    
  }

  rclcpp::shutdown();
  
  return 0;

}
