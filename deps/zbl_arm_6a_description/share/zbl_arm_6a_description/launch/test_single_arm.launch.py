from sys import prefix
import os
from pathlib import Path

from launch import LaunchDescription
import launch_ros.descriptions
from launch.actions import DeclareLaunchArgument, RegisterEventHandler, ExecuteProcess
from launch.conditions import IfCondition, UnlessCondition
from launch.event_handlers import OnProcessExit
from launch.substitutions import (
    Command,
    FindExecutable,
    LaunchConfiguration,
    PathJoinSubstitution,
)

from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    # Declare arguments
    declared_arguments = []
    declared_arguments.append(
        DeclareLaunchArgument(
            "sim",
            default_value="False",
            description="Simulation mode.",
        )
    )

    declared_arguments.append(
        DeclareLaunchArgument(
            "visual",
            default_value="False",
            description="Visualization mode.",
        )
    )

    # Initialize Arguments
    sim = LaunchConfiguration("sim")
    visual = LaunchConfiguration("visual")

    can_param = {
        "interfaces": [
            "can0",
        ]
    }

    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name="xacro")]),
            " ",
            PathJoinSubstitution(
                [
                    FindPackageShare("zbl_arm_6a_description"),
                    "urdf",
                    "zbl_arm_6a_with_gripper.xacro",
                ]
            ),
            " ",
            "mock_robot:=",
            sim,
        ]
    )
    robot_description = {
        "robot_description": launch_ros.descriptions.ParameterValue(
            robot_description_content
        ),
    }
    rviz_config_path = PathJoinSubstitution(
        [FindPackageShare("zbl_arm_6a_description"), "rviz", "zbl_arm_6a.rviz"]
    )

    robot_controllers = PathJoinSubstitution(
        [
            FindPackageShare("zbl_arm_6a_description"),
            "config",
            "test_single_arm.yaml",
        ]
    )
    # Launch as much as possible in components
    control_container = launch_ros.actions.ComposableNodeContainer(
        name="controller_manager",
        namespace="/",
        package="x2robot_hardware_interface",
        executable="x2robot_control_node",
        parameters=[robot_controllers],
        output="both",
        remappings=[
            ("~/robot_description", "/robot_description"),
        ],
        composable_node_descriptions=[
            # Example of launching Servo as a node component
            # Launching as a node component makes ROS 2 intraprocess communication more efficient.
            launch_ros.descriptions.ComposableNode(
                package="x2robot_socketcan_bridge",
                plugin="x2robot_socketcan_bridge::SocketcanBridgeNode",
                name="socketcan_bridge",
                parameters=[can_param],
                condition=UnlessCondition(sim),
                extra_arguments=[{"use_intra_process_comms": True}],
            ),
            launch_ros.descriptions.ComposableNode(
                package="robot_state_publisher",
                plugin="robot_state_publisher::RobotStatePublisher",
                name="robot_state_publisher",
                parameters=[robot_description],
                extra_arguments=[{"use_intra_process_comms": True}],
            ),
        ],
        arguments=["--ros-args", "--log-level", "info"],
    )

    joint_state_broadcaster_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=[
            "joint_state_broadcaster",
            "endpose_broadcaster",
            "gripper_controller",
            "--controller-manager",
            "/controller_manager",
        ],
    )

    camera_node = Node(
            package='usb_cam', executable='usb_cam_node_exe', output='screen',
            name="eye_in_hand",
            namespace="eye_in_hand",
            parameters=[Path(os.path.dirname(os.path.realpath(__file__)), '..', 'config', 'camera.yaml')],
            remappings=[
                ('image_raw', 'eye_in_hand/image_raw'),
                ('image_raw/compressed', 'eye_in_hand/image_raw/image_compressed'),
                ('image_raw/compressedDepth', 'eye_in_hand/compressedDepth'),
                ('image_raw/theora', 'eye_in_hand/image_raw/theora'),
                ('camera_info', 'eye_in_hand/camera_info'),
            ]
        )


    robot_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=[
            "zero_force_dragging_controller",
            "joint_position_controller",
            "cart_pose_controller",
            "--inactive",
            "--controller-manager",
            "/controller_manager",
        ],
        condition=UnlessCondition(sim),
    )

    # only load when sim is true
    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="log",
        arguments=["-d", rviz_config_path],
        condition=IfCondition(visual),
    )

    sim_arm_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["sim_arm_controller", "--controller-manager", "/controller_manager"],
        condition=IfCondition(sim),
    )

    rqt_joint_trajectory_controller_node = Node(
        package="rqt_joint_trajectory_controller",
        executable="rqt_joint_trajectory_controller",
        output="both",
        condition=IfCondition(visual),
    )

    nodes = [
        rviz_node,
        control_container,
        robot_controller_spawner,
        sim_arm_controller_spawner,
        rqt_joint_trajectory_controller_node,
        joint_state_broadcaster_spawner,
        camera_node
    ]

    return LaunchDescription(declared_arguments + nodes)
