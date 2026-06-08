#pragma once

#include "protocol/service.h"
#include "protocol/srv/hardware_enabled.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 远程任务操作入口
SERVICE(HardwareEnabled, "/teleoperation/master/hardware_enabled", protocol::srv::HardwareEnabled);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
