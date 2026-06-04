#pragma once

#include "protocol/msg/bag_manager_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 广播bag管理状态
TOPIC(BagManagerStatus,
      "/teleoperation/master/bag_manager_status",
      protocol::msg::BagManagerStatus,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
