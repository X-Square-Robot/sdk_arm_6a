#pragma once

#include <string>

#include "protocol/srv/schedule_pwm_gate.hpp"

namespace xr {
namespace camera {
namespace service {

inline std::string SchedulePwmGateUrl(const std::string& node_id)
{
    return "/camera_sync/" + node_id + "/schedule_pwm_gate";
}

}  // namespace service
}  // namespace camera
}  // namespace xr
