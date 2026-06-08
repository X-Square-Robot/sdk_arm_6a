#pragma once

#include "protocol/service.h"
#include "protocol/srv/add_normal_task.hpp"

namespace xr {
namespace application {
namespace service {

// 新增普通任务
SERVICE(AddNormalTask,
        "/application/add_normal_task",
        protocol::srv::AddNormalTask);

}  // namespace service
}  // namespace application
}  // namespace xr