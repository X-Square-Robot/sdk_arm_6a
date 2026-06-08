#pragma once

#include "protocol/service.h"
#include "std_srvs/srv/set_bool.hpp"

namespace xr {
namespace x2robot {
namespace service {

// tracker启停服务
SERVICE(EnableTracker, "/vive_tracker/trigger", std_srvs::srv::SetBool);

}  // namespace service
}  // namespace x2robot
}  // namespace xr
