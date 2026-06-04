#pragma once

#include "protocol/service.h"
#include "protocol/srv/enable_teleopt_device.hpp"

namespace xr {
namespace databridge {
namespace service {

// 请求使能本地设备
SERVICE(EnableTeleoptDevice, "/databridge/enable_teleopt_device", protocol::srv::EnableTeleoptDevice);

}  // namespace service
}  // namespace databridge
}  // namespace xr
