// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from x2robot_msgs:srv/SwitchRobotControlMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/srv/switch_robot_control_mode.hpp"


#ifndef X2ROBOT_MSGS__SRV__DETAIL__SWITCH_ROBOT_CONTROL_MODE__BUILDER_HPP_
#define X2ROBOT_MSGS__SRV__DETAIL__SWITCH_ROBOT_CONTROL_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "x2robot_msgs/srv/detail/switch_robot_control_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace x2robot_msgs
{

namespace srv
{

namespace builder
{

class Init_SwitchRobotControlMode_Request_data_collection_mode
{
public:
  explicit Init_SwitchRobotControlMode_Request_data_collection_mode(::x2robot_msgs::srv::SwitchRobotControlMode_Request & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::srv::SwitchRobotControlMode_Request data_collection_mode(::x2robot_msgs::srv::SwitchRobotControlMode_Request::_data_collection_mode_type arg)
  {
    msg_.data_collection_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::srv::SwitchRobotControlMode_Request msg_;
};

class Init_SwitchRobotControlMode_Request_target_motion_state
{
public:
  explicit Init_SwitchRobotControlMode_Request_target_motion_state(::x2robot_msgs::srv::SwitchRobotControlMode_Request & msg)
  : msg_(msg)
  {}
  Init_SwitchRobotControlMode_Request_data_collection_mode target_motion_state(::x2robot_msgs::srv::SwitchRobotControlMode_Request::_target_motion_state_type arg)
  {
    msg_.target_motion_state = std::move(arg);
    return Init_SwitchRobotControlMode_Request_data_collection_mode(msg_);
  }

private:
  ::x2robot_msgs::srv::SwitchRobotControlMode_Request msg_;
};

class Init_SwitchRobotControlMode_Request_try_recover
{
public:
  explicit Init_SwitchRobotControlMode_Request_try_recover(::x2robot_msgs::srv::SwitchRobotControlMode_Request & msg)
  : msg_(msg)
  {}
  Init_SwitchRobotControlMode_Request_target_motion_state try_recover(::x2robot_msgs::srv::SwitchRobotControlMode_Request::_try_recover_type arg)
  {
    msg_.try_recover = std::move(arg);
    return Init_SwitchRobotControlMode_Request_target_motion_state(msg_);
  }

private:
  ::x2robot_msgs::srv::SwitchRobotControlMode_Request msg_;
};

class Init_SwitchRobotControlMode_Request_request_for_homing
{
public:
  explicit Init_SwitchRobotControlMode_Request_request_for_homing(::x2robot_msgs::srv::SwitchRobotControlMode_Request & msg)
  : msg_(msg)
  {}
  Init_SwitchRobotControlMode_Request_try_recover request_for_homing(::x2robot_msgs::srv::SwitchRobotControlMode_Request::_request_for_homing_type arg)
  {
    msg_.request_for_homing = std::move(arg);
    return Init_SwitchRobotControlMode_Request_try_recover(msg_);
  }

private:
  ::x2robot_msgs::srv::SwitchRobotControlMode_Request msg_;
};

class Init_SwitchRobotControlMode_Request_target_mode
{
public:
  Init_SwitchRobotControlMode_Request_target_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SwitchRobotControlMode_Request_request_for_homing target_mode(::x2robot_msgs::srv::SwitchRobotControlMode_Request::_target_mode_type arg)
  {
    msg_.target_mode = std::move(arg);
    return Init_SwitchRobotControlMode_Request_request_for_homing(msg_);
  }

private:
  ::x2robot_msgs::srv::SwitchRobotControlMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::srv::SwitchRobotControlMode_Request>()
{
  return x2robot_msgs::srv::builder::Init_SwitchRobotControlMode_Request_target_mode();
}

}  // namespace x2robot_msgs


namespace x2robot_msgs
{

namespace srv
{

namespace builder
{

class Init_SwitchRobotControlMode_Response_ok
{
public:
  Init_SwitchRobotControlMode_Response_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::x2robot_msgs::srv::SwitchRobotControlMode_Response ok(::x2robot_msgs::srv::SwitchRobotControlMode_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::srv::SwitchRobotControlMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::srv::SwitchRobotControlMode_Response>()
{
  return x2robot_msgs::srv::builder::Init_SwitchRobotControlMode_Response_ok();
}

}  // namespace x2robot_msgs


namespace x2robot_msgs
{

namespace srv
{

namespace builder
{

class Init_SwitchRobotControlMode_Event_response
{
public:
  explicit Init_SwitchRobotControlMode_Event_response(::x2robot_msgs::srv::SwitchRobotControlMode_Event & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::srv::SwitchRobotControlMode_Event response(::x2robot_msgs::srv::SwitchRobotControlMode_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::srv::SwitchRobotControlMode_Event msg_;
};

class Init_SwitchRobotControlMode_Event_request
{
public:
  explicit Init_SwitchRobotControlMode_Event_request(::x2robot_msgs::srv::SwitchRobotControlMode_Event & msg)
  : msg_(msg)
  {}
  Init_SwitchRobotControlMode_Event_response request(::x2robot_msgs::srv::SwitchRobotControlMode_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SwitchRobotControlMode_Event_response(msg_);
  }

private:
  ::x2robot_msgs::srv::SwitchRobotControlMode_Event msg_;
};

class Init_SwitchRobotControlMode_Event_info
{
public:
  Init_SwitchRobotControlMode_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SwitchRobotControlMode_Event_request info(::x2robot_msgs::srv::SwitchRobotControlMode_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SwitchRobotControlMode_Event_request(msg_);
  }

private:
  ::x2robot_msgs::srv::SwitchRobotControlMode_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::srv::SwitchRobotControlMode_Event>()
{
  return x2robot_msgs::srv::builder::Init_SwitchRobotControlMode_Event_info();
}

}  // namespace x2robot_msgs

#endif  // X2ROBOT_MSGS__SRV__DETAIL__SWITCH_ROBOT_CONTROL_MODE__BUILDER_HPP_
