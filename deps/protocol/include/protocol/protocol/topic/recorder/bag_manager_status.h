#pragma once

#include "protocol/msg/bag_manager_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace recorder {
namespace topic {

// 广播bag管理状态
TOPIC(BagManagerStatus, "recorder/bag_manager_status", protocol::msg::BagManagerStatus, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace recorder
}  // namespace xr
