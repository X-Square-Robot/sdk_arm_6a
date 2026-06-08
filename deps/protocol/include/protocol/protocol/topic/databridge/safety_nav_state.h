#pragma once

#include "protocol/msg/safety_nav_state.hpp"
#include "protocol/topic.h"

namespace xr {
namespace databridge {
namespace topic {

// 机器人安全导航状态
TOPIC(SafetyNavState, "/databridge/slave/safety_nav_state", protocol::msg::SafetyNavState, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace databridge
}  // namespace xr
