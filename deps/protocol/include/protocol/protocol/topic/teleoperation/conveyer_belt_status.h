#pragma once

#include "protocol/msg/conveyer_belt_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace teleoperation {
namespace topic {

// 从机传送带控制指令topic（teleoperation(slave)发布，databridge(slave)订阅后发布relay_control）
TOPIC(SlaveConveyerBeltControl,
      "/teleoperation/slave/conveyer_belt_control",
      protocol::msg::ConveyerBeltStatus,
      QoS::SystemDefaultQoS());

// 主机传送带状态输入topic（teleoperation(master)发布，databridge(master)订阅后发布最终status）
TOPIC(MasterConveyerBeltStatusInput,
      "/teleoperation/master/conveyer_belt_status_input",
      protocol::msg::ConveyerBeltStatus,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace teleoperation
}  // namespace xr
