#pragma once

#include "protocol/service.h"
#include "protocol/srv/battery_protection_config.hpp"

namespace xr {
namespace hal {
namespace service {

// 低电量保护参数配置服务
SERVICE(BatteryProtectionConfig, "/hal/battery/protection_config", protocol::srv::BatteryProtectionConfig);

}  // namespace service
}  // namespace hal
}  // namespace xr
