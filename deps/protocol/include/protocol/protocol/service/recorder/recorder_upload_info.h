#pragma once

#include "protocol/service.h"
#include "protocol/srv/recorder_upload_info.hpp"

namespace xr {
namespace recorder {
namespace service {

// 从机触发上传数据包服务
SERVICE(RecorderUploadInfo, "bag_recorder/recorder_upload_info", protocol::srv::RecorderUploadInfo);

}  // namespace service
}  // namespace recorder
}  // namespace xr
