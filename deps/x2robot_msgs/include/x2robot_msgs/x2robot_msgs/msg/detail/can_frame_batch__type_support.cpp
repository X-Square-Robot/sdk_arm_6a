// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from x2robot_msgs:msg/CanFrameBatch.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "x2robot_msgs/msg/detail/can_frame_batch__functions.h"
#include "x2robot_msgs/msg/detail/can_frame_batch__struct.hpp"
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

void CanFrameBatch_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) x2robot_msgs::msg::CanFrameBatch(_init);
}

void CanFrameBatch_fini_function(void * message_memory)
{
  auto typed_message = static_cast<x2robot_msgs::msg::CanFrameBatch *>(message_memory);
  typed_message->~CanFrameBatch();
}

size_t size_function__CanFrameBatch__frames(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<x2robot_msgs::msg::CanFrame> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CanFrameBatch__frames(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<x2robot_msgs::msg::CanFrame> *>(untyped_member);
  return &member[index];
}

void * get_function__CanFrameBatch__frames(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<x2robot_msgs::msg::CanFrame> *>(untyped_member);
  return &member[index];
}

void fetch_function__CanFrameBatch__frames(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const x2robot_msgs::msg::CanFrame *>(
    get_const_function__CanFrameBatch__frames(untyped_member, index));
  auto & value = *reinterpret_cast<x2robot_msgs::msg::CanFrame *>(untyped_value);
  value = item;
}

void assign_function__CanFrameBatch__frames(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<x2robot_msgs::msg::CanFrame *>(
    get_function__CanFrameBatch__frames(untyped_member, index));
  const auto & value = *reinterpret_cast<const x2robot_msgs::msg::CanFrame *>(untyped_value);
  item = value;
}

void resize_function__CanFrameBatch__frames(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<x2robot_msgs::msg::CanFrame> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CanFrameBatch_message_member_array[1] = {
  {
    "frames",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<x2robot_msgs::msg::CanFrame>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs::msg::CanFrameBatch, frames),  // bytes offset in struct
    nullptr,  // default value
    size_function__CanFrameBatch__frames,  // size() function pointer
    get_const_function__CanFrameBatch__frames,  // get_const(index) function pointer
    get_function__CanFrameBatch__frames,  // get(index) function pointer
    fetch_function__CanFrameBatch__frames,  // fetch(index, &value) function pointer
    assign_function__CanFrameBatch__frames,  // assign(index, value) function pointer
    resize_function__CanFrameBatch__frames  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CanFrameBatch_message_members = {
  "x2robot_msgs::msg",  // message namespace
  "CanFrameBatch",  // message name
  1,  // number of fields
  sizeof(x2robot_msgs::msg::CanFrameBatch),
  false,  // has_any_key_member_
  CanFrameBatch_message_member_array,  // message members
  CanFrameBatch_init_function,  // function to initialize message memory (memory has to be allocated)
  CanFrameBatch_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CanFrameBatch_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CanFrameBatch_message_members,
  get_message_typesupport_handle_function,
  &x2robot_msgs__msg__CanFrameBatch__get_type_hash,
  &x2robot_msgs__msg__CanFrameBatch__get_type_description,
  &x2robot_msgs__msg__CanFrameBatch__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace x2robot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<x2robot_msgs::msg::CanFrameBatch>()
{
  return &::x2robot_msgs::msg::rosidl_typesupport_introspection_cpp::CanFrameBatch_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, x2robot_msgs, msg, CanFrameBatch)() {
  return &::x2robot_msgs::msg::rosidl_typesupport_introspection_cpp::CanFrameBatch_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
