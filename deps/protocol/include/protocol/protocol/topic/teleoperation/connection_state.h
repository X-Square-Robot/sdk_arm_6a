#pragma once

#include "protocol/msg/master_connection_state.hpp"
#include "protocol/msg/slave_connection_state.hpp"
#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 主设备端连接状态，由 state_machine 在 bind/unbind 时发布（master 端视角）
TOPIC(MasterConnectionState,
      "/teleoperation/master/connection_state",
      protocol::msg::MasterConnectionState,
      QoS::SystemDefaultQoS());
// 从设备端连接状态，由 state_machine 在 bind/unbind 时发布（slave 端视角）
TOPIC(SlaveConnectionState,
      "/teleoperation/slave/connection_state",
      protocol::msg::SlaveConnectionState,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
