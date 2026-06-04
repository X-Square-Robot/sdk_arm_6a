#pragma once

#include "protocol/service.h"
#include "protocol/srv/inference_control.hpp"

namespace xr {
namespace x2robot_infer {
namespace service {

// 推理控制服务
SERVICE(InferenceControl, "/x2robot_infer/inference_control", protocol::srv::InferenceControl);

}  // namespace service
}  // namespace x2robot_infer
}  // namespace xr