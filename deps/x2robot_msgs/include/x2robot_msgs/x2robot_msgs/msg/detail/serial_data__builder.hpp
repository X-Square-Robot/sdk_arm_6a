// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from x2robot_msgs:msg/SerialData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/serial_data.hpp"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__SERIAL_DATA__BUILDER_HPP_
#define X2ROBOT_MSGS__MSG__DETAIL__SERIAL_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "x2robot_msgs/msg/detail/serial_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace x2robot_msgs
{

namespace msg
{

namespace builder
{

class Init_SerialData_payload
{
public:
  explicit Init_SerialData_payload(::x2robot_msgs::msg::SerialData & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::msg::SerialData payload(::x2robot_msgs::msg::SerialData::_payload_type arg)
  {
    msg_.payload = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::msg::SerialData msg_;
};

class Init_SerialData_cmd_id
{
public:
  explicit Init_SerialData_cmd_id(::x2robot_msgs::msg::SerialData & msg)
  : msg_(msg)
  {}
  Init_SerialData_payload cmd_id(::x2robot_msgs::msg::SerialData::_cmd_id_type arg)
  {
    msg_.cmd_id = std::move(arg);
    return Init_SerialData_payload(msg_);
  }

private:
  ::x2robot_msgs::msg::SerialData msg_;
};

class Init_SerialData_device_id
{
public:
  explicit Init_SerialData_device_id(::x2robot_msgs::msg::SerialData & msg)
  : msg_(msg)
  {}
  Init_SerialData_cmd_id device_id(::x2robot_msgs::msg::SerialData::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_SerialData_cmd_id(msg_);
  }

private:
  ::x2robot_msgs::msg::SerialData msg_;
};

class Init_SerialData_stamp
{
public:
  Init_SerialData_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SerialData_device_id stamp(::x2robot_msgs::msg::SerialData::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_SerialData_device_id(msg_);
  }

private:
  ::x2robot_msgs::msg::SerialData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::msg::SerialData>()
{
  return x2robot_msgs::msg::builder::Init_SerialData_stamp();
}

}  // namespace x2robot_msgs

#endif  // X2ROBOT_MSGS__MSG__DETAIL__SERIAL_DATA__BUILDER_HPP_
