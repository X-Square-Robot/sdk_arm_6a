#pragma once

#include "protocol/service.h"
#include "protocol/srv/delete_collected_data.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 删除最近一次录制的的数采数据
SERVICE(DeleteCollectedData, "/teleoperation/master/delete_collected_data", protocol::srv::DeleteCollectedData);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
