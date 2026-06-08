#pragma once

#include "sensor_msgs/msg/range.hpp"
#include "protocol/topic.h"

namespace xr {
namespace hal {
namespace topic {

// 底盘超声
TOPIC(ChassisUltrasonic1, "/hal/chassis/ultrasonic1", sensor_msgs::msg::Range, QoS::SystemDefaultQoS());
TOPIC(ChassisUltrasonic2, "/hal/chassis/ultrasonic2", sensor_msgs::msg::Range, QoS::SystemDefaultQoS());
TOPIC(ChassisUltrasonic3, "/hal/chassis/ultrasonic3", sensor_msgs::msg::Range, QoS::SystemDefaultQoS());
TOPIC(ChassisUltrasonic4, "/hal/chassis/ultrasonic4", sensor_msgs::msg::Range, QoS::SystemDefaultQoS());

// 机身超声
TOPIC(BodyLeftElbowUltrasonic, "/hal/body/left_elbow_ultrasonic", sensor_msgs::msg::Range, QoS::SystemDefaultQoS());
TOPIC(BodyRightElbowUltrasonic, "/hal/body/right_elbow_ultrasonic", sensor_msgs::msg::Range, QoS::SystemDefaultQoS());

// 底盘超声（ex002 扩展，0xA3:0x01 payload offset 40/50/60/70）
TOPIC(ChassisLeftFrontUltrasonic,  "/hal/chassis/left_front_ultrasonic",  sensor_msgs::msg::Range, QoS::SystemDefaultQoS());
TOPIC(ChassisLeftRearUltrasonic,   "/hal/chassis/left_rear_ultrasonic",   sensor_msgs::msg::Range, QoS::SystemDefaultQoS());
TOPIC(ChassisRightFrontUltrasonic, "/hal/chassis/right_front_ultrasonic", sensor_msgs::msg::Range, QoS::SystemDefaultQoS());
TOPIC(ChassisRightRearUltrasonic,  "/hal/chassis/right_rear_ultrasonic",  sensor_msgs::msg::Range, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace hal
}  // namespace xr