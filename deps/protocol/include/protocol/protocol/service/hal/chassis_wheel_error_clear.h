#pragma once

#include "protocol/service.h"
#include "protocol/srv/chassis_wheel_error_clear.hpp"

namespace xr {
namespace hal {
namespace service {

// 底盘轮毂电机异常清除
SERVICE(ChassisWheelErrorClear, "/hal/chassis/wheel_error_clear", protocol::srv::ChassisWheelErrorClear);

}  // namespace service
}  // namespace hal
}  // namespace xr