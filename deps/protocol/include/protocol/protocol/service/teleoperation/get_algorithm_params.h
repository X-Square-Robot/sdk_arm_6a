#pragma once

#include "protocol/service.h"
#include "protocol/srv/json_data_trigger.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 获取导航算法参数
SERVICE(GetAlgorithmParams, "/teleoperation/master/get_algorithm_params", protocol::srv::JsonDataTrigger);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
