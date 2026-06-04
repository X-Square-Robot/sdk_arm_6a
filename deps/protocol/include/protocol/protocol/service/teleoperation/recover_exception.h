#pragma once

#include "protocol/service.h"
#include "protocol/srv/recover_exception.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 请求错误恢复
SERVICE(RecoverException, "/teleoperation/master/recover_exception", protocol::srv::RecoverException);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr