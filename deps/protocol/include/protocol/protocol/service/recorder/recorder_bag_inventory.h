#pragma once

#include "protocol/service.h"
#include "protocol/srv/recorder_bag_inventory.hpp"

namespace xr {
namespace recorder {
namespace service {

// 从机触发查询录制的数据包列表服务
SERVICE(RecorderBagInventory, "bag_recorder/recorder_bag_inventory", protocol::srv::RecorderBagInventory);

}  // namespace service
}  // namespace recorder
}  // namespace xr