import os
import launch
from launch.substitutions import Command, FindExecutable, LaunchConfiguration, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare
from launch.actions import ExecuteProcess, DeclareLaunchArgument, RegisterEventHandler, TimerAction
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():
    os.environ["IGN_GAZEBO_RESOURCE_PATH"] = os.path.join(
        get_package_share_directory('edumip_description'), 'urdf')
    os.environ["IGN_GAZEBO_SYSTEM_PLUGIN_PATH"] = get_package_share_directory('edumip_balance_ros_gazebo_plugin') + ":" + get_package_share_directory('edumip_tot_plugin')
    
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

    # gazebo = ExecuteProcess(
    #     cmd=[[
    #         'ign gazebo ',
    #         "-v 4 ",
    #         PathJoinSubstitution([
    #             FindPackageShare('edumip_gazebo'),
    #             'worlds',
    #             'tot.world '
    #         ]),
    #     ]],
    #     shell=True
    # )

    gazebo=IncludeLaunchDescription( PythonLaunchDescriptionSource(
                [os.path.join(get_package_share_directory('ros_ign_gazebo'),'launch', 'ign_gazebo.launch.py')]),
                launch_arguments=[('ign_args', ["-v 4 ",PathJoinSubstitution([FindPackageShare('edumip_gazebo'),'worlds','tot.world ']),])]
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
            'world/tot/model/EDUMIP/joint_state@sensor_msgs/msg/JointState@ignition.msgs.Model',
        ],
        remappings=[
            ('/world/tot/model/EDUMIP/joint_state', 'joint_states'),
        ],
        output='screen'
    )

    cmd_vel_bridge = Node(
        package='ros_ign_bridge',
        executable='parameter_bridge',
        arguments=[
            '/clock@rosgraph_msgs/msg/Clock@ignition.msgs.Clock',
            '/model/EDUMIP/cmd_vel@geometry_msgs/msg/Twist@ignition.msgs.Twist',
        ],
        output='screen'
    )

    odom_bridge = Node(
        package='ros_ign_bridge',
        executable='parameter_bridge',
        arguments=[
            '/clock@rosgraph_msgs/msg/Clock@ignition.msgs.Clock',
            '/model/EDUMIP/odometry@nav_msgs/msg/Odometry@ignition.msgs.Odometry',
        ],
        output='screen'
    )

    edumip_sensor1_bridge = Node(
        package='ros_ign_bridge',
        executable='parameter_bridge',
        arguments=[
            '/clock@rosgraph_msgs/msg/Clock@ignition.msgs.Clock',
            '/tot/robot_pose1@geometry_msgs/msg/PoseStamped@ignition.msgs.Pose',
        ],
        output='screen'
    )

    edumip_sensor2_bridge = Node(
        package='ros_ign_bridge',
        executable='parameter_bridge',
        arguments=[
            '/clock@rosgraph_msgs/msg/Clock@ignition.msgs.Clock',
            '/tot/robot_pose2@geometry_msgs/msg/PoseStamped@ignition.msgs.Pose',
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
        cmd_vel_bridge,
        odom_bridge,
        edumip_sensor1_bridge,
        edumip_sensor2_bridge,
        joint_bridge,
        static_tf,
    ])