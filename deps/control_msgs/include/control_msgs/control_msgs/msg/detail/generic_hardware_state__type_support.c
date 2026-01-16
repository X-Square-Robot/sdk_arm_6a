// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from control_msgs:msg/GenericHardwareState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "control_msgs/msg/detail/generic_hardware_state__rosidl_typesupport_introspection_c.h"
#include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "control_msgs/msg/detail/generic_hardware_state__functions.h"
#include "control_msgs/msg/detail/generic_hardware_state__struct.h"


// Include directives for member types
// Member `error_domain`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `manufacturer`
// Member `model`
// Member `firmware_version`
#include "rosidl_runtime_c/string_functions.h"
// Member `state_details`
#include "diagnostic_msgs/msg/key_value.h"
// Member `state_details`
#include "diagnostic_msgs/msg/detail/key_value__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__GenericHardwareState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__msg__GenericHardwareState__init(message_memory);
}

void control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__GenericHardwareState_fini_function(void * message_memory)
{
  control_msgs__msg__GenericHardwareState__fini(message_memory);
}

size_t control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__size_function__GenericHardwareState__error_domain(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__get_const_function__GenericHardwareState__error_domain(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__get_function__GenericHardwareState__error_domain(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__fetch_function__GenericHardwareState__error_domain(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__get_const_function__GenericHardwareState__error_domain(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__assign_function__GenericHardwareState__error_domain(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__get_function__GenericHardwareState__error_domain(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__resize_function__GenericHardwareState__error_domain(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__size_function__GenericHardwareState__state_details(
  const void * untyped_member)
{
  const diagnostic_msgs__msg__KeyValue__Sequence * member =
    (const diagnostic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return member->size;
}

const void * control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__get_const_function__GenericHardwareState__state_details(
  const void * untyped_member, size_t index)
{
  const diagnostic_msgs__msg__KeyValue__Sequence * member =
    (const diagnostic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__get_function__GenericHardwareState__state_details(
  void * untyped_member, size_t index)
{
  diagnostic_msgs__msg__KeyValue__Sequence * member =
    (diagnostic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__fetch_function__GenericHardwareState__state_details(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const diagnostic_msgs__msg__KeyValue * item =
    ((const diagnostic_msgs__msg__KeyValue *)
    control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__get_const_function__GenericHardwareState__state_details(untyped_member, index));
  diagnostic_msgs__msg__KeyValue * value =
    (diagnostic_msgs__msg__KeyValue *)(untyped_value);
  *value = *item;
}

void control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__assign_function__GenericHardwareState__state_details(
  void * untyped_member, size_t index, const void * untyped_value)
{
  diagnostic_msgs__msg__KeyValue * item =
    ((diagnostic_msgs__msg__KeyValue *)
    control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__get_function__GenericHardwareState__state_details(untyped_member, index));
  const diagnostic_msgs__msg__KeyValue * value =
    (const diagnostic_msgs__msg__KeyValue *)(untyped_value);
  *item = *value;
}

bool control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__resize_function__GenericHardwareState__state_details(
  void * untyped_member, size_t size)
{
  diagnostic_msgs__msg__KeyValue__Sequence * member =
    (diagnostic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  diagnostic_msgs__msg__KeyValue__Sequence__fini(member);
  return diagnostic_msgs__msg__KeyValue__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__GenericHardwareState_message_member_array[9] = {
  {
    "health_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__GenericHardwareState, health_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_domain",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__GenericHardwareState, error_domain),  // bytes offset in struct
    NULL,  // default value
    control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__size_function__GenericHardwareState__error_domain,  // size() function pointer
    control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__get_const_function__GenericHardwareState__error_domain,  // get_const(index) function pointer
    control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__get_function__GenericHardwareState__error_domain,  // get(index) function pointer
    control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__fetch_function__GenericHardwareState__error_domain,  // fetch(index, &value) function pointer
    control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__assign_function__GenericHardwareState__error_domain,  // assign(index, value) function pointer
    control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__resize_function__GenericHardwareState__error_domain  // resize(index) function pointer
  },
  {
    "operational_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__GenericHardwareState, operational_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "power_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__GenericHardwareState, power_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "connectivity_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__GenericHardwareState, connectivity_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "manufacturer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__GenericHardwareState, manufacturer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "model",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__GenericHardwareState, model),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "firmware_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__GenericHardwareState, firmware_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state_details",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__GenericHardwareState, state_details),  // bytes offset in struct
    NULL,  // default value
    control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__size_function__GenericHardwareState__state_details,  // size() function pointer
    control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__get_const_function__GenericHardwareState__state_details,  // get_const(index) function pointer
    control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__get_function__GenericHardwareState__state_details,  // get(index) function pointer
    control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__fetch_function__GenericHardwareState__state_details,  // fetch(index, &value) function pointer
    control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__assign_function__GenericHardwareState__state_details,  // assign(index, value) function pointer
    control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__resize_function__GenericHardwareState__state_details  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__GenericHardwareState_message_members = {
  "control_msgs__msg",  // message namespace
  "GenericHardwareState",  // message name
  9,  // number of fields
  sizeof(control_msgs__msg__GenericHardwareState),
  false,  // has_any_key_member_
  control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__GenericHardwareState_message_member_array,  // message members
  control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__GenericHardwareState_init_function,  // function to initialize message memory (memory has to be allocated)
  control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__GenericHardwareState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__GenericHardwareState_message_type_support_handle = {
  0,
  &control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__GenericHardwareState_message_members,
  get_message_typesupport_handle_function,
  &control_msgs__msg__GenericHardwareState__get_type_hash,
  &control_msgs__msg__GenericHardwareState__get_type_description,
  &control_msgs__msg__GenericHardwareState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, msg, GenericHardwareState)() {
  control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__GenericHardwareState_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, msg, KeyValue)();
  if (!control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__GenericHardwareState_message_type_support_handle.typesupport_identifier) {
    control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__GenericHardwareState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &control_msgs__msg__GenericHardwareState__rosidl_typesupport_introspection_c__GenericHardwareState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
