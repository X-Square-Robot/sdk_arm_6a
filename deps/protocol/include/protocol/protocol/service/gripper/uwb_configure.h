#pragma once

#include "protocol/group.h"
#include "protocol/service.h"
#include "protocol/srv/uwb_master_configure.hpp"
#include "protocol/srv/uwb_slave_configure.hpp"

namespace xr {
namespace gripper {
namespace service {

SERVICE(GripperUwbCfgMaster, "/gripper/uwb/configure/master", protocol::srv::UwbMasterConfigure);
SERVICE(GripperUwbCfgLeft,   "/gripper/uwb/configure/left",   protocol::srv::UwbSlaveConfigure);
SERVICE(GripperUwbCfgRight,  "/gripper/uwb/configure/right",  protocol::srv::UwbSlaveConfigure);

}  // namespace service
}  // namespace gripper
}  // namespace xr
