#pragma once

#include "protocol/service.h"
#include "protocol/srv/enable_teleopt_device.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 请求使能本地设备
SERVICE(EnableTeleoptDevice, "/teleoperation/master/enable_teleopt_device", protocol::srv::EnableTeleoptDevice);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
