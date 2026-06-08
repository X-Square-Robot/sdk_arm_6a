// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from x2robot_msgs:msg/TashanTactileData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "x2robot_msgs/msg/detail/tashan_tactile_data__functions.h"
#include "x2robot_msgs/msg/detail/tashan_tactile_data__struct.hpp"
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

void TashanTactileData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) x2robot_msgs::msg::TashanTactileData(_init);
}

void TashanTactileData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<x2robot_msgs::msg::TashanTactileData *>(message_memory);
  typed_message->~TashanTactileData();
}

size_t size_function__TashanTactileData__sensor_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TashanTactileData__sensor_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__TashanTactileData__sensor_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__TashanTactileData__sensor_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__TashanTactileData__sensor_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__TashanTactileData__sensor_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__TashanTactileData__sensor_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__TashanTactileData__sensor_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TashanTactileData__frame_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TashanTactileData__frame_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__TashanTactileData__frame_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__TashanTactileData__frame_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__TashanTactileData__frame_ids(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__TashanTactileData__frame_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__TashanTactileData__frame_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__TashanTactileData__frame_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TashanTactileData__normal_forces(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TashanTactileData__normal_forces(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__TashanTactileData__normal_forces(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__TashanTactileData__normal_forces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__TashanTactileData__normal_forces(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__TashanTactileData__normal_forces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__TashanTactileData__normal_forces(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__TashanTactileData__normal_forces(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TashanTactileData__tangential_forces(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TashanTactileData__tangential_forces(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__TashanTactileData__tangential_forces(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__TashanTactileData__tangential_forces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__TashanTactileData__tangential_forces(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__TashanTactileData__tangential_forces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__TashanTactileData__tangential_forces(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__TashanTactileData__tangential_forces(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TashanTactileData__directions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TashanTactileData__directions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__TashanTactileData__directions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__TashanTactileData__directions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__TashanTactileData__directions(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__TashanTactileData__directions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__TashanTactileData__directions(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

void resize_function__TashanTactileData__directions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TashanTactileData__capacitances(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TashanTactileData__capacitances(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__TashanTactileData__capacitances(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__TashanTactileData__capacitances(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__TashanTactileData__capacitances(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__TashanTactileData__capacitances(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__TashanTactileData__capacitances(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__TashanTactileData__capacitances(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TashanTactileData__error_codes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TashanTactileData__error_codes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__TashanTactileData__error_codes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__TashanTactileData__error_codes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__TashanTactileData__error_codes(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__TashanTactileData__error_codes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__TashanTactileData__error_codes(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__TashanTactileData__error_codes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TashanTactileData_message_member_array[8] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs::msg::TashanTactileData, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sensor_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs::msg::TashanTactileData, sensor_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__TashanTactileData__sensor_names,  // size() function pointer
    get_const_function__TashanTactileData__sensor_names,  // get_const(index) function pointer
    get_function__TashanTactileData__sensor_names,  // get(index) function pointer
    fetch_function__TashanTactileData__sensor_names,  // fetch(index, &value) function pointer
    assign_function__TashanTactileData__sensor_names,  // assign(index, value) function pointer
    resize_function__TashanTactileData__sensor_names  // resize(index) function pointer
  },
  {
    "frame_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs::msg::TashanTactileData, frame_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__TashanTactileData__frame_ids,  // size() function pointer
    get_const_function__TashanTactileData__frame_ids,  // get_const(index) function pointer
    get_function__TashanTactileData__frame_ids,  // get(index) function pointer
    fetch_function__TashanTactileData__frame_ids,  // fetch(index, &value) function pointer
    assign_function__TashanTactileData__frame_ids,  // assign(index, value) function pointer
    resize_function__TashanTactileData__frame_ids  // resize(index) function pointer
  },
  {
    "normal_forces",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs::msg::TashanTactileData, normal_forces),  // bytes offset in struct
    nullptr,  // default value
    size_function__TashanTactileData__normal_forces,  // size() function pointer
    get_const_function__TashanTactileData__normal_forces,  // get_const(index) function pointer
    get_function__TashanTactileData__normal_forces,  // get(index) function pointer
    fetch_function__TashanTactileData__normal_forces,  // fetch(index, &value) function pointer
    assign_function__TashanTactileData__normal_forces,  // assign(index, value) function pointer
    resize_function__TashanTactileData__normal_forces  // resize(index) function pointer
  },
  {
    "tangential_forces",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs::msg::TashanTactileData, tangential_forces),  // bytes offset in struct
    nullptr,  // default value
    size_function__TashanTactileData__tangential_forces,  // size() function pointer
    get_const_function__TashanTactileData__tangential_forces,  // get_const(index) function pointer
    get_function__TashanTactileData__tangential_forces,  // get(index) function pointer
    fetch_function__TashanTactileData__tangential_forces,  // fetch(index, &value) function pointer
    assign_function__TashanTactileData__tangential_forces,  // assign(index, value) function pointer
    resize_function__TashanTactileData__tangential_forces  // resize(index) function pointer
  },
  {
    "directions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs::msg::TashanTactileData, directions),  // bytes offset in struct
    nullptr,  // default value
    size_function__TashanTactileData__directions,  // size() function pointer
    get_const_function__TashanTactileData__directions,  // get_const(index) function pointer
    get_function__TashanTactileData__directions,  // get(index) function pointer
    fetch_function__TashanTactileData__directions,  // fetch(index, &value) function pointer
    assign_function__TashanTactileData__directions,  // assign(index, value) function pointer
    resize_function__TashanTactileData__directions  // resize(index) function pointer
  },
  {
    "capacitances",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs::msg::TashanTactileData, capacitances),  // bytes offset in struct
    nullptr,  // default value
    size_function__TashanTactileData__capacitances,  // size() function pointer
    get_const_function__TashanTactileData__capacitances,  // get_const(index) function pointer
    get_function__TashanTactileData__capacitances,  // get(index) function pointer
    fetch_function__TashanTactileData__capacitances,  // fetch(index, &value) function pointer
    assign_function__TashanTactileData__capacitances,  // assign(index, value) function pointer
    resize_function__TashanTactileData__capacitances  // resize(index) function pointer
  },
  {
    "error_codes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs::msg::TashanTactileData, error_codes),  // bytes offset in struct
    nullptr,  // default value
    size_function__TashanTactileData__error_codes,  // size() function pointer
    get_const_function__TashanTactileData__error_codes,  // get_const(index) function pointer
    get_function__TashanTactileData__error_codes,  // get(index) function pointer
    fetch_function__TashanTactileData__error_codes,  // fetch(index, &value) function pointer
    assign_function__TashanTactileData__error_codes,  // assign(index, value) function pointer
    resize_function__TashanTactileData__error_codes  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TashanTactileData_message_members = {
  "x2robot_msgs::msg",  // message namespace
  "TashanTactileData",  // message name
  8,  // number of fields
  sizeof(x2robot_msgs::msg::TashanTactileData),
  false,  // has_any_key_member_
  TashanTactileData_message_member_array,  // message members
  TashanTactileData_init_function,  // function to initialize message memory (memory has to be allocated)
  TashanTactileData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TashanTactileData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TashanTactileData_message_members,
  get_message_typesupport_handle_function,
  &x2robot_msgs__msg__TashanTactileData__get_type_hash,
  &x2robot_msgs__msg__TashanTactileData__get_type_description,
  &x2robot_msgs__msg__TashanTactileData__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace x2robot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<x2robot_msgs::msg::TashanTactileData>()
{
  return &::x2robot_msgs::msg::rosidl_typesupport_introspection_cpp::TashanTactileData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, x2robot_msgs, msg, TashanTactileData)() {
  return &::x2robot_msgs::msg::rosidl_typesupport_introspection_cpp::TashanTactileData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
