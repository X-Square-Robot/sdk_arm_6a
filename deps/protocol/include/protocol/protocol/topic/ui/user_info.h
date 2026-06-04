#pragma once

#include "protocol/msg/user_info.hpp"
#include "protocol/topic.h"

namespace xr {
namespace ui {
namespace topic {

//  同步用户信息，包括用户ID、用户名、头像URL等基本信息
TOPIC(UserInfo, "/ui/user_info", protocol::msg::UserInfo, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace ui
}  // namespace xr
