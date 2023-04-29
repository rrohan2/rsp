## Clone my rsp Repository to your desired folder(ritwik_repo). Keep "ritwik_repo" in Home  :
```
mkdir ritwik_repo
cd ritwik_repo
git clone https://github.com/rrohan2/rsp.git
cd
```
## Copy the package from 07 folder to your workspace in src folder
```
cp -r ritwik_repo/rsp/rrohan2/07 -d <your_workspace>/src
```
## Change directory to ROS workspace
```
cd <your_workspace>
```
## Source ROS environment
```
source /opt/ros/galactic/setup.bash
```
## Import the required git repositories using .repos file (located in rtt_ur_trajectory package)
```
vcs import src < ~/ritwik_repo/rsp/rrohan2/07/rtt_ur_trajectory/rsp_hw.repos
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
## Source the environment and build the other packages and source again
```
source install/setup.bash
colcon build
source install/setup.bash
```
## Write the following command to launch ur5 in rviz with rqtconfig
```
ros2 launch rtt_ur_trajectory rtt_ur_traj.launch.py
```
