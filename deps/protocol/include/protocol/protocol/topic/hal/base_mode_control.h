#pragma once

#include "protocol/msg/robot_base_mode_control.hpp"
#include "protocol/topic.h"

namespace xr {
namespace hal {
namespace topic {

// 机器人基座模式控制
TOPIC(RobotBaseModeControl,
      "/hal/robot/base_mode_control",
      protocol::msg::RobotBaseModeControl,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace hal
}  // namespace xr
