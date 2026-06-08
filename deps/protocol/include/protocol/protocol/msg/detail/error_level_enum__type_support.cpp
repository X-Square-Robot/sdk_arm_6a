// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from protocol:msg/ErrorLevelEnum.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "protocol/msg/detail/error_level_enum__functions.h"
#include "protocol/msg/detail/error_level_enum__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace protocol
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ErrorLevelEnum_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) protocol::msg::ErrorLevelEnum(_init);
}

void ErrorLevelEnum_fini_function(void * message_memory)
{
  auto typed_message = static_cast<protocol::msg::ErrorLevelEnum *>(message_memory);
  typed_message->~ErrorLevelEnum();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ErrorLevelEnum_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::ErrorLevelEnum, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ErrorLevelEnum_message_members = {
  "protocol::msg",  // message namespace
  "ErrorLevelEnum",  // message name
  1,  // number of fields
  sizeof(protocol::msg::ErrorLevelEnum),
  false,  // has_any_key_member_
  ErrorLevelEnum_message_member_array,  // message members
  ErrorLevelEnum_init_function,  // function to initialize message memory (memory has to be allocated)
  ErrorLevelEnum_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ErrorLevelEnum_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ErrorLevelEnum_message_members,
  get_message_typesupport_handle_function,
  &protocol__msg__ErrorLevelEnum__get_type_hash,
  &protocol__msg__ErrorLevelEnum__get_type_description,
  &protocol__msg__ErrorLevelEnum__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace protocol


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<protocol::msg::ErrorLevelEnum>()
{
  return &::protocol::msg::rosidl_typesupport_introspection_cpp::ErrorLevelEnum_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, protocol, msg, ErrorLevelEnum)() {
  return &::protocol::msg::rosidl_typesupport_introspection_cpp::ErrorLevelEnum_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
