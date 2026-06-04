#pragma once

#include "protocol/service.h"
#include "protocol/srv/stiffness_setting.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 刚度设置服务
SERVICE(StiffnessSetting, "/teleoperation/master/stiffness_setting", protocol::srv::StiffnessSetting);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
