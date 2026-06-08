// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from x2robot_msgs:srv/TrajectoryPlanRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "x2robot_msgs/srv/detail/trajectory_plan_request__rosidl_typesupport_introspection_c.h"
#include "x2robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "x2robot_msgs/srv/detail/trajectory_plan_request__functions.h"
#include "x2robot_msgs/srv/detail/trajectory_plan_request__struct.h"


// Include directives for member types
// Member `group_name`
// Member `start_state_joint_names`
// Member `goal_state_joint_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `start_states`
// Member `goal_states`
// Member `tolerance_above`
// Member `tolerance_below`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  x2robot_msgs__srv__TrajectoryPlanRequest_Request__init(message_memory);
}

void x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Request_fini_function(void * message_memory)
{
  x2robot_msgs__srv__TrajectoryPlanRequest_Request__fini(message_memory);
}

size_t x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__size_function__TrajectoryPlanRequest_Request__start_state_joint_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlanRequest_Request__start_state_joint_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_function__TrajectoryPlanRequest_Request__start_state_joint_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlanRequest_Request__start_state_joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlanRequest_Request__start_state_joint_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlanRequest_Request__start_state_joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_function__TrajectoryPlanRequest_Request__start_state_joint_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlanRequest_Request__start_state_joint_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__size_function__TrajectoryPlanRequest_Request__start_states(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlanRequest_Request__start_states(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_function__TrajectoryPlanRequest_Request__start_states(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlanRequest_Request__start_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlanRequest_Request__start_states(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlanRequest_Request__start_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_function__TrajectoryPlanRequest_Request__start_states(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlanRequest_Request__start_states(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__size_function__TrajectoryPlanRequest_Request__goal_state_joint_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlanRequest_Request__goal_state_joint_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_function__TrajectoryPlanRequest_Request__goal_state_joint_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlanRequest_Request__goal_state_joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlanRequest_Request__goal_state_joint_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlanRequest_Request__goal_state_joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_function__TrajectoryPlanRequest_Request__goal_state_joint_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlanRequest_Request__goal_state_joint_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__size_function__TrajectoryPlanRequest_Request__goal_states(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlanRequest_Request__goal_states(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_function__TrajectoryPlanRequest_Request__goal_states(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlanRequest_Request__goal_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlanRequest_Request__goal_states(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlanRequest_Request__goal_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_function__TrajectoryPlanRequest_Request__goal_states(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlanRequest_Request__goal_states(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__size_function__TrajectoryPlanRequest_Request__tolerance_above(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlanRequest_Request__tolerance_above(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_function__TrajectoryPlanRequest_Request__tolerance_above(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlanRequest_Request__tolerance_above(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlanRequest_Request__tolerance_above(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlanRequest_Request__tolerance_above(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_function__TrajectoryPlanRequest_Request__tolerance_above(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlanRequest_Request__tolerance_above(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__size_function__TrajectoryPlanRequest_Request__tolerance_below(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlanRequest_Request__tolerance_below(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_function__TrajectoryPlanRequest_Request__tolerance_below(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlanRequest_Request__tolerance_below(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlanRequest_Request__tolerance_below(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlanRequest_Request__tolerance_below(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_function__TrajectoryPlanRequest_Request__tolerance_below(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlanRequest_Request__tolerance_below(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Request_message_member_array[11] = {
  {
    "group_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__srv__TrajectoryPlanRequest_Request, group_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_state_joint_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__srv__TrajectoryPlanRequest_Request, start_state_joint_names),  // bytes offset in struct
    NULL,  // default value
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__size_function__TrajectoryPlanRequest_Request__start_state_joint_names,  // size() function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlanRequest_Request__start_state_joint_names,  // get_const(index) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_function__TrajectoryPlanRequest_Request__start_state_joint_names,  // get(index) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlanRequest_Request__start_state_joint_names,  // fetch(index, &value) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlanRequest_Request__start_state_joint_names,  // assign(index, value) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlanRequest_Request__start_state_joint_names  // resize(index) function pointer
  },
  {
    "start_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__srv__TrajectoryPlanRequest_Request, start_states),  // bytes offset in struct
    NULL,  // default value
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__size_function__TrajectoryPlanRequest_Request__start_states,  // size() function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlanRequest_Request__start_states,  // get_const(index) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_function__TrajectoryPlanRequest_Request__start_states,  // get(index) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlanRequest_Request__start_states,  // fetch(index, &value) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlanRequest_Request__start_states,  // assign(index, value) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlanRequest_Request__start_states  // resize(index) function pointer
  },
  {
    "goal_state_joint_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__srv__TrajectoryPlanRequest_Request, goal_state_joint_names),  // bytes offset in struct
    NULL,  // default value
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__size_function__TrajectoryPlanRequest_Request__goal_state_joint_names,  // size() function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlanRequest_Request__goal_state_joint_names,  // get_const(index) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_function__TrajectoryPlanRequest_Request__goal_state_joint_names,  // get(index) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlanRequest_Request__goal_state_joint_names,  // fetch(index, &value) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlanRequest_Request__goal_state_joint_names,  // assign(index, value) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlanRequest_Request__goal_state_joint_names  // resize(index) function pointer
  },
  {
    "goal_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__srv__TrajectoryPlanRequest_Request, goal_states),  // bytes offset in struct
    NULL,  // default value
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__size_function__TrajectoryPlanRequest_Request__goal_states,  // size() function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlanRequest_Request__goal_states,  // get_const(index) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_function__TrajectoryPlanRequest_Request__goal_states,  // get(index) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlanRequest_Request__goal_states,  // fetch(index, &value) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlanRequest_Request__goal_states,  // assign(index, value) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlanRequest_Request__goal_states  // resize(index) function pointer
  },
  {
    "tolerance_above",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__srv__TrajectoryPlanRequest_Request, tolerance_above),  // bytes offset in struct
    NULL,  // default value
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__size_function__TrajectoryPlanRequest_Request__tolerance_above,  // size() function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlanRequest_Request__tolerance_above,  // get_const(index) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_function__TrajectoryPlanRequest_Request__tolerance_above,  // get(index) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlanRequest_Request__tolerance_above,  // fetch(index, &value) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlanRequest_Request__tolerance_above,  // assign(index, value) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlanRequest_Request__tolerance_above  // resize(index) function pointer
  },
  {
    "tolerance_below",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__srv__TrajectoryPlanRequest_Request, tolerance_below),  // bytes offset in struct
    NULL,  // default value
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__size_function__TrajectoryPlanRequest_Request__tolerance_below,  // size() function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlanRequest_Request__tolerance_below,  // get_const(index) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__get_function__TrajectoryPlanRequest_Request__tolerance_below,  // get(index) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlanRequest_Request__tolerance_below,  // fetch(index, &value) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlanRequest_Request__tolerance_below,  // assign(index, value) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlanRequest_Request__tolerance_below  // resize(index) function pointer
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
    offsetof(x2robot_msgs__srv__TrajectoryPlanRequest_Request, num_planning_attempts),  // bytes offset in struct
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
    offsetof(x2robot_msgs__srv__TrajectoryPlanRequest_Request, allowed_planning_time),  // bytes offset in struct
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
    offsetof(x2robot_msgs__srv__TrajectoryPlanRequest_Request, max_velocity_scaling_factor),  // bytes offset in struct
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
    offsetof(x2robot_msgs__srv__TrajectoryPlanRequest_Request, max_acceleration_scaling_factor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Request_message_members = {
  "x2robot_msgs__srv",  // message namespace
  "TrajectoryPlanRequest_Request",  // message name
  11,  // number of fields
  sizeof(x2robot_msgs__srv__TrajectoryPlanRequest_Request),
  false,  // has_any_key_member_
  x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Request_message_member_array,  // message members
  x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Request_message_type_support_handle = {
  0,
  &x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Request_message_members,
  get_message_typesupport_handle_function,
  &x2robot_msgs__srv__TrajectoryPlanRequest_Request__get_type_hash,
  &x2robot_msgs__srv__TrajectoryPlanRequest_Request__get_type_description,
  &x2robot_msgs__srv__TrajectoryPlanRequest_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_x2robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, srv, TrajectoryPlanRequest_Request)() {
  if (!x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Request_message_type_support_handle.typesupport_identifier) {
    x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "x2robot_msgs/srv/detail/trajectory_plan_request__rosidl_typesupport_introspection_c.h"
// already included above
// #include "x2robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "x2robot_msgs/srv/detail/trajectory_plan_request__functions.h"
// already included above
// #include "x2robot_msgs/srv/detail/trajectory_plan_request__struct.h"


// Include directives for member types
// Member `trajectory`
#include "trajectory_msgs/msg/joint_trajectory.h"
// Member `trajectory`
#include "trajectory_msgs/msg/detail/joint_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void x2robot_msgs__srv__TrajectoryPlanRequest_Response__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  x2robot_msgs__srv__TrajectoryPlanRequest_Response__init(message_memory);
}

void x2robot_msgs__srv__TrajectoryPlanRequest_Response__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Response_fini_function(void * message_memory)
{
  x2robot_msgs__srv__TrajectoryPlanRequest_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember x2robot_msgs__srv__TrajectoryPlanRequest_Response__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Response_message_member_array[2] = {
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__srv__TrajectoryPlanRequest_Response, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__srv__TrajectoryPlanRequest_Response, trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers x2robot_msgs__srv__TrajectoryPlanRequest_Response__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Response_message_members = {
  "x2robot_msgs__srv",  // message namespace
  "TrajectoryPlanRequest_Response",  // message name
  2,  // number of fields
  sizeof(x2robot_msgs__srv__TrajectoryPlanRequest_Response),
  false,  // has_any_key_member_
  x2robot_msgs__srv__TrajectoryPlanRequest_Response__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Response_message_member_array,  // message members
  x2robot_msgs__srv__TrajectoryPlanRequest_Response__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  x2robot_msgs__srv__TrajectoryPlanRequest_Response__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t x2robot_msgs__srv__TrajectoryPlanRequest_Response__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Response_message_type_support_handle = {
  0,
  &x2robot_msgs__srv__TrajectoryPlanRequest_Response__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Response_message_members,
  get_message_typesupport_handle_function,
  &x2robot_msgs__srv__TrajectoryPlanRequest_Response__get_type_hash,
  &x2robot_msgs__srv__TrajectoryPlanRequest_Response__get_type_description,
  &x2robot_msgs__srv__TrajectoryPlanRequest_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_x2robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, srv, TrajectoryPlanRequest_Response)() {
  x2robot_msgs__srv__TrajectoryPlanRequest_Response__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectory)();
  if (!x2robot_msgs__srv__TrajectoryPlanRequest_Response__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Response_message_type_support_handle.typesupport_identifier) {
    x2robot_msgs__srv__TrajectoryPlanRequest_Response__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &x2robot_msgs__srv__TrajectoryPlanRequest_Response__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "x2robot_msgs/srv/detail/trajectory_plan_request__rosidl_typesupport_introspection_c.h"
// already included above
// #include "x2robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "x2robot_msgs/srv/detail/trajectory_plan_request__functions.h"
// already included above
// #include "x2robot_msgs/srv/detail/trajectory_plan_request__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "x2robot_msgs/srv/trajectory_plan_request.h"
// Member `request`
// Member `response`
// already included above
// #include "x2robot_msgs/srv/detail/trajectory_plan_request__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  x2robot_msgs__srv__TrajectoryPlanRequest_Event__init(message_memory);
}

void x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Event_fini_function(void * message_memory)
{
  x2robot_msgs__srv__TrajectoryPlanRequest_Event__fini(message_memory);
}

size_t x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__size_function__TrajectoryPlanRequest_Event__request(
  const void * untyped_member)
{
  const x2robot_msgs__srv__TrajectoryPlanRequest_Request__Sequence * member =
    (const x2robot_msgs__srv__TrajectoryPlanRequest_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlanRequest_Event__request(
  const void * untyped_member, size_t index)
{
  const x2robot_msgs__srv__TrajectoryPlanRequest_Request__Sequence * member =
    (const x2robot_msgs__srv__TrajectoryPlanRequest_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__get_function__TrajectoryPlanRequest_Event__request(
  void * untyped_member, size_t index)
{
  x2robot_msgs__srv__TrajectoryPlanRequest_Request__Sequence * member =
    (x2robot_msgs__srv__TrajectoryPlanRequest_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlanRequest_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const x2robot_msgs__srv__TrajectoryPlanRequest_Request * item =
    ((const x2robot_msgs__srv__TrajectoryPlanRequest_Request *)
    x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlanRequest_Event__request(untyped_member, index));
  x2robot_msgs__srv__TrajectoryPlanRequest_Request * value =
    (x2robot_msgs__srv__TrajectoryPlanRequest_Request *)(untyped_value);
  *value = *item;
}

void x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlanRequest_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  x2robot_msgs__srv__TrajectoryPlanRequest_Request * item =
    ((x2robot_msgs__srv__TrajectoryPlanRequest_Request *)
    x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__get_function__TrajectoryPlanRequest_Event__request(untyped_member, index));
  const x2robot_msgs__srv__TrajectoryPlanRequest_Request * value =
    (const x2robot_msgs__srv__TrajectoryPlanRequest_Request *)(untyped_value);
  *item = *value;
}

bool x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlanRequest_Event__request(
  void * untyped_member, size_t size)
{
  x2robot_msgs__srv__TrajectoryPlanRequest_Request__Sequence * member =
    (x2robot_msgs__srv__TrajectoryPlanRequest_Request__Sequence *)(untyped_member);
  x2robot_msgs__srv__TrajectoryPlanRequest_Request__Sequence__fini(member);
  return x2robot_msgs__srv__TrajectoryPlanRequest_Request__Sequence__init(member, size);
}

size_t x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__size_function__TrajectoryPlanRequest_Event__response(
  const void * untyped_member)
{
  const x2robot_msgs__srv__TrajectoryPlanRequest_Response__Sequence * member =
    (const x2robot_msgs__srv__TrajectoryPlanRequest_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlanRequest_Event__response(
  const void * untyped_member, size_t index)
{
  const x2robot_msgs__srv__TrajectoryPlanRequest_Response__Sequence * member =
    (const x2robot_msgs__srv__TrajectoryPlanRequest_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__get_function__TrajectoryPlanRequest_Event__response(
  void * untyped_member, size_t index)
{
  x2robot_msgs__srv__TrajectoryPlanRequest_Response__Sequence * member =
    (x2robot_msgs__srv__TrajectoryPlanRequest_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlanRequest_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const x2robot_msgs__srv__TrajectoryPlanRequest_Response * item =
    ((const x2robot_msgs__srv__TrajectoryPlanRequest_Response *)
    x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlanRequest_Event__response(untyped_member, index));
  x2robot_msgs__srv__TrajectoryPlanRequest_Response * value =
    (x2robot_msgs__srv__TrajectoryPlanRequest_Response *)(untyped_value);
  *value = *item;
}

void x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlanRequest_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  x2robot_msgs__srv__TrajectoryPlanRequest_Response * item =
    ((x2robot_msgs__srv__TrajectoryPlanRequest_Response *)
    x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__get_function__TrajectoryPlanRequest_Event__response(untyped_member, index));
  const x2robot_msgs__srv__TrajectoryPlanRequest_Response * value =
    (const x2robot_msgs__srv__TrajectoryPlanRequest_Response *)(untyped_value);
  *item = *value;
}

bool x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlanRequest_Event__response(
  void * untyped_member, size_t size)
{
  x2robot_msgs__srv__TrajectoryPlanRequest_Response__Sequence * member =
    (x2robot_msgs__srv__TrajectoryPlanRequest_Response__Sequence *)(untyped_member);
  x2robot_msgs__srv__TrajectoryPlanRequest_Response__Sequence__fini(member);
  return x2robot_msgs__srv__TrajectoryPlanRequest_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__srv__TrajectoryPlanRequest_Event, info),  // bytes offset in struct
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
    offsetof(x2robot_msgs__srv__TrajectoryPlanRequest_Event, request),  // bytes offset in struct
    NULL,  // default value
    x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__size_function__TrajectoryPlanRequest_Event__request,  // size() function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlanRequest_Event__request,  // get_const(index) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__get_function__TrajectoryPlanRequest_Event__request,  // get(index) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlanRequest_Event__request,  // fetch(index, &value) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlanRequest_Event__request,  // assign(index, value) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlanRequest_Event__request  // resize(index) function pointer
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
    offsetof(x2robot_msgs__srv__TrajectoryPlanRequest_Event, response),  // bytes offset in struct
    NULL,  // default value
    x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__size_function__TrajectoryPlanRequest_Event__response,  // size() function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlanRequest_Event__response,  // get_const(index) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__get_function__TrajectoryPlanRequest_Event__response,  // get(index) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPlanRequest_Event__response,  // fetch(index, &value) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__assign_function__TrajectoryPlanRequest_Event__response,  // assign(index, value) function pointer
    x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlanRequest_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Event_message_members = {
  "x2robot_msgs__srv",  // message namespace
  "TrajectoryPlanRequest_Event",  // message name
  3,  // number of fields
  sizeof(x2robot_msgs__srv__TrajectoryPlanRequest_Event),
  false,  // has_any_key_member_
  x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Event_message_member_array,  // message members
  x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Event_message_type_support_handle = {
  0,
  &x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Event_message_members,
  get_message_typesupport_handle_function,
  &x2robot_msgs__srv__TrajectoryPlanRequest_Event__get_type_hash,
  &x2robot_msgs__srv__TrajectoryPlanRequest_Event__get_type_description,
  &x2robot_msgs__srv__TrajectoryPlanRequest_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_x2robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, srv, TrajectoryPlanRequest_Event)() {
  x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, srv, TrajectoryPlanRequest_Request)();
  x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, srv, TrajectoryPlanRequest_Response)();
  if (!x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Event_message_type_support_handle.typesupport_identifier) {
    x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "x2robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "x2robot_msgs/srv/detail/trajectory_plan_request__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers x2robot_msgs__srv__detail__trajectory_plan_request__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_service_members = {
  "x2robot_msgs__srv",  // service namespace
  "TrajectoryPlanRequest",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // x2robot_msgs__srv__detail__trajectory_plan_request__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Request_message_type_support_handle,
  NULL,  // response message
  // x2robot_msgs__srv__detail__trajectory_plan_request__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Response_message_type_support_handle
  NULL  // event_message
  // x2robot_msgs__srv__detail__trajectory_plan_request__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Response_message_type_support_handle
};


static rosidl_service_type_support_t x2robot_msgs__srv__detail__trajectory_plan_request__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_service_type_support_handle = {
  0,
  &x2robot_msgs__srv__detail__trajectory_plan_request__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_service_members,
  get_service_typesupport_handle_function,
  &x2robot_msgs__srv__TrajectoryPlanRequest_Request__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Request_message_type_support_handle,
  &x2robot_msgs__srv__TrajectoryPlanRequest_Response__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Response_message_type_support_handle,
  &x2robot_msgs__srv__TrajectoryPlanRequest_Event__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    x2robot_msgs,
    srv,
    TrajectoryPlanRequest
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    x2robot_msgs,
    srv,
    TrajectoryPlanRequest
  ),
  &x2robot_msgs__srv__TrajectoryPlanRequest__get_type_hash,
  &x2robot_msgs__srv__TrajectoryPlanRequest__get_type_description,
  &x2robot_msgs__srv__TrajectoryPlanRequest__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, srv, TrajectoryPlanRequest_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, srv, TrajectoryPlanRequest_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, srv, TrajectoryPlanRequest_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_x2robot_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, srv, TrajectoryPlanRequest)(void) {
  if (!x2robot_msgs__srv__detail__trajectory_plan_request__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_service_type_support_handle.typesupport_identifier) {
    x2robot_msgs__srv__detail__trajectory_plan_request__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)x2robot_msgs__srv__detail__trajectory_plan_request__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, srv, TrajectoryPlanRequest_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, srv, TrajectoryPlanRequest_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, srv, TrajectoryPlanRequest_Event)()->data;
  }

  return &x2robot_msgs__srv__detail__trajectory_plan_request__rosidl_typesupport_introspection_c__TrajectoryPlanRequest_service_type_support_handle;
}
