#pragma once

#include <std_srvs/srv/trigger.hpp>

#include "protocol/service.h"

namespace xr {
namespace motion {
namespace service {

// 开启全身控制器回零
SERVICE(WholeBodyRecovery, "/whole_body_ik_start_recovery", std_srvs::srv::Trigger);

}  // namespace service
}  // namespace motion
}  // namespace xr
