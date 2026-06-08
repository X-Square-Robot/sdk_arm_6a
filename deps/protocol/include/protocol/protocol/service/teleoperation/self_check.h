#pragma once

#include "protocol/service.h"
#include "protocol/srv/get_self_check_report.hpp"
#include "protocol/srv/list_self_check_reports.hpp"

namespace xr {
namespace teleoperation {
namespace service {

// 远程获取自检报告列表
SERVICE(ListSelfCheckReports, "/teleoperation/master/list_self_check_reports", protocol::srv::ListSelfCheckReports);

// 远程拉取自检报告 JSON
SERVICE(GetSelfCheckReport, "/teleoperation/master/get_self_check_report", protocol::srv::GetSelfCheckReport);

}  // namespace service
}  // namespace teleoperation
}  // namespace xr
