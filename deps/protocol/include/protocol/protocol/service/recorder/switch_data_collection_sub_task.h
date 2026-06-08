#pragma once

#include "protocol/service.h"
#include "protocol/srv/switch_data_collection_sub_task.hpp"

namespace xr {
namespace recorder {
namespace service {

// 切换数采子任务
SERVICE(SwitchDataCollectionSubTask,
        "recorder/switch_data_collection_sub_task",
        protocol::srv::SwitchDataCollectionSubTask);

}  // namespace service
}  // namespace recorder
}  // namespace xr