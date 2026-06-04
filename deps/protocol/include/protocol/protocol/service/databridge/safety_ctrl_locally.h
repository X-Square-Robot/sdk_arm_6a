#pragma once

#include "protocol/service.h"
#include "protocol/srv/enable_safety_ctrl_locally.hpp"

namespace xr {
namespace databridge {
namespace service {

// 本地安全控制开关，打开时允许本地安全控制，关闭时则关闭本地安全控制。
SERVICE(SafetyCtrlLocally, "/databridge/slave/safety_ctrl_locally", protocol::srv::EnableSafetyCtrlLocally);

}  // namespace service
}  // namespace databridge
}  // namespace xr
