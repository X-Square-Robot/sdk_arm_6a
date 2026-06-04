// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from x2robot_msgs:msg/ServoDriveState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "x2robot_msgs/msg/detail/servo_drive_state__rosidl_typesupport_introspection_c.h"
#include "x2robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "x2robot_msgs/msg/detail/servo_drive_state__functions.h"
#include "x2robot_msgs/msg/detail/servo_drive_state__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `joint_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `error_codes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__ServoDriveState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  x2robot_msgs__msg__ServoDriveState__init(message_memory);
}

void x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__ServoDriveState_fini_function(void * message_memory)
{
  x2robot_msgs__msg__ServoDriveState__fini(message_memory);
}

size_t x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__size_function__ServoDriveState__joint_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__get_const_function__ServoDriveState__joint_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__get_function__ServoDriveState__joint_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__fetch_function__ServoDriveState__joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__get_const_function__ServoDriveState__joint_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__assign_function__ServoDriveState__joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__get_function__ServoDriveState__joint_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__resize_function__ServoDriveState__joint_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__size_function__ServoDriveState__error_codes(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__get_const_function__ServoDriveState__error_codes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__get_function__ServoDriveState__error_codes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__fetch_function__ServoDriveState__error_codes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__get_const_function__ServoDriveState__error_codes(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__assign_function__ServoDriveState__error_codes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__get_function__ServoDriveState__error_codes(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__resize_function__ServoDriveState__error_codes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__ServoDriveState_message_member_array[4] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__msg__ServoDriveState, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__msg__ServoDriveState, joint_names),  // bytes offset in struct
    NULL,  // default value
    x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__size_function__ServoDriveState__joint_names,  // size() function pointer
    x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__get_const_function__ServoDriveState__joint_names,  // get_const(index) function pointer
    x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__get_function__ServoDriveState__joint_names,  // get(index) function pointer
    x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__fetch_function__ServoDriveState__joint_names,  // fetch(index, &value) function pointer
    x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__assign_function__ServoDriveState__joint_names,  // assign(index, value) function pointer
    x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__resize_function__ServoDriveState__joint_names  // resize(index) function pointer
  },
  {
    "error_codes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__msg__ServoDriveState, error_codes),  // bytes offset in struct
    NULL,  // default value
    x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__size_function__ServoDriveState__error_codes,  // size() function pointer
    x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__get_const_function__ServoDriveState__error_codes,  // get_const(index) function pointer
    x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__get_function__ServoDriveState__error_codes,  // get(index) function pointer
    x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__fetch_function__ServoDriveState__error_codes,  // fetch(index, &value) function pointer
    x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__assign_function__ServoDriveState__error_codes,  // assign(index, value) function pointer
    x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__resize_function__ServoDriveState__error_codes  // resize(index) function pointer
  },
  {
    "current_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__msg__ServoDriveState, current_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__ServoDriveState_message_members = {
  "x2robot_msgs__msg",  // message namespace
  "ServoDriveState",  // message name
  4,  // number of fields
  sizeof(x2robot_msgs__msg__ServoDriveState),
  false,  // has_any_key_member_
  x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__ServoDriveState_message_member_array,  // message members
  x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__ServoDriveState_init_function,  // function to initialize message memory (memory has to be allocated)
  x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__ServoDriveState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__ServoDriveState_message_type_support_handle = {
  0,
  &x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__ServoDriveState_message_members,
  get_message_typesupport_handle_function,
  &x2robot_msgs__msg__ServoDriveState__get_type_hash,
  &x2robot_msgs__msg__ServoDriveState__get_type_description,
  &x2robot_msgs__msg__ServoDriveState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_x2robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, msg, ServoDriveState)() {
  x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__ServoDriveState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__ServoDriveState_message_type_support_handle.typesupport_identifier) {
    x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__ServoDriveState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &x2robot_msgs__msg__ServoDriveState__rosidl_typesupport_introspection_c__ServoDriveState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
