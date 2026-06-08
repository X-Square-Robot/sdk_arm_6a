#pragma once

#include "protocol/service.h"
#include "protocol/srv/set_inference_score.hpp"

namespace xr {
namespace application {
namespace service {

SERVICE(SetInferenceScore, "/application/set_inference_score", protocol::srv::SetInferenceScore);

}  // namespace service
}  // namespace application
}  // namespace xr
