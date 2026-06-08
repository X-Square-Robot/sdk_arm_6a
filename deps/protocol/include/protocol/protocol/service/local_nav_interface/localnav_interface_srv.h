#pragma once

#include "protocol/service.h"
#include "protocol/srv/service_trigger.hpp"
#include "protocol/srv/save_map.hpp"
#include "protocol/srv/start_global_local.hpp"
#include "protocol/srv/navigation_point.hpp"
#include "protocol/srv/navigation_vlm_point.hpp"
#include "protocol/srv/get_map_list.hpp"
#include "protocol/srv/get_patrol_point.hpp"
#include "protocol/srv/service_set_bool.hpp"
#include "protocol/srv/map_point.hpp"
#include "protocol/srv/virtual_marks_info.hpp"
#include "protocol/srv/get_map_info.hpp"
#include "protocol/srv/pose_by_select.hpp"
#include "protocol/srv/get_patrol_point_by_map_name.hpp"
#include "protocol/srv/map_point_with_map_name.hpp"
#include "protocol/srv/align_cabinet.hpp"
#include "protocol/srv/json_data_trigger.hpp"
#include "protocol/srv/set_json_data.hpp"
#include "protocol/srv/map_datas.hpp"


namespace xr {
namespace local_nav {
namespace service {

using Trigger = protocol::srv::ServiceTrigger;
using SaveMap = protocol::srv::SaveMap;
using StartLocal = protocol::srv::StartGlobalLocal;
using NavPoint = protocol::srv::NavigationPoint;
using NavVlmPoint = protocol::srv::NavigationVlmPoint;
using LocalGetMapList = protocol::srv::GetMapList;
using LocalGetPatrolPoint = protocol::srv::GetPatrolPoint;
using SetBool = protocol::srv::ServiceSetBool;
using RecordPoint = protocol::srv::MapPoint;
using DeletePoint = protocol::srv::MapPoint;
using VirtualMarks = protocol::srv::VirtualMarksInfo;
using GetMapInfo = protocol::srv::GetMapInfo;
using PoseBySelect = protocol::srv::PoseBySelect;
using GetPatrolPointByMapName = protocol::srv::GetPatrolPointByMapName;
using MapPointWithMapName = protocol::srv::MapPointWithMapName;
using AlignCabinet = protocol::srv::AlignCabinet;
using JsonDataTrigger = protocol::srv::JsonDataTrigger;
using SetJsonData = protocol::srv::SetJsonData;
using MapDatas = protocol::srv::MapDatas;

SERVICE(StartMapping, "/local_nav/start_mapping", Trigger);
SERVICE(CancelMapping, "/local_nav/cancel_mapping", Trigger);
SERVICE(SaveMapping, "/local_nav/save_mapping", SaveMap);
SERVICE(StartGlobalLocal, "/local_nav/start_global_local", StartLocal);
SERVICE(SetLocalIdle, "/local_nav/set_global_local_idle", Trigger);
SERVICE(NavigationPoint, "/local_nav/navigation_point", NavPoint);
SERVICE(NavigationPointPrecise, "/local_nav/navigation_point_precise", NavPoint);
SERVICE(StopNavigtionTask, "/local_nav/stop_navigation_task", Trigger);
SERVICE(ResetNavigation, "/local_nav/reset_navigation", Trigger);
SERVICE(NavigationVlmPoint, "/local_nav/navigation_vlm_point", NavVlmPoint);
SERVICE(GetSavedMapList, "/local_nav/local_get_map_list", LocalGetMapList);
SERVICE(GetPatrolPoint, "/local_nav/get_patrol_point", LocalGetPatrolPoint);
SERVICE(StopPerception, "/local_nav/stop_perception", Trigger);
SERVICE(StartPerception, "/local_nav/start_perception", Trigger);
SERVICE(SetAllModuleStop, "/local_nav/stop_all_module", Trigger);
SERVICE(SetAllModuleStart, "/local_nav/start_all_module", Trigger);
SERVICE(SafetyCtrlLocally, "/local_nav/safety_ctrl_locally", SetBool);
SERVICE(TrajchunkByOdom, "/local_nav/trajchunk_by_odom", SetBool);
SERVICE(RecordMapPoint, "/local_nav/record_point", RecordPoint);
SERVICE(DeleteMapPoint, "/local_nav/delete_map_point", DeletePoint);
SERVICE(GetVirtualMarks, "/local_nav/get_virtual_marks", VirtualMarks);
SERVICE(SetVirtualMarks, "/local_nav/set_virtual_marks", VirtualMarks);
SERVICE(GetMapInfoSrv, "/local_nav/get_map_info", GetMapInfo);
SERVICE(RecordPoseBySelectSrv, "/local_nav/record_pose_by_select", PoseBySelect);
SERVICE(GetPatrolPointByMapNameSrv, "/local_nav/get_patrol_point_by_map_name", GetPatrolPointByMapName);
SERVICE(DeletePointWithMapName, "/local_nav/delete_map_point_with_map_name", MapPointWithMapName);
SERVICE(AlignCabinetSrv, "/local_nav/align_cabinet", AlignCabinet);
SERVICE(GetAlgorithmParamsSrv, "/local_nav/get_algorith_params", JsonDataTrigger);
SERVICE(UpdateAlgorithmParamsSrv, "/local_nav/update_algorith_params", SetJsonData);
SERVICE(ExportMapDatasSrv, "/local_nav/export_map_datas", MapDatas);
SERVICE(LoadMapDatasSrv, "/local_nav/load_map_datas", MapDatas);

}  // namespace service
}  // namespace local_nav
}  // namespace xr
