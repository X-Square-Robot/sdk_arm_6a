#pragma once

#include "protocol/service.h"
#include "std_srvs/srv/set_bool.hpp"

namespace xr {
namespace chassis_tracking_controller {
namespace service {

// to trigger chassis tracking controller to publish trajectory chunk
SERVICE(TriggerChassisTrackingController, "/chassis_tracking_controller/trigger", std_srvs::srv::SetBool);

}  // namespace service
}  // namespace chassis_tracking_controller

}  // namespace xr
