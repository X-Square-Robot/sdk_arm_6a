#pragma once

#include "protocol/topic.h"
#include "sensor_msgs/msg/joy.hpp"

namespace xr {
namespace driver {
namespace topic {
// 手柄状态转发
TOPIC(JoystickStates, "/joystick_states", sensor_msgs::msg::Joy,
      QoS::SystemDefaultQoS());
}  // namespace topic
}  // namespace driver
}  // namespace xr
