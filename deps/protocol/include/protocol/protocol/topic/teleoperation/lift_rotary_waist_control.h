#pragma once

#include "protocol/msg/robot_arm.hpp"
#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 转发被控端升降旋转腰状态数据反馈topic
TOPIC(LiftRotaryWaistFeedback,
      "/teleoperation/master/lift_rotary_waist_feedback",
      protocol::msg::RobotArm,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
