from launch.substitutions import Command, FindExecutable, LaunchConfiguration, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare
from launch.actions import ExecuteProcess, DeclareLaunchArgument, RegisterEventHandler, TimerAction
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
import os
import launch

from launch.actions import TimerAction


def generate_launch_description():

    declared_arguments = []
    # UR specific arguments
    declared_arguments.append(
        DeclareLaunchArgument(
            "ur_type",
            default_value="ur5",
            description="Type/series of used UR robot.",
            choices=["ur3", "ur3e", "ur5", "ur5e", "ur10", "ur10e", "ur16e"],
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "safety_limits",
            default_value="true",
        )
    )


    declared_arguments.append(
        DeclareLaunchArgument(
            "safety_pos_margin",
            default_value="0.2",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "safety_k_position",
            default_value="20",
        )
    )
    # General arguments
    declared_arguments.append(
        DeclareLaunchArgument(
            "description_package",
            default_value="ur_description",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "description_file",
            default_value="ur.urdf.xacro",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "prefix",
            default_value='""',
           
        )
    )

    ur_type = LaunchConfiguration("ur_type")
    safety_limits = LaunchConfiguration("safety_limits")

    safety_pos_margin = LaunchConfiguration("safety_pos_margin")
    safety_k_position = LaunchConfiguration("safety_k_position")
    description_package = LaunchConfiguration("description_package")
    
    
    description_file = LaunchConfiguration("description_file")
    prefix = LaunchConfiguration("prefix")

    r = os.path.join(get_package_share_directory('rtt_ur_trajectory'), 'scripts','rtt_ur_traj.ops')

    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name="xacro")]),
            " ",PathJoinSubstitution([FindPackageShare(description_package), "urdf", description_file])," ",
            "safety_limits:=",safety_limits," ","safety_pos_margin:=",safety_pos_margin," ","safety_k_position:=",
            safety_k_position," ","name:=","ur"," ","ur_type:=",ur_type," ","prefix:=",prefix,
        ]
    )
    robot_description = {"robot_description": robot_description_content}

    robot_state_publisher_node = Node(package="robot_state_publisher",executable="robot_state_publisher",output="both",parameters=[robot_description],
    )


    deployer_node = ExecuteProcess(
            cmd=[["gnome-terminal ","-- ","sh ","-c ","'deployer -s " + r + "'"],],shell=True
        )

    rviz_config_file = PathJoinSubstitution(
        [FindPackageShare("rtt_ur_trajectory"), "rviz", "config.rviz"]
    )

    rviz_node = Node(
        package="rviz2",executable="rviz2",name="rviz2",output="log",arguments=["-d", rviz_config_file],
    )

    # reconfig_node=Node(
    #     package="rqt_recongfigure",executable="rqt_recongfigure"
    # )

    reconfig_node=ExecuteProcess(
            cmd=[["ros2 ","run  ","rqt_reconfigure ","rqt_reconfigure "],],shell=True
        )

    return launch.LaunchDescription(
        declared_arguments +
        [
         robot_state_publisher_node,deployer_node,TimerAction(period=3.0,actions=[rviz_node]),TimerAction(period=2.0,actions=[reconfig_node])
        ]
    )