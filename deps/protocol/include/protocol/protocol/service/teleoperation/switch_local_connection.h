#pragma once

#include "protocol/service.h"
#include "protocol/srv/switch_local_connection.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 控制链路的本地连接切换请求
SERVICE(SwitchLocalConnection, "/teleoperation/master/switch_local_connection", protocol::srv::SwitchLocalConnection);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr