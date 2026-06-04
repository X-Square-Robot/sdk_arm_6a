// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from x2robot_msgs:srv/HomingRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/srv/homing_request.h"


#ifndef X2ROBOT_MSGS__SRV__DETAIL__HOMING_REQUEST__STRUCT_H_
#define X2ROBOT_MSGS__SRV__DETAIL__HOMING_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/HomingRequest in the package x2robot_msgs.
typedef struct x2robot_msgs__srv__HomingRequest_Request
{
  uint8_t structure_needs_at_least_one_member;
} x2robot_msgs__srv__HomingRequest_Request;

// Struct for a sequence of x2robot_msgs__srv__HomingRequest_Request.
typedef struct x2robot_msgs__srv__HomingRequest_Request__Sequence
{
  x2robot_msgs__srv__HomingRequest_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__srv__HomingRequest_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/HomingRequest in the package x2robot_msgs.
typedef struct x2robot_msgs__srv__HomingRequest_Response
{
  bool is_succ;
} x2robot_msgs__srv__HomingRequest_Response;

// Struct for a sequence of x2robot_msgs__srv__HomingRequest_Response.
typedef struct x2robot_msgs__srv__HomingRequest_Response__Sequence
{
  x2robot_msgs__srv__HomingRequest_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__srv__HomingRequest_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  x2robot_msgs__srv__HomingRequest_Event__request__MAX_SIZE = 1
};
// response
enum
{
  x2robot_msgs__srv__HomingRequest_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/HomingRequest in the package x2robot_msgs.
typedef struct x2robot_msgs__srv__HomingRequest_Event
{
  service_msgs__msg__ServiceEventInfo info;
  x2robot_msgs__srv__HomingRequest_Request__Sequence request;
  x2robot_msgs__srv__HomingRequest_Response__Sequence response;
} x2robot_msgs__srv__HomingRequest_Event;

// Struct for a sequence of x2robot_msgs__srv__HomingRequest_Event.
typedef struct x2robot_msgs__srv__HomingRequest_Event__Sequence
{
  x2robot_msgs__srv__HomingRequest_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__srv__HomingRequest_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // X2ROBOT_MSGS__SRV__DETAIL__HOMING_REQUEST__STRUCT_H_
