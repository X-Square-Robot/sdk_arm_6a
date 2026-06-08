#pragma once

#include "protocol/msg/conveyer_belt_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace databridge {
namespace topic {

// 从机传送带状态反馈topic（databridge(slave)订阅channels_status后发布，供teleoperation转发）
TOPIC(SlaveConveyerBeltStatus,
      "/databridge/slave/conveyer_belt_status",
      protocol::msg::ConveyerBeltStatus,
      QoS::SystemDefaultQoS());

// 传送带状态topic（databridge(master)发布，供UI订阅）
TOPIC(ConveyerBeltStatus,
      "/databridge/master/conveyer_belt_status",
      protocol::msg::ConveyerBeltStatus,
      QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace databridge
}  // namespace xr
