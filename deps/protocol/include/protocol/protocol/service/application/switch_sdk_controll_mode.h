#pragma once

#include "protocol/service.h"
#include "protocol/srv/switch_sdk_controller_mode.hpp"

namespace xr {
namespace sdk {
namespace service {

// SDK模式切换服务
SERVICE(SwitchSdkControllerMode, "/application/switch_sdk_controller_mode", protocol::srv::SwitchSdkControllerMode);

}  // namespace service
}  // namespace sdk
}  // namespace xr
