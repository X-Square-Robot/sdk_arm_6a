#pragma once

#include "protocol/service.h"
#include "protocol/srv/stop_data_collection_task.hpp"

namespace xr {
namespace application {
namespace service {

// 停止数采任务
SERVICE(StopDataCollectionTask,
        "/application/stop_data_collection_task",
        protocol::srv::StopDataCollectionTask);

}  // namespace service
}  // namespace application
}  // namespace xr
