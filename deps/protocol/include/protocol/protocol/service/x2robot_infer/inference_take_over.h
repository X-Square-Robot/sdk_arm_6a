#pragma once

#include "protocol/service.h"
#include "std_srvs/srv/set_bool.hpp"

namespace xr {
namespace x2robot_infer {
namespace service {

// 推理并接管功能的开始和结束，当前仅用于灵巧手版机器人调用
SERVICE(TriggerTakeOver, "/x2robot_infer/trigger_take_over", std_srvs::srv::SetBool);

}  // namespace service
}  // namespace x2robot_infer
}  // namespace xr
