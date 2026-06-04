#pragma once

#include "protocol/service.h"
#include "protocol/srv/suspend_modem_activator.hpp"
#include "protocol/srv/switch_dual_sim_slot.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 暂停modem激活器服务
SERVICE(SuspendModemActivator, "/modem/suspend_modem_activator", protocol::srv::SuspendModemActivator);
// 切换卡槽服务
SERVICE(SwitchDualSimSlot, "/modem/switch_dual_sim_slot", protocol::srv::SwitchDualSimSlot);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr