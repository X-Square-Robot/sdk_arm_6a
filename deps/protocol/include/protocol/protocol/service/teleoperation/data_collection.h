#pragma once

#include "protocol/service.h"
#include "protocol/srv/request_data_collection.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 操作端发起数采任务请求
SERVICE(RequestDataCollection, "/teleoperation/master/request_data_collection", protocol::srv::RequestDataCollection);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
