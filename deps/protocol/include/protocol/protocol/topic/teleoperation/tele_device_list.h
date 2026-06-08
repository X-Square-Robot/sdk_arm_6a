#pragma once

#include "protocol/msg/tele_device_is_bound.hpp"
#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 广播当前绑定状态
TOPIC(TeleDeviceIsBound,
      "/teleoperation/master/tele_device_is_bound",
      protocol::msg::TeleDeviceIsBound,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr