#pragma once

#include "protocol/service.h"
#include "protocol/srv/recorder_upload.hpp"

namespace xr {
namespace recorder {
namespace service {

// 从机触发上传数据包服务
SERVICE(RecorderUpload, "bag_recorder/recorder_upload", protocol::srv::RecorderUpload);

}  // namespace service
}  // namespace recorder
}  // namespace xr
