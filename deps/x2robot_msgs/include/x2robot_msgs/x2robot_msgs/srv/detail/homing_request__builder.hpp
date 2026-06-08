// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from x2robot_msgs:srv/HomingRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/srv/homing_request.hpp"


#ifndef X2ROBOT_MSGS__SRV__DETAIL__HOMING_REQUEST__BUILDER_HPP_
#define X2ROBOT_MSGS__SRV__DETAIL__HOMING_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "x2robot_msgs/srv/detail/homing_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace x2robot_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::srv::HomingRequest_Request>()
{
  return ::x2robot_msgs::srv::HomingRequest_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace x2robot_msgs


namespace x2robot_msgs
{

namespace srv
{

namespace builder
{

class Init_HomingRequest_Response_is_succ
{
public:
  Init_HomingRequest_Response_is_succ()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::x2robot_msgs::srv::HomingRequest_Response is_succ(::x2robot_msgs::srv::HomingRequest_Response::_is_succ_type arg)
  {
    msg_.is_succ = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::srv::HomingRequest_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::srv::HomingRequest_Response>()
{
  return x2robot_msgs::srv::builder::Init_HomingRequest_Response_is_succ();
}

}  // namespace x2robot_msgs


namespace x2robot_msgs
{

namespace srv
{

namespace builder
{

class Init_HomingRequest_Event_response
{
public:
  explicit Init_HomingRequest_Event_response(::x2robot_msgs::srv::HomingRequest_Event & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::srv::HomingRequest_Event response(::x2robot_msgs::srv::HomingRequest_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::srv::HomingRequest_Event msg_;
};

class Init_HomingRequest_Event_request
{
public:
  explicit Init_HomingRequest_Event_request(::x2robot_msgs::srv::HomingRequest_Event & msg)
  : msg_(msg)
  {}
  Init_HomingRequest_Event_response request(::x2robot_msgs::srv::HomingRequest_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_HomingRequest_Event_response(msg_);
  }

private:
  ::x2robot_msgs::srv::HomingRequest_Event msg_;
};

class Init_HomingRequest_Event_info
{
public:
  Init_HomingRequest_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HomingRequest_Event_request info(::x2robot_msgs::srv::HomingRequest_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_HomingRequest_Event_request(msg_);
  }

private:
  ::x2robot_msgs::srv::HomingRequest_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::srv::HomingRequest_Event>()
{
  return x2robot_msgs::srv::builder::Init_HomingRequest_Event_info();
}

}  // namespace x2robot_msgs

#endif  // X2ROBOT_MSGS__SRV__DETAIL__HOMING_REQUEST__BUILDER_HPP_
