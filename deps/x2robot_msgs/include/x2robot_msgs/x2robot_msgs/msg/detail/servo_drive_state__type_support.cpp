// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from x2robot_msgs:msg/ServoDriveState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "x2robot_msgs/msg/detail/servo_drive_state__functions.h"
#include "x2robot_msgs/msg/detail/servo_drive_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace x2robot_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ServoDriveState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) x2robot_msgs::msg::ServoDriveState(_init);
}

void ServoDriveState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<x2robot_msgs::msg::ServoDriveState *>(message_memory);
  typed_message->~ServoDriveState();
}

size_t size_function__ServoDriveState__joint_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServoDriveState__joint_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ServoDriveState__joint_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__ServoDriveState__joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__ServoDriveState__joint_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__ServoDriveState__joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__ServoDriveState__joint_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__ServoDriveState__joint_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ServoDriveState__error_codes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServoDriveState__error_codes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ServoDriveState__error_codes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__ServoDriveState__error_codes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__ServoDriveState__error_codes(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__ServoDriveState__error_codes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__ServoDriveState__error_codes(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__ServoDriveState__error_codes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ServoDriveState_message_member_array[4] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs::msg::ServoDriveState, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs::msg::ServoDriveState, joint_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServoDriveState__joint_names,  // size() function pointer
    get_const_function__ServoDriveState__joint_names,  // get_const(index) function pointer
    get_function__ServoDriveState__joint_names,  // get(index) function pointer
    fetch_function__ServoDriveState__joint_names,  // fetch(index, &value) function pointer
    assign_function__ServoDriveState__joint_names,  // assign(index, value) function pointer
    resize_function__ServoDriveState__joint_names  // resize(index) function pointer
  },
  {
    "error_codes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs::msg::ServoDriveState, error_codes),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServoDriveState__error_codes,  // size() function pointer
    get_const_function__ServoDriveState__error_codes,  // get_const(index) function pointer
    get_function__ServoDriveState__error_codes,  // get(index) function pointer
    fetch_function__ServoDriveState__error_codes,  // fetch(index, &value) function pointer
    assign_function__ServoDriveState__error_codes,  // assign(index, value) function pointer
    resize_function__ServoDriveState__error_codes  // resize(index) function pointer
  },
  {
    "current_mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs::msg::ServoDriveState, current_mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ServoDriveState_message_members = {
  "x2robot_msgs::msg",  // message namespace
  "ServoDriveState",  // message name
  4,  // number of fields
  sizeof(x2robot_msgs::msg::ServoDriveState),
  false,  // has_any_key_member_
  ServoDriveState_message_member_array,  // message members
  ServoDriveState_init_function,  // function to initialize message memory (memory has to be allocated)
  ServoDriveState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ServoDriveState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServoDriveState_message_members,
  get_message_typesupport_handle_function,
  &x2robot_msgs__msg__ServoDriveState__get_type_hash,
  &x2robot_msgs__msg__ServoDriveState__get_type_description,
  &x2robot_msgs__msg__ServoDriveState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace x2robot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<x2robot_msgs::msg::ServoDriveState>()
{
  return &::x2robot_msgs::msg::rosidl_typesupport_introspection_cpp::ServoDriveState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, x2robot_msgs, msg, ServoDriveState)() {
  return &::x2robot_msgs::msg::rosidl_typesupport_introspection_cpp::ServoDriveState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
