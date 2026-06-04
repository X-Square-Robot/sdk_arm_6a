#pragma once

#include "protocol/service.h"
#include "protocol/srv/conveyer_belt_start_stop.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 遥操作双 PC 模式：teleoperation(master) 提供，供 UI 调用
SERVICE(ConveyerBeltStartStop, "/teleoperation/master/conveyer_belt_start_stop", protocol::srv::ConveyerBeltStartStop);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
