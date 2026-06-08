#pragma once

#include "protocol/topic.h"
#include "protocol/msg/battery_chip.hpp"
#include "protocol/msg/imu_array.hpp"
#include "protocol/msg/gripper_tactile.hpp"
#include "protocol/msg/uwb_state.hpp"
#include "sensor_msgs/msg/battery_state.hpp"
#include "sensor_msgs/msg/imu.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include "sensor_msgs/msg/joy.hpp"
#include "std_msgs/msg/u_int8_multi_array.hpp"

namespace xr {
namespace gripper {
namespace topic {

// 左夹爪开合状态
TOPIC(GripperStateLeft, "/gripper/claw_state/left", sensor_msgs::msg::JointState, QoS::SystemDefaultQoS());
// 右夹爪开合状态
TOPIC(GripperStateRight, "/gripper/claw_state/right", sensor_msgs::msg::JointState, QoS::SystemDefaultQoS());
// 左夹爪按键
TOPIC(GripperButtonLeft, "/gripper/button/left", sensor_msgs::msg::Joy, QoS::SystemDefaultQoS());
// 右夹爪按键
TOPIC(GripperButtonRight, "/gripper/button/right", sensor_msgs::msg::Joy, QoS::SystemDefaultQoS());
// 左夹爪LED控制 (data[0]=state('off': 0,'on': 1,'fast_blink': 2,'slow_blink': 3), data[1]=r, data[2]=g, data[3]=b)
TOPIC(GripperLEDLeft, "/gripper/led/left", std_msgs::msg::UInt8MultiArray, QoS::SystemDefaultQoS());
// 右夹爪LED控制 (data[0]=state('off': 0,'on': 1,'fast_blink': 2,'slow_blink': 3), data[1]=r, data[2]=g, data[3]=b)
TOPIC(GripperLEDRight, "/gripper/led/right", std_msgs::msg::UInt8MultiArray, QoS::SystemDefaultQoS());
// 左夹爪 IMU 数据
TOPIC(GripperIMULeft, "/gripper/imu/left", sensor_msgs::msg::Imu, QoS::SensorQoS());
// 右夹爪 IMU 数据
TOPIC(GripperIMURight, "/gripper/imu/right", sensor_msgs::msg::Imu, QoS::SensorQoS());
// 左夹爪 IMU 原始数组（FIFO batch）
TOPIC(GripperIMUArrayLeft, "/gripper/imu_array/left", protocol::msg::ImuArray, QoS::SensorQoS());
// 右夹爪 IMU 原始数组（FIFO batch）
TOPIC(GripperIMUArrayRight, "/gripper/imu_array/right", protocol::msg::ImuArray, QoS::SensorQoS());
// 左夹爪 UWB offset（1 Hz）
TOPIC(GripperUwbLeft,  "/gripper/uwb/left",  protocol::msg::UwbState, QoS::SensorQoS());
// 右夹爪 UWB offset（1 Hz）
TOPIC(GripperUwbRight, "/gripper/uwb/right", protocol::msg::UwbState, QoS::SensorQoS());
// 左夹爪补光灯控制 (data[0]=state(0:off, 1:on with brightness), data[1]=brightness(0-100))
TOPIC(GripperFillLightLeft, "/gripper/fill_light/left", std_msgs::msg::UInt8MultiArray, QoS::SystemDefaultQoS());
// 右夹爪补光灯控制 (data[0]=state(0:off, 1:on with brightness), data[1]=brightness(0-100))
TOPIC(GripperFillLightRight, "/gripper/fill_light/right", std_msgs::msg::UInt8MultiArray, QoS::SystemDefaultQoS());
// 左夹爪触觉传感器数据（97路分布力 + 合力 + 温度，200Hz）
TOPIC(GripperTactileLeft,  "/gripper/tactile/left",  protocol::msg::GripperTactile, QoS::SensorQoS());
// 右夹爪触觉传感器数据（97路分布力 + 合力 + 温度，200Hz）
TOPIC(GripperTactileRight, "/gripper/tactile/right", protocol::msg::GripperTactile, QoS::SensorQoS());
// 左夹爪电池状态（BQ27Z746 电量计，1 Hz）
TOPIC(GripperBatteryLeft,  "/gripper/battery/left",  protocol::msg::BatteryChip, QoS::SystemDefaultQoS());
// 右夹爪电池状态（1 Hz）
TOPIC(GripperBatteryRight, "/gripper/battery/right", protocol::msg::BatteryChip, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace gripper
}  // namespace xr
