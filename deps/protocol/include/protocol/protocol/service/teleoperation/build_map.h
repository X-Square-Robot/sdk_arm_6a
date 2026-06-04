#pragma once

#include "protocol/service.h"
#include "protocol/srv/request_start_build_map.hpp"
#include "protocol/srv/request_stop_build_map.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 请求机器人开始建图
SERVICE(RequestBuildMap, "/teleoperation/master/start_build_map", protocol::srv::RequestStartBuildMap);
// 请求机器人结束建图
SERVICE(RequestStopBuildMap, "/teleoperation/master/stop_build_map", protocol::srv::RequestStopBuildMap);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
