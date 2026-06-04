#pragma once

#include "protocol/service.h"
#include "protocol/srv/request_homing.hpp"

namespace xr {
namespace application {
namespace service {

// 请求回零
SERVICE(RequestHoming, "/application/request/homing", protocol::srv::RequestHoming);

}  // namespace service
}  // namespace application
}  // namespace xr
