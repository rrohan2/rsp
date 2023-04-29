cmake_minimum_required(VERSION 3.8)
project(rtt_ur_trajectory)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(kdl_parser REQUIRED)
find_package(urdf REQUIRED)
find_package(orocos_kdl REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(tf2_kdl REQUIRED)
find_package(robot_state_publisher REQUIRED)
find_package(rtt_ros2)
find_package(rtt_ros2_node)
find_package(rtt_ros2_params)
find_package(rtt_ros2_topics)
find_package(rtt_ros2_sensor_msgs)
find_package(rtt_ros2_services REQUIRED)
find_package(reflexxes_type2 REQUIRED)
find_package(ur_description REQUIRED)

# find_package(rqt_reconfigure REQUIRED)

find_package(OROCOS-RTT REQUIRED)


include(${OROCOS-RTT_USE_FILE_PATH}/UseOROCOS-RTT.cmake)

include_directories(include)


include_directories(${EIGEN3_INCLUDE_DIR})


orocos_component( rtt_ur_trajectory src/rtt_ur_traj.cpp )


ament_target_dependencies( rtt_ur_trajectory  orocos_kdl rtt_ros2 rtt_ros2_node rtt_ros2_topics rtt_ros2_services rtt_ros2_params rtt_ros2_sensor_msgs kdl_parser urdf tf2_kdl reflexxes_type2)


target_link_libraries( rtt_ur_trajectory ReflexxesTypeII )
#  target_link_libraries( rtt_ur_trajectory reflexxes_type2 )

orocos_generate_package()


install( DIRECTORY launch rviz scripts DESTINATION share/${PROJECT_NAME} )


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
