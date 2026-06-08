// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from x2robot_msgs:srv/TrajectoryPlanRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/srv/trajectory_plan_request.h"


#ifndef X2ROBOT_MSGS__SRV__DETAIL__TRAJECTORY_PLAN_REQUEST__STRUCT_H_
#define X2ROBOT_MSGS__SRV__DETAIL__TRAJECTORY_PLAN_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'group_name'
// Member 'start_state_joint_names'
// Member 'goal_state_joint_names'
#include "rosidl_runtime_c/string.h"
// Member 'start_states'
// Member 'goal_states'
// Member 'tolerance_above'
// Member 'tolerance_below'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/TrajectoryPlanRequest in the package x2robot_msgs.
typedef struct x2robot_msgs__srv__TrajectoryPlanRequest_Request
{
  rosidl_runtime_c__String group_name;
  rosidl_runtime_c__String__Sequence start_state_joint_names;
  rosidl_runtime_c__double__Sequence start_states;
  rosidl_runtime_c__String__Sequence goal_state_joint_names;
  rosidl_runtime_c__double__Sequence goal_states;
  rosidl_runtime_c__double__Sequence tolerance_above;
  rosidl_runtime_c__double__Sequence tolerance_below;
  uint8_t num_planning_attempts;
  double allowed_planning_time;
  double max_velocity_scaling_factor;
  double max_acceleration_scaling_factor;
} x2robot_msgs__srv__TrajectoryPlanRequest_Request;

// Struct for a sequence of x2robot_msgs__srv__TrajectoryPlanRequest_Request.
typedef struct x2robot_msgs__srv__TrajectoryPlanRequest_Request__Sequence
{
  x2robot_msgs__srv__TrajectoryPlanRequest_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__srv__TrajectoryPlanRequest_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.h"

/// Struct defined in srv/TrajectoryPlanRequest in the package x2robot_msgs.
typedef struct x2robot_msgs__srv__TrajectoryPlanRequest_Response
{
  int32_t error_code;
  trajectory_msgs__msg__JointTrajectory trajectory;
} x2robot_msgs__srv__TrajectoryPlanRequest_Response;

// Struct for a sequence of x2robot_msgs__srv__TrajectoryPlanRequest_Response.
typedef struct x2robot_msgs__srv__TrajectoryPlanRequest_Response__Sequence
{
  x2robot_msgs__srv__TrajectoryPlanRequest_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__srv__TrajectoryPlanRequest_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  x2robot_msgs__srv__TrajectoryPlanRequest_Event__request__MAX_SIZE = 1
};
// response
enum
{
  x2robot_msgs__srv__TrajectoryPlanRequest_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/TrajectoryPlanRequest in the package x2robot_msgs.
typedef struct x2robot_msgs__srv__TrajectoryPlanRequest_Event
{
  service_msgs__msg__ServiceEventInfo info;
  x2robot_msgs__srv__TrajectoryPlanRequest_Request__Sequence request;
  x2robot_msgs__srv__TrajectoryPlanRequest_Response__Sequence response;
} x2robot_msgs__srv__TrajectoryPlanRequest_Event;

// Struct for a sequence of x2robot_msgs__srv__TrajectoryPlanRequest_Event.
typedef struct x2robot_msgs__srv__TrajectoryPlanRequest_Event__Sequence
{
  x2robot_msgs__srv__TrajectoryPlanRequest_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__srv__TrajectoryPlanRequest_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // X2ROBOT_MSGS__SRV__DETAIL__TRAJECTORY_PLAN_REQUEST__STRUCT_H_
