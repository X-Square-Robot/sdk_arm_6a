#pragma once

#include "protocol/service.h"
#include "protocol/srv/set_inference_score.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 远程推理评测打分入口
SERVICE(SetInferenceScore, "/teleoperation/master/set_inference_score", protocol::srv::SetInferenceScore);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
