#pragma once

#include "protocol/service.h"
#include "protocol/srv/recorder_act.hpp"

namespace xr {
namespace recorder {
namespace service {

// 从机触发录包服务
SERVICE(RecorderAct, "bag_recorder/recorder_act", protocol::srv::RecorderAct);

}  // namespace service
}  // namespace recorder
}  // namespace xr
