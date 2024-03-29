cmake_minimum_required(VERSION 3.8)
project(assignment1_srvcli)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(assignment1_msgs REQUIRED)

include_directories(include)

add_library(srvcli SHARED src/server.cpp src/client.cpp)
ament_target_dependencies(srvcli rclcpp assignment1_msgs)

add_executable( srv src/server_node.cpp )
target_link_libraries( srv srvcli )
ament_target_dependencies( srv rclcpp )

add_executable( cli src/client_node.cpp )
target_link_libraries( cli srvcli )
ament_target_dependencies( cli rclcpp )

install(DIRECTORY include/ DESTINATION include)
install(TARGETS srvcli LIBRARY DESTINATION lib)
#will create a directory inside the lib 
install(TARGETS srv cli DESTINATION lib/${PROJECT_NAME})

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
