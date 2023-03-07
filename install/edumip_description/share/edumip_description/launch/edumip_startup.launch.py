from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, RegisterEventHandler, TimerAction
from launch.event_handlers import OnProcessStart
from launch.substitutions import Command, FindExecutable, LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    # Declare arguments
    declared_arguments = []
    declared_arguments.append(
        DeclareLaunchArgument(
            "description_package",
            default_value="edumip_description",
            description="Description package of the robot.",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "robot_namespace",
            default_value="arm",
            description="Name space witin which robot_state_ publisher and joint_state_publisher of the robot will work",
        )
    )

    # Initialize Arguments
    description_package = LaunchConfiguration("description_package")

    r_namespace = LaunchConfiguration("robot_namespace")

    # Get URDF via xacro
    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name="xacro")]),
            " ",
            PathJoinSubstitution(
                [FindPackageShare(description_package), "urdf", "edumip.urdf.xacro"]
            ),
            " ",
        ]
    )

    robot_description = {"robot_description": robot_description_content}

    joint_state_publisher_node = Node(
        package="joint_state_publisher_gui",
        executable="joint_state_publisher_gui",
        namespace=r_namespace
    )
    robot_state_publisher_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        output="both",
        parameters=[robot_description],
        namespace=r_namespace
    )

    rviz_config_file = PathJoinSubstitution(
        [FindPackageShare("edumip_description"), "rviz", "config.rviz"]
    )

    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="log",
        arguments=["-d", rviz_config_file],
        namespace=r_namespace
    )

    return LaunchDescription(
        declared_arguments
        + [
            joint_state_publisher_node,
            robot_state_publisher_node,
            rviz_node,
        ]
    )
