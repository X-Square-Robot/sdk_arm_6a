#pragma once

#include "protocol/msg/mode_controller_enabled_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 主臂控制器状态广播到从臂
TOPIC(ModeControllerEnabledStatus,
      "/teleoperation/slave/mode_controller_enabled_status",
      protocol::msg::ModeControllerEnabledStatus,
      QoS::SystemDefaultQoS());

// 从臂控制器状态广播到主臂
TOPIC(ModeControllerEnabledStatusFeedback,
    "/teleoperation/master/mode_controller_enabled_status_feedback",
    protocol::msg::ModeControllerEnabledStatus,
    QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
