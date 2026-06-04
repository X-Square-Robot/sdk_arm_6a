#pragma once

#include <sensor_msgs/msg/joint_state.hpp>
#include "protocol/topic.h"

namespace xr {
namespace x2robot {
namespace topic {

// 升降台状态反馈话题
TOPIC(LiftStates, "/lift/joint_states", sensor_msgs::msg::JointState, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace x2robot
}  // namespace xr
