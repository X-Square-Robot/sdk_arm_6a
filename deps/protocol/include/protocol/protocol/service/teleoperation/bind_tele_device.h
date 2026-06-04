#pragma once

#include "protocol/service.h"
#include "protocol/srv/bind_tele_device.hpp"
#include "protocol/srv/get_tele_device_list.hpp"
#include "protocol/srv/unbind_tele_device.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 同步获取设备列表
SERVICE(GetTeleDeviceList, "/teleoperation/master/get_tele_device_list", protocol::srv::GetTeleDeviceList);
// 绑定一个设备
SERVICE(BindTeleDevice, "/teleoperation/master/bind_tele_device", protocol::srv::BindTeleDevice);
// 解绑当前设备
SERVICE(UnbindTeleDevice, "/teleoperation/master/unbind_tele_device", protocol::srv::UnbindTeleDevice);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr