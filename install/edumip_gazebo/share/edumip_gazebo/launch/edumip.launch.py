import os
import launch
from launch.substitutions import Command, FindExecutable, LaunchConfiguration, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare
from launch.actions import ExecuteProcess, DeclareLaunchArgument, RegisterEventHandler, TimerAction
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    os.environ["IGN_GAZEBO_RESOURCE_PATH"] = os.path.join(
        get_package_share_directory('edumip_description'), 'urdf')

    description_package = LaunchConfiguration("description_package")

    declared_arguments = []
    declared_arguments.append(
        DeclareLaunchArgument(
            "description_package",
            default_value="edumip_description",
            description="Description package of the robot.",
        )
    )

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

    robot_state_publisher_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        output="both",
        parameters=[robot_description],
    )

    joint_state_publisher_node = Node(
        package="joint_state_publisher_gui",
        executable="joint_state_publisher_gui"
    )

    rviz_config_file = PathJoinSubstitution(
        [FindPackageShare("edumip_gazebo"), "rviz", "config.rviz"]
    )


    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="log",
        arguments=["-d", rviz_config_file],
    )

    gazebo = ExecuteProcess(
        cmd=[[
            'ign gazebo ',
            PathJoinSubstitution([
                FindPackageShare('edumip_gazebo'),
                'worlds',
                'my_world.world '
            ]),
        ]],
        shell=True
    )

    create_node = Node(
        package='ros_ign_gazebo',
        executable='create',
        arguments=[
            '-topic', 'robot_description',
            '-z','0.035' 
        ],
        output='screen',
    )

    sensor_bridge = Node(
        package='ros_ign_bridge',
        executable='parameter_bridge',
        arguments=['/sonar/points@sensor_msgs/msg/PointCloud2@ignition.msgs.PointCloudPacked'],
    )

    joint_bridge = Node(
        package='ros_ign_bridge',
        executable='parameter_bridge',
        arguments=[
            '/clock@rosgraph_msgs/msg/Clock@ignition.msgs.Clock',
            'world/world_demo/model/EDUMIP/joint_state@sensor_msgs/msg/JointState@ignition.msgs.Model',
        ],
        remappings=[
            ('/world/world_demo/model/EDUMIP/joint_state', 'joint_states'),
        ],
        output='screen'
    )

    static_tf = Node(
        package='tf2_ros',
        name="static_tf_sonar",
        executable='static_transform_publisher',
        arguments=[ "0.0", "0.0", "0.0", "0.0", "0.0", "0.0",
                    "sonar_link",
                    ["EDUMIP/base_link/sonar"]
        ],
        output='screen'
    )


    return launch.LaunchDescription(
        declared_arguments + [
        robot_state_publisher_node,
        rviz_node,
        gazebo,
        create_node,
        sensor_bridge,
        joint_bridge,
        static_tf,
    ])