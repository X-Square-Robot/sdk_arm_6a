#pragma once

#include "protocol/msg/login_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace agent {
namespace topic {

// 当前登陆状态同步
TOPIC(LoginStatus, "/agent/login_status", protocol::msg::LoginStatus, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace agent
}  // namespace xr
