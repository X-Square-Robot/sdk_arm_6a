// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from x2robot_msgs:msg/CanFrameBatch.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "x2robot_msgs/msg/detail/can_frame_batch__rosidl_typesupport_introspection_c.h"
#include "x2robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "x2robot_msgs/msg/detail/can_frame_batch__functions.h"
#include "x2robot_msgs/msg/detail/can_frame_batch__struct.h"


// Include directives for member types
// Member `frames`
#include "x2robot_msgs/msg/can_frame.h"
// Member `frames`
#include "x2robot_msgs/msg/detail/can_frame__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void x2robot_msgs__msg__CanFrameBatch__rosidl_typesupport_introspection_c__CanFrameBatch_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  x2robot_msgs__msg__CanFrameBatch__init(message_memory);
}

void x2robot_msgs__msg__CanFrameBatch__rosidl_typesupport_introspection_c__CanFrameBatch_fini_function(void * message_memory)
{
  x2robot_msgs__msg__CanFrameBatch__fini(message_memory);
}

size_t x2robot_msgs__msg__CanFrameBatch__rosidl_typesupport_introspection_c__size_function__CanFrameBatch__frames(
  const void * untyped_member)
{
  const x2robot_msgs__msg__CanFrame__Sequence * member =
    (const x2robot_msgs__msg__CanFrame__Sequence *)(untyped_member);
  return member->size;
}

const void * x2robot_msgs__msg__CanFrameBatch__rosidl_typesupport_introspection_c__get_const_function__CanFrameBatch__frames(
  const void * untyped_member, size_t index)
{
  const x2robot_msgs__msg__CanFrame__Sequence * member =
    (const x2robot_msgs__msg__CanFrame__Sequence *)(untyped_member);
  return &member->data[index];
}

void * x2robot_msgs__msg__CanFrameBatch__rosidl_typesupport_introspection_c__get_function__CanFrameBatch__frames(
  void * untyped_member, size_t index)
{
  x2robot_msgs__msg__CanFrame__Sequence * member =
    (x2robot_msgs__msg__CanFrame__Sequence *)(untyped_member);
  return &member->data[index];
}

void x2robot_msgs__msg__CanFrameBatch__rosidl_typesupport_introspection_c__fetch_function__CanFrameBatch__frames(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const x2robot_msgs__msg__CanFrame * item =
    ((const x2robot_msgs__msg__CanFrame *)
    x2robot_msgs__msg__CanFrameBatch__rosidl_typesupport_introspection_c__get_const_function__CanFrameBatch__frames(untyped_member, index));
  x2robot_msgs__msg__CanFrame * value =
    (x2robot_msgs__msg__CanFrame *)(untyped_value);
  *value = *item;
}

void x2robot_msgs__msg__CanFrameBatch__rosidl_typesupport_introspection_c__assign_function__CanFrameBatch__frames(
  void * untyped_member, size_t index, const void * untyped_value)
{
  x2robot_msgs__msg__CanFrame * item =
    ((x2robot_msgs__msg__CanFrame *)
    x2robot_msgs__msg__CanFrameBatch__rosidl_typesupport_introspection_c__get_function__CanFrameBatch__frames(untyped_member, index));
  const x2robot_msgs__msg__CanFrame * value =
    (const x2robot_msgs__msg__CanFrame *)(untyped_value);
  *item = *value;
}

bool x2robot_msgs__msg__CanFrameBatch__rosidl_typesupport_introspection_c__resize_function__CanFrameBatch__frames(
  void * untyped_member, size_t size)
{
  x2robot_msgs__msg__CanFrame__Sequence * member =
    (x2robot_msgs__msg__CanFrame__Sequence *)(untyped_member);
  x2robot_msgs__msg__CanFrame__Sequence__fini(member);
  return x2robot_msgs__msg__CanFrame__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember x2robot_msgs__msg__CanFrameBatch__rosidl_typesupport_introspection_c__CanFrameBatch_message_member_array[1] = {
  {
    "frames",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__msg__CanFrameBatch, frames),  // bytes offset in struct
    NULL,  // default value
    x2robot_msgs__msg__CanFrameBatch__rosidl_typesupport_introspection_c__size_function__CanFrameBatch__frames,  // size() function pointer
    x2robot_msgs__msg__CanFrameBatch__rosidl_typesupport_introspection_c__get_const_function__CanFrameBatch__frames,  // get_const(index) function pointer
    x2robot_msgs__msg__CanFrameBatch__rosidl_typesupport_introspection_c__get_function__CanFrameBatch__frames,  // get(index) function pointer
    x2robot_msgs__msg__CanFrameBatch__rosidl_typesupport_introspection_c__fetch_function__CanFrameBatch__frames,  // fetch(index, &value) function pointer
    x2robot_msgs__msg__CanFrameBatch__rosidl_typesupport_introspection_c__assign_function__CanFrameBatch__frames,  // assign(index, value) function pointer
    x2robot_msgs__msg__CanFrameBatch__rosidl_typesupport_introspection_c__resize_function__CanFrameBatch__frames  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers x2robot_msgs__msg__CanFrameBatch__rosidl_typesupport_introspection_c__CanFrameBatch_message_members = {
  "x2robot_msgs__msg",  // message namespace
  "CanFrameBatch",  // message name
  1,  // number of fields
  sizeof(x2robot_msgs__msg__CanFrameBatch),
  false,  // has_any_key_member_
  x2robot_msgs__msg__CanFrameBatch__rosidl_typesupport_introspection_c__CanFrameBatch_message_member_array,  // message members
  x2robot_msgs__msg__CanFrameBatch__rosidl_typesupport_introspection_c__CanFrameBatch_init_function,  // function to initialize message memory (memory has to be allocated)
  x2robot_msgs__msg__CanFrameBatch__rosidl_typesupport_introspection_c__CanFrameBatch_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t x2robot_msgs__msg__CanFrameBatch__rosidl_typesupport_introspection_c__CanFrameBatch_message_type_support_handle = {
  0,
  &x2robot_msgs__msg__CanFrameBatch__rosidl_typesupport_introspection_c__CanFrameBatch_message_members,
  get_message_typesupport_handle_function,
  &x2robot_msgs__msg__CanFrameBatch__get_type_hash,
  &x2robot_msgs__msg__CanFrameBatch__get_type_description,
  &x2robot_msgs__msg__CanFrameBatch__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_x2robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, msg, CanFrameBatch)() {
  x2robot_msgs__msg__CanFrameBatch__rosidl_typesupport_introspection_c__CanFrameBatch_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, msg, CanFrame)();
  if (!x2robot_msgs__msg__CanFrameBatch__rosidl_typesupport_introspection_c__CanFrameBatch_message_type_support_handle.typesupport_identifier) {
    x2robot_msgs__msg__CanFrameBatch__rosidl_typesupport_introspection_c__CanFrameBatch_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &x2robot_msgs__msg__CanFrameBatch__rosidl_typesupport_introspection_c__CanFrameBatch_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
