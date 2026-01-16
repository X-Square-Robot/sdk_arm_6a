from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    param = {
        "interfaces": [
            "can0",
            "can1",
            "can2",
            "can3",
        ]
    }

    return LaunchDescription(
        [
            Node(
                package="x2robot_socketcan_bridge",
                executable="socketcan_bridge",
                output="both",
                # prefix="gdb -ex run bt --args",
                parameters=[param],
            )
        ]
    )
