// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:msg/StatusCode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/msg/detail/status_code__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/msg/detail/status_code__functions.h"
#include "protocol/msg/detail/status_code__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `error_code`
#include "protocol/msg/unit_error.h"
// Member `error_code`
#include "protocol/msg/detail/unit_error__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void protocol__msg__StatusCode__rosidl_typesupport_introspection_c__StatusCode_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__msg__StatusCode__init(message_memory);
}

void protocol__msg__StatusCode__rosidl_typesupport_introspection_c__StatusCode_fini_function(void * message_memory)
{
  protocol__msg__StatusCode__fini(message_memory);
}

size_t protocol__msg__StatusCode__rosidl_typesupport_introspection_c__size_function__StatusCode__error_code(
  const void * untyped_member)
{
  const protocol__msg__UnitError__Sequence * member =
    (const protocol__msg__UnitError__Sequence *)(untyped_member);
  return member->size;
}

const void * protocol__msg__StatusCode__rosidl_typesupport_introspection_c__get_const_function__StatusCode__error_code(
  const void * untyped_member, size_t index)
{
  const protocol__msg__UnitError__Sequence * member =
    (const protocol__msg__UnitError__Sequence *)(untyped_member);
  return &member->data[index];
}

void * protocol__msg__StatusCode__rosidl_typesupport_introspection_c__get_function__StatusCode__error_code(
  void * untyped_member, size_t index)
{
  protocol__msg__UnitError__Sequence * member =
    (protocol__msg__UnitError__Sequence *)(untyped_member);
  return &member->data[index];
}

void protocol__msg__StatusCode__rosidl_typesupport_introspection_c__fetch_function__StatusCode__error_code(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const protocol__msg__UnitError * item =
    ((const protocol__msg__UnitError *)
    protocol__msg__StatusCode__rosidl_typesupport_introspection_c__get_const_function__StatusCode__error_code(untyped_member, index));
  protocol__msg__UnitError * value =
    (protocol__msg__UnitError *)(untyped_value);
  *value = *item;
}

void protocol__msg__StatusCode__rosidl_typesupport_introspection_c__assign_function__StatusCode__error_code(
  void * untyped_member, size_t index, const void * untyped_value)
{
  protocol__msg__UnitError * item =
    ((protocol__msg__UnitError *)
    protocol__msg__StatusCode__rosidl_typesupport_introspection_c__get_function__StatusCode__error_code(untyped_member, index));
  const protocol__msg__UnitError * value =
    (const protocol__msg__UnitError *)(untyped_value);
  *item = *value;
}

bool protocol__msg__StatusCode__rosidl_typesupport_introspection_c__resize_function__StatusCode__error_code(
  void * untyped_member, size_t size)
{
  protocol__msg__UnitError__Sequence * member =
    (protocol__msg__UnitError__Sequence *)(untyped_member);
  protocol__msg__UnitError__Sequence__fini(member);
  return protocol__msg__UnitError__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember protocol__msg__StatusCode__rosidl_typesupport_introspection_c__StatusCode_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__StatusCode, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "domain",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__StatusCode, domain),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__StatusCode, unit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__StatusCode, state_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__StatusCode, error_code),  // bytes offset in struct
    NULL,  // default value
    protocol__msg__StatusCode__rosidl_typesupport_introspection_c__size_function__StatusCode__error_code,  // size() function pointer
    protocol__msg__StatusCode__rosidl_typesupport_introspection_c__get_const_function__StatusCode__error_code,  // get_const(index) function pointer
    protocol__msg__StatusCode__rosidl_typesupport_introspection_c__get_function__StatusCode__error_code,  // get(index) function pointer
    protocol__msg__StatusCode__rosidl_typesupport_introspection_c__fetch_function__StatusCode__error_code,  // fetch(index, &value) function pointer
    protocol__msg__StatusCode__rosidl_typesupport_introspection_c__assign_function__StatusCode__error_code,  // assign(index, value) function pointer
    protocol__msg__StatusCode__rosidl_typesupport_introspection_c__resize_function__StatusCode__error_code  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers protocol__msg__StatusCode__rosidl_typesupport_introspection_c__StatusCode_message_members = {
  "protocol__msg",  // message namespace
  "StatusCode",  // message name
  5,  // number of fields
  sizeof(protocol__msg__StatusCode),
  false,  // has_any_key_member_
  protocol__msg__StatusCode__rosidl_typesupport_introspection_c__StatusCode_message_member_array,  // message members
  protocol__msg__StatusCode__rosidl_typesupport_introspection_c__StatusCode_init_function,  // function to initialize message memory (memory has to be allocated)
  protocol__msg__StatusCode__rosidl_typesupport_introspection_c__StatusCode_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t protocol__msg__StatusCode__rosidl_typesupport_introspection_c__StatusCode_message_type_support_handle = {
  0,
  &protocol__msg__StatusCode__rosidl_typesupport_introspection_c__StatusCode_message_members,
  get_message_typesupport_handle_function,
  &protocol__msg__StatusCode__get_type_hash,
  &protocol__msg__StatusCode__get_type_description,
  &protocol__msg__StatusCode__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, StatusCode)() {
  protocol__msg__StatusCode__rosidl_typesupport_introspection_c__StatusCode_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  protocol__msg__StatusCode__rosidl_typesupport_introspection_c__StatusCode_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, UnitError)();
  if (!protocol__msg__StatusCode__rosidl_typesupport_introspection_c__StatusCode_message_type_support_handle.typesupport_identifier) {
    protocol__msg__StatusCode__rosidl_typesupport_introspection_c__StatusCode_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &protocol__msg__StatusCode__rosidl_typesupport_introspection_c__StatusCode_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
