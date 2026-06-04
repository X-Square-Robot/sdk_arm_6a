#pragma once

#include "protocol/group.h"
#include "protocol/service.h"
#include "protocol/srv/suction_motor_set.hpp"

namespace xr {
namespace gripper {
namespace service {

// to set the left and right gripper suction motor
SERVICE(SetLeftSuctionMotor, "/gripper/set_suction_motor/left", protocol::srv::SuctionMotorSet);
SERVICE(SetRightSuctionMotor, "/gripper/set_suction_motor/right", protocol::srv::SuctionMotorSet);

}  // namespace service
}  // namespace gripper

using SetSuctionMotorGroup =
    ServiceGroup<gripper::service::SetLeftSuctionMotor, gripper::service::SetRightSuctionMotor>;

}  // namespace xr
