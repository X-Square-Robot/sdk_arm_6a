// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from protocol:msg/StatusCode.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "protocol/msg/detail/status_code__functions.h"
#include "protocol/msg/detail/status_code__struct.hpp"
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

void StatusCode_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) protocol::msg::StatusCode(_init);
}

void StatusCode_fini_function(void * message_memory)
{
  auto typed_message = static_cast<protocol::msg::StatusCode *>(message_memory);
  typed_message->~StatusCode();
}

size_t size_function__StatusCode__error_code(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<protocol::msg::UnitError> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StatusCode__error_code(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<protocol::msg::UnitError> *>(untyped_member);
  return &member[index];
}

void * get_function__StatusCode__error_code(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<protocol::msg::UnitError> *>(untyped_member);
  return &member[index];
}

void fetch_function__StatusCode__error_code(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const protocol::msg::UnitError *>(
    get_const_function__StatusCode__error_code(untyped_member, index));
  auto & value = *reinterpret_cast<protocol::msg::UnitError *>(untyped_value);
  value = item;
}

void assign_function__StatusCode__error_code(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<protocol::msg::UnitError *>(
    get_function__StatusCode__error_code(untyped_member, index));
  const auto & value = *reinterpret_cast<const protocol::msg::UnitError *>(untyped_value);
  item = value;
}

void resize_function__StatusCode__error_code(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<protocol::msg::UnitError> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StatusCode_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::StatusCode, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "domain",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::StatusCode, domain),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "unit",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::StatusCode, unit),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::StatusCode, state_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<protocol::msg::UnitError>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol::msg::StatusCode, error_code),  // bytes offset in struct
    nullptr,  // default value
    size_function__StatusCode__error_code,  // size() function pointer
    get_const_function__StatusCode__error_code,  // get_const(index) function pointer
    get_function__StatusCode__error_code,  // get(index) function pointer
    fetch_function__StatusCode__error_code,  // fetch(index, &value) function pointer
    assign_function__StatusCode__error_code,  // assign(index, value) function pointer
    resize_function__StatusCode__error_code  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StatusCode_message_members = {
  "protocol::msg",  // message namespace
  "StatusCode",  // message name
  5,  // number of fields
  sizeof(protocol::msg::StatusCode),
  false,  // has_any_key_member_
  StatusCode_message_member_array,  // message members
  StatusCode_init_function,  // function to initialize message memory (memory has to be allocated)
  StatusCode_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StatusCode_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StatusCode_message_members,
  get_message_typesupport_handle_function,
  &protocol__msg__StatusCode__get_type_hash,
  &protocol__msg__StatusCode__get_type_description,
  &protocol__msg__StatusCode__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace protocol


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<protocol::msg::StatusCode>()
{
  return &::protocol::msg::rosidl_typesupport_introspection_cpp::StatusCode_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, protocol, msg, StatusCode)() {
  return &::protocol::msg::rosidl_typesupport_introspection_cpp::StatusCode_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
