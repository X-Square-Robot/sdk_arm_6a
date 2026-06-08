#pragma once

#include "protocol/service.h"
#include "protocol/srv/get_current_task_info.hpp"

namespace xr {
namespace application {
namespace service {

// 开始建图
SERVICE(GetCurrentTaskInfo, "/application/request/get_current_task_info", protocol::srv::GetCurrentTaskInfo);

}  // namespace service
}  // namespace application
}  // namespace xr
