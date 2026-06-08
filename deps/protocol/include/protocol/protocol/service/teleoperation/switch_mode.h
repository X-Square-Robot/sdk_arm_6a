#pragma once

#include "protocol/service.h"
#include "protocol/srv/switch_mode.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 整机模式切换命令转发服务
SERVICE(SwitchMode, "/teleoperation/master/switch_mode", protocol::srv::SwitchMode);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr