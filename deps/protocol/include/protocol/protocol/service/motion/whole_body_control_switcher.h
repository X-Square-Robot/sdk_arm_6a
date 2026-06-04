#pragma once

#include <std_srvs/srv/trigger.hpp>

#include "protocol/service.h"

namespace xr {
namespace motion {
namespace service {

// 打开全身控制器
SERVICE(WholeBodyControlStart, "/whole_body_ik_start", std_srvs::srv::Trigger);
// 停止全身控制器
SERVICE(WholeBodyControlStop, "/whole_body_ik_stop", std_srvs::srv::Trigger);

}  // namespace service
}  // namespace motion
}  // namespace xr
