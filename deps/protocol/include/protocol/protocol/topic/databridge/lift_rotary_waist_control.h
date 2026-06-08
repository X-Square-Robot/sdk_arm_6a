#pragma once

#include "protocol/msg/robot_arm.hpp"
#include "protocol/topic.h"

namespace xr {
namespace databridge {
namespace topic {

// 升降旋转腰状态数据反馈topic
TOPIC(LiftRotaryWaistFeedback,
      "/databridge/slave/lift_rotary_waist_feedback",
      protocol::msg::RobotArm,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace databridge
}  // namespace xr
