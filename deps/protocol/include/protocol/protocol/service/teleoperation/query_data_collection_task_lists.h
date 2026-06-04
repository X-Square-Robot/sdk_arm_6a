#pragma once

#include "protocol/service.h"
#include "protocol/srv/query_data_collection_task_lists.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 查询当前所有的数采任务列表
SERVICE(QueryDataCollectionTaskLists,
        "/teleoperation/master/query_data_collection_task_lists",
        protocol::srv::QueryDataCollectionTaskLists);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr