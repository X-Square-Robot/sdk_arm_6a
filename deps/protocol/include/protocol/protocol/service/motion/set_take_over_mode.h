#pragma once

#include "protocol/service.h"
#include "std_srvs/srv/set_bool.hpp"

namespace xr {
namespace motion {
namespace service {

// 切换运控的接管模式状态，调用时运控需要在推理模式下。
SERVICE(SetTakeOverMode, "/motion/set_take_over_mode", std_srvs::srv::SetBool);

}  // namespace service
}  // namespace motion
}  // namespace xr
