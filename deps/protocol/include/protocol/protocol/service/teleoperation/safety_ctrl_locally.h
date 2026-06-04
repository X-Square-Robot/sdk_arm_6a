#pragma once

#include "protocol/service.h"
#include "protocol/srv/enable_safety_ctrl_locally.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 请求启停本地安全控制开关
SERVICE(SafetyCtrlLocally, "/teleoperation/master/safety_ctrl_locally", protocol::srv::EnableSafetyCtrlLocally);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
