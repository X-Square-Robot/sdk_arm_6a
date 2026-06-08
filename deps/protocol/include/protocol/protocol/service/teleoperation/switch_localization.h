#pragma once

#include "protocol/service.h"
#include "protocol/srv/switch_localization.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 定位模式切换命令转发服务
SERVICE(SwitchLocalization, "/teleoperation/master/switch_localization", protocol::srv::SwitchLocalization);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
