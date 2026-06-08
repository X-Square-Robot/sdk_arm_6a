#pragma once

#include <std_srvs/srv/trigger.hpp>

#include "protocol/service.h"
#include "protocol/srv/set_replay_rate.hpp"

namespace xr {
namespace replay {
namespace service {

// 暂停回放服务
SERVICE(PauseReplay, "/replay/pause", std_srvs::srv::Trigger);
// 继续回放服务
SERVICE(ResumeReplay, "/replay/resume", std_srvs::srv::Trigger);
// 修改回放速度服务
SERVICE(SetReplayRate, "/replay/set_rate", protocol::srv::SetReplayRate);
// 确认回放服务
SERVICE(ConfirmReplay, "/replay/confirm", std_srvs::srv::Trigger);
// 开始回放任务，用于对外演示
SERVICE(StartReplayTask, "/replay/start_task", std_srvs::srv::Trigger);
// 结束回放任务，用于对外演示
SERVICE(EndReplayTask, "/replay/end_task", std_srvs::srv::Trigger);

}  // namespace service
}  // namespace replay
}  // namespace xr
