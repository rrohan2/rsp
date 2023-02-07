#include<assignment1_srvcli/server.hpp>

using namespace std::chrono_literals;

namespace rsp{  
  service::service( const std::string& name ):
    Node(name){
    ros_service = create_service<assignment1_msgs::srv::Average>("average_srv",
    std::bind(&service::callback, this, std::placeholders::_1, std::placeholders::_2) );
  }

  void service::callback( const std::shared_ptr<assignment1_msgs::srv::Average_Request> request,
			  std::shared_ptr<assignment1_msgs::srv::Average_Response> response ){
    response->average = (request->a + request->b + request->c)/3;
    std::cout << "Request received." << std::endl;
    std::this_thread::sleep_for( 50ms );
    std::cout << "Request serviced." << std::endl;
  }
}
