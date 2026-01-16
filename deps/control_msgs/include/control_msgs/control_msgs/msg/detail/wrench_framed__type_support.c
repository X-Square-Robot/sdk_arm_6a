// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from control_msgs:msg/WrenchFramed.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "control_msgs/msg/detail/wrench_framed__rosidl_typesupport_introspection_c.h"
#include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "control_msgs/msg/detail/wrench_framed__functions.h"
#include "control_msgs/msg/detail/wrench_framed__struct.h"


// Include directives for member types
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `wrench`
#include "geometry_msgs/msg/wrench.h"
// Member `wrench`
#include "geometry_msgs/msg/detail/wrench__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void control_msgs__msg__WrenchFramed__rosidl_typesupport_introspection_c__WrenchFramed_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__msg__WrenchFramed__init(message_memory);
}

void control_msgs__msg__WrenchFramed__rosidl_typesupport_introspection_c__WrenchFramed_fini_function(void * message_memory)
{
  control_msgs__msg__WrenchFramed__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember control_msgs__msg__WrenchFramed__rosidl_typesupport_introspection_c__WrenchFramed_message_member_array[2] = {
  {
    "frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__WrenchFramed, frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wrench",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__WrenchFramed, wrench),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers control_msgs__msg__WrenchFramed__rosidl_typesupport_introspection_c__WrenchFramed_message_members = {
  "control_msgs__msg",  // message namespace
  "WrenchFramed",  // message name
  2,  // number of fields
  sizeof(control_msgs__msg__WrenchFramed),
  false,  // has_any_key_member_
  control_msgs__msg__WrenchFramed__rosidl_typesupport_introspection_c__WrenchFramed_message_member_array,  // message members
  control_msgs__msg__WrenchFramed__rosidl_typesupport_introspection_c__WrenchFramed_init_function,  // function to initialize message memory (memory has to be allocated)
  control_msgs__msg__WrenchFramed__rosidl_typesupport_introspection_c__WrenchFramed_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t control_msgs__msg__WrenchFramed__rosidl_typesupport_introspection_c__WrenchFramed_message_type_support_handle = {
  0,
  &control_msgs__msg__WrenchFramed__rosidl_typesupport_introspection_c__WrenchFramed_message_members,
  get_message_typesupport_handle_function,
  &control_msgs__msg__WrenchFramed__get_type_hash,
  &control_msgs__msg__WrenchFramed__get_type_description,
  &control_msgs__msg__WrenchFramed__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, msg, WrenchFramed)() {
  control_msgs__msg__WrenchFramed__rosidl_typesupport_introspection_c__WrenchFramed_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Wrench)();
  if (!control_msgs__msg__WrenchFramed__rosidl_typesupport_introspection_c__WrenchFramed_message_type_support_handle.typesupport_identifier) {
    control_msgs__msg__WrenchFramed__rosidl_typesupport_introspection_c__WrenchFramed_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &control_msgs__msg__WrenchFramed__rosidl_typesupport_introspection_c__WrenchFramed_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
