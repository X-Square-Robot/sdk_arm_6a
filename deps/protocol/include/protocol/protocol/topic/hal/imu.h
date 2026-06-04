#pragma once

#include "protocol/topic.h"
#include "sensor_msgs/msg/imu.hpp"

namespace xr {
namespace hal {
namespace topic {

// 头部IMU
TOPIC(HeadImu, "/hal/head/imu", sensor_msgs::msg::Imu, QoS::SystemDefaultQoS());
// 机身IMU
TOPIC(BodyImu, "/hal/body/imu", sensor_msgs::msg::Imu, QoS::SystemDefaultQoS());
// 底盘IMU
TOPIC(ChassisImu, "/hal/chassis/imu", sensor_msgs::msg::Imu, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace hal
}  // namespace xr