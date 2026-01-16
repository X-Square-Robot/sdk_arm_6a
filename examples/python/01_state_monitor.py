#!/usr/bin/env python3
import rclpy
import time
from rclpy.node import Node
from sensor_msgs.msg import JointState
from geometry_msgs.msg import PoseStamped
import numpy as np


class ArmStateMonitor(Node):
    def __init__(self):
        super().__init__('arm_state_monitor')
        
        self.joint_sub = self.create_subscription(
            JointState,
            '/joint_states',
            self.joint_state_callback,
            10
        )
        
        self.pose_sub = self.create_subscription(
            PoseStamped,
            '/end_pose',
            self.end_pose_callback,
            10
        )
        
        self.get_logger().info('arm state monitor node started')

    
    def joint_state_callback(self, msg):
        """handle joint state message"""
        positions_deg = np.rad2deg(msg.position)
        
        self.get_logger().info('=' * 50)
        self.get_logger().info('joint state:')
        for i, (name, pos, vel, eff) in enumerate(zip(
            msg.name, msg.position, msg.velocity, msg.effort
        )):
            self.get_logger().info(
                f'joint {i+1} ({name}): '
                f'position={pos:.4f}rad ({positions_deg[i]:.2f}°), '
                f'velocity={vel:.4f}rad/s, '
                f'effort={eff:.4f}Nm'
            )
    
    def end_pose_callback(self, msg):
        pos = msg.pose.position
        ori = msg.pose.orientation
        
        self.get_logger().info('end pose:')
        self.get_logger().info(
            f'  position: x={pos.x:.4f}, y={pos.y:.4f}, z={pos.z:.4f}'
        )
        self.get_logger().info(
            f'  orientation (quaternion): x={ori.x:.4f}, y={ori.y:.4f}, '
            f'z={ori.z:.4f}, w={ori.w:.4f}'
        )


def main(args=None):
    rclpy.init(args=args)
    node = ArmStateMonitor()
    
    try:
        while rclpy.ok():
            rclpy.spin_once(node, timeout_sec=1.0)
            time.sleep(1.0)
    except KeyboardInterrupt:
        print("KeyboardInterrupt")
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()