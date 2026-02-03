#!/usr/bin/env python3
import time
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray

class GripperControl(Node):
    def __init__(self):
        super().__init__('gripper_control')
        self.gripper_cmd_pub = self.create_publisher(Float64MultiArray, '/gripper_controller/commands', 10)

    def publish_gripper_command(self, command):
        msg = Float64MultiArray()
        msg.data = [command]
        self.gripper_cmd_pub.publish(msg)

    def close_gripper(self):
        self.publish_gripper_command(0.0)

    def open_gripper(self):
        self.publish_gripper_command(1.0)


def main(args=None):
    rclpy.init(args=args)
    gripper_control = GripperControl()
    time.sleep(0.5)
    gripper_control.open_gripper()
    time.sleep(1)
    gripper_control.close_gripper()
    time.sleep(1)
    gripper_control.destroy_node()
    rclpy.shutdown()
    return True

if __name__ == '__main__':
    main()