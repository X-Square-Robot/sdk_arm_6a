// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from x2robot_msgs:srv/MoveitGroupStateRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/srv/moveit_group_state_request.h"


#ifndef X2ROBOT_MSGS__SRV__DETAIL__MOVEIT_GROUP_STATE_REQUEST__STRUCT_H_
#define X2ROBOT_MSGS__SRV__DETAIL__MOVEIT_GROUP_STATE_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'group_state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MoveitGroupStateRequest in the package x2robot_msgs.
typedef struct x2robot_msgs__srv__MoveitGroupStateRequest_Request
{
  rosidl_runtime_c__String group_state;
  uint8_t num_planning_attempts;
  double allowed_planning_time;
  double max_velocity_scaling_factor;
  double max_acceleration_scaling_factor;
} x2robot_msgs__srv__MoveitGroupStateRequest_Request;

// Struct for a sequence of x2robot_msgs__srv__MoveitGroupStateRequest_Request.
typedef struct x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence
{
  x2robot_msgs__srv__MoveitGroupStateRequest_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MoveitGroupStateRequest in the package x2robot_msgs.
typedef struct x2robot_msgs__srv__MoveitGroupStateRequest_Response
{
  /// 查询x2robot_msgs.msg.EnumMoveitMoveResult
  uint8_t moveit_move_result;
  rosidl_runtime_c__String message;
} x2robot_msgs__srv__MoveitGroupStateRequest_Response;

// Struct for a sequence of x2robot_msgs__srv__MoveitGroupStateRequest_Response.
typedef struct x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence
{
  x2robot_msgs__srv__MoveitGroupStateRequest_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  x2robot_msgs__srv__MoveitGroupStateRequest_Event__request__MAX_SIZE = 1
};
// response
enum
{
  x2robot_msgs__srv__MoveitGroupStateRequest_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/MoveitGroupStateRequest in the package x2robot_msgs.
typedef struct x2robot_msgs__srv__MoveitGroupStateRequest_Event
{
  service_msgs__msg__ServiceEventInfo info;
  x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence request;
  x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence response;
} x2robot_msgs__srv__MoveitGroupStateRequest_Event;

// Struct for a sequence of x2robot_msgs__srv__MoveitGroupStateRequest_Event.
typedef struct x2robot_msgs__srv__MoveitGroupStateRequest_Event__Sequence
{
  x2robot_msgs__srv__MoveitGroupStateRequest_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__srv__MoveitGroupStateRequest_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // X2ROBOT_MSGS__SRV__DETAIL__MOVEIT_GROUP_STATE_REQUEST__STRUCT_H_
