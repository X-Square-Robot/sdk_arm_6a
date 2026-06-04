#pragma once

#include "protocol/msg/chassis_motor_info.hpp"
#include "protocol/topic.h"

namespace xr {
namespace hal {
namespace topic {

// 舵轮电机反馈状态
TOPIC(ChassisMotorInfo,
      "/hal/chassis/motor_info",
      protocol::msg::ChassisMotorInfo,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace hal
}  // namespace xr
