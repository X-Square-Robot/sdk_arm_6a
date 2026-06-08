#pragma once
#include "protocol/group.h"
#include "protocol/msg/enum_vr_driver_status.hpp"
#include "protocol/msg/vr_controller_status.hpp"
#include "protocol/topic.h"
#include "std_msgs/msg/bool.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/u_int8.hpp"
namespace xr {
namespace driver {
namespace topic {
// VR Driver Status
TOPIC(VRDriverStatus, "/vr_driver/status", std_msgs::msg::UInt8, QoS::SystemDefaultQoS());
// Which type of VR is running
TOPIC(VRDriverType, "/vr_driver/device_type", std_msgs::msg::String, QoS::ConfigMessageQoS());
// Whether the VR is started to send control msg
TOPIC(VRDriverStartControl, "/vr_driver/start_control", std_msgs::msg::Bool, QoS::SystemDefaultQoS());
// Left controller status
TOPIC(LeftControllerStatus, "/vr_driver/controller_status/left", protocol::msg::VRControllerStatus, QoS::SystemDefaultQoS());
// Right controller status
TOPIC(RightControllerStatus, "/vr_driver/controller_status/right", protocol::msg::VRControllerStatus, QoS::SystemDefaultQoS());
}  // namespace topic
}  // namespace driver
}  // namespace xr
