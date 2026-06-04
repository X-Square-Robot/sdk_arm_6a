#pragma once

#include "protocol/service.h"
#include "protocol/srv/suction_motor_control.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// to set the left and right gripper suction motor
SERVICE(LeftSuctionMotorControl,
        "/teleoperation/master/left_suction_motor_control",
        protocol::srv::SuctionMotorControl);
SERVICE(RightSuctionMotorControl,
        "/teleoperation/master/right_suction_motor_control",
        protocol::srv::SuctionMotorControl);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
