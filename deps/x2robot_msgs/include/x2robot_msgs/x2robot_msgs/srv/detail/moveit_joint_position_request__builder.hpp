// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from x2robot_msgs:srv/MoveitJointPositionRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/srv/moveit_joint_position_request.hpp"


#ifndef X2ROBOT_MSGS__SRV__DETAIL__MOVEIT_JOINT_POSITION_REQUEST__BUILDER_HPP_
#define X2ROBOT_MSGS__SRV__DETAIL__MOVEIT_JOINT_POSITION_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "x2robot_msgs/srv/detail/moveit_joint_position_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace x2robot_msgs
{

namespace srv
{

namespace builder
{

class Init_MoveitJointPositionRequest_Request_max_acceleration_scaling_factor
{
public:
  explicit Init_MoveitJointPositionRequest_Request_max_acceleration_scaling_factor(::x2robot_msgs::srv::MoveitJointPositionRequest_Request & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::srv::MoveitJointPositionRequest_Request max_acceleration_scaling_factor(::x2robot_msgs::srv::MoveitJointPositionRequest_Request::_max_acceleration_scaling_factor_type arg)
  {
    msg_.max_acceleration_scaling_factor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::srv::MoveitJointPositionRequest_Request msg_;
};

class Init_MoveitJointPositionRequest_Request_max_velocity_scaling_factor
{
public:
  explicit Init_MoveitJointPositionRequest_Request_max_velocity_scaling_factor(::x2robot_msgs::srv::MoveitJointPositionRequest_Request & msg)
  : msg_(msg)
  {}
  Init_MoveitJointPositionRequest_Request_max_acceleration_scaling_factor max_velocity_scaling_factor(::x2robot_msgs::srv::MoveitJointPositionRequest_Request::_max_velocity_scaling_factor_type arg)
  {
    msg_.max_velocity_scaling_factor = std::move(arg);
    return Init_MoveitJointPositionRequest_Request_max_acceleration_scaling_factor(msg_);
  }

private:
  ::x2robot_msgs::srv::MoveitJointPositionRequest_Request msg_;
};

class Init_MoveitJointPositionRequest_Request_allowed_planning_time
{
public:
  explicit Init_MoveitJointPositionRequest_Request_allowed_planning_time(::x2robot_msgs::srv::MoveitJointPositionRequest_Request & msg)
  : msg_(msg)
  {}
  Init_MoveitJointPositionRequest_Request_max_velocity_scaling_factor allowed_planning_time(::x2robot_msgs::srv::MoveitJointPositionRequest_Request::_allowed_planning_time_type arg)
  {
    msg_.allowed_planning_time = std::move(arg);
    return Init_MoveitJointPositionRequest_Request_max_velocity_scaling_factor(msg_);
  }

private:
  ::x2robot_msgs::srv::MoveitJointPositionRequest_Request msg_;
};

class Init_MoveitJointPositionRequest_Request_num_planning_attempts
{
public:
  explicit Init_MoveitJointPositionRequest_Request_num_planning_attempts(::x2robot_msgs::srv::MoveitJointPositionRequest_Request & msg)
  : msg_(msg)
  {}
  Init_MoveitJointPositionRequest_Request_allowed_planning_time num_planning_attempts(::x2robot_msgs::srv::MoveitJointPositionRequest_Request::_num_planning_attempts_type arg)
  {
    msg_.num_planning_attempts = std::move(arg);
    return Init_MoveitJointPositionRequest_Request_allowed_planning_time(msg_);
  }

private:
  ::x2robot_msgs::srv::MoveitJointPositionRequest_Request msg_;
};

class Init_MoveitJointPositionRequest_Request_joint_positions
{
public:
  explicit Init_MoveitJointPositionRequest_Request_joint_positions(::x2robot_msgs::srv::MoveitJointPositionRequest_Request & msg)
  : msg_(msg)
  {}
  Init_MoveitJointPositionRequest_Request_num_planning_attempts joint_positions(::x2robot_msgs::srv::MoveitJointPositionRequest_Request::_joint_positions_type arg)
  {
    msg_.joint_positions = std::move(arg);
    return Init_MoveitJointPositionRequest_Request_num_planning_attempts(msg_);
  }

private:
  ::x2robot_msgs::srv::MoveitJointPositionRequest_Request msg_;
};

class Init_MoveitJointPositionRequest_Request_joint_names
{
public:
  Init_MoveitJointPositionRequest_Request_joint_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveitJointPositionRequest_Request_joint_positions joint_names(::x2robot_msgs::srv::MoveitJointPositionRequest_Request::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_MoveitJointPositionRequest_Request_joint_positions(msg_);
  }

private:
  ::x2robot_msgs::srv::MoveitJointPositionRequest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::srv::MoveitJointPositionRequest_Request>()
{
  return x2robot_msgs::srv::builder::Init_MoveitJointPositionRequest_Request_joint_names();
}

}  // namespace x2robot_msgs


namespace x2robot_msgs
{

namespace srv
{

namespace builder
{

class Init_MoveitJointPositionRequest_Response_message
{
public:
  explicit Init_MoveitJointPositionRequest_Response_message(::x2robot_msgs::srv::MoveitJointPositionRequest_Response & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::srv::MoveitJointPositionRequest_Response message(::x2robot_msgs::srv::MoveitJointPositionRequest_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::srv::MoveitJointPositionRequest_Response msg_;
};

class Init_MoveitJointPositionRequest_Response_moveit_move_result
{
public:
  Init_MoveitJointPositionRequest_Response_moveit_move_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveitJointPositionRequest_Response_message moveit_move_result(::x2robot_msgs::srv::MoveitJointPositionRequest_Response::_moveit_move_result_type arg)
  {
    msg_.moveit_move_result = std::move(arg);
    return Init_MoveitJointPositionRequest_Response_message(msg_);
  }

private:
  ::x2robot_msgs::srv::MoveitJointPositionRequest_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::srv::MoveitJointPositionRequest_Response>()
{
  return x2robot_msgs::srv::builder::Init_MoveitJointPositionRequest_Response_moveit_move_result();
}

}  // namespace x2robot_msgs


namespace x2robot_msgs
{

namespace srv
{

namespace builder
{

class Init_MoveitJointPositionRequest_Event_response
{
public:
  explicit Init_MoveitJointPositionRequest_Event_response(::x2robot_msgs::srv::MoveitJointPositionRequest_Event & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::srv::MoveitJointPositionRequest_Event response(::x2robot_msgs::srv::MoveitJointPositionRequest_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::srv::MoveitJointPositionRequest_Event msg_;
};

class Init_MoveitJointPositionRequest_Event_request
{
public:
  explicit Init_MoveitJointPositionRequest_Event_request(::x2robot_msgs::srv::MoveitJointPositionRequest_Event & msg)
  : msg_(msg)
  {}
  Init_MoveitJointPositionRequest_Event_response request(::x2robot_msgs::srv::MoveitJointPositionRequest_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MoveitJointPositionRequest_Event_response(msg_);
  }

private:
  ::x2robot_msgs::srv::MoveitJointPositionRequest_Event msg_;
};

class Init_MoveitJointPositionRequest_Event_info
{
public:
  Init_MoveitJointPositionRequest_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveitJointPositionRequest_Event_request info(::x2robot_msgs::srv::MoveitJointPositionRequest_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MoveitJointPositionRequest_Event_request(msg_);
  }

private:
  ::x2robot_msgs::srv::MoveitJointPositionRequest_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::srv::MoveitJointPositionRequest_Event>()
{
  return x2robot_msgs::srv::builder::Init_MoveitJointPositionRequest_Event_info();
}

}  // namespace x2robot_msgs

#endif  // X2ROBOT_MSGS__SRV__DETAIL__MOVEIT_JOINT_POSITION_REQUEST__BUILDER_HPP_
