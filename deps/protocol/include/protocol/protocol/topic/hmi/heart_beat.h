#pragma once

#include "protocol/msg/gui_heartbeat.hpp"
#include "protocol/topic.h"

namespace xr {
namespace hmi {
namespace topic {

// gui心跳，表示HMI GUI正常工作，并且有前端访问
TOPIC(GUIHeartbeat, "/hmi/gui/heartbeat", protocol::msg::GUIHeartbeat, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace hmi
}  // namespace xr
