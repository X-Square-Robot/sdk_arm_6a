#pragma once

#include "protocol/service.h"
#include "protocol/srv/lift_error_clear.hpp"

namespace xr {
namespace hal {
namespace service {

// turtle2 升降台错误清除服务
SERVICE(LiftErrorClear, "/hal/lift/reset", protocol::srv::LiftErrorClear);

}  // namespace service
}  // namespace hal
}  // namespace xr