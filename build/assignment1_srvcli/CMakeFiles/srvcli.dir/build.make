# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ritwik/rsp/rrohan2/01/assignment1_srvcli

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ritwik/rsp/build/assignment1_srvcli

# Include any dependencies generated for this target.
include CMakeFiles/srvcli.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/srvcli.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/srvcli.dir/flags.make

CMakeFiles/srvcli.dir/src/server.cpp.o: CMakeFiles/srvcli.dir/flags.make
CMakeFiles/srvcli.dir/src/server.cpp.o: /home/ritwik/rsp/rrohan2/01/assignment1_srvcli/src/server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ritwik/rsp/build/assignment1_srvcli/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/srvcli.dir/src/server.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/srvcli.dir/src/server.cpp.o -c /home/ritwik/rsp/rrohan2/01/assignment1_srvcli/src/server.cpp

CMakeFiles/srvcli.dir/src/server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/srvcli.dir/src/server.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ritwik/rsp/rrohan2/01/assignment1_srvcli/src/server.cpp > CMakeFiles/srvcli.dir/src/server.cpp.i

CMakeFiles/srvcli.dir/src/server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/srvcli.dir/src/server.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ritwik/rsp/rrohan2/01/assignment1_srvcli/src/server.cpp -o CMakeFiles/srvcli.dir/src/server.cpp.s

CMakeFiles/srvcli.dir/src/client.cpp.o: CMakeFiles/srvcli.dir/flags.make
CMakeFiles/srvcli.dir/src/client.cpp.o: /home/ritwik/rsp/rrohan2/01/assignment1_srvcli/src/client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ritwik/rsp/build/assignment1_srvcli/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/srvcli.dir/src/client.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/srvcli.dir/src/client.cpp.o -c /home/ritwik/rsp/rrohan2/01/assignment1_srvcli/src/client.cpp

CMakeFiles/srvcli.dir/src/client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/srvcli.dir/src/client.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ritwik/rsp/rrohan2/01/assignment1_srvcli/src/client.cpp > CMakeFiles/srvcli.dir/src/client.cpp.i

CMakeFiles/srvcli.dir/src/client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/srvcli.dir/src/client.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ritwik/rsp/rrohan2/01/assignment1_srvcli/src/client.cpp -o CMakeFiles/srvcli.dir/src/client.cpp.s

# Object files for target srvcli
srvcli_OBJECTS = \
"CMakeFiles/srvcli.dir/src/server.cpp.o" \
"CMakeFiles/srvcli.dir/src/client.cpp.o"

# External object files for target srvcli
srvcli_EXTERNAL_OBJECTS =

libsrvcli.so: CMakeFiles/srvcli.dir/src/server.cpp.o
libsrvcli.so: CMakeFiles/srvcli.dir/src/client.cpp.o
libsrvcli.so: CMakeFiles/srvcli.dir/build.make
libsrvcli.so: /opt/ros/galactic/lib/librclcpp.so
libsrvcli.so: /home/ritwik/rsp/install/assignment1_msgs/lib/libassignment1_msgs__rosidl_typesupport_introspection_c.so
libsrvcli.so: /home/ritwik/rsp/install/assignment1_msgs/lib/libassignment1_msgs__rosidl_typesupport_c.so
libsrvcli.so: /home/ritwik/rsp/install/assignment1_msgs/lib/libassignment1_msgs__rosidl_typesupport_introspection_cpp.so
libsrvcli.so: /home/ritwik/rsp/install/assignment1_msgs/lib/libassignment1_msgs__rosidl_typesupport_cpp.so
libsrvcli.so: /opt/ros/galactic/lib/libament_index_cpp.so
libsrvcli.so: /opt/ros/galactic/lib/liblibstatistics_collector.so
libsrvcli.so: /opt/ros/galactic/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_c.so
libsrvcli.so: /opt/ros/galactic/lib/liblibstatistics_collector_test_msgs__rosidl_generator_c.so
libsrvcli.so: /opt/ros/galactic/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_c.so
libsrvcli.so: /opt/ros/galactic/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_cpp.so
libsrvcli.so: /opt/ros/galactic/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_cpp.so
libsrvcli.so: /opt/ros/galactic/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
libsrvcli.so: /opt/ros/galactic/lib/libstd_msgs__rosidl_generator_c.so
libsrvcli.so: /opt/ros/galactic/lib/libstd_msgs__rosidl_typesupport_c.so
libsrvcli.so: /opt/ros/galactic/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
libsrvcli.so: /opt/ros/galactic/lib/libstd_msgs__rosidl_typesupport_cpp.so
libsrvcli.so: /opt/ros/galactic/lib/librcl.so
libsrvcli.so: /opt/ros/galactic/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
libsrvcli.so: /opt/ros/galactic/lib/librcl_interfaces__rosidl_generator_c.so
libsrvcli.so: /opt/ros/galactic/lib/librcl_interfaces__rosidl_typesupport_c.so
libsrvcli.so: /opt/ros/galactic/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
libsrvcli.so: /opt/ros/galactic/lib/librcl_interfaces__rosidl_typesupport_cpp.so
libsrvcli.so: /opt/ros/galactic/lib/librmw_implementation.so
libsrvcli.so: /opt/ros/galactic/lib/librcl_logging_spdlog.so
libsrvcli.so: /opt/ros/galactic/lib/librcl_logging_interface.so
libsrvcli.so: /opt/ros/galactic/lib/librcl_yaml_param_parser.so
libsrvcli.so: /opt/ros/galactic/lib/librmw.so
libsrvcli.so: /opt/ros/galactic/lib/libyaml.so
libsrvcli.so: /opt/ros/galactic/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
libsrvcli.so: /opt/ros/galactic/lib/librosgraph_msgs__rosidl_generator_c.so
libsrvcli.so: /opt/ros/galactic/lib/librosgraph_msgs__rosidl_typesupport_c.so
libsrvcli.so: /opt/ros/galactic/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
libsrvcli.so: /opt/ros/galactic/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
libsrvcli.so: /opt/ros/galactic/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
libsrvcli.so: /opt/ros/galactic/lib/libstatistics_msgs__rosidl_generator_c.so
libsrvcli.so: /opt/ros/galactic/lib/libstatistics_msgs__rosidl_typesupport_c.so
libsrvcli.so: /opt/ros/galactic/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
libsrvcli.so: /opt/ros/galactic/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
libsrvcli.so: /opt/ros/galactic/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
libsrvcli.so: /opt/ros/galactic/lib/libbuiltin_interfaces__rosidl_generator_c.so
libsrvcli.so: /opt/ros/galactic/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
libsrvcli.so: /opt/ros/galactic/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
libsrvcli.so: /opt/ros/galactic/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
libsrvcli.so: /opt/ros/galactic/lib/libtracetools.so
libsrvcli.so: /home/ritwik/rsp/install/assignment1_msgs/lib/libassignment1_msgs__rosidl_generator_c.so
libsrvcli.so: /opt/ros/galactic/lib/librosidl_typesupport_introspection_cpp.so
libsrvcli.so: /opt/ros/galactic/lib/librosidl_typesupport_introspection_c.so
libsrvcli.so: /opt/ros/galactic/lib/librosidl_typesupport_cpp.so
libsrvcli.so: /opt/ros/galactic/lib/librosidl_typesupport_c.so
libsrvcli.so: /opt/ros/galactic/lib/librcpputils.so
libsrvcli.so: /opt/ros/galactic/lib/librosidl_runtime_c.so
libsrvcli.so: /opt/ros/galactic/lib/librcutils.so
libsrvcli.so: CMakeFiles/srvcli.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ritwik/rsp/build/assignment1_srvcli/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library libsrvcli.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/srvcli.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/srvcli.dir/build: libsrvcli.so

.PHONY : CMakeFiles/srvcli.dir/build

CMakeFiles/srvcli.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/srvcli.dir/cmake_clean.cmake
.PHONY : CMakeFiles/srvcli.dir/clean

CMakeFiles/srvcli.dir/depend:
	cd /home/ritwik/rsp/build/assignment1_srvcli && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ritwik/rsp/rrohan2/01/assignment1_srvcli /home/ritwik/rsp/rrohan2/01/assignment1_srvcli /home/ritwik/rsp/build/assignment1_srvcli /home/ritwik/rsp/build/assignment1_srvcli /home/ritwik/rsp/build/assignment1_srvcli/CMakeFiles/srvcli.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/srvcli.dir/depend

