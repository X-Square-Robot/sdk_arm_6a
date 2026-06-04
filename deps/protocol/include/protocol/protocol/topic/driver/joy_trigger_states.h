#pragma once

#include "protocol/msg/joy_trigger_state.hpp"
#include "protocol/topic.h"
#include "sensor_msgs/msg/joy.hpp"

namespace xr {
namespace driver {
namespace topic {

// left joystick with trigger input information
TOPIC(LeftJoyTriggerStates, "/joy_trigger/state/left", protocol::msg::JoyTriggerState, QoS::SystemDefaultQoS());
// right joystick with trigger input information
TOPIC(RightJoyTriggerStates, "/joy_trigger/state/right", protocol::msg::JoyTriggerState, QoS::SystemDefaultQoS());
}  // namespace topic
}  // namespace driver
}  // namespace xr
