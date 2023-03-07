from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, RegisterEventHandler, TimerAction, IncludeLaunchDescription
from launch.event_handlers import OnProcessStart
from launch.substitutions import Command, FindExecutable, LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():
    # Declare arguments
    declared_arguments = []
    declared_arguments.append(
        DeclareLaunchArgument(
            "robot_name",
            default_value='"arm"',
            description="Robot joint",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "gripper_name",
            default_value='"hand"',
            description="Gripper Joint",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "parent",
            default_value='"world"',
            description="Parent fixed frame",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "robot_namespace",
            default_value="arm",
            description="Namespace of robot_state_ publisher and joint_state_publisher of the robot",
        )
    )

    declared_arguments.append(
        DeclareLaunchArgument(
            "gripper_namespace",
            default_value="hand",
            description="Namespace of robot_state_ publisher and joint_state_publisher of the gripper",
        )
    )
    # Initialize Arguments
    robot_name = LaunchConfiguration("robot_name")
    gripper_name = LaunchConfiguration("gripper_name")
    parent = LaunchConfiguration("parent")
    robot_namespace = LaunchConfiguration("robot_namespace")
    gripper_namespace = LaunchConfiguration("gripper_namespace")

    
    rviz_config_file = PathJoinSubstitution(
        [FindPackageShare("robot_gripper"), "rviz", "config.rviz"]
    )

    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="log",
        arguments=["-d", rviz_config_file],
        namespace=robot_namespace
    )

    robot_launch_include=IncludeLaunchDescription(PythonLaunchDescriptionSource([
                PathJoinSubstitution([
                    FindPackageShare('robot_description'),
                    'launch',
                    'robot_bringup.launch.py'
                ])
            ]), launch_arguments={'description_package':'robot_description','name': robot_name,'parent': parent,'namespace': robot_namespace}.items(),)
    


    gripper_launch_include=IncludeLaunchDescription(PythonLaunchDescriptionSource([
                PathJoinSubstitution([
                    FindPackageShare('gripper_description'),
                    'launch',
                    'gripper_bringup.launch.py'
                ])
            ]), launch_arguments={'description_package':'gripper_description','name': gripper_name,'parent': [robot_name,"_flange"],'namespace': gripper_namespace}.items(),)
    return LaunchDescription(
        declared_arguments
        + [
            robot_launch_include,
            gripper_launch_include,
            rviz_node,
        ]
    )
