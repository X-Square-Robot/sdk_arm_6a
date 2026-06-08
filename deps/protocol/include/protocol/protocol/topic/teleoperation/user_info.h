#pragma once

#include "protocol/msg/user_info.hpp"
#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 转发主设备的用户信息topic（从 /ui/user_info 透传到 slave 端）
TOPIC(UserInfo, "/teleoperation/slave/user_info", protocol::msg::UserInfo, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
