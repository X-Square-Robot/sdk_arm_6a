#pragma once

#include "protocol/service.h"
#include "protocol/srv/switch_next_task.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 远程发起切换下一个task
SERVICE(SwitchNextTask, "/teleoperation/master/switch_next_task", protocol::srv::SwitchNextTask);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
