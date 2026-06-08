// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:msg/ErrorCodes.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/msg/detail/error_codes__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/msg/detail/error_codes__functions.h"
#include "protocol/msg/detail/error_codes__struct.h"


// Include directives for member types
// Member `error_codes`
#include "protocol/msg/global_error.h"
// Member `error_codes`
#include "protocol/msg/detail/global_error__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void protocol__msg__ErrorCodes__rosidl_typesupport_introspection_c__ErrorCodes_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__msg__ErrorCodes__init(message_memory);
}

void protocol__msg__ErrorCodes__rosidl_typesupport_introspection_c__ErrorCodes_fini_function(void * message_memory)
{
  protocol__msg__ErrorCodes__fini(message_memory);
}

size_t protocol__msg__ErrorCodes__rosidl_typesupport_introspection_c__size_function__ErrorCodes__error_codes(
  const void * untyped_member)
{
  const protocol__msg__GlobalError__Sequence * member =
    (const protocol__msg__GlobalError__Sequence *)(untyped_member);
  return member->size;
}

const void * protocol__msg__ErrorCodes__rosidl_typesupport_introspection_c__get_const_function__ErrorCodes__error_codes(
  const void * untyped_member, size_t index)
{
  const protocol__msg__GlobalError__Sequence * member =
    (const protocol__msg__GlobalError__Sequence *)(untyped_member);
  return &member->data[index];
}

void * protocol__msg__ErrorCodes__rosidl_typesupport_introspection_c__get_function__ErrorCodes__error_codes(
  void * untyped_member, size_t index)
{
  protocol__msg__GlobalError__Sequence * member =
    (protocol__msg__GlobalError__Sequence *)(untyped_member);
  return &member->data[index];
}

void protocol__msg__ErrorCodes__rosidl_typesupport_introspection_c__fetch_function__ErrorCodes__error_codes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const protocol__msg__GlobalError * item =
    ((const protocol__msg__GlobalError *)
    protocol__msg__ErrorCodes__rosidl_typesupport_introspection_c__get_const_function__ErrorCodes__error_codes(untyped_member, index));
  protocol__msg__GlobalError * value =
    (protocol__msg__GlobalError *)(untyped_value);
  *value = *item;
}

void protocol__msg__ErrorCodes__rosidl_typesupport_introspection_c__assign_function__ErrorCodes__error_codes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  protocol__msg__GlobalError * item =
    ((protocol__msg__GlobalError *)
    protocol__msg__ErrorCodes__rosidl_typesupport_introspection_c__get_function__ErrorCodes__error_codes(untyped_member, index));
  const protocol__msg__GlobalError * value =
    (const protocol__msg__GlobalError *)(untyped_value);
  *item = *value;
}

bool protocol__msg__ErrorCodes__rosidl_typesupport_introspection_c__resize_function__ErrorCodes__error_codes(
  void * untyped_member, size_t size)
{
  protocol__msg__GlobalError__Sequence * member =
    (protocol__msg__GlobalError__Sequence *)(untyped_member);
  protocol__msg__GlobalError__Sequence__fini(member);
  return protocol__msg__GlobalError__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember protocol__msg__ErrorCodes__rosidl_typesupport_introspection_c__ErrorCodes_message_member_array[1] = {
  {
    "error_codes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__ErrorCodes, error_codes),  // bytes offset in struct
    NULL,  // default value
    protocol__msg__ErrorCodes__rosidl_typesupport_introspection_c__size_function__ErrorCodes__error_codes,  // size() function pointer
    protocol__msg__ErrorCodes__rosidl_typesupport_introspection_c__get_const_function__ErrorCodes__error_codes,  // get_const(index) function pointer
    protocol__msg__ErrorCodes__rosidl_typesupport_introspection_c__get_function__ErrorCodes__error_codes,  // get(index) function pointer
    protocol__msg__ErrorCodes__rosidl_typesupport_introspection_c__fetch_function__ErrorCodes__error_codes,  // fetch(index, &value) function pointer
    protocol__msg__ErrorCodes__rosidl_typesupport_introspection_c__assign_function__ErrorCodes__error_codes,  // assign(index, value) function pointer
    protocol__msg__ErrorCodes__rosidl_typesupport_introspection_c__resize_function__ErrorCodes__error_codes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers protocol__msg__ErrorCodes__rosidl_typesupport_introspection_c__ErrorCodes_message_members = {
  "protocol__msg",  // message namespace
  "ErrorCodes",  // message name
  1,  // number of fields
  sizeof(protocol__msg__ErrorCodes),
  false,  // has_any_key_member_
  protocol__msg__ErrorCodes__rosidl_typesupport_introspection_c__ErrorCodes_message_member_array,  // message members
  protocol__msg__ErrorCodes__rosidl_typesupport_introspection_c__ErrorCodes_init_function,  // function to initialize message memory (memory has to be allocated)
  protocol__msg__ErrorCodes__rosidl_typesupport_introspection_c__ErrorCodes_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t protocol__msg__ErrorCodes__rosidl_typesupport_introspection_c__ErrorCodes_message_type_support_handle = {
  0,
  &protocol__msg__ErrorCodes__rosidl_typesupport_introspection_c__ErrorCodes_message_members,
  get_message_typesupport_handle_function,
  &protocol__msg__ErrorCodes__get_type_hash,
  &protocol__msg__ErrorCodes__get_type_description,
  &protocol__msg__ErrorCodes__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, ErrorCodes)() {
  protocol__msg__ErrorCodes__rosidl_typesupport_introspection_c__ErrorCodes_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, GlobalError)();
  if (!protocol__msg__ErrorCodes__rosidl_typesupport_introspection_c__ErrorCodes_message_type_support_handle.typesupport_identifier) {
    protocol__msg__ErrorCodes__rosidl_typesupport_introspection_c__ErrorCodes_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &protocol__msg__ErrorCodes__rosidl_typesupport_introspection_c__ErrorCodes_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
