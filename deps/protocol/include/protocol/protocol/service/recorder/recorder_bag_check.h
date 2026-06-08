#pragma once

#include "protocol/service.h"
#include "protocol/srv/recorder_bag_check.hpp"

namespace xr {
namespace recorder {
namespace service {

// 从机触发检查 bag 包内 topic 完整性服务
SERVICE(RecorderBagCheck, "bag_recorder/recorder_bag_check", protocol::srv::RecorderBagCheck);

}  // namespace service
}  // namespace recorder
}  // namespace xr
