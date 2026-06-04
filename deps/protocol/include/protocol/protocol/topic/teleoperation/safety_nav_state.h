#pragma once

#include "protocol/msg/safety_nav_state.hpp"
#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 机器人任务状态发布
TOPIC(TeleSafetyNavState, "/teleoperation/master/safety_nav_state", protocol::msg::SafetyNavState, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
