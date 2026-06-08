#pragma once

#include "protocol/msg/self_check_progress.hpp"
#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 主设备端广播从设备端一键自检进度
TOPIC(MasterSelfCheckProgress,
      "/teleoperation/master/self_check/progress",
      protocol::msg::SelfCheckProgress,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
