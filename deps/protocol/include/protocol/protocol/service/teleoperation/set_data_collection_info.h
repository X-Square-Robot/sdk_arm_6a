#pragma once

#include "protocol/service.h"
#include "protocol/srv/set_data_collection_info.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 远程设置采集信息入口
SERVICE(SetDataCollectionInfo, "/teleoperation/master/set_data_collection_info", protocol::srv::SetDataCollectionInfo);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
