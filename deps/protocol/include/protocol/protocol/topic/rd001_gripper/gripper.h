#pragma once

#include "protocol/topic.h"
#include "sensor_msgs/msg/imu.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include "sensor_msgs/msg/joy.hpp"
#include "std_msgs/msg/u_int8_multi_array.hpp"

namespace xr {
namespace rd001_gripper {
namespace topic {

// 左夹爪开合状态
TOPIC(RD001GripperStateLeft, "/rd001_gripper/claw_state/left", sensor_msgs::msg::JointState, QoS::SystemDefaultQoS());
// 右夹爪开合状态
TOPIC(RD001GripperStateRight, "/rd001_gripper/claw_state/right", sensor_msgs::msg::JointState, QoS::SystemDefaultQoS());
// 左夹爪按键
TOPIC(RD001GripperButtonLeft, "/rd001_gripper/button/left", sensor_msgs::msg::Joy, QoS::SystemDefaultQoS());
// 右夹爪按键
TOPIC(RD001GripperButtonRight, "/rd001_gripper/button/right", sensor_msgs::msg::Joy, QoS::SystemDefaultQoS());
// 左夹爪LED控制 (data[0]=state('off': 0,'on': 1,'fast_blink': 2,'slow_blink': 3), data[1]=r, data[2]=g, data[3]=b)
TOPIC(RD001GripperLEDLeft, "/rd001_gripper/led/left", std_msgs::msg::UInt8MultiArray, QoS::SystemDefaultQoS());
// 右夹爪LED控制 (data[0]=state('off': 0,'on': 1,'fast_blink': 2,'slow_blink': 3), data[1]=r, data[2]=g, data[3]=b)
TOPIC(RD001GripperLEDRight, "/rd001_gripper/led/right", std_msgs::msg::UInt8MultiArray, QoS::SystemDefaultQoS());
// 左夹爪 IMU 数据
TOPIC(RD001GripperIMULeft, "/rd001_gripper/imu/left", sensor_msgs::msg::Imu, QoS::SensorQoS());
// 右夹爪 IMU 数据
TOPIC(RD001GripperIMURight, "/rd001_gripper/imu/right", sensor_msgs::msg::Imu, QoS::SensorQoS());

}  // namespace topic
}  // namespace rd001_gripper
}  // namespace xr
