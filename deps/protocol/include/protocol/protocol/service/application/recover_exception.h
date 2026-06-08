#pragma once

#include "protocol/service.h"
#include "protocol/srv/recover_exception.hpp"

namespace xr {
namespace application {
namespace service {

// 异常恢复服务
SERVICE(RecoverException, "/application/recover_exception", protocol::srv::RecoverException);

}  // namespace service
}  // namespace application
}  // namespace xr
