// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from x2robot_msgs:action/WholeBodyTestOnce.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/action/whole_body_test_once.h"


#ifndef X2ROBOT_MSGS__ACTION__DETAIL__WHOLE_BODY_TEST_ONCE__STRUCT_H_
#define X2ROBOT_MSGS__ACTION__DETAIL__WHOLE_BODY_TEST_ONCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/WholeBodyTestOnce in the package x2robot_msgs.
typedef struct x2robot_msgs__action__WholeBodyTestOnce_Goal
{
  float max_velocity_scaling_factor;
  float max_acceleration_scaling_factor;
} x2robot_msgs__action__WholeBodyTestOnce_Goal;

// Struct for a sequence of x2robot_msgs__action__WholeBodyTestOnce_Goal.
typedef struct x2robot_msgs__action__WholeBodyTestOnce_Goal__Sequence
{
  x2robot_msgs__action__WholeBodyTestOnce_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__action__WholeBodyTestOnce_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// Member 'successful_poses'
// Member 'failed_poses'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/WholeBodyTestOnce in the package x2robot_msgs.
typedef struct x2robot_msgs__action__WholeBodyTestOnce_Result
{
  /// Result definition
  bool success;
  rosidl_runtime_c__String message;
  rosidl_runtime_c__String__Sequence successful_poses;
  rosidl_runtime_c__String__Sequence failed_poses;
} x2robot_msgs__action__WholeBodyTestOnce_Result;

// Struct for a sequence of x2robot_msgs__action__WholeBodyTestOnce_Result.
typedef struct x2robot_msgs__action__WholeBodyTestOnce_Result__Sequence
{
  x2robot_msgs__action__WholeBodyTestOnce_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__action__WholeBodyTestOnce_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'current_pose'
// Member 'successful_poses'
// Member 'failed_poses'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/WholeBodyTestOnce in the package x2robot_msgs.
typedef struct x2robot_msgs__action__WholeBodyTestOnce_Feedback
{
  /// Feedback definition
  rosidl_runtime_c__String current_pose;
  float progress;
  rosidl_runtime_c__String__Sequence successful_poses;
  rosidl_runtime_c__String__Sequence failed_poses;
  int32_t total_poses;
  int32_t current_index;
} x2robot_msgs__action__WholeBodyTestOnce_Feedback;

// Struct for a sequence of x2robot_msgs__action__WholeBodyTestOnce_Feedback.
typedef struct x2robot_msgs__action__WholeBodyTestOnce_Feedback__Sequence
{
  x2robot_msgs__action__WholeBodyTestOnce_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__action__WholeBodyTestOnce_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "x2robot_msgs/action/detail/whole_body_test_once__struct.h"

/// Struct defined in action/WholeBodyTestOnce in the package x2robot_msgs.
typedef struct x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  x2robot_msgs__action__WholeBodyTestOnce_Goal goal;
} x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Request;

// Struct for a sequence of x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Request.
typedef struct x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Request__Sequence
{
  x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/WholeBodyTestOnce in the package x2robot_msgs.
typedef struct x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Response;

// Struct for a sequence of x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Response.
typedef struct x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Response__Sequence
{
  x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/WholeBodyTestOnce in the package x2robot_msgs.
typedef struct x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Request__Sequence request;
  x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Response__Sequence response;
} x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Event;

// Struct for a sequence of x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Event.
typedef struct x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Event__Sequence
{
  x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/WholeBodyTestOnce in the package x2robot_msgs.
typedef struct x2robot_msgs__action__WholeBodyTestOnce_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} x2robot_msgs__action__WholeBodyTestOnce_GetResult_Request;

// Struct for a sequence of x2robot_msgs__action__WholeBodyTestOnce_GetResult_Request.
typedef struct x2robot_msgs__action__WholeBodyTestOnce_GetResult_Request__Sequence
{
  x2robot_msgs__action__WholeBodyTestOnce_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__action__WholeBodyTestOnce_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "x2robot_msgs/action/detail/whole_body_test_once__struct.h"

/// Struct defined in action/WholeBodyTestOnce in the package x2robot_msgs.
typedef struct x2robot_msgs__action__WholeBodyTestOnce_GetResult_Response
{
  int8_t status;
  x2robot_msgs__action__WholeBodyTestOnce_Result result;
} x2robot_msgs__action__WholeBodyTestOnce_GetResult_Response;

// Struct for a sequence of x2robot_msgs__action__WholeBodyTestOnce_GetResult_Response.
typedef struct x2robot_msgs__action__WholeBodyTestOnce_GetResult_Response__Sequence
{
  x2robot_msgs__action__WholeBodyTestOnce_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__action__WholeBodyTestOnce_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  x2robot_msgs__action__WholeBodyTestOnce_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  x2robot_msgs__action__WholeBodyTestOnce_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/WholeBodyTestOnce in the package x2robot_msgs.
typedef struct x2robot_msgs__action__WholeBodyTestOnce_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  x2robot_msgs__action__WholeBodyTestOnce_GetResult_Request__Sequence request;
  x2robot_msgs__action__WholeBodyTestOnce_GetResult_Response__Sequence response;
} x2robot_msgs__action__WholeBodyTestOnce_GetResult_Event;

// Struct for a sequence of x2robot_msgs__action__WholeBodyTestOnce_GetResult_Event.
typedef struct x2robot_msgs__action__WholeBodyTestOnce_GetResult_Event__Sequence
{
  x2robot_msgs__action__WholeBodyTestOnce_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__action__WholeBodyTestOnce_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "x2robot_msgs/action/detail/whole_body_test_once__struct.h"

/// Struct defined in action/WholeBodyTestOnce in the package x2robot_msgs.
typedef struct x2robot_msgs__action__WholeBodyTestOnce_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  x2robot_msgs__action__WholeBodyTestOnce_Feedback feedback;
} x2robot_msgs__action__WholeBodyTestOnce_FeedbackMessage;

// Struct for a sequence of x2robot_msgs__action__WholeBodyTestOnce_FeedbackMessage.
typedef struct x2robot_msgs__action__WholeBodyTestOnce_FeedbackMessage__Sequence
{
  x2robot_msgs__action__WholeBodyTestOnce_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__action__WholeBodyTestOnce_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // X2ROBOT_MSGS__ACTION__DETAIL__WHOLE_BODY_TEST_ONCE__STRUCT_H_
