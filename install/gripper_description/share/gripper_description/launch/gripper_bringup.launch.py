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
            default_value="gripper_description",
            description="Description package of the gripper.",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "name",
            default_value='"hand"',
            description="Prefix of the joint names.",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "parent",
            default_value='"world"',
            description="Parent name to which the zeroth link is attached",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "namespace",
            default_value="hand",
            description="Name space witin which robot_state_ publisher and joint_state_publisher of the gripper will work",
        )
    )

    # Initialize Arguments
    description_package = LaunchConfiguration("description_package")
    name = LaunchConfiguration("name")
    parent = LaunchConfiguration("parent")
    r_namespace = LaunchConfiguration("namespace")

    # Get URDF via xacro
    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name="xacro")]),
            " ",
            PathJoinSubstitution(
                [FindPackageShare(description_package), "urdf", "gripper.urdf.xacro"]
            ),
            " ",
            "name:=",
            name," ","parent:=",parent,
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

    return LaunchDescription(
        declared_arguments
        + [
            joint_state_publisher_node,
            robot_state_publisher_node,
        ]
    )
