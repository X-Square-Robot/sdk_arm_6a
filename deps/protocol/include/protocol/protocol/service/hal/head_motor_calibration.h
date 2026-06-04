#pragma once

#include "protocol/service.h"
#include "std_srvs/srv/trigger.hpp"

namespace xr {
namespace hal {
namespace service {

// 机器人头部电机校准
SERVICE(HeadMotorCalibration, "/hal/head/motor_calibration", std_srvs::srv::Trigger);

}  // namespace service
}  // namespace hal
}  // namespace xr