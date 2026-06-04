#pragma once

#include "protocol/service.h"
#include "protocol/srv/switch_next_task.hpp"

namespace xr {
namespace application {
namespace service {

// 切换下一个task
SERVICE(SwitchNextTask, "/application/switch_next_task", protocol::srv::SwitchNextTask);

}  // namespace service
}  // namespace application
}  // namespace xr