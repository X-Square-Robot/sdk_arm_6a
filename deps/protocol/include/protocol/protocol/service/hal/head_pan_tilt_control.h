#pragma once

#include "protocol/service.h"
#include "protocol/srv/head_pan_tilt_control.hpp"

namespace xr {
namespace hal {
namespace service {

// 头部云台控制
SERVICE(HeadPanTiltControl, "/hal/head/pan_tilt_control", protocol::srv::HeadPanTiltControl);

}  // namespace service
}  // namespace hal
}  // namespace xr