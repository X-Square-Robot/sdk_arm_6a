#pragma once

#include "protocol/service.h"
#include "protocol/srv/hdc_start_collect.hpp"
#include "protocol/srv/hdc_stop_collect.hpp"
#include "protocol/srv/hdc_cancel_collect.hpp"
#include "protocol/srv/hdc_delete_data.hpp"
#include "protocol/srv/hdc_get_logs.hpp"
#include "protocol/srv/hdc_check_quality.hpp"
#include "protocol/srv/hdc_upload_data.hpp"
#include "protocol/srv/hdc_get_robot_state.hpp"
#include "protocol/srv/hdc_trigger_step.hpp"

namespace xr {
namespace application {
namespace service {

// 4.1.1 开始采集 — sdk_server → application
SERVICE(HdcStartCollect,
        "/application/hdc/start_collect",
        protocol::srv::HdcStartCollect);

// 4.1.2 停止采集 — sdk_server → application
SERVICE(HdcStopCollect,
        "/application/hdc/stop_collect",
        protocol::srv::HdcStopCollect);

// 4.1.3 取消采集 — sdk_server → application
SERVICE(HdcCancelCollect,
        "/application/hdc/cancel_collect",
        protocol::srv::HdcCancelCollect);

// 4.1.4 删除采集文件 — sdk_server → application
SERVICE(HdcDeleteData,
        "/application/hdc/delete_data",
        protocol::srv::HdcDeleteData);

// 4.1.5 获取采集日志 — sdk_server → application
SERVICE(HdcGetLogs,
        "/application/hdc/get_logs",
        protocol::srv::HdcGetLogs);

// 4.1.6 检查采集文件质量 — sdk_server → application
SERVICE(HdcCheckQuality,
        "/application/hdc/check_quality",
        protocol::srv::HdcCheckQuality);

// 4.2.1 触发数据上传（立即 ack，异步结果走 HdcUploadResult service 回调 sdk_server）
// sdk_server → application
SERVICE(HdcUploadData,
        "/application/hdc/upload_data",
        protocol::srv::HdcUploadData);

// 4.3.2 获取设备状态（SIMPLE / STANDARD / DETAILED）
// Request.level 指定查询级别，Response 中对应字段按级别填充：
//   SIMPLE   → device_name / device_status / hardware_status / battery / memory / ...
//   STANDARD → camera / motor_status / communication_board / others
//   DETAILED → STANDARD 所有字段 + motor_data_type / motor_joints / imu_*
// 所有 level 都是单次请求-响应；若前端需要连续刷新，由客户端重复调用
SERVICE(HdcGetRobotState,
        "/application/hdc/get_robot_state",
        protocol::srv::HdcGetRobotState);

// 4.1.1 采集步骤切换触发 — databridge → application
// 数采员按键 → databridge 调用此服务 → application 调用 sdk_server 的 HdcCollectStepCallback 服务
SERVICE(HdcTriggerStep,
        "/application/hdc/trigger_step",
        protocol::srv::HdcTriggerStep);

}  // namespace service
}  // namespace application
}  // namespace xr
