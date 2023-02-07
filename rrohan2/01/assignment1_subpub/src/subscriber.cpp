#include <assignment1_subpub/subscriber.hpp>

using namespace std::chrono_literals;

namespace rsp{
  subscriber::subscriber( const std::string& name ):
    Node(name){
    ros_subscriber = create_subscription<assignment1_msgs::msg::OddNo>("odd_nos", 10,
    std::bind(&subscriber::callback, this, std::placeholders::_1 ) );
  }

  void subscriber::callback( const assignment1_msgs::msg::OddNo& oddno ){
    std::cout << oddno.oddnos << " "<< std::endl;
  }
  
}
