// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from x2robot_msgs:srv/MoveitGroupStateRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/srv/moveit_group_state_request.hpp"


#ifndef X2ROBOT_MSGS__SRV__DETAIL__MOVEIT_GROUP_STATE_REQUEST__BUILDER_HPP_
#define X2ROBOT_MSGS__SRV__DETAIL__MOVEIT_GROUP_STATE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "x2robot_msgs/srv/detail/moveit_group_state_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace x2robot_msgs
{

namespace srv
{

namespace builder
{

class Init_MoveitGroupStateRequest_Request_max_acceleration_scaling_factor
{
public:
  explicit Init_MoveitGroupStateRequest_Request_max_acceleration_scaling_factor(::x2robot_msgs::srv::MoveitGroupStateRequest_Request & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::srv::MoveitGroupStateRequest_Request max_acceleration_scaling_factor(::x2robot_msgs::srv::MoveitGroupStateRequest_Request::_max_acceleration_scaling_factor_type arg)
  {
    msg_.max_acceleration_scaling_factor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::srv::MoveitGroupStateRequest_Request msg_;
};

class Init_MoveitGroupStateRequest_Request_max_velocity_scaling_factor
{
public:
  explicit Init_MoveitGroupStateRequest_Request_max_velocity_scaling_factor(::x2robot_msgs::srv::MoveitGroupStateRequest_Request & msg)
  : msg_(msg)
  {}
  Init_MoveitGroupStateRequest_Request_max_acceleration_scaling_factor max_velocity_scaling_factor(::x2robot_msgs::srv::MoveitGroupStateRequest_Request::_max_velocity_scaling_factor_type arg)
  {
    msg_.max_velocity_scaling_factor = std::move(arg);
    return Init_MoveitGroupStateRequest_Request_max_acceleration_scaling_factor(msg_);
  }

private:
  ::x2robot_msgs::srv::MoveitGroupStateRequest_Request msg_;
};

class Init_MoveitGroupStateRequest_Request_allowed_planning_time
{
public:
  explicit Init_MoveitGroupStateRequest_Request_allowed_planning_time(::x2robot_msgs::srv::MoveitGroupStateRequest_Request & msg)
  : msg_(msg)
  {}
  Init_MoveitGroupStateRequest_Request_max_velocity_scaling_factor allowed_planning_time(::x2robot_msgs::srv::MoveitGroupStateRequest_Request::_allowed_planning_time_type arg)
  {
    msg_.allowed_planning_time = std::move(arg);
    return Init_MoveitGroupStateRequest_Request_max_velocity_scaling_factor(msg_);
  }

private:
  ::x2robot_msgs::srv::MoveitGroupStateRequest_Request msg_;
};

class Init_MoveitGroupStateRequest_Request_num_planning_attempts
{
public:
  explicit Init_MoveitGroupStateRequest_Request_num_planning_attempts(::x2robot_msgs::srv::MoveitGroupStateRequest_Request & msg)
  : msg_(msg)
  {}
  Init_MoveitGroupStateRequest_Request_allowed_planning_time num_planning_attempts(::x2robot_msgs::srv::MoveitGroupStateRequest_Request::_num_planning_attempts_type arg)
  {
    msg_.num_planning_attempts = std::move(arg);
    return Init_MoveitGroupStateRequest_Request_allowed_planning_time(msg_);
  }

private:
  ::x2robot_msgs::srv::MoveitGroupStateRequest_Request msg_;
};

class Init_MoveitGroupStateRequest_Request_group_state
{
public:
  Init_MoveitGroupStateRequest_Request_group_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveitGroupStateRequest_Request_num_planning_attempts group_state(::x2robot_msgs::srv::MoveitGroupStateRequest_Request::_group_state_type arg)
  {
    msg_.group_state = std::move(arg);
    return Init_MoveitGroupStateRequest_Request_num_planning_attempts(msg_);
  }

private:
  ::x2robot_msgs::srv::MoveitGroupStateRequest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::srv::MoveitGroupStateRequest_Request>()
{
  return x2robot_msgs::srv::builder::Init_MoveitGroupStateRequest_Request_group_state();
}

}  // namespace x2robot_msgs


namespace x2robot_msgs
{

namespace srv
{

namespace builder
{

class Init_MoveitGroupStateRequest_Response_message
{
public:
  explicit Init_MoveitGroupStateRequest_Response_message(::x2robot_msgs::srv::MoveitGroupStateRequest_Response & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::srv::MoveitGroupStateRequest_Response message(::x2robot_msgs::srv::MoveitGroupStateRequest_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::srv::MoveitGroupStateRequest_Response msg_;
};

class Init_MoveitGroupStateRequest_Response_moveit_move_result
{
public:
  Init_MoveitGroupStateRequest_Response_moveit_move_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveitGroupStateRequest_Response_message moveit_move_result(::x2robot_msgs::srv::MoveitGroupStateRequest_Response::_moveit_move_result_type arg)
  {
    msg_.moveit_move_result = std::move(arg);
    return Init_MoveitGroupStateRequest_Response_message(msg_);
  }

private:
  ::x2robot_msgs::srv::MoveitGroupStateRequest_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::srv::MoveitGroupStateRequest_Response>()
{
  return x2robot_msgs::srv::builder::Init_MoveitGroupStateRequest_Response_moveit_move_result();
}

}  // namespace x2robot_msgs


namespace x2robot_msgs
{

namespace srv
{

namespace builder
{

class Init_MoveitGroupStateRequest_Event_response
{
public:
  explicit Init_MoveitGroupStateRequest_Event_response(::x2robot_msgs::srv::MoveitGroupStateRequest_Event & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::srv::MoveitGroupStateRequest_Event response(::x2robot_msgs::srv::MoveitGroupStateRequest_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::srv::MoveitGroupStateRequest_Event msg_;
};

class Init_MoveitGroupStateRequest_Event_request
{
public:
  explicit Init_MoveitGroupStateRequest_Event_request(::x2robot_msgs::srv::MoveitGroupStateRequest_Event & msg)
  : msg_(msg)
  {}
  Init_MoveitGroupStateRequest_Event_response request(::x2robot_msgs::srv::MoveitGroupStateRequest_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MoveitGroupStateRequest_Event_response(msg_);
  }

private:
  ::x2robot_msgs::srv::MoveitGroupStateRequest_Event msg_;
};

class Init_MoveitGroupStateRequest_Event_info
{
public:
  Init_MoveitGroupStateRequest_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveitGroupStateRequest_Event_request info(::x2robot_msgs::srv::MoveitGroupStateRequest_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MoveitGroupStateRequest_Event_request(msg_);
  }

private:
  ::x2robot_msgs::srv::MoveitGroupStateRequest_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::srv::MoveitGroupStateRequest_Event>()
{
  return x2robot_msgs::srv::builder::Init_MoveitGroupStateRequest_Event_info();
}

}  // namespace x2robot_msgs

#endif  // X2ROBOT_MSGS__SRV__DETAIL__MOVEIT_GROUP_STATE_REQUEST__BUILDER_HPP_
