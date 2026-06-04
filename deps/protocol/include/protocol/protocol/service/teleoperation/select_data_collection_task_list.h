#pragma once

#include "protocol/service.h"
#include "protocol/srv/select_data_collection_task_list.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 查询当前所有的数采任务列表
SERVICE(SelectDataCollectionTaskList,
        "/teleoperation/master/select_data_collection_task_list",
        protocol::srv::SelectDataCollectionTaskList);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr