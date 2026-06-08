#pragma once

#include "protocol/service.h"
#include "protocol/srv/recorder_bag_inventory.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 操作端转发查询录制的数据包列表查询服务
SERVICE(RecorderBagInventory, "/teleoperation/master/recorder_bag_inventory", protocol::srv::RecorderBagInventory);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
