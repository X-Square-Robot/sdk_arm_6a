#pragma once

#include "protocol/service.h"
#include "protocol/srv/task_operation.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 远程任务操作入口
SERVICE(TaskOperation, "/teleoperation/master/task_operation", protocol::srv::TaskOperation);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
