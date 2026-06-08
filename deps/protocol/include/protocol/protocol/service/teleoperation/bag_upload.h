#pragma once

#include "protocol/service.h"
#include "protocol/srv/bag_upload.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 请求机器人上传bag文件
SERVICE(BagUpload, "/teleoperation/master/bag_upload", protocol::srv::BagUpload);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
