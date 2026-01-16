// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:action/FollowJointWrenchTrajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/action/follow_joint_wrench_trajectory.hpp"


#ifndef CONTROL_MSGS__ACTION__DETAIL__FOLLOW_JOINT_WRENCH_TRAJECTORY__BUILDER_HPP_
#define CONTROL_MSGS__ACTION__DETAIL__FOLLOW_JOINT_WRENCH_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/action/detail/follow_joint_wrench_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_FollowJointWrenchTrajectory_Goal_goal_time_tolerance
{
public:
  explicit Init_FollowJointWrenchTrajectory_Goal_goal_time_tolerance(::control_msgs::action::FollowJointWrenchTrajectory_Goal & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::FollowJointWrenchTrajectory_Goal goal_time_tolerance(::control_msgs::action::FollowJointWrenchTrajectory_Goal::_goal_time_tolerance_type arg)
  {
    msg_.goal_time_tolerance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::FollowJointWrenchTrajectory_Goal msg_;
};

class Init_FollowJointWrenchTrajectory_Goal_goal_tolerance
{
public:
  explicit Init_FollowJointWrenchTrajectory_Goal_goal_tolerance(::control_msgs::action::FollowJointWrenchTrajectory_Goal & msg)
  : msg_(msg)
  {}
  Init_FollowJointWrenchTrajectory_Goal_goal_time_tolerance goal_tolerance(::control_msgs::action::FollowJointWrenchTrajectory_Goal::_goal_tolerance_type arg)
  {
    msg_.goal_tolerance = std::move(arg);
    return Init_FollowJointWrenchTrajectory_Goal_goal_time_tolerance(msg_);
  }

private:
  ::control_msgs::action::FollowJointWrenchTrajectory_Goal msg_;
};

class Init_FollowJointWrenchTrajectory_Goal_path_tolerance
{
public:
  explicit Init_FollowJointWrenchTrajectory_Goal_path_tolerance(::control_msgs::action::FollowJointWrenchTrajectory_Goal & msg)
  : msg_(msg)
  {}
  Init_FollowJointWrenchTrajectory_Goal_goal_tolerance path_tolerance(::control_msgs::action::FollowJointWrenchTrajectory_Goal::_path_tolerance_type arg)
  {
    msg_.path_tolerance = std::move(arg);
    return Init_FollowJointWrenchTrajectory_Goal_goal_tolerance(msg_);
  }

private:
  ::control_msgs::action::FollowJointWrenchTrajectory_Goal msg_;
};

class Init_FollowJointWrenchTrajectory_Goal_trajectory
{
public:
  Init_FollowJointWrenchTrajectory_Goal_trajectory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowJointWrenchTrajectory_Goal_path_tolerance trajectory(::control_msgs::action::FollowJointWrenchTrajectory_Goal::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return Init_FollowJointWrenchTrajectory_Goal_path_tolerance(msg_);
  }

private:
  ::control_msgs::action::FollowJointWrenchTrajectory_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::FollowJointWrenchTrajectory_Goal>()
{
  return control_msgs::action::builder::Init_FollowJointWrenchTrajectory_Goal_trajectory();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_FollowJointWrenchTrajectory_Result_error_string
{
public:
  explicit Init_FollowJointWrenchTrajectory_Result_error_string(::control_msgs::action::FollowJointWrenchTrajectory_Result & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::FollowJointWrenchTrajectory_Result error_string(::control_msgs::action::FollowJointWrenchTrajectory_Result::_error_string_type arg)
  {
    msg_.error_string = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::FollowJointWrenchTrajectory_Result msg_;
};

class Init_FollowJointWrenchTrajectory_Result_error_code
{
public:
  Init_FollowJointWrenchTrajectory_Result_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowJointWrenchTrajectory_Result_error_string error_code(::control_msgs::action::FollowJointWrenchTrajectory_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_FollowJointWrenchTrajectory_Result_error_string(msg_);
  }

private:
  ::control_msgs::action::FollowJointWrenchTrajectory_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::FollowJointWrenchTrajectory_Result>()
{
  return control_msgs::action::builder::Init_FollowJointWrenchTrajectory_Result_error_code();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_FollowJointWrenchTrajectory_Feedback_index
{
public:
  explicit Init_FollowJointWrenchTrajectory_Feedback_index(::control_msgs::action::FollowJointWrenchTrajectory_Feedback & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::FollowJointWrenchTrajectory_Feedback index(::control_msgs::action::FollowJointWrenchTrajectory_Feedback::_index_type arg)
  {
    msg_.index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::FollowJointWrenchTrajectory_Feedback msg_;
};

class Init_FollowJointWrenchTrajectory_Feedback_error
{
public:
  explicit Init_FollowJointWrenchTrajectory_Feedback_error(::control_msgs::action::FollowJointWrenchTrajectory_Feedback & msg)
  : msg_(msg)
  {}
  Init_FollowJointWrenchTrajectory_Feedback_index error(::control_msgs::action::FollowJointWrenchTrajectory_Feedback::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_FollowJointWrenchTrajectory_Feedback_index(msg_);
  }

private:
  ::control_msgs::action::FollowJointWrenchTrajectory_Feedback msg_;
};

class Init_FollowJointWrenchTrajectory_Feedback_actual
{
public:
  explicit Init_FollowJointWrenchTrajectory_Feedback_actual(::control_msgs::action::FollowJointWrenchTrajectory_Feedback & msg)
  : msg_(msg)
  {}
  Init_FollowJointWrenchTrajectory_Feedback_error actual(::control_msgs::action::FollowJointWrenchTrajectory_Feedback::_actual_type arg)
  {
    msg_.actual = std::move(arg);
    return Init_FollowJointWrenchTrajectory_Feedback_error(msg_);
  }

private:
  ::control_msgs::action::FollowJointWrenchTrajectory_Feedback msg_;
};

class Init_FollowJointWrenchTrajectory_Feedback_desired
{
public:
  explicit Init_FollowJointWrenchTrajectory_Feedback_desired(::control_msgs::action::FollowJointWrenchTrajectory_Feedback & msg)
  : msg_(msg)
  {}
  Init_FollowJointWrenchTrajectory_Feedback_actual desired(::control_msgs::action::FollowJointWrenchTrajectory_Feedback::_desired_type arg)
  {
    msg_.desired = std::move(arg);
    return Init_FollowJointWrenchTrajectory_Feedback_actual(msg_);
  }

private:
  ::control_msgs::action::FollowJointWrenchTrajectory_Feedback msg_;
};

class Init_FollowJointWrenchTrajectory_Feedback_joint_names
{
public:
  explicit Init_FollowJointWrenchTrajectory_Feedback_joint_names(::control_msgs::action::FollowJointWrenchTrajectory_Feedback & msg)
  : msg_(msg)
  {}
  Init_FollowJointWrenchTrajectory_Feedback_desired joint_names(::control_msgs::action::FollowJointWrenchTrajectory_Feedback::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_FollowJointWrenchTrajectory_Feedback_desired(msg_);
  }

private:
  ::control_msgs::action::FollowJointWrenchTrajectory_Feedback msg_;
};

class Init_FollowJointWrenchTrajectory_Feedback_header
{
public:
  Init_FollowJointWrenchTrajectory_Feedback_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowJointWrenchTrajectory_Feedback_joint_names header(::control_msgs::action::FollowJointWrenchTrajectory_Feedback::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FollowJointWrenchTrajectory_Feedback_joint_names(msg_);
  }

private:
  ::control_msgs::action::FollowJointWrenchTrajectory_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::FollowJointWrenchTrajectory_Feedback>()
{
  return control_msgs::action::builder::Init_FollowJointWrenchTrajectory_Feedback_header();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_FollowJointWrenchTrajectory_SendGoal_Request_goal
{
public:
  explicit Init_FollowJointWrenchTrajectory_SendGoal_Request_goal(::control_msgs::action::FollowJointWrenchTrajectory_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::FollowJointWrenchTrajectory_SendGoal_Request goal(::control_msgs::action::FollowJointWrenchTrajectory_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::FollowJointWrenchTrajectory_SendGoal_Request msg_;
};

class Init_FollowJointWrenchTrajectory_SendGoal_Request_goal_id
{
public:
  Init_FollowJointWrenchTrajectory_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowJointWrenchTrajectory_SendGoal_Request_goal goal_id(::control_msgs::action::FollowJointWrenchTrajectory_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FollowJointWrenchTrajectory_SendGoal_Request_goal(msg_);
  }

private:
  ::control_msgs::action::FollowJointWrenchTrajectory_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::FollowJointWrenchTrajectory_SendGoal_Request>()
{
  return control_msgs::action::builder::Init_FollowJointWrenchTrajectory_SendGoal_Request_goal_id();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_FollowJointWrenchTrajectory_SendGoal_Response_stamp
{
public:
  explicit Init_FollowJointWrenchTrajectory_SendGoal_Response_stamp(::control_msgs::action::FollowJointWrenchTrajectory_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::FollowJointWrenchTrajectory_SendGoal_Response stamp(::control_msgs::action::FollowJointWrenchTrajectory_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::FollowJointWrenchTrajectory_SendGoal_Response msg_;
};

class Init_FollowJointWrenchTrajectory_SendGoal_Response_accepted
{
public:
  Init_FollowJointWrenchTrajectory_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowJointWrenchTrajectory_SendGoal_Response_stamp accepted(::control_msgs::action::FollowJointWrenchTrajectory_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_FollowJointWrenchTrajectory_SendGoal_Response_stamp(msg_);
  }

private:
  ::control_msgs::action::FollowJointWrenchTrajectory_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::FollowJointWrenchTrajectory_SendGoal_Response>()
{
  return control_msgs::action::builder::Init_FollowJointWrenchTrajectory_SendGoal_Response_accepted();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_FollowJointWrenchTrajectory_SendGoal_Event_response
{
public:
  explicit Init_FollowJointWrenchTrajectory_SendGoal_Event_response(::control_msgs::action::FollowJointWrenchTrajectory_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::FollowJointWrenchTrajectory_SendGoal_Event response(::control_msgs::action::FollowJointWrenchTrajectory_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::FollowJointWrenchTrajectory_SendGoal_Event msg_;
};

class Init_FollowJointWrenchTrajectory_SendGoal_Event_request
{
public:
  explicit Init_FollowJointWrenchTrajectory_SendGoal_Event_request(::control_msgs::action::FollowJointWrenchTrajectory_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_FollowJointWrenchTrajectory_SendGoal_Event_response request(::control_msgs::action::FollowJointWrenchTrajectory_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_FollowJointWrenchTrajectory_SendGoal_Event_response(msg_);
  }

private:
  ::control_msgs::action::FollowJointWrenchTrajectory_SendGoal_Event msg_;
};

class Init_FollowJointWrenchTrajectory_SendGoal_Event_info
{
public:
  Init_FollowJointWrenchTrajectory_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowJointWrenchTrajectory_SendGoal_Event_request info(::control_msgs::action::FollowJointWrenchTrajectory_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_FollowJointWrenchTrajectory_SendGoal_Event_request(msg_);
  }

private:
  ::control_msgs::action::FollowJointWrenchTrajectory_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::FollowJointWrenchTrajectory_SendGoal_Event>()
{
  return control_msgs::action::builder::Init_FollowJointWrenchTrajectory_SendGoal_Event_info();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_FollowJointWrenchTrajectory_GetResult_Request_goal_id
{
public:
  Init_FollowJointWrenchTrajectory_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::control_msgs::action::FollowJointWrenchTrajectory_GetResult_Request goal_id(::control_msgs::action::FollowJointWrenchTrajectory_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::FollowJointWrenchTrajectory_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::FollowJointWrenchTrajectory_GetResult_Request>()
{
  return control_msgs::action::builder::Init_FollowJointWrenchTrajectory_GetResult_Request_goal_id();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_FollowJointWrenchTrajectory_GetResult_Response_result
{
public:
  explicit Init_FollowJointWrenchTrajectory_GetResult_Response_result(::control_msgs::action::FollowJointWrenchTrajectory_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::FollowJointWrenchTrajectory_GetResult_Response result(::control_msgs::action::FollowJointWrenchTrajectory_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::FollowJointWrenchTrajectory_GetResult_Response msg_;
};

class Init_FollowJointWrenchTrajectory_GetResult_Response_status
{
public:
  Init_FollowJointWrenchTrajectory_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowJointWrenchTrajectory_GetResult_Response_result status(::control_msgs::action::FollowJointWrenchTrajectory_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_FollowJointWrenchTrajectory_GetResult_Response_result(msg_);
  }

private:
  ::control_msgs::action::FollowJointWrenchTrajectory_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::FollowJointWrenchTrajectory_GetResult_Response>()
{
  return control_msgs::action::builder::Init_FollowJointWrenchTrajectory_GetResult_Response_status();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_FollowJointWrenchTrajectory_GetResult_Event_response
{
public:
  explicit Init_FollowJointWrenchTrajectory_GetResult_Event_response(::control_msgs::action::FollowJointWrenchTrajectory_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::FollowJointWrenchTrajectory_GetResult_Event response(::control_msgs::action::FollowJointWrenchTrajectory_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::FollowJointWrenchTrajectory_GetResult_Event msg_;
};

class Init_FollowJointWrenchTrajectory_GetResult_Event_request
{
public:
  explicit Init_FollowJointWrenchTrajectory_GetResult_Event_request(::control_msgs::action::FollowJointWrenchTrajectory_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_FollowJointWrenchTrajectory_GetResult_Event_response request(::control_msgs::action::FollowJointWrenchTrajectory_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_FollowJointWrenchTrajectory_GetResult_Event_response(msg_);
  }

private:
  ::control_msgs::action::FollowJointWrenchTrajectory_GetResult_Event msg_;
};

class Init_FollowJointWrenchTrajectory_GetResult_Event_info
{
public:
  Init_FollowJointWrenchTrajectory_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowJointWrenchTrajectory_GetResult_Event_request info(::control_msgs::action::FollowJointWrenchTrajectory_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_FollowJointWrenchTrajectory_GetResult_Event_request(msg_);
  }

private:
  ::control_msgs::action::FollowJointWrenchTrajectory_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::FollowJointWrenchTrajectory_GetResult_Event>()
{
  return control_msgs::action::builder::Init_FollowJointWrenchTrajectory_GetResult_Event_info();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_FollowJointWrenchTrajectory_FeedbackMessage_feedback
{
public:
  explicit Init_FollowJointWrenchTrajectory_FeedbackMessage_feedback(::control_msgs::action::FollowJointWrenchTrajectory_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::FollowJointWrenchTrajectory_FeedbackMessage feedback(::control_msgs::action::FollowJointWrenchTrajectory_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::FollowJointWrenchTrajectory_FeedbackMessage msg_;
};

class Init_FollowJointWrenchTrajectory_FeedbackMessage_goal_id
{
public:
  Init_FollowJointWrenchTrajectory_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowJointWrenchTrajectory_FeedbackMessage_feedback goal_id(::control_msgs::action::FollowJointWrenchTrajectory_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FollowJointWrenchTrajectory_FeedbackMessage_feedback(msg_);
  }

private:
  ::control_msgs::action::FollowJointWrenchTrajectory_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::FollowJointWrenchTrajectory_FeedbackMessage>()
{
  return control_msgs::action::builder::Init_FollowJointWrenchTrajectory_FeedbackMessage_goal_id();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__ACTION__DETAIL__FOLLOW_JOINT_WRENCH_TRAJECTORY__BUILDER_HPP_
