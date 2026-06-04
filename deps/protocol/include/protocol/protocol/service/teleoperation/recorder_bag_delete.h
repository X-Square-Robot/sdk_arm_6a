#pragma once

#include "protocol/service.h"
#include "protocol/srv/recorder_bag_delete.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 操作端触发删除录制的数据包服务
SERVICE(RecorderBagDelete, "/teleoperation/master/recorder_bag_delete", protocol::srv::RecorderBagDelete);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
