#pragma once

#include "geometry_msgs/msg/twist.hpp"
#include "protocol/msg/chassis_position_status.hpp"
#include "protocol/topic.h"
#include "std_msgs/msg/float32_multi_array.hpp"

namespace xr {
namespace hal {
namespace topic {

// 底盘轮毂电机位移控制
TOPIC(ChassisPositionControl, "/chassis/cmd_vel", geometry_msgs::msg::Twist, QoS::SystemDefaultQoS());

// 底盘轮毂电机位移状态信息
TOPIC(ChassisPositionStatus,
      "/hal/chassis/position_status",
      protocol::msg::ChassisPositionStatus,
      QoS::SystemDefaultQoS());

// 底盘轮毂电机位移状态信息：消息类型标准数组
// # [0] 左轮毂电机总位移, 单位：m
// # [1] 右轮毂电机总位移, 单位：m
// # [2] 底盘线速度，单位：m/s
// # [3] 底盘角速度，单位：rad/s
// # [4] 左轮毂电机错误码
// # [5] 右轮毂电机错误码
//
// # TODO: 定义异常码枚举
TOPIC(ChassisPositionStatusArray,
      "/hal/chassis/position_status_array",
      std_msgs::msg::Float32MultiArray,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace hal
}  // namespace xr
