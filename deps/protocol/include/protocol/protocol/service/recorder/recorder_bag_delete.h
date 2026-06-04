#pragma once

#include "protocol/service.h"
#include "protocol/srv/recorder_bag_delete.hpp"

namespace xr {
namespace recorder {
namespace service {

// 从机触发删除录制的数据包服务
SERVICE(RecorderBagDelete, "bag_recorder/recorder_bag_delete", protocol::srv::RecorderBagDelete);

}  // namespace service
}  // namespace recorder
}  // namespace xr
