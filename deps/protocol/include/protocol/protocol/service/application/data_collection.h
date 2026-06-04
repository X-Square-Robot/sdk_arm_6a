#pragma once

#include "protocol/service.h"
#include "protocol/srv/request_data_collection.hpp"

namespace xr {
namespace application {
namespace service {

// 数采任务请求
SERVICE(RequestDataCollection, "/application/request/data_collection", protocol::srv::RequestDataCollection);

}  // namespace service
}  // namespace application
}  // namespace xr