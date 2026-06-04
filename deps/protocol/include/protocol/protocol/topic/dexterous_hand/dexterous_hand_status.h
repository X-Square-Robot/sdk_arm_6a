#pragma once

#include "protocol/msg/dex_hand_status.hpp"
#include "protocol/msg/enum_dex_hand_main_fault.hpp"
#include "protocol/msg/enum_dex_hand_motor_fault.hpp"
#include "protocol/topic.h"

namespace x2robot {
namespace topic {

TOPIC(LeftDexterousHandStatus,
      "/left_hand_command_controller/hand_status",
      protocol::msg::DexHandStatus,
      QoS::SystemDefaultQoS());

TOPIC(RightDexterousHandStatus,
      "/right_hand_command_controller/hand_status",
      protocol::msg::DexHandStatus,
      QoS::SystemDefaultQoS());
}  // namespace topic
}  // namespace x2robot
