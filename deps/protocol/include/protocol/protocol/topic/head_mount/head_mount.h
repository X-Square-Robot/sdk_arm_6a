#pragma once

#include "protocol/topic.h"
#include "protocol/msg/battery_chip.hpp"
#include "protocol/msg/imu_array.hpp"
#include "sensor_msgs/msg/battery_state.hpp"
#include "sensor_msgs/msg/imu.hpp"
#include "sensor_msgs/msg/joy.hpp"
#include "std_msgs/msg/u_int8_multi_array.hpp"

namespace xr {
namespace head_mount {
namespace topic {

// IMU 数据
TOPIC(HeadMountImu,    "/head_mount/imu",    sensor_msgs::msg::Imu,          QoS::SensorQoS());
// IMU 原始数组（FIFO batch）
TOPIC(HeadMountImuArray, "/head_mount/imu_array", protocol::msg::ImuArray,   QoS::SensorQoS());
// LED 控制（data[0]=state('off':0,'on':1,'fast_blink':2,'slow_blink':3), data[1]=r, data[2]=g, data[3]=b）
TOPIC(HeadMountLED,    "/head_mount/led",    std_msgs::msg::UInt8MultiArray, QoS::SystemDefaultQoS());
// 按键（buttons[0]=button_1, buttons[1]=button_2, 0=Released, 1=Pressed, 2=Error）
TOPIC(HeadMountButton, "/head_mount/button", sensor_msgs::msg::Joy,          QoS::SystemDefaultQoS());
// 电池状态（BQ27Z746 电量计，1 Hz）
TOPIC(HeadMountBattery, "/head_mount/battery", protocol::msg::BatteryChip, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace head_mount
}  // namespace xr
