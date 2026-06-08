#pragma once

#include "protocol/msg/enum_local_nav_status.hpp"
#include "protocol/msg/enum_module_state.hpp"
#include "protocol/msg/error_code.hpp"
#include "protocol/msg/local_nav_status.hpp"
#include "protocol/msg/module_state.hpp"
#include "protocol/msg/safety_nav_state.hpp"
#include "protocol/topic.h"
#include "geometry_msgs/msg/twist.hpp"
#include "sensor_msgs/msg/image.hpp"

namespace xr {
namespace local_nav {
namespace topic {

TOPIC(LocalNavSystemState, "/local_nav/system_status", protocol::msg::LocalNavStatus, QoS::SystemDefaultQoS());
TOPIC(LocalNavSystemError, "/local_nav/system_error", protocol::msg::ErrorCode, QoS::SystemDefaultQoS());
TOPIC(LocalNavModuleState, "/local_nav/algorith_module_state", protocol::msg::ModuleState, QoS::SystemDefaultQoS());
TOPIC(SafetyNavState, "/local_nav/safety_nav_state", protocol::msg::SafetyNavState, QoS::SystemDefaultQoS());

//安全遥操接口
TOPIC(SafetyCtrlCmdVel, "/local_nav/safety_ctrl_cmd_vel", geometry_msgs::msg::Twist, QoS::SystemDefaultQoS());

//BEV image
TOPIC(BevImage, "/local_nav/bev_image", sensor_msgs::msg::Image, QoS::SystemDefaultQoS());

}  // namespace topic

enum SystemStatusMap
{

    idle = 31000,  //空闲

    in_mapping = 31001,                //建图中
    mapping_loop_closure = 31002,      //回环中
    mapping_in_save_map = 31005,       //保存地图中
    mapping_save_map_success = 31003,  //保存地图成功
    mapping_save_map_failed = 31004,   //保存地图失败

    lose_localization = 32001,             //定位丢失
    initlize_point_in_map = 32002,         //下发位置初始化中
    relocal_in_total_map = 32003,          //全局重定位中
    relocal_in_total_map_success = 32004,  //下发位置初始化成功
    relocal_in_total_map_failed = 32005,   //下发位置初始化失败

    nav_planning = 33001,        //规划中
    nav_avoid_obs = 33002,       //避障中
    nav_following_path = 33003,  //跟线中
    nav_reach_goal = 33006,      //到达目标点
    nav_unreach_goal = 33004,    //目标点不可达
    nav_running = 33005,         //导航执行任务中

    wait_for_nav_cancel_goal_finish = 33007,  //等待取消任务完成
    nav_cancel_goal_finish = 33008,           //取消任务完成

};

enum LocalizationStateOut
{
    local_offline = 0,
    online_idle = 1,
    online_mapping = 2,
    online_local = 3,
};

enum NavigationStateOut
{
    nav_offline = 0,
    nav_online = 1,
};

enum PerceptionStateOut
{
    per_offline = 0,
    per_init = 1,
    per_idle = 2,
    per_active = 3,
    per_pause = 4,
};

}  // namespace local_nav
}  // namespace xr
