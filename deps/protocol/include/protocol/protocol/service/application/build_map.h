#pragma once

#include "protocol/service.h"
#include "protocol/srv/request_start_build_map.hpp"
#include "protocol/srv/request_stop_build_map.hpp"

namespace xr {
namespace application {
namespace service {

// 开始建图
SERVICE(RequestStartBuildMap, "/application/request/start_build_map", protocol::srv::RequestStartBuildMap);
// 停止建图
SERVICE(RequestStopBuildMap, "/application/request/stop_build_map", protocol::srv::RequestStopBuildMap);

}  // namespace service
}  // namespace application
}  // namespace xr
