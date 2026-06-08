#pragma once

#include "protocol/service.h"
#include "protocol/srv/select_data_collection_task.hpp"

namespace xr {
namespace recorder {
namespace service {

// 选择要执行的数采主任务
SERVICE(SelectDataCollectionTask, "recorder/select_data_collection_task", protocol::srv::SelectDataCollectionTask);

}  // namespace service
}  // namespace recorder
}  // namespace xr