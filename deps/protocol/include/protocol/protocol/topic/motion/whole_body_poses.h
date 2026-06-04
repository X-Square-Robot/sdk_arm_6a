#pragma once

#include "protocol/msg/whole_body_poses_stamped.hpp"

#include "protocol/topic.h"

namespace xr {
namespace motion {
namespace topic {

TOPIC(WholeBodyPosesWorld, "/motion/whole_body_poses/world", protocol::msg::WholeBodyPosesStamped, QoS::SystemDefaultQoS());

}
}  // namespace motion
}  // namespace xr