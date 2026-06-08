#pragma once

#include "protocol/msg/self_check_progress.hpp"
#include "protocol/topic.h"

namespace xr {
namespace application {
namespace topic {

// 一键自检进度发布，供 databridge 转发给 Web UI。
TOPIC(SelfCheckProgress,
      "/application/self_check/progress",
      protocol::msg::SelfCheckProgress,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace application
}  // namespace xr
