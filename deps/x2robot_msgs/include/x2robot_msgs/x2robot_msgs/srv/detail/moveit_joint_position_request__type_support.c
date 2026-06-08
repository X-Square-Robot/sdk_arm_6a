// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from x2robot_msgs:srv/MoveitJointPositionRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "x2robot_msgs/srv/detail/moveit_joint_position_request__rosidl_typesupport_introspection_c.h"
#include "x2robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "x2robot_msgs/srv/detail/moveit_joint_position_request__functions.h"
#include "x2robot_msgs/srv/detail/moveit_joint_position_request__struct.h"


// Include directives for member types
// Member `joint_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `joint_positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  x2robot_msgs__srv__MoveitJointPositionRequest_Request__init(message_memory);
}

void x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Request_fini_function(void * message_memory)
{
  x2robot_msgs__srv__MoveitJointPositionRequest_Request__fini(message_memory);
}

size_t x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__size_function__MoveitJointPositionRequest_Request__joint_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__get_const_function__MoveitJointPositionRequest_Request__joint_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__get_function__MoveitJointPositionRequest_Request__joint_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__fetch_function__MoveitJointPositionRequest_Request__joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__get_const_function__MoveitJointPositionRequest_Request__joint_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__assign_function__MoveitJointPositionRequest_Request__joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__get_function__MoveitJointPositionRequest_Request__joint_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__resize_function__MoveitJointPositionRequest_Request__joint_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__size_function__MoveitJointPositionRequest_Request__joint_positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__get_const_function__MoveitJointPositionRequest_Request__joint_positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__get_function__MoveitJointPositionRequest_Request__joint_positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__fetch_function__MoveitJointPositionRequest_Request__joint_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__get_const_function__MoveitJointPositionRequest_Request__joint_positions(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__assign_function__MoveitJointPositionRequest_Request__joint_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__get_function__MoveitJointPositionRequest_Request__joint_positions(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__resize_function__MoveitJointPositionRequest_Request__joint_positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Request_message_member_array[6] = {
  {
    "joint_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__srv__MoveitJointPositionRequest_Request, joint_names),  // bytes offset in struct
    NULL,  // default value
    x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__size_function__MoveitJointPositionRequest_Request__joint_names,  // size() function pointer
    x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__get_const_function__MoveitJointPositionRequest_Request__joint_names,  // get_const(index) function pointer
    x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__get_function__MoveitJointPositionRequest_Request__joint_names,  // get(index) function pointer
    x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__fetch_function__MoveitJointPositionRequest_Request__joint_names,  // fetch(index, &value) function pointer
    x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__assign_function__MoveitJointPositionRequest_Request__joint_names,  // assign(index, value) function pointer
    x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__resize_function__MoveitJointPositionRequest_Request__joint_names  // resize(index) function pointer
  },
  {
    "joint_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__srv__MoveitJointPositionRequest_Request, joint_positions),  // bytes offset in struct
    NULL,  // default value
    x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__size_function__MoveitJointPositionRequest_Request__joint_positions,  // size() function pointer
    x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__get_const_function__MoveitJointPositionRequest_Request__joint_positions,  // get_const(index) function pointer
    x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__get_function__MoveitJointPositionRequest_Request__joint_positions,  // get(index) function pointer
    x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__fetch_function__MoveitJointPositionRequest_Request__joint_positions,  // fetch(index, &value) function pointer
    x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__assign_function__MoveitJointPositionRequest_Request__joint_positions,  // assign(index, value) function pointer
    x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__resize_function__MoveitJointPositionRequest_Request__joint_positions  // resize(index) function pointer
  },
  {
    "num_planning_attempts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__srv__MoveitJointPositionRequest_Request, num_planning_attempts),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "allowed_planning_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__srv__MoveitJointPositionRequest_Request, allowed_planning_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_velocity_scaling_factor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__srv__MoveitJointPositionRequest_Request, max_velocity_scaling_factor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_acceleration_scaling_factor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__srv__MoveitJointPositionRequest_Request, max_acceleration_scaling_factor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Request_message_members = {
  "x2robot_msgs__srv",  // message namespace
  "MoveitJointPositionRequest_Request",  // message name
  6,  // number of fields
  sizeof(x2robot_msgs__srv__MoveitJointPositionRequest_Request),
  false,  // has_any_key_member_
  x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Request_message_member_array,  // message members
  x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Request_message_type_support_handle = {
  0,
  &x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Request_message_members,
  get_message_typesupport_handle_function,
  &x2robot_msgs__srv__MoveitJointPositionRequest_Request__get_type_hash,
  &x2robot_msgs__srv__MoveitJointPositionRequest_Request__get_type_description,
  &x2robot_msgs__srv__MoveitJointPositionRequest_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_x2robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, srv, MoveitJointPositionRequest_Request)() {
  if (!x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Request_message_type_support_handle.typesupport_identifier) {
    x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "x2robot_msgs/srv/detail/moveit_joint_position_request__rosidl_typesupport_introspection_c.h"
// already included above
// #include "x2robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "x2robot_msgs/srv/detail/moveit_joint_position_request__functions.h"
// already included above
// #include "x2robot_msgs/srv/detail/moveit_joint_position_request__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void x2robot_msgs__srv__MoveitJointPositionRequest_Response__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  x2robot_msgs__srv__MoveitJointPositionRequest_Response__init(message_memory);
}

void x2robot_msgs__srv__MoveitJointPositionRequest_Response__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Response_fini_function(void * message_memory)
{
  x2robot_msgs__srv__MoveitJointPositionRequest_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember x2robot_msgs__srv__MoveitJointPositionRequest_Response__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Response_message_member_array[2] = {
  {
    "moveit_move_result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__srv__MoveitJointPositionRequest_Response, moveit_move_result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__srv__MoveitJointPositionRequest_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers x2robot_msgs__srv__MoveitJointPositionRequest_Response__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Response_message_members = {
  "x2robot_msgs__srv",  // message namespace
  "MoveitJointPositionRequest_Response",  // message name
  2,  // number of fields
  sizeof(x2robot_msgs__srv__MoveitJointPositionRequest_Response),
  false,  // has_any_key_member_
  x2robot_msgs__srv__MoveitJointPositionRequest_Response__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Response_message_member_array,  // message members
  x2robot_msgs__srv__MoveitJointPositionRequest_Response__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  x2robot_msgs__srv__MoveitJointPositionRequest_Response__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t x2robot_msgs__srv__MoveitJointPositionRequest_Response__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Response_message_type_support_handle = {
  0,
  &x2robot_msgs__srv__MoveitJointPositionRequest_Response__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Response_message_members,
  get_message_typesupport_handle_function,
  &x2robot_msgs__srv__MoveitJointPositionRequest_Response__get_type_hash,
  &x2robot_msgs__srv__MoveitJointPositionRequest_Response__get_type_description,
  &x2robot_msgs__srv__MoveitJointPositionRequest_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_x2robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, srv, MoveitJointPositionRequest_Response)() {
  if (!x2robot_msgs__srv__MoveitJointPositionRequest_Response__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Response_message_type_support_handle.typesupport_identifier) {
    x2robot_msgs__srv__MoveitJointPositionRequest_Response__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &x2robot_msgs__srv__MoveitJointPositionRequest_Response__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "x2robot_msgs/srv/detail/moveit_joint_position_request__rosidl_typesupport_introspection_c.h"
// already included above
// #include "x2robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "x2robot_msgs/srv/detail/moveit_joint_position_request__functions.h"
// already included above
// #include "x2robot_msgs/srv/detail/moveit_joint_position_request__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "x2robot_msgs/srv/moveit_joint_position_request.h"
// Member `request`
// Member `response`
// already included above
// #include "x2robot_msgs/srv/detail/moveit_joint_position_request__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  x2robot_msgs__srv__MoveitJointPositionRequest_Event__init(message_memory);
}

void x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Event_fini_function(void * message_memory)
{
  x2robot_msgs__srv__MoveitJointPositionRequest_Event__fini(message_memory);
}

size_t x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__size_function__MoveitJointPositionRequest_Event__request(
  const void * untyped_member)
{
  const x2robot_msgs__srv__MoveitJointPositionRequest_Request__Sequence * member =
    (const x2robot_msgs__srv__MoveitJointPositionRequest_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__get_const_function__MoveitJointPositionRequest_Event__request(
  const void * untyped_member, size_t index)
{
  const x2robot_msgs__srv__MoveitJointPositionRequest_Request__Sequence * member =
    (const x2robot_msgs__srv__MoveitJointPositionRequest_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__get_function__MoveitJointPositionRequest_Event__request(
  void * untyped_member, size_t index)
{
  x2robot_msgs__srv__MoveitJointPositionRequest_Request__Sequence * member =
    (x2robot_msgs__srv__MoveitJointPositionRequest_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__fetch_function__MoveitJointPositionRequest_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const x2robot_msgs__srv__MoveitJointPositionRequest_Request * item =
    ((const x2robot_msgs__srv__MoveitJointPositionRequest_Request *)
    x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__get_const_function__MoveitJointPositionRequest_Event__request(untyped_member, index));
  x2robot_msgs__srv__MoveitJointPositionRequest_Request * value =
    (x2robot_msgs__srv__MoveitJointPositionRequest_Request *)(untyped_value);
  *value = *item;
}

void x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__assign_function__MoveitJointPositionRequest_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  x2robot_msgs__srv__MoveitJointPositionRequest_Request * item =
    ((x2robot_msgs__srv__MoveitJointPositionRequest_Request *)
    x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__get_function__MoveitJointPositionRequest_Event__request(untyped_member, index));
  const x2robot_msgs__srv__MoveitJointPositionRequest_Request * value =
    (const x2robot_msgs__srv__MoveitJointPositionRequest_Request *)(untyped_value);
  *item = *value;
}

bool x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__resize_function__MoveitJointPositionRequest_Event__request(
  void * untyped_member, size_t size)
{
  x2robot_msgs__srv__MoveitJointPositionRequest_Request__Sequence * member =
    (x2robot_msgs__srv__MoveitJointPositionRequest_Request__Sequence *)(untyped_member);
  x2robot_msgs__srv__MoveitJointPositionRequest_Request__Sequence__fini(member);
  return x2robot_msgs__srv__MoveitJointPositionRequest_Request__Sequence__init(member, size);
}

size_t x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__size_function__MoveitJointPositionRequest_Event__response(
  const void * untyped_member)
{
  const x2robot_msgs__srv__MoveitJointPositionRequest_Response__Sequence * member =
    (const x2robot_msgs__srv__MoveitJointPositionRequest_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__get_const_function__MoveitJointPositionRequest_Event__response(
  const void * untyped_member, size_t index)
{
  const x2robot_msgs__srv__MoveitJointPositionRequest_Response__Sequence * member =
    (const x2robot_msgs__srv__MoveitJointPositionRequest_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__get_function__MoveitJointPositionRequest_Event__response(
  void * untyped_member, size_t index)
{
  x2robot_msgs__srv__MoveitJointPositionRequest_Response__Sequence * member =
    (x2robot_msgs__srv__MoveitJointPositionRequest_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__fetch_function__MoveitJointPositionRequest_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const x2robot_msgs__srv__MoveitJointPositionRequest_Response * item =
    ((const x2robot_msgs__srv__MoveitJointPositionRequest_Response *)
    x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__get_const_function__MoveitJointPositionRequest_Event__response(untyped_member, index));
  x2robot_msgs__srv__MoveitJointPositionRequest_Response * value =
    (x2robot_msgs__srv__MoveitJointPositionRequest_Response *)(untyped_value);
  *value = *item;
}

void x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__assign_function__MoveitJointPositionRequest_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  x2robot_msgs__srv__MoveitJointPositionRequest_Response * item =
    ((x2robot_msgs__srv__MoveitJointPositionRequest_Response *)
    x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__get_function__MoveitJointPositionRequest_Event__response(untyped_member, index));
  const x2robot_msgs__srv__MoveitJointPositionRequest_Response * value =
    (const x2robot_msgs__srv__MoveitJointPositionRequest_Response *)(untyped_value);
  *item = *value;
}

bool x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__resize_function__MoveitJointPositionRequest_Event__response(
  void * untyped_member, size_t size)
{
  x2robot_msgs__srv__MoveitJointPositionRequest_Response__Sequence * member =
    (x2robot_msgs__srv__MoveitJointPositionRequest_Response__Sequence *)(untyped_member);
  x2robot_msgs__srv__MoveitJointPositionRequest_Response__Sequence__fini(member);
  return x2robot_msgs__srv__MoveitJointPositionRequest_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__srv__MoveitJointPositionRequest_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(x2robot_msgs__srv__MoveitJointPositionRequest_Event, request),  // bytes offset in struct
    NULL,  // default value
    x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__size_function__MoveitJointPositionRequest_Event__request,  // size() function pointer
    x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__get_const_function__MoveitJointPositionRequest_Event__request,  // get_const(index) function pointer
    x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__get_function__MoveitJointPositionRequest_Event__request,  // get(index) function pointer
    x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__fetch_function__MoveitJointPositionRequest_Event__request,  // fetch(index, &value) function pointer
    x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__assign_function__MoveitJointPositionRequest_Event__request,  // assign(index, value) function pointer
    x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__resize_function__MoveitJointPositionRequest_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(x2robot_msgs__srv__MoveitJointPositionRequest_Event, response),  // bytes offset in struct
    NULL,  // default value
    x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__size_function__MoveitJointPositionRequest_Event__response,  // size() function pointer
    x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__get_const_function__MoveitJointPositionRequest_Event__response,  // get_const(index) function pointer
    x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__get_function__MoveitJointPositionRequest_Event__response,  // get(index) function pointer
    x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__fetch_function__MoveitJointPositionRequest_Event__response,  // fetch(index, &value) function pointer
    x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__assign_function__MoveitJointPositionRequest_Event__response,  // assign(index, value) function pointer
    x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__resize_function__MoveitJointPositionRequest_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Event_message_members = {
  "x2robot_msgs__srv",  // message namespace
  "MoveitJointPositionRequest_Event",  // message name
  3,  // number of fields
  sizeof(x2robot_msgs__srv__MoveitJointPositionRequest_Event),
  false,  // has_any_key_member_
  x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Event_message_member_array,  // message members
  x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Event_message_type_support_handle = {
  0,
  &x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Event_message_members,
  get_message_typesupport_handle_function,
  &x2robot_msgs__srv__MoveitJointPositionRequest_Event__get_type_hash,
  &x2robot_msgs__srv__MoveitJointPositionRequest_Event__get_type_description,
  &x2robot_msgs__srv__MoveitJointPositionRequest_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_x2robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, srv, MoveitJointPositionRequest_Event)() {
  x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, srv, MoveitJointPositionRequest_Request)();
  x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, srv, MoveitJointPositionRequest_Response)();
  if (!x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Event_message_type_support_handle.typesupport_identifier) {
    x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "x2robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "x2robot_msgs/srv/detail/moveit_joint_position_request__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers x2robot_msgs__srv__detail__moveit_joint_position_request__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_service_members = {
  "x2robot_msgs__srv",  // service namespace
  "MoveitJointPositionRequest",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // x2robot_msgs__srv__detail__moveit_joint_position_request__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Request_message_type_support_handle,
  NULL,  // response message
  // x2robot_msgs__srv__detail__moveit_joint_position_request__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Response_message_type_support_handle
  NULL  // event_message
  // x2robot_msgs__srv__detail__moveit_joint_position_request__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Response_message_type_support_handle
};


static rosidl_service_type_support_t x2robot_msgs__srv__detail__moveit_joint_position_request__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_service_type_support_handle = {
  0,
  &x2robot_msgs__srv__detail__moveit_joint_position_request__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_service_members,
  get_service_typesupport_handle_function,
  &x2robot_msgs__srv__MoveitJointPositionRequest_Request__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Request_message_type_support_handle,
  &x2robot_msgs__srv__MoveitJointPositionRequest_Response__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Response_message_type_support_handle,
  &x2robot_msgs__srv__MoveitJointPositionRequest_Event__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    x2robot_msgs,
    srv,
    MoveitJointPositionRequest
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    x2robot_msgs,
    srv,
    MoveitJointPositionRequest
  ),
  &x2robot_msgs__srv__MoveitJointPositionRequest__get_type_hash,
  &x2robot_msgs__srv__MoveitJointPositionRequest__get_type_description,
  &x2robot_msgs__srv__MoveitJointPositionRequest__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, srv, MoveitJointPositionRequest_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, srv, MoveitJointPositionRequest_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, srv, MoveitJointPositionRequest_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_x2robot_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, srv, MoveitJointPositionRequest)(void) {
  if (!x2robot_msgs__srv__detail__moveit_joint_position_request__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_service_type_support_handle.typesupport_identifier) {
    x2robot_msgs__srv__detail__moveit_joint_position_request__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)x2robot_msgs__srv__detail__moveit_joint_position_request__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, srv, MoveitJointPositionRequest_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, srv, MoveitJointPositionRequest_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, srv, MoveitJointPositionRequest_Event)()->data;
  }

  return &x2robot_msgs__srv__detail__moveit_joint_position_request__rosidl_typesupport_introspection_c__MoveitJointPositionRequest_service_type_support_handle;
}
