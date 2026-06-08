#pragma once

#include "protocol/service.h"
#include "protocol/srv/request_homing.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 请求回零
SERVICE(RequestHoming, "/teleoperation/master/homing", protocol::srv::RequestHoming);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
