#include <assignment1_subpub/publisher.hpp>

namespace rsp{

  publisher::publisher( const std::string& name ) :
    Node( name ) {
    ros_publisher = create_publisher<assignment1_msgs::msg::OddNo>("odd_nos", 10);
  }

  void publisher::publish( int data ){
    assignment1_msgs::msg::OddNo oddno;
    oddno.oddnos = data;
    ros_publisher->publish(oddno);
  }

}