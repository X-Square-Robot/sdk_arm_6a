#pragma once

#include "protocol/service.h"
#include "protocol/srv/force_upload.hpp"

namespace xr {
namespace robot_log {
namespace service {

SERVICE(ForceUpload, "/robot_log/force_upload", protocol::srv::ForceUpload);

}  // namespace service
}  // namespace robot_log
}  // namespace xr
