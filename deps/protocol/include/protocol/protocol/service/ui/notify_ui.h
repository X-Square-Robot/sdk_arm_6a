#pragma once
#include "protocol/service.h"
#include "protocol/srv/notify_ui.hpp"
namespace xr {
namespace ui {
namespace service {

SERVICE(NotifyUI, "/ui/notify", protocol::srv::NotifyUI);

}  // namespace service
}  // namespace ui
}  // namespace xr
