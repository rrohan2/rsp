cmake_minimum_required(VERSION 3.8)
project(edumip_tot_plugin)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(robot_state_publisher REQUIRED)
find_package(ignition-cmake2 REQUIRED)
find_package(Boost REQUIRED COMPONENTS thread)

include_directories( include )

ign_find_package( ignition-plugin1 REQUIRED COMPONENTS register )
ign_find_package( ignition-gazebo6 REQUIRED )

set( IGN_PLUGIN_VER ${ignition-plugin1_VERSION_MAJOR} )
set( IGN_GAZEBO_VER ${ignition-gazebo6_VERSION_MAJOR} )

add_library( tot_plugin SHARED src/tot.cpp )
set_property(TARGET tot_plugin PROPERTY CXX_STANDARD 17)
target_link_libraries( tot_plugin
  PRIVATE ignition-plugin${IGN_PLUGIN_VER}::ignition-plugin${IGN_PLUGIN_VER}
  PRIVATE ignition-gazebo${IGN_GAZEBO_VER}::ignition-gazebo${IGN_GAZEBO_VER} ${Boost_LIBRARIES} )

install( TARGETS tot_plugin LIBRARY DESTINATION lib )

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
