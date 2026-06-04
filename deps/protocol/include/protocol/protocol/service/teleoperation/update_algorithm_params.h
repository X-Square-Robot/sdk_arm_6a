#pragma once

#include "protocol/service.h"
#include "protocol/srv/set_json_data.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 更新导航算法参数
SERVICE(UpdateAlgorithmParams, "/teleoperation/master/update_algorithm_params", protocol::srv::SetJsonData);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
