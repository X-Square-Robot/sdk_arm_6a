#pragma once

#include "protocol/service.h"
#include "protocol/srv/tailscale_login.hpp"
#include "protocol/srv/tailscale_status.hpp"

namespace xr {
namespace network_manager {
namespace service {

// 登录Tailscale
SERVICE(TailscaleLogin, "/network_manager/tailscale_login", protocol::srv::TailscaleLogin);
// 获取Tailscale状态
SERVICE(TailscaleStatus, "/network_manager/tailscale_status", protocol::srv::TailscaleStatus);

}  // namespace service
}  // namespace network_manager
}  // namespace xr