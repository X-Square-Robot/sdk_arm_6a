#pragma once

#include "protocol/service.h"
#include "protocol/srv/get_self_check_report.hpp"
#include "protocol/srv/list_self_check_reports.hpp"

namespace xr {
namespace application {
namespace service {

// Web UI 通过 roslib/rosbridge 调用的自检 application service 集合。

// 获取自检报告列表
SERVICE(ListSelfCheckReports, "/application/list_self_check_reports", protocol::srv::ListSelfCheckReports);

// 拉取自检报告 JSON
SERVICE(GetSelfCheckReport, "/application/get_self_check_report", protocol::srv::GetSelfCheckReport);

}  // namespace service
}  // namespace application
}  // namespace xr
