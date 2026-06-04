// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from x2robot_msgs:srv/SwitchRobotControlMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/srv/switch_robot_control_mode.h"


#ifndef X2ROBOT_MSGS__SRV__DETAIL__SWITCH_ROBOT_CONTROL_MODE__STRUCT_H_
#define X2ROBOT_MSGS__SRV__DETAIL__SWITCH_ROBOT_CONTROL_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SwitchRobotControlMode in the package x2robot_msgs.
typedef struct x2robot_msgs__srv__SwitchRobotControlMode_Request
{
  uint8_t target_mode;
  bool request_for_homing;
  bool try_recover;
  uint8_t target_motion_state;
  uint8_t data_collection_mode;
} x2robot_msgs__srv__SwitchRobotControlMode_Request;

// Struct for a sequence of x2robot_msgs__srv__SwitchRobotControlMode_Request.
typedef struct x2robot_msgs__srv__SwitchRobotControlMode_Request__Sequence
{
  x2robot_msgs__srv__SwitchRobotControlMode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__srv__SwitchRobotControlMode_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SwitchRobotControlMode in the package x2robot_msgs.
typedef struct x2robot_msgs__srv__SwitchRobotControlMode_Response
{
  bool ok;
} x2robot_msgs__srv__SwitchRobotControlMode_Response;

// Struct for a sequence of x2robot_msgs__srv__SwitchRobotControlMode_Response.
typedef struct x2robot_msgs__srv__SwitchRobotControlMode_Response__Sequence
{
  x2robot_msgs__srv__SwitchRobotControlMode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__srv__SwitchRobotControlMode_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  x2robot_msgs__srv__SwitchRobotControlMode_Event__request__MAX_SIZE = 1
};
// response
enum
{
  x2robot_msgs__srv__SwitchRobotControlMode_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SwitchRobotControlMode in the package x2robot_msgs.
typedef struct x2robot_msgs__srv__SwitchRobotControlMode_Event
{
  service_msgs__msg__ServiceEventInfo info;
  x2robot_msgs__srv__SwitchRobotControlMode_Request__Sequence request;
  x2robot_msgs__srv__SwitchRobotControlMode_Response__Sequence response;
} x2robot_msgs__srv__SwitchRobotControlMode_Event;

// Struct for a sequence of x2robot_msgs__srv__SwitchRobotControlMode_Event.
typedef struct x2robot_msgs__srv__SwitchRobotControlMode_Event__Sequence
{
  x2robot_msgs__srv__SwitchRobotControlMode_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__srv__SwitchRobotControlMode_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // X2ROBOT_MSGS__SRV__DETAIL__SWITCH_ROBOT_CONTROL_MODE__STRUCT_H_
