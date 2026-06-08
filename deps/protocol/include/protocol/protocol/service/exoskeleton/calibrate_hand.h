#pragma once

#include "protocol/group.h"
#include "protocol/service.h"
#include "std_srvs/srv/trigger.hpp"

namespace xr {
namespace exoskeleton {
namespace service {

// to calibrate the left and right exoskeleton hand
SERVICE(CalibrateLeftExoHand, "/exo_hand/calibration/left", std_srvs::srv::Trigger);
SERVICE(CalibrateRightExoHand, "/exo_hand/calibration/right", std_srvs::srv::Trigger);

}  // namespace service
}  // namespace exoskeleton

using CalibrateExoHandGroup =
    ServiceGroup<exoskeleton::service::CalibrateLeftExoHand, exoskeleton::service::CalibrateRightExoHand>;

}  // namespace xr
