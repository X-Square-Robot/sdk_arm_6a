#pragma once
#pragma once

#include "protocol/service.h"
#include "protocol/srv/login.hpp"
#include "protocol/srv/logout.hpp"

namespace xr {
namespace agent {
namespace service {

// 登录PD平台
SERVICE(Login, "/agent/login", protocol::srv::Login);

// 退出登陆PD平台
SERVICE(Logout, "/agent/logout", protocol::srv::Logout);

}  // namespace service
}  // namespace agent
}  // namespace xr
