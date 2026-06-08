#pragma once

#include "protocol/service.h"
#include "protocol/srv/query_data_collection_task_lists.hpp"

namespace xr {
namespace recorder {
namespace service {

// 查询当前所有的数采任务列表
SERVICE(QueryDataCollectionTaskLists,
        "recorder/query_data_collection_task_lists",
        protocol::srv::QueryDataCollectionTaskLists);

}  // namespace service
}  // namespace recorder
}  // namespace xr