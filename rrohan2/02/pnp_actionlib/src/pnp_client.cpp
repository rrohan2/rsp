#include <pnp_actionlib/pnp_action.hpp>

int main( int argc, char** argv ){

  rclcpp::init(argc, argv);

  std::shared_ptr<rsp::pnp_client> client = std::make_shared<rsp::pnp_client>("pnp_client");

  float pick_pos[2] = {0,0};
  float place_pos[2] = {2,8};
  client->call_pnp_action(pick_pos,place_pos);
  rclcpp::spin(client);
  rclcpp::shutdown();

  return 0;
}
