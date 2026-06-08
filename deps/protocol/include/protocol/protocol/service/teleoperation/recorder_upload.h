#pragma once

#include "protocol/service.h"
#include "protocol/srv/recorder_upload.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 操作端触发上传数据包服务
SERVICE(RecorderUpload, "/teleoperation/master/recorder_upload", protocol::srv::RecorderUpload);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
