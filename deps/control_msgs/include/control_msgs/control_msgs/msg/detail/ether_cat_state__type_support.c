// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from control_msgs:msg/EtherCATState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "control_msgs/msg/detail/ether_cat_state__rosidl_typesupport_introspection_c.h"
#include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "control_msgs/msg/detail/ether_cat_state__functions.h"
#include "control_msgs/msg/detail/ether_cat_state__struct.h"


// Include directives for member types
// Member `vendor_id`
// Member `product_code`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void control_msgs__msg__EtherCATState__rosidl_typesupport_introspection_c__EtherCATState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__msg__EtherCATState__init(message_memory);
}

void control_msgs__msg__EtherCATState__rosidl_typesupport_introspection_c__EtherCATState_fini_function(void * message_memory)
{
  control_msgs__msg__EtherCATState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember control_msgs__msg__EtherCATState__rosidl_typesupport_introspection_c__EtherCATState_message_member_array[6] = {
  {
    "slave_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__EtherCATState, slave_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vendor_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__EtherCATState, vendor_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "product_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__EtherCATState, product_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "al_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__EtherCATState, al_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__EtherCATState, has_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "al_status_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__EtherCATState, al_status_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers control_msgs__msg__EtherCATState__rosidl_typesupport_introspection_c__EtherCATState_message_members = {
  "control_msgs__msg",  // message namespace
  "EtherCATState",  // message name
  6,  // number of fields
  sizeof(control_msgs__msg__EtherCATState),
  false,  // has_any_key_member_
  control_msgs__msg__EtherCATState__rosidl_typesupport_introspection_c__EtherCATState_message_member_array,  // message members
  control_msgs__msg__EtherCATState__rosidl_typesupport_introspection_c__EtherCATState_init_function,  // function to initialize message memory (memory has to be allocated)
  control_msgs__msg__EtherCATState__rosidl_typesupport_introspection_c__EtherCATState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t control_msgs__msg__EtherCATState__rosidl_typesupport_introspection_c__EtherCATState_message_type_support_handle = {
  0,
  &control_msgs__msg__EtherCATState__rosidl_typesupport_introspection_c__EtherCATState_message_members,
  get_message_typesupport_handle_function,
  &control_msgs__msg__EtherCATState__get_type_hash,
  &control_msgs__msg__EtherCATState__get_type_description,
  &control_msgs__msg__EtherCATState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, msg, EtherCATState)() {
  if (!control_msgs__msg__EtherCATState__rosidl_typesupport_introspection_c__EtherCATState_message_type_support_handle.typesupport_identifier) {
    control_msgs__msg__EtherCATState__rosidl_typesupport_introspection_c__EtherCATState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &control_msgs__msg__EtherCATState__rosidl_typesupport_introspection_c__EtherCATState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
