#pragma once

#include "protocol/service.h"
#include "protocol/srv/switch_teleopt_device.hpp"

namespace xr {
namespace databridge {
namespace service {

SERVICE(SwitchTeleoptDevice, "/databridge/switch_teleopt_device", protocol::srv::SwitchTeleoptDevice);

}  // namespace service
}  // namespace databridge
}  // namespace xr
