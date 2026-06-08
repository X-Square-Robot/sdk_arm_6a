#pragma once

#include "protocol/service.h"
#include "protocol/srv/select_data_collection_task.hpp"

namespace xr {
namespace application {
namespace service {

// 选择要执行的数采任务
SERVICE(SelectDataCollectionTask, "/application/select_data_collection_task", protocol::srv::SelectDataCollectionTask);

}  // namespace service
}  // namespace application
}  // namespace xr
