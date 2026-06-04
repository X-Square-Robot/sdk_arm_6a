#pragma once

#include "protocol/service.h"
#include "protocol/srv/set_data_collection_info.hpp"

namespace xr {
namespace application {
namespace service {

// UI 请求application设置采集信息(设置当前topic/collection信息)的协议接口
SERVICE(SetDataCollectionInfo, "/application/set_data_collection_info", protocol::srv::SetDataCollectionInfo);

}  // namespace service
}  // namespace application
}  // namespace xr
