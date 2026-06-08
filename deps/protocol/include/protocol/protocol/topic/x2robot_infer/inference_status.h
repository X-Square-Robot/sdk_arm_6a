#pragma once

#include "protocol/msg/inference_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace x2robot_infer {
namespace topic {

// 推理状态发布
TOPIC(InferenceStatus, "/x2robot_infer/inference_status", protocol::msg::InferenceStatus, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace x2robot_infer
}  // namespace xr
