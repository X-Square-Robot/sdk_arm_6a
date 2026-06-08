// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from x2robot_msgs:srv/TrajectoryPlanRequest.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "x2robot_msgs/srv/detail/trajectory_plan_request__functions.h"
#include "x2robot_msgs/srv/detail/trajectory_plan_request__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace x2robot_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void TrajectoryPlanRequest_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) x2robot_msgs::srv::TrajectoryPlanRequest_Request(_init);
}

void TrajectoryPlanRequest_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<x2robot_msgs::srv::TrajectoryPlanRequest_Request *>(message_memory);
  typed_message->~TrajectoryPlanRequest_Request();
}

size_t size_function__TrajectoryPlanRequest_Request__start_state_joint_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryPlanRequest_Request__start_state_joint_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryPlanRequest_Request__start_state_joint_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryPlanRequest_Request__start_state_joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__TrajectoryPlanRequest_Request__start_state_joint_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryPlanRequest_Request__start_state_joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__TrajectoryPlanRequest_Request__start_state_joint_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryPlanRequest_Request__start_state_joint_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrajectoryPlanRequest_Request__start_states(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryPlanRequest_Request__start_states(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryPlanRequest_Request__start_states(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryPlanRequest_Request__start_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__TrajectoryPlanRequest_Request__start_states(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryPlanRequest_Request__start_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__TrajectoryPlanRequest_Request__start_states(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryPlanRequest_Request__start_states(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrajectoryPlanRequest_Request__goal_state_joint_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryPlanRequest_Request__goal_state_joint_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryPlanRequest_Request__goal_state_joint_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryPlanRequest_Request__goal_state_joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__TrajectoryPlanRequest_Request__goal_state_joint_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryPlanRequest_Request__goal_state_joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__TrajectoryPlanRequest_Request__goal_state_joint_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryPlanRequest_Request__goal_state_joint_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrajectoryPlanRequest_Request__goal_states(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryPlanRequest_Request__goal_states(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryPlanRequest_Request__goal_states(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryPlanRequest_Request__goal_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__TrajectoryPlanRequest_Request__goal_states(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryPlanRequest_Request__goal_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__TrajectoryPlanRequest_Request__goal_states(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryPlanRequest_Request__goal_states(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrajectoryPlanRequest_Request__tolerance_above(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryPlanRequest_Request__tolerance_above(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryPlanRequest_Request__tolerance_above(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryPlanRequest_Request__tolerance_above(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__TrajectoryPlanRequest_Request__tolerance_above(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryPlanRequest_Request__tolerance_above(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__TrajectoryPlanRequest_Request__tolerance_above(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryPlanRequest_Request__tolerance_above(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrajectoryPlanRequest_Request__tolerance_below(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryPlanRequest_Request__tolerance_below(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryPlanRequest_Request__tolerance_below(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryPlanRequest_Request__tolerance_below(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__TrajectoryPlanRequest_Request__tolerance_below(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryPlanRequest_Request__tolerance_below(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__TrajectoryPlanRequest_Request__tolerance_below(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryPlanRequest_Request__tolerance_below(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryPlanRequest_Request_message_member_array[11] = {
  {
    "group_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs::srv::TrajectoryPlanRequest_Request, group_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "start_state_joint_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs::srv::TrajectoryPlanRequest_Request, start_state_joint_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryPlanRequest_Request__start_state_joint_names,  // size() function pointer
    get_const_function__TrajectoryPlanRequest_Request__start_state_joint_names,  // get_const(index) function pointer
    get_function__TrajectoryPlanRequest_Request__start_state_joint_names,  // get(index) function pointer
    fetch_function__TrajectoryPlanRequest_Request__start_state_joint_names,  // fetch(index, &value) function pointer
    assign_function__TrajectoryPlanRequest_Request__start_state_joint_names,  // assign(index, value) function pointer
    resize_function__TrajectoryPlanRequest_Request__start_state_joint_names  // resize(index) function pointer
  },
  {
    "start_states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs::srv::TrajectoryPlanRequest_Request, start_states),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryPlanRequest_Request__start_states,  // size() function pointer
    get_const_function__TrajectoryPlanRequest_Request__start_states,  // get_const(index) function pointer
    get_function__TrajectoryPlanRequest_Request__start_states,  // get(index) function pointer
    fetch_function__TrajectoryPlanRequest_Request__start_states,  // fetch(index, &value) function pointer
    assign_function__TrajectoryPlanRequest_Request__start_states,  // assign(index, value) function pointer
    resize_function__TrajectoryPlanRequest_Request__start_states  // resize(index) function pointer
  },
  {
    "goal_state_joint_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs::srv::TrajectoryPlanRequest_Request, goal_state_joint_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryPlanRequest_Request__goal_state_joint_names,  // size() function pointer
    get_const_function__TrajectoryPlanRequest_Request__goal_state_joint_names,  // get_const(index) function pointer
    get_function__TrajectoryPlanRequest_Request__goal_state_joint_names,  // get(index) function pointer
    fetch_function__TrajectoryPlanRequest_Request__goal_state_joint_names,  // fetch(index, &value) function pointer
    assign_function__TrajectoryPlanRequest_Request__goal_state_joint_names,  // assign(index, value) function pointer
    resize_function__TrajectoryPlanRequest_Request__goal_state_joint_names  // resize(index) function pointer
  },
  {
    "goal_states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs::srv::TrajectoryPlanRequest_Request, goal_states),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryPlanRequest_Request__goal_states,  // size() function pointer
    get_const_function__TrajectoryPlanRequest_Request__goal_states,  // get_const(index) function pointer
    get_function__TrajectoryPlanRequest_Request__goal_states,  // get(index) function pointer
    fetch_function__TrajectoryPlanRequest_Request__goal_states,  // fetch(index, &value) function pointer
    assign_function__TrajectoryPlanRequest_Request__goal_states,  // assign(index, value) function pointer
    resize_function__TrajectoryPlanRequest_Request__goal_states  // resize(index) function pointer
  },
  {
    "tolerance_above",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs::srv::TrajectoryPlanRequest_Request, tolerance_above),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryPlanRequest_Request__tolerance_above,  // size() function pointer
    get_const_function__TrajectoryPlanRequest_Request__tolerance_above,  // get_const(index) function pointer
    get_function__TrajectoryPlanRequest_Request__tolerance_above,  // get(index) function pointer
    fetch_function__TrajectoryPlanRequest_Request__tolerance_above,  // fetch(index, &value) function pointer
    assign_function__TrajectoryPlanRequest_Request__tolerance_above,  // assign(index, value) function pointer
    resize_function__TrajectoryPlanRequest_Request__tolerance_above  // resize(index) function pointer
  },
  {
    "tolerance_below",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs::srv::TrajectoryPlanRequest_Request, tolerance_below),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryPlanRequest_Request__tolerance_below,  // size() function pointer
    get_const_function__TrajectoryPlanRequest_Request__tolerance_below,  // get_const(index) function pointer
    get_function__TrajectoryPlanRequest_Request__tolerance_below,  // get(index) function pointer
    fetch_function__TrajectoryPlanRequest_Request__tolerance_below,  // fetch(index, &value) function pointer
    assign_function__TrajectoryPlanRequest_Request__tolerance_below,  // assign(index, value) function pointer
    resize_function__TrajectoryPlanRequest_Request__tolerance_below  // resize(index) function pointer
  },
  {
    "num_planning_attempts",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs::srv::TrajectoryPlanRequest_Request, num_planning_attempts),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "allowed_planning_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs::srv::TrajectoryPlanRequest_Request, allowed_planning_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "max_velocity_scaling_factor",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs::srv::TrajectoryPlanRequest_Request, max_velocity_scaling_factor),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "max_acceleration_scaling_factor",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs::srv::TrajectoryPlanRequest_Request, max_acceleration_scaling_factor),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryPlanRequest_Request_message_members = {
  "x2robot_msgs::srv",  // message namespace
  "TrajectoryPlanRequest_Request",  // message name
  11,  // number of fields
  sizeof(x2robot_msgs::srv::TrajectoryPlanRequest_Request),
  false,  // has_any_key_member_
  TrajectoryPlanRequest_Request_message_member_array,  // message members
  TrajectoryPlanRequest_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryPlanRequest_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryPlanRequest_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryPlanRequest_Request_message_members,
  get_message_typesupport_handle_function,
  &x2robot_msgs__srv__TrajectoryPlanRequest_Request__get_type_hash,
  &x2robot_msgs__srv__TrajectoryPlanRequest_Request__get_type_description,
  &x2robot_msgs__srv__TrajectoryPlanRequest_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace x2robot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<x2robot_msgs::srv::TrajectoryPlanRequest_Request>()
{
  return &::x2robot_msgs::srv::rosidl_typesupport_introspection_cpp::TrajectoryPlanRequest_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, x2robot_msgs, srv, TrajectoryPlanRequest_Request)() {
  return &::x2robot_msgs::srv::rosidl_typesupport_introspection_cpp::TrajectoryPlanRequest_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "x2robot_msgs/srv/detail/trajectory_plan_request__functions.h"
// already included above
// #include "x2robot_msgs/srv/detail/trajectory_plan_request__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace x2robot_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void TrajectoryPlanRequest_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) x2robot_msgs::srv::TrajectoryPlanRequest_Response(_init);
}

void TrajectoryPlanRequest_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<x2robot_msgs::srv::TrajectoryPlanRequest_Response *>(message_memory);
  typed_message->~TrajectoryPlanRequest_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryPlanRequest_Response_message_member_array[2] = {
  {
    "error_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs::srv::TrajectoryPlanRequest_Response, error_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "trajectory",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<trajectory_msgs::msg::JointTrajectory>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs::srv::TrajectoryPlanRequest_Response, trajectory),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryPlanRequest_Response_message_members = {
  "x2robot_msgs::srv",  // message namespace
  "TrajectoryPlanRequest_Response",  // message name
  2,  // number of fields
  sizeof(x2robot_msgs::srv::TrajectoryPlanRequest_Response),
  false,  // has_any_key_member_
  TrajectoryPlanRequest_Response_message_member_array,  // message members
  TrajectoryPlanRequest_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryPlanRequest_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryPlanRequest_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryPlanRequest_Response_message_members,
  get_message_typesupport_handle_function,
  &x2robot_msgs__srv__TrajectoryPlanRequest_Response__get_type_hash,
  &x2robot_msgs__srv__TrajectoryPlanRequest_Response__get_type_description,
  &x2robot_msgs__srv__TrajectoryPlanRequest_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace x2robot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<x2robot_msgs::srv::TrajectoryPlanRequest_Response>()
{
  return &::x2robot_msgs::srv::rosidl_typesupport_introspection_cpp::TrajectoryPlanRequest_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, x2robot_msgs, srv, TrajectoryPlanRequest_Response)() {
  return &::x2robot_msgs::srv::rosidl_typesupport_introspection_cpp::TrajectoryPlanRequest_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "x2robot_msgs/srv/detail/trajectory_plan_request__functions.h"
// already included above
// #include "x2robot_msgs/srv/detail/trajectory_plan_request__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace x2robot_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void TrajectoryPlanRequest_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) x2robot_msgs::srv::TrajectoryPlanRequest_Event(_init);
}

void TrajectoryPlanRequest_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<x2robot_msgs::srv::TrajectoryPlanRequest_Event *>(message_memory);
  typed_message->~TrajectoryPlanRequest_Event();
}

size_t size_function__TrajectoryPlanRequest_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<x2robot_msgs::srv::TrajectoryPlanRequest_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryPlanRequest_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<x2robot_msgs::srv::TrajectoryPlanRequest_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryPlanRequest_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<x2robot_msgs::srv::TrajectoryPlanRequest_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryPlanRequest_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const x2robot_msgs::srv::TrajectoryPlanRequest_Request *>(
    get_const_function__TrajectoryPlanRequest_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<x2robot_msgs::srv::TrajectoryPlanRequest_Request *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryPlanRequest_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<x2robot_msgs::srv::TrajectoryPlanRequest_Request *>(
    get_function__TrajectoryPlanRequest_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const x2robot_msgs::srv::TrajectoryPlanRequest_Request *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryPlanRequest_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<x2robot_msgs::srv::TrajectoryPlanRequest_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrajectoryPlanRequest_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<x2robot_msgs::srv::TrajectoryPlanRequest_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryPlanRequest_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<x2robot_msgs::srv::TrajectoryPlanRequest_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryPlanRequest_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<x2robot_msgs::srv::TrajectoryPlanRequest_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectoryPlanRequest_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const x2robot_msgs::srv::TrajectoryPlanRequest_Response *>(
    get_const_function__TrajectoryPlanRequest_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<x2robot_msgs::srv::TrajectoryPlanRequest_Response *>(untyped_value);
  value = item;
}

void assign_function__TrajectoryPlanRequest_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<x2robot_msgs::srv::TrajectoryPlanRequest_Response *>(
    get_function__TrajectoryPlanRequest_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const x2robot_msgs::srv::TrajectoryPlanRequest_Response *>(untyped_value);
  item = value;
}

void resize_function__TrajectoryPlanRequest_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<x2robot_msgs::srv::TrajectoryPlanRequest_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryPlanRequest_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs::srv::TrajectoryPlanRequest_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<x2robot_msgs::srv::TrajectoryPlanRequest_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(x2robot_msgs::srv::TrajectoryPlanRequest_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryPlanRequest_Event__request,  // size() function pointer
    get_const_function__TrajectoryPlanRequest_Event__request,  // get_const(index) function pointer
    get_function__TrajectoryPlanRequest_Event__request,  // get(index) function pointer
    fetch_function__TrajectoryPlanRequest_Event__request,  // fetch(index, &value) function pointer
    assign_function__TrajectoryPlanRequest_Event__request,  // assign(index, value) function pointer
    resize_function__TrajectoryPlanRequest_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<x2robot_msgs::srv::TrajectoryPlanRequest_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(x2robot_msgs::srv::TrajectoryPlanRequest_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryPlanRequest_Event__response,  // size() function pointer
    get_const_function__TrajectoryPlanRequest_Event__response,  // get_const(index) function pointer
    get_function__TrajectoryPlanRequest_Event__response,  // get(index) function pointer
    fetch_function__TrajectoryPlanRequest_Event__response,  // fetch(index, &value) function pointer
    assign_function__TrajectoryPlanRequest_Event__response,  // assign(index, value) function pointer
    resize_function__TrajectoryPlanRequest_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryPlanRequest_Event_message_members = {
  "x2robot_msgs::srv",  // message namespace
  "TrajectoryPlanRequest_Event",  // message name
  3,  // number of fields
  sizeof(x2robot_msgs::srv::TrajectoryPlanRequest_Event),
  false,  // has_any_key_member_
  TrajectoryPlanRequest_Event_message_member_array,  // message members
  TrajectoryPlanRequest_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryPlanRequest_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryPlanRequest_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryPlanRequest_Event_message_members,
  get_message_typesupport_handle_function,
  &x2robot_msgs__srv__TrajectoryPlanRequest_Event__get_type_hash,
  &x2robot_msgs__srv__TrajectoryPlanRequest_Event__get_type_description,
  &x2robot_msgs__srv__TrajectoryPlanRequest_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace x2robot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<x2robot_msgs::srv::TrajectoryPlanRequest_Event>()
{
  return &::x2robot_msgs::srv::rosidl_typesupport_introspection_cpp::TrajectoryPlanRequest_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, x2robot_msgs, srv, TrajectoryPlanRequest_Event)() {
  return &::x2robot_msgs::srv::rosidl_typesupport_introspection_cpp::TrajectoryPlanRequest_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "x2robot_msgs/srv/detail/trajectory_plan_request__functions.h"
// already included above
// #include "x2robot_msgs/srv/detail/trajectory_plan_request__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace x2robot_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers TrajectoryPlanRequest_service_members = {
  "x2robot_msgs::srv",  // service namespace
  "TrajectoryPlanRequest",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<x2robot_msgs::srv::TrajectoryPlanRequest>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t TrajectoryPlanRequest_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryPlanRequest_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<x2robot_msgs::srv::TrajectoryPlanRequest_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<x2robot_msgs::srv::TrajectoryPlanRequest_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<x2robot_msgs::srv::TrajectoryPlanRequest_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<x2robot_msgs::srv::TrajectoryPlanRequest>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<x2robot_msgs::srv::TrajectoryPlanRequest>,
  &x2robot_msgs__srv__TrajectoryPlanRequest__get_type_hash,
  &x2robot_msgs__srv__TrajectoryPlanRequest__get_type_description,
  &x2robot_msgs__srv__TrajectoryPlanRequest__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace x2robot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<x2robot_msgs::srv::TrajectoryPlanRequest>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::x2robot_msgs::srv::rosidl_typesupport_introspection_cpp::TrajectoryPlanRequest_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::x2robot_msgs::srv::TrajectoryPlanRequest_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::x2robot_msgs::srv::TrajectoryPlanRequest_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::x2robot_msgs::srv::TrajectoryPlanRequest_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, x2robot_msgs, srv, TrajectoryPlanRequest)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<x2robot_msgs::srv::TrajectoryPlanRequest>();
}

#ifdef __cplusplus
}
#endif
