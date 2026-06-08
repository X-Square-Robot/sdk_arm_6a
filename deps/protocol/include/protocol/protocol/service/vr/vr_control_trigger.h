#pragma once

#include "protocol/service.h"
#include "std_srvs/srv/set_bool.hpp"

namespace xr {
namespace vr {
namespace service {

// to trigger meta quest vr driver to start/stop to control robot motion
SERVICE(TriggerMetaQuestVRControl, "/vr/meta_quest_control/trigger", std_srvs::srv::SetBool);

}  // namespace service
}  // namespace vr

}  // namespace xr
