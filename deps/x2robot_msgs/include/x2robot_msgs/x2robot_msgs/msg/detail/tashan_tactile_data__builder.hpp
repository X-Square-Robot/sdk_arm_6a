// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from x2robot_msgs:msg/TashanTactileData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/tashan_tactile_data.hpp"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__TASHAN_TACTILE_DATA__BUILDER_HPP_
#define X2ROBOT_MSGS__MSG__DETAIL__TASHAN_TACTILE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "x2robot_msgs/msg/detail/tashan_tactile_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace x2robot_msgs
{

namespace msg
{

namespace builder
{

class Init_TashanTactileData_error_codes
{
public:
  explicit Init_TashanTactileData_error_codes(::x2robot_msgs::msg::TashanTactileData & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::msg::TashanTactileData error_codes(::x2robot_msgs::msg::TashanTactileData::_error_codes_type arg)
  {
    msg_.error_codes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::msg::TashanTactileData msg_;
};

class Init_TashanTactileData_capacitances
{
public:
  explicit Init_TashanTactileData_capacitances(::x2robot_msgs::msg::TashanTactileData & msg)
  : msg_(msg)
  {}
  Init_TashanTactileData_error_codes capacitances(::x2robot_msgs::msg::TashanTactileData::_capacitances_type arg)
  {
    msg_.capacitances = std::move(arg);
    return Init_TashanTactileData_error_codes(msg_);
  }

private:
  ::x2robot_msgs::msg::TashanTactileData msg_;
};

class Init_TashanTactileData_directions
{
public:
  explicit Init_TashanTactileData_directions(::x2robot_msgs::msg::TashanTactileData & msg)
  : msg_(msg)
  {}
  Init_TashanTactileData_capacitances directions(::x2robot_msgs::msg::TashanTactileData::_directions_type arg)
  {
    msg_.directions = std::move(arg);
    return Init_TashanTactileData_capacitances(msg_);
  }

private:
  ::x2robot_msgs::msg::TashanTactileData msg_;
};

class Init_TashanTactileData_tangential_forces
{
public:
  explicit Init_TashanTactileData_tangential_forces(::x2robot_msgs::msg::TashanTactileData & msg)
  : msg_(msg)
  {}
  Init_TashanTactileData_directions tangential_forces(::x2robot_msgs::msg::TashanTactileData::_tangential_forces_type arg)
  {
    msg_.tangential_forces = std::move(arg);
    return Init_TashanTactileData_directions(msg_);
  }

private:
  ::x2robot_msgs::msg::TashanTactileData msg_;
};

class Init_TashanTactileData_normal_forces
{
public:
  explicit Init_TashanTactileData_normal_forces(::x2robot_msgs::msg::TashanTactileData & msg)
  : msg_(msg)
  {}
  Init_TashanTactileData_tangential_forces normal_forces(::x2robot_msgs::msg::TashanTactileData::_normal_forces_type arg)
  {
    msg_.normal_forces = std::move(arg);
    return Init_TashanTactileData_tangential_forces(msg_);
  }

private:
  ::x2robot_msgs::msg::TashanTactileData msg_;
};

class Init_TashanTactileData_frame_ids
{
public:
  explicit Init_TashanTactileData_frame_ids(::x2robot_msgs::msg::TashanTactileData & msg)
  : msg_(msg)
  {}
  Init_TashanTactileData_normal_forces frame_ids(::x2robot_msgs::msg::TashanTactileData::_frame_ids_type arg)
  {
    msg_.frame_ids = std::move(arg);
    return Init_TashanTactileData_normal_forces(msg_);
  }

private:
  ::x2robot_msgs::msg::TashanTactileData msg_;
};

class Init_TashanTactileData_sensor_names
{
public:
  explicit Init_TashanTactileData_sensor_names(::x2robot_msgs::msg::TashanTactileData & msg)
  : msg_(msg)
  {}
  Init_TashanTactileData_frame_ids sensor_names(::x2robot_msgs::msg::TashanTactileData::_sensor_names_type arg)
  {
    msg_.sensor_names = std::move(arg);
    return Init_TashanTactileData_frame_ids(msg_);
  }

private:
  ::x2robot_msgs::msg::TashanTactileData msg_;
};

class Init_TashanTactileData_stamp
{
public:
  Init_TashanTactileData_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TashanTactileData_sensor_names stamp(::x2robot_msgs::msg::TashanTactileData::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_TashanTactileData_sensor_names(msg_);
  }

private:
  ::x2robot_msgs::msg::TashanTactileData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::msg::TashanTactileData>()
{
  return x2robot_msgs::msg::builder::Init_TashanTactileData_stamp();
}

}  // namespace x2robot_msgs

#endif  // X2ROBOT_MSGS__MSG__DETAIL__TASHAN_TACTILE_DATA__BUILDER_HPP_
