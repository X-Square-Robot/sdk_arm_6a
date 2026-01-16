// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from control_msgs:msg/HardwareDeviceStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "control_msgs/msg/detail/hardware_device_status__rosidl_typesupport_introspection_c.h"
#include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "control_msgs/msg/detail/hardware_device_status__functions.h"
#include "control_msgs/msg/detail/hardware_device_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `device_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `hardware_status`
#include "control_msgs/msg/generic_hardware_state.h"
// Member `hardware_status`
#include "control_msgs/msg/detail/generic_hardware_state__rosidl_typesupport_introspection_c.h"
// Member `canopen_states`
#include "control_msgs/msg/ca_nopen_state.h"
// Member `canopen_states`
#include "control_msgs/msg/detail/ca_nopen_state__rosidl_typesupport_introspection_c.h"
// Member `ethercat_states`
#include "control_msgs/msg/ether_cat_state.h"
// Member `ethercat_states`
#include "control_msgs/msg/detail/ether_cat_state__rosidl_typesupport_introspection_c.h"
// Member `vda5050_states`
#include "control_msgs/msg/vda5050_state.h"
// Member `vda5050_states`
#include "control_msgs/msg/detail/vda5050_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__HardwareDeviceStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__msg__HardwareDeviceStatus__init(message_memory);
}

void control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__HardwareDeviceStatus_fini_function(void * message_memory)
{
  control_msgs__msg__HardwareDeviceStatus__fini(message_memory);
}

size_t control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__size_function__HardwareDeviceStatus__hardware_status(
  const void * untyped_member)
{
  const control_msgs__msg__GenericHardwareState__Sequence * member =
    (const control_msgs__msg__GenericHardwareState__Sequence *)(untyped_member);
  return member->size;
}

const void * control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__get_const_function__HardwareDeviceStatus__hardware_status(
  const void * untyped_member, size_t index)
{
  const control_msgs__msg__GenericHardwareState__Sequence * member =
    (const control_msgs__msg__GenericHardwareState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__get_function__HardwareDeviceStatus__hardware_status(
  void * untyped_member, size_t index)
{
  control_msgs__msg__GenericHardwareState__Sequence * member =
    (control_msgs__msg__GenericHardwareState__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__fetch_function__HardwareDeviceStatus__hardware_status(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const control_msgs__msg__GenericHardwareState * item =
    ((const control_msgs__msg__GenericHardwareState *)
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__get_const_function__HardwareDeviceStatus__hardware_status(untyped_member, index));
  control_msgs__msg__GenericHardwareState * value =
    (control_msgs__msg__GenericHardwareState *)(untyped_value);
  *value = *item;
}

void control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__assign_function__HardwareDeviceStatus__hardware_status(
  void * untyped_member, size_t index, const void * untyped_value)
{
  control_msgs__msg__GenericHardwareState * item =
    ((control_msgs__msg__GenericHardwareState *)
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__get_function__HardwareDeviceStatus__hardware_status(untyped_member, index));
  const control_msgs__msg__GenericHardwareState * value =
    (const control_msgs__msg__GenericHardwareState *)(untyped_value);
  *item = *value;
}

bool control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__resize_function__HardwareDeviceStatus__hardware_status(
  void * untyped_member, size_t size)
{
  control_msgs__msg__GenericHardwareState__Sequence * member =
    (control_msgs__msg__GenericHardwareState__Sequence *)(untyped_member);
  control_msgs__msg__GenericHardwareState__Sequence__fini(member);
  return control_msgs__msg__GenericHardwareState__Sequence__init(member, size);
}

size_t control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__size_function__HardwareDeviceStatus__canopen_states(
  const void * untyped_member)
{
  const control_msgs__msg__CANopenState__Sequence * member =
    (const control_msgs__msg__CANopenState__Sequence *)(untyped_member);
  return member->size;
}

const void * control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__get_const_function__HardwareDeviceStatus__canopen_states(
  const void * untyped_member, size_t index)
{
  const control_msgs__msg__CANopenState__Sequence * member =
    (const control_msgs__msg__CANopenState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__get_function__HardwareDeviceStatus__canopen_states(
  void * untyped_member, size_t index)
{
  control_msgs__msg__CANopenState__Sequence * member =
    (control_msgs__msg__CANopenState__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__fetch_function__HardwareDeviceStatus__canopen_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const control_msgs__msg__CANopenState * item =
    ((const control_msgs__msg__CANopenState *)
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__get_const_function__HardwareDeviceStatus__canopen_states(untyped_member, index));
  control_msgs__msg__CANopenState * value =
    (control_msgs__msg__CANopenState *)(untyped_value);
  *value = *item;
}

void control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__assign_function__HardwareDeviceStatus__canopen_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  control_msgs__msg__CANopenState * item =
    ((control_msgs__msg__CANopenState *)
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__get_function__HardwareDeviceStatus__canopen_states(untyped_member, index));
  const control_msgs__msg__CANopenState * value =
    (const control_msgs__msg__CANopenState *)(untyped_value);
  *item = *value;
}

bool control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__resize_function__HardwareDeviceStatus__canopen_states(
  void * untyped_member, size_t size)
{
  control_msgs__msg__CANopenState__Sequence * member =
    (control_msgs__msg__CANopenState__Sequence *)(untyped_member);
  control_msgs__msg__CANopenState__Sequence__fini(member);
  return control_msgs__msg__CANopenState__Sequence__init(member, size);
}

size_t control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__size_function__HardwareDeviceStatus__ethercat_states(
  const void * untyped_member)
{
  const control_msgs__msg__EtherCATState__Sequence * member =
    (const control_msgs__msg__EtherCATState__Sequence *)(untyped_member);
  return member->size;
}

const void * control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__get_const_function__HardwareDeviceStatus__ethercat_states(
  const void * untyped_member, size_t index)
{
  const control_msgs__msg__EtherCATState__Sequence * member =
    (const control_msgs__msg__EtherCATState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__get_function__HardwareDeviceStatus__ethercat_states(
  void * untyped_member, size_t index)
{
  control_msgs__msg__EtherCATState__Sequence * member =
    (control_msgs__msg__EtherCATState__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__fetch_function__HardwareDeviceStatus__ethercat_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const control_msgs__msg__EtherCATState * item =
    ((const control_msgs__msg__EtherCATState *)
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__get_const_function__HardwareDeviceStatus__ethercat_states(untyped_member, index));
  control_msgs__msg__EtherCATState * value =
    (control_msgs__msg__EtherCATState *)(untyped_value);
  *value = *item;
}

void control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__assign_function__HardwareDeviceStatus__ethercat_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  control_msgs__msg__EtherCATState * item =
    ((control_msgs__msg__EtherCATState *)
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__get_function__HardwareDeviceStatus__ethercat_states(untyped_member, index));
  const control_msgs__msg__EtherCATState * value =
    (const control_msgs__msg__EtherCATState *)(untyped_value);
  *item = *value;
}

bool control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__resize_function__HardwareDeviceStatus__ethercat_states(
  void * untyped_member, size_t size)
{
  control_msgs__msg__EtherCATState__Sequence * member =
    (control_msgs__msg__EtherCATState__Sequence *)(untyped_member);
  control_msgs__msg__EtherCATState__Sequence__fini(member);
  return control_msgs__msg__EtherCATState__Sequence__init(member, size);
}

size_t control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__size_function__HardwareDeviceStatus__vda5050_states(
  const void * untyped_member)
{
  const control_msgs__msg__VDA5050State__Sequence * member =
    (const control_msgs__msg__VDA5050State__Sequence *)(untyped_member);
  return member->size;
}

const void * control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__get_const_function__HardwareDeviceStatus__vda5050_states(
  const void * untyped_member, size_t index)
{
  const control_msgs__msg__VDA5050State__Sequence * member =
    (const control_msgs__msg__VDA5050State__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__get_function__HardwareDeviceStatus__vda5050_states(
  void * untyped_member, size_t index)
{
  control_msgs__msg__VDA5050State__Sequence * member =
    (control_msgs__msg__VDA5050State__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__fetch_function__HardwareDeviceStatus__vda5050_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const control_msgs__msg__VDA5050State * item =
    ((const control_msgs__msg__VDA5050State *)
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__get_const_function__HardwareDeviceStatus__vda5050_states(untyped_member, index));
  control_msgs__msg__VDA5050State * value =
    (control_msgs__msg__VDA5050State *)(untyped_value);
  *value = *item;
}

void control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__assign_function__HardwareDeviceStatus__vda5050_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  control_msgs__msg__VDA5050State * item =
    ((control_msgs__msg__VDA5050State *)
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__get_function__HardwareDeviceStatus__vda5050_states(untyped_member, index));
  const control_msgs__msg__VDA5050State * value =
    (const control_msgs__msg__VDA5050State *)(untyped_value);
  *item = *value;
}

bool control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__resize_function__HardwareDeviceStatus__vda5050_states(
  void * untyped_member, size_t size)
{
  control_msgs__msg__VDA5050State__Sequence * member =
    (control_msgs__msg__VDA5050State__Sequence *)(untyped_member);
  control_msgs__msg__VDA5050State__Sequence__fini(member);
  return control_msgs__msg__VDA5050State__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__HardwareDeviceStatus_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__HardwareDeviceStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "device_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__HardwareDeviceStatus, device_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hardware_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__HardwareDeviceStatus, hardware_status),  // bytes offset in struct
    NULL,  // default value
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__size_function__HardwareDeviceStatus__hardware_status,  // size() function pointer
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__get_const_function__HardwareDeviceStatus__hardware_status,  // get_const(index) function pointer
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__get_function__HardwareDeviceStatus__hardware_status,  // get(index) function pointer
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__fetch_function__HardwareDeviceStatus__hardware_status,  // fetch(index, &value) function pointer
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__assign_function__HardwareDeviceStatus__hardware_status,  // assign(index, value) function pointer
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__resize_function__HardwareDeviceStatus__hardware_status  // resize(index) function pointer
  },
  {
    "canopen_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__HardwareDeviceStatus, canopen_states),  // bytes offset in struct
    NULL,  // default value
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__size_function__HardwareDeviceStatus__canopen_states,  // size() function pointer
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__get_const_function__HardwareDeviceStatus__canopen_states,  // get_const(index) function pointer
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__get_function__HardwareDeviceStatus__canopen_states,  // get(index) function pointer
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__fetch_function__HardwareDeviceStatus__canopen_states,  // fetch(index, &value) function pointer
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__assign_function__HardwareDeviceStatus__canopen_states,  // assign(index, value) function pointer
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__resize_function__HardwareDeviceStatus__canopen_states  // resize(index) function pointer
  },
  {
    "ethercat_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__HardwareDeviceStatus, ethercat_states),  // bytes offset in struct
    NULL,  // default value
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__size_function__HardwareDeviceStatus__ethercat_states,  // size() function pointer
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__get_const_function__HardwareDeviceStatus__ethercat_states,  // get_const(index) function pointer
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__get_function__HardwareDeviceStatus__ethercat_states,  // get(index) function pointer
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__fetch_function__HardwareDeviceStatus__ethercat_states,  // fetch(index, &value) function pointer
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__assign_function__HardwareDeviceStatus__ethercat_states,  // assign(index, value) function pointer
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__resize_function__HardwareDeviceStatus__ethercat_states  // resize(index) function pointer
  },
  {
    "vda5050_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__HardwareDeviceStatus, vda5050_states),  // bytes offset in struct
    NULL,  // default value
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__size_function__HardwareDeviceStatus__vda5050_states,  // size() function pointer
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__get_const_function__HardwareDeviceStatus__vda5050_states,  // get_const(index) function pointer
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__get_function__HardwareDeviceStatus__vda5050_states,  // get(index) function pointer
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__fetch_function__HardwareDeviceStatus__vda5050_states,  // fetch(index, &value) function pointer
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__assign_function__HardwareDeviceStatus__vda5050_states,  // assign(index, value) function pointer
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__resize_function__HardwareDeviceStatus__vda5050_states  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__HardwareDeviceStatus_message_members = {
  "control_msgs__msg",  // message namespace
  "HardwareDeviceStatus",  // message name
  6,  // number of fields
  sizeof(control_msgs__msg__HardwareDeviceStatus),
  false,  // has_any_key_member_
  control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__HardwareDeviceStatus_message_member_array,  // message members
  control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__HardwareDeviceStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__HardwareDeviceStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__HardwareDeviceStatus_message_type_support_handle = {
  0,
  &control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__HardwareDeviceStatus_message_members,
  get_message_typesupport_handle_function,
  &control_msgs__msg__HardwareDeviceStatus__get_type_hash,
  &control_msgs__msg__HardwareDeviceStatus__get_type_description,
  &control_msgs__msg__HardwareDeviceStatus__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, msg, HardwareDeviceStatus)() {
  control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__HardwareDeviceStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__HardwareDeviceStatus_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, msg, GenericHardwareState)();
  control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__HardwareDeviceStatus_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, msg, CANopenState)();
  control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__HardwareDeviceStatus_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, msg, EtherCATState)();
  control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__HardwareDeviceStatus_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, msg, VDA5050State)();
  if (!control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__HardwareDeviceStatus_message_type_support_handle.typesupport_identifier) {
    control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__HardwareDeviceStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &control_msgs__msg__HardwareDeviceStatus__rosidl_typesupport_introspection_c__HardwareDeviceStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
