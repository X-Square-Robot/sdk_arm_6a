#pragma once

#include "protocol/service.h"
#include "protocol/srv/task_operation.hpp"
namespace xr {
namespace application {
namespace service {

// 任务操作入口
SERVICE(TaskOperation, "/application/request/task_operation", protocol::srv::TaskOperation);

}  // namespace service
}  // namespace application
}  // namespace xr
