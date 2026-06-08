#pragma once

#include <tf2_msgs/msg/tf_message.hpp>

#include "protocol/topic.h"

namespace xr {
namespace driver {
namespace topic {
// tf位姿转发
TOPIC(TF, "/tf", tf2_msgs::msg::TFMessage, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace driver
}  // namespace xr
