// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from x2robot_msgs:srv/TrajectoryPlanRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/srv/trajectory_plan_request.hpp"


#ifndef X2ROBOT_MSGS__SRV__DETAIL__TRAJECTORY_PLAN_REQUEST__BUILDER_HPP_
#define X2ROBOT_MSGS__SRV__DETAIL__TRAJECTORY_PLAN_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "x2robot_msgs/srv/detail/trajectory_plan_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace x2robot_msgs
{

namespace srv
{

namespace builder
{

class Init_TrajectoryPlanRequest_Request_max_acceleration_scaling_factor
{
public:
  explicit Init_TrajectoryPlanRequest_Request_max_acceleration_scaling_factor(::x2robot_msgs::srv::TrajectoryPlanRequest_Request & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::srv::TrajectoryPlanRequest_Request max_acceleration_scaling_factor(::x2robot_msgs::srv::TrajectoryPlanRequest_Request::_max_acceleration_scaling_factor_type arg)
  {
    msg_.max_acceleration_scaling_factor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::srv::TrajectoryPlanRequest_Request msg_;
};

class Init_TrajectoryPlanRequest_Request_max_velocity_scaling_factor
{
public:
  explicit Init_TrajectoryPlanRequest_Request_max_velocity_scaling_factor(::x2robot_msgs::srv::TrajectoryPlanRequest_Request & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPlanRequest_Request_max_acceleration_scaling_factor max_velocity_scaling_factor(::x2robot_msgs::srv::TrajectoryPlanRequest_Request::_max_velocity_scaling_factor_type arg)
  {
    msg_.max_velocity_scaling_factor = std::move(arg);
    return Init_TrajectoryPlanRequest_Request_max_acceleration_scaling_factor(msg_);
  }

private:
  ::x2robot_msgs::srv::TrajectoryPlanRequest_Request msg_;
};

class Init_TrajectoryPlanRequest_Request_allowed_planning_time
{
public:
  explicit Init_TrajectoryPlanRequest_Request_allowed_planning_time(::x2robot_msgs::srv::TrajectoryPlanRequest_Request & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPlanRequest_Request_max_velocity_scaling_factor allowed_planning_time(::x2robot_msgs::srv::TrajectoryPlanRequest_Request::_allowed_planning_time_type arg)
  {
    msg_.allowed_planning_time = std::move(arg);
    return Init_TrajectoryPlanRequest_Request_max_velocity_scaling_factor(msg_);
  }

private:
  ::x2robot_msgs::srv::TrajectoryPlanRequest_Request msg_;
};

class Init_TrajectoryPlanRequest_Request_num_planning_attempts
{
public:
  explicit Init_TrajectoryPlanRequest_Request_num_planning_attempts(::x2robot_msgs::srv::TrajectoryPlanRequest_Request & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPlanRequest_Request_allowed_planning_time num_planning_attempts(::x2robot_msgs::srv::TrajectoryPlanRequest_Request::_num_planning_attempts_type arg)
  {
    msg_.num_planning_attempts = std::move(arg);
    return Init_TrajectoryPlanRequest_Request_allowed_planning_time(msg_);
  }

private:
  ::x2robot_msgs::srv::TrajectoryPlanRequest_Request msg_;
};

class Init_TrajectoryPlanRequest_Request_tolerance_below
{
public:
  explicit Init_TrajectoryPlanRequest_Request_tolerance_below(::x2robot_msgs::srv::TrajectoryPlanRequest_Request & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPlanRequest_Request_num_planning_attempts tolerance_below(::x2robot_msgs::srv::TrajectoryPlanRequest_Request::_tolerance_below_type arg)
  {
    msg_.tolerance_below = std::move(arg);
    return Init_TrajectoryPlanRequest_Request_num_planning_attempts(msg_);
  }

private:
  ::x2robot_msgs::srv::TrajectoryPlanRequest_Request msg_;
};

class Init_TrajectoryPlanRequest_Request_tolerance_above
{
public:
  explicit Init_TrajectoryPlanRequest_Request_tolerance_above(::x2robot_msgs::srv::TrajectoryPlanRequest_Request & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPlanRequest_Request_tolerance_below tolerance_above(::x2robot_msgs::srv::TrajectoryPlanRequest_Request::_tolerance_above_type arg)
  {
    msg_.tolerance_above = std::move(arg);
    return Init_TrajectoryPlanRequest_Request_tolerance_below(msg_);
  }

private:
  ::x2robot_msgs::srv::TrajectoryPlanRequest_Request msg_;
};

class Init_TrajectoryPlanRequest_Request_goal_states
{
public:
  explicit Init_TrajectoryPlanRequest_Request_goal_states(::x2robot_msgs::srv::TrajectoryPlanRequest_Request & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPlanRequest_Request_tolerance_above goal_states(::x2robot_msgs::srv::TrajectoryPlanRequest_Request::_goal_states_type arg)
  {
    msg_.goal_states = std::move(arg);
    return Init_TrajectoryPlanRequest_Request_tolerance_above(msg_);
  }

private:
  ::x2robot_msgs::srv::TrajectoryPlanRequest_Request msg_;
};

class Init_TrajectoryPlanRequest_Request_goal_state_joint_names
{
public:
  explicit Init_TrajectoryPlanRequest_Request_goal_state_joint_names(::x2robot_msgs::srv::TrajectoryPlanRequest_Request & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPlanRequest_Request_goal_states goal_state_joint_names(::x2robot_msgs::srv::TrajectoryPlanRequest_Request::_goal_state_joint_names_type arg)
  {
    msg_.goal_state_joint_names = std::move(arg);
    return Init_TrajectoryPlanRequest_Request_goal_states(msg_);
  }

private:
  ::x2robot_msgs::srv::TrajectoryPlanRequest_Request msg_;
};

class Init_TrajectoryPlanRequest_Request_start_states
{
public:
  explicit Init_TrajectoryPlanRequest_Request_start_states(::x2robot_msgs::srv::TrajectoryPlanRequest_Request & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPlanRequest_Request_goal_state_joint_names start_states(::x2robot_msgs::srv::TrajectoryPlanRequest_Request::_start_states_type arg)
  {
    msg_.start_states = std::move(arg);
    return Init_TrajectoryPlanRequest_Request_goal_state_joint_names(msg_);
  }

private:
  ::x2robot_msgs::srv::TrajectoryPlanRequest_Request msg_;
};

class Init_TrajectoryPlanRequest_Request_start_state_joint_names
{
public:
  explicit Init_TrajectoryPlanRequest_Request_start_state_joint_names(::x2robot_msgs::srv::TrajectoryPlanRequest_Request & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPlanRequest_Request_start_states start_state_joint_names(::x2robot_msgs::srv::TrajectoryPlanRequest_Request::_start_state_joint_names_type arg)
  {
    msg_.start_state_joint_names = std::move(arg);
    return Init_TrajectoryPlanRequest_Request_start_states(msg_);
  }

private:
  ::x2robot_msgs::srv::TrajectoryPlanRequest_Request msg_;
};

class Init_TrajectoryPlanRequest_Request_group_name
{
public:
  Init_TrajectoryPlanRequest_Request_group_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryPlanRequest_Request_start_state_joint_names group_name(::x2robot_msgs::srv::TrajectoryPlanRequest_Request::_group_name_type arg)
  {
    msg_.group_name = std::move(arg);
    return Init_TrajectoryPlanRequest_Request_start_state_joint_names(msg_);
  }

private:
  ::x2robot_msgs::srv::TrajectoryPlanRequest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::srv::TrajectoryPlanRequest_Request>()
{
  return x2robot_msgs::srv::builder::Init_TrajectoryPlanRequest_Request_group_name();
}

}  // namespace x2robot_msgs


namespace x2robot_msgs
{

namespace srv
{

namespace builder
{

class Init_TrajectoryPlanRequest_Response_trajectory
{
public:
  explicit Init_TrajectoryPlanRequest_Response_trajectory(::x2robot_msgs::srv::TrajectoryPlanRequest_Response & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::srv::TrajectoryPlanRequest_Response trajectory(::x2robot_msgs::srv::TrajectoryPlanRequest_Response::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::srv::TrajectoryPlanRequest_Response msg_;
};

class Init_TrajectoryPlanRequest_Response_error_code
{
public:
  Init_TrajectoryPlanRequest_Response_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryPlanRequest_Response_trajectory error_code(::x2robot_msgs::srv::TrajectoryPlanRequest_Response::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_TrajectoryPlanRequest_Response_trajectory(msg_);
  }

private:
  ::x2robot_msgs::srv::TrajectoryPlanRequest_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::srv::TrajectoryPlanRequest_Response>()
{
  return x2robot_msgs::srv::builder::Init_TrajectoryPlanRequest_Response_error_code();
}

}  // namespace x2robot_msgs


namespace x2robot_msgs
{

namespace srv
{

namespace builder
{

class Init_TrajectoryPlanRequest_Event_response
{
public:
  explicit Init_TrajectoryPlanRequest_Event_response(::x2robot_msgs::srv::TrajectoryPlanRequest_Event & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::srv::TrajectoryPlanRequest_Event response(::x2robot_msgs::srv::TrajectoryPlanRequest_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::srv::TrajectoryPlanRequest_Event msg_;
};

class Init_TrajectoryPlanRequest_Event_request
{
public:
  explicit Init_TrajectoryPlanRequest_Event_request(::x2robot_msgs::srv::TrajectoryPlanRequest_Event & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPlanRequest_Event_response request(::x2robot_msgs::srv::TrajectoryPlanRequest_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TrajectoryPlanRequest_Event_response(msg_);
  }

private:
  ::x2robot_msgs::srv::TrajectoryPlanRequest_Event msg_;
};

class Init_TrajectoryPlanRequest_Event_info
{
public:
  Init_TrajectoryPlanRequest_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryPlanRequest_Event_request info(::x2robot_msgs::srv::TrajectoryPlanRequest_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TrajectoryPlanRequest_Event_request(msg_);
  }

private:
  ::x2robot_msgs::srv::TrajectoryPlanRequest_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::srv::TrajectoryPlanRequest_Event>()
{
  return x2robot_msgs::srv::builder::Init_TrajectoryPlanRequest_Event_info();
}

}  // namespace x2robot_msgs

#endif  // X2ROBOT_MSGS__SRV__DETAIL__TRAJECTORY_PLAN_REQUEST__BUILDER_HPP_
