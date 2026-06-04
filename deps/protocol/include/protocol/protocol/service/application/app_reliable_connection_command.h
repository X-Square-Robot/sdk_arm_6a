#pragma once

#include "protocol/service.h"
#include "protocol/srv/app_reliable_connection_command.hpp"

namespace xr {
namespace application {
namespace service {

// App 端的可靠指令调用的 service。
SERVICE(AppReliableConnectionCommand,
        "/application/request/app_reliable_connection_command",
        protocol::srv::AppReliableConnectionCommand);

}  // namespace service
}  // namespace application
}  // namespace xr
