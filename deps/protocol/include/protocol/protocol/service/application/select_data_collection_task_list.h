#pragma once

#include "protocol/service.h"
#include "protocol/srv/select_data_collection_task_list.hpp"

namespace xr {
namespace application {
namespace service {

// 选择要执行的数采任务列表
SERVICE(SelectDataCollectionTaskList,
        "/application/select_data_collection_task_list",
        protocol::srv::SelectDataCollectionTaskList);

}  // namespace service
}  // namespace application
}  // namespace xr