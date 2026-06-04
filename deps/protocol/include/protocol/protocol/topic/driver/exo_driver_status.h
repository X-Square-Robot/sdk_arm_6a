#pragma once

#include "protocol/group.h"
#include "protocol/msg/enum_exo_driver_status.hpp"
#include "protocol/msg/exo_driver_status.hpp"
#include "protocol/msg/exo_hand_key_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace driver {
namespace topic {
// 左外骨骼臂驱动节点状态
TOPIC(LeftExoArmDriverStatus,
      "/exoskeleton_arm_driver/status/left",
      protocol::msg::ExoDriverStatus,
      QoS::SystemDefaultQoS());
// 右外骨骼臂驱动节点状态
TOPIC(RightExoArmDriverStatus,
      "/exoskeleton_arm_driver/status/right",
      protocol::msg::ExoDriverStatus,
      QoS::SystemDefaultQoS());
// 左外骨骼手驱动节点状态
TOPIC(LeftExoHandDriverStatus,
      "/exoskeleton_hand_driver/status/left",
      protocol::msg::ExoDriverStatus,
      QoS::SystemDefaultQoS());
// 右外骨骼手驱动节点状态
TOPIC(RightExoHandDriverStatus,
      "/exoskeleton_hand_driver/status/right",
      protocol::msg::ExoDriverStatus,
      QoS::SystemDefaultQoS());
// 左外骨骼手按键状态
TOPIC(LeftExoHandKeyStatus,
      "/exo_hand/key/left",
      protocol::msg::ExoHandKeyStatus,
      QoS::SystemDefaultQoS());
// 右外骨骼手按键状态
TOPIC(RightExoHandKeyStatus,
      "/exo_hand/key/right",
      protocol::msg::ExoHandKeyStatus,
      QoS::SystemDefaultQoS());
      
}  // namespace topic
}  // namespace driver
using ExoArmDriverStatusGroup =
    TopicGroup<xr::driver::topic::LeftExoArmDriverStatus, xr::driver::topic::RightExoArmDriverStatus>;

using ExoHandDriverStatusGroup =
    TopicGroup<xr::driver::topic::LeftExoHandDriverStatus, xr::driver::topic::RightExoHandDriverStatus>;

using ExoHandKeyStatusGroup =
    TopicGroup<xr::driver::topic::LeftExoHandKeyStatus, xr::driver::topic::RightExoHandKeyStatus>;
}  // namespace xr
