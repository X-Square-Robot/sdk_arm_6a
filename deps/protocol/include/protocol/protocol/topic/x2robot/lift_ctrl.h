#pragma once

#include <std_msgs/msg/float32.hpp>
#include <std_msgs/msg/float64_multi_array.hpp>

#include "protocol/topic.h"

namespace xr {
namespace x2robot {
namespace topic {

// 升降台控制话题(待废弃)
TOPIC(LiftControl, "/lift/control", std_msgs::msg::Float32, QoS::SystemDefaultQoS());

// 升降台控制话题
TOPIC(LiftPositionControlCommand,
      "/lift_position_controller/commands",
      std_msgs::msg::Float64MultiArray,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace x2robot
}  // namespace xr
