## Clone the rsp Repository:
```
git clone https://github.com/rrohan2/rsp.git
```
## Copy the package from 07 folder to your workspace in src folder
```
cp -r rsp/rrohan2/07/rtt_ur_trajectory -d <ROS workspace path>/src
```
## Change directory to ROS workspace
```
cd <ROS workspace path>
```
## Source ROS environment
```
source /opt/ros/galactic/setup.bash
```
## Import the required git repositories using .repos file (located in rtt_ur_trajectory package)
```
vcs import src < rsp/rrohan2/07/rtt_ur_trajectory/rsp_hw.repos
```
## Initialize rosdep and update
```
rosdep init
rosdep update --include-eol-distros
```
## Build the Orocos toolchain package and install dependencies
```
colcon build --packages-select orocos_toolchain
source install/setup.bash
rosdep install --from-paths rsp/rrohan2/07 -y --ignore-src
```
## Source the environment and build the other packages
```
source install/setup.bash
colcon build
```
## Launching rviz and rqtconfig to simulate UR5
```
ros2 launch rtt_ur_trajectory rtt_ur_traj.launch.py
```
