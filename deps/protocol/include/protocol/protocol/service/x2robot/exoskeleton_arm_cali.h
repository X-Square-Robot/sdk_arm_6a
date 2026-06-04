#pragma once

#include "protocol/group.h"
#include "protocol/service.h"
#include "protocol/srv/exo_arm_calibration.hpp"

namespace xr {
namespace x2robot {
namespace service {

// to calibrate the left and right exoskeleton arms, use the following services
SERVICE(CalibrateLeftExoskeletonArm, "/exoskeleton_arm_driver/calibration/left", protocol::srv::ExoArmCalibration);
SERVICE(CalibrateRightExoskeletonArm, "/exoskeleton_arm_driver/calibration/right", protocol::srv::ExoArmCalibration);

}  // namespace service
}  // namespace x2robot

using CalibrateExoskeletonArmGroup =
    ServiceGroup<x2robot::service::CalibrateLeftExoskeletonArm, x2robot::service::CalibrateRightExoskeletonArm>;

}  // namespace xr
