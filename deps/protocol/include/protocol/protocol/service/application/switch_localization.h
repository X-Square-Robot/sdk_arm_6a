#pragma once

#include "protocol/service.h"
#include "protocol/srv/switch_localization.hpp"

namespace xr {
namespace application {
namespace service {

// 定位模式切换服务
SERVICE(SwitchLocalization, "/application/switch_localization", protocol::srv::SwitchLocalization);

}  // namespace service
}  // namespace application
}  // namespace xr
