#pragma once

#include "protocol/service.h"
#include "protocol/srv/add_normal_task.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 新增普通任务
SERVICE(AddNormalTask, "/teleoperation/master/add_normal_task", protocol::srv::AddNormalTask);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
