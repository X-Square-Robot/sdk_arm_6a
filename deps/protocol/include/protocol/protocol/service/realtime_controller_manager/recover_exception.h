#pragma once

#include "protocol/service.h"
#include "std_srvs/srv/trigger.hpp"

namespace xr {
namespace realtime_controller_manager {
namespace service {

// 异常恢复服务
SERVICE(RecoverException, "/realtime_controller_manager/recover_exception", std_srvs::srv::Trigger);

}  // namespace service
}  // namespace realtime_controller_manager
}  // namespace xr
