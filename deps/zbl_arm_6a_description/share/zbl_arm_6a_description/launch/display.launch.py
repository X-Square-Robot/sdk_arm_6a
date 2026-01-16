from launch import LaunchDescription
import launch_ros.descriptions
from launch.actions import DeclareLaunchArgument, RegisterEventHandler
from launch.conditions import IfCondition
from launch.event_handlers import OnProcessExit
from launch.substitutions import Command, FindExecutable, LaunchConfiguration, PathJoinSubstitution

from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    # Declare arguments
    declared_arguments = []
    declared_arguments.append(
        DeclareLaunchArgument(
            "gui",
            default_value="true",
            description="Start RViz2 automatically with this launch file.",
        )
    )

    declared_arguments.append(
        DeclareLaunchArgument(
            "robot_name",
            default_value="zbl_arm_6a_with_gripper.xacro",
            description="robot_name of this view with this launch file.",
        )
    )

    declared_arguments.append(
            DeclareLaunchArgument(
                "use_geometry_collision",
                default_value="false",
                description="whether use geometry collision.",
            )
        )


    # Initialize Arguments
    gui = LaunchConfiguration("gui")
    robot_name = LaunchConfiguration("robot_name")
    use_geometry_collision = LaunchConfiguration("use_geometry_collision")
    arm_version = LaunchConfiguration("arm_version")

    # Get URDF via xacro
    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name="xacro")]),
            " ",
            PathJoinSubstitution(
                [
                    FindPackageShare("zbl_arm_6a_description"),
                    "urdf",
                    robot_name,
                ]
            ),
            " use_geometry_collision:=",use_geometry_collision,
            " arm_version:=",arm_version,
        ]
    )
    robot_description = {"robot_description": launch_ros.descriptions.ParameterValue(
        robot_description_content)}
    rviz_config_path = PathJoinSubstitution(
        [FindPackageShare("zbl_arm_6a_description"), "rviz", "zbl_arm_6a.rviz"])

    joint_state_publisher_gui_node = Node(
        condition=IfCondition(gui),
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        name='joint_state_publisher_gui')

    robot_state_pub_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        output="both",
        parameters=[robot_description],
    )
    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="log",
        arguments=['-d', rviz_config_path],
        condition=IfCondition(gui),
    )

    nodes = [
        joint_state_publisher_gui_node,
        robot_state_pub_node,
        rviz_node,
    ]

    return LaunchDescription(declared_arguments + nodes)
