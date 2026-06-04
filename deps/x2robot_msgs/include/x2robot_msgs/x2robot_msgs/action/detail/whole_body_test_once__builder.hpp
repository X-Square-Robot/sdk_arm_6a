// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from x2robot_msgs:action/WholeBodyTestOnce.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/action/whole_body_test_once.hpp"


#ifndef X2ROBOT_MSGS__ACTION__DETAIL__WHOLE_BODY_TEST_ONCE__BUILDER_HPP_
#define X2ROBOT_MSGS__ACTION__DETAIL__WHOLE_BODY_TEST_ONCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "x2robot_msgs/action/detail/whole_body_test_once__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace x2robot_msgs
{

namespace action
{

namespace builder
{

class Init_WholeBodyTestOnce_Goal_max_acceleration_scaling_factor
{
public:
  explicit Init_WholeBodyTestOnce_Goal_max_acceleration_scaling_factor(::x2robot_msgs::action::WholeBodyTestOnce_Goal & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::action::WholeBodyTestOnce_Goal max_acceleration_scaling_factor(::x2robot_msgs::action::WholeBodyTestOnce_Goal::_max_acceleration_scaling_factor_type arg)
  {
    msg_.max_acceleration_scaling_factor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::action::WholeBodyTestOnce_Goal msg_;
};

class Init_WholeBodyTestOnce_Goal_max_velocity_scaling_factor
{
public:
  Init_WholeBodyTestOnce_Goal_max_velocity_scaling_factor()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WholeBodyTestOnce_Goal_max_acceleration_scaling_factor max_velocity_scaling_factor(::x2robot_msgs::action::WholeBodyTestOnce_Goal::_max_velocity_scaling_factor_type arg)
  {
    msg_.max_velocity_scaling_factor = std::move(arg);
    return Init_WholeBodyTestOnce_Goal_max_acceleration_scaling_factor(msg_);
  }

private:
  ::x2robot_msgs::action::WholeBodyTestOnce_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::action::WholeBodyTestOnce_Goal>()
{
  return x2robot_msgs::action::builder::Init_WholeBodyTestOnce_Goal_max_velocity_scaling_factor();
}

}  // namespace x2robot_msgs


namespace x2robot_msgs
{

namespace action
{

namespace builder
{

class Init_WholeBodyTestOnce_Result_failed_poses
{
public:
  explicit Init_WholeBodyTestOnce_Result_failed_poses(::x2robot_msgs::action::WholeBodyTestOnce_Result & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::action::WholeBodyTestOnce_Result failed_poses(::x2robot_msgs::action::WholeBodyTestOnce_Result::_failed_poses_type arg)
  {
    msg_.failed_poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::action::WholeBodyTestOnce_Result msg_;
};

class Init_WholeBodyTestOnce_Result_successful_poses
{
public:
  explicit Init_WholeBodyTestOnce_Result_successful_poses(::x2robot_msgs::action::WholeBodyTestOnce_Result & msg)
  : msg_(msg)
  {}
  Init_WholeBodyTestOnce_Result_failed_poses successful_poses(::x2robot_msgs::action::WholeBodyTestOnce_Result::_successful_poses_type arg)
  {
    msg_.successful_poses = std::move(arg);
    return Init_WholeBodyTestOnce_Result_failed_poses(msg_);
  }

private:
  ::x2robot_msgs::action::WholeBodyTestOnce_Result msg_;
};

class Init_WholeBodyTestOnce_Result_message
{
public:
  explicit Init_WholeBodyTestOnce_Result_message(::x2robot_msgs::action::WholeBodyTestOnce_Result & msg)
  : msg_(msg)
  {}
  Init_WholeBodyTestOnce_Result_successful_poses message(::x2robot_msgs::action::WholeBodyTestOnce_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_WholeBodyTestOnce_Result_successful_poses(msg_);
  }

private:
  ::x2robot_msgs::action::WholeBodyTestOnce_Result msg_;
};

class Init_WholeBodyTestOnce_Result_success
{
public:
  Init_WholeBodyTestOnce_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WholeBodyTestOnce_Result_message success(::x2robot_msgs::action::WholeBodyTestOnce_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_WholeBodyTestOnce_Result_message(msg_);
  }

private:
  ::x2robot_msgs::action::WholeBodyTestOnce_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::action::WholeBodyTestOnce_Result>()
{
  return x2robot_msgs::action::builder::Init_WholeBodyTestOnce_Result_success();
}

}  // namespace x2robot_msgs


namespace x2robot_msgs
{

namespace action
{

namespace builder
{

class Init_WholeBodyTestOnce_Feedback_current_index
{
public:
  explicit Init_WholeBodyTestOnce_Feedback_current_index(::x2robot_msgs::action::WholeBodyTestOnce_Feedback & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::action::WholeBodyTestOnce_Feedback current_index(::x2robot_msgs::action::WholeBodyTestOnce_Feedback::_current_index_type arg)
  {
    msg_.current_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::action::WholeBodyTestOnce_Feedback msg_;
};

class Init_WholeBodyTestOnce_Feedback_total_poses
{
public:
  explicit Init_WholeBodyTestOnce_Feedback_total_poses(::x2robot_msgs::action::WholeBodyTestOnce_Feedback & msg)
  : msg_(msg)
  {}
  Init_WholeBodyTestOnce_Feedback_current_index total_poses(::x2robot_msgs::action::WholeBodyTestOnce_Feedback::_total_poses_type arg)
  {
    msg_.total_poses = std::move(arg);
    return Init_WholeBodyTestOnce_Feedback_current_index(msg_);
  }

private:
  ::x2robot_msgs::action::WholeBodyTestOnce_Feedback msg_;
};

class Init_WholeBodyTestOnce_Feedback_failed_poses
{
public:
  explicit Init_WholeBodyTestOnce_Feedback_failed_poses(::x2robot_msgs::action::WholeBodyTestOnce_Feedback & msg)
  : msg_(msg)
  {}
  Init_WholeBodyTestOnce_Feedback_total_poses failed_poses(::x2robot_msgs::action::WholeBodyTestOnce_Feedback::_failed_poses_type arg)
  {
    msg_.failed_poses = std::move(arg);
    return Init_WholeBodyTestOnce_Feedback_total_poses(msg_);
  }

private:
  ::x2robot_msgs::action::WholeBodyTestOnce_Feedback msg_;
};

class Init_WholeBodyTestOnce_Feedback_successful_poses
{
public:
  explicit Init_WholeBodyTestOnce_Feedback_successful_poses(::x2robot_msgs::action::WholeBodyTestOnce_Feedback & msg)
  : msg_(msg)
  {}
  Init_WholeBodyTestOnce_Feedback_failed_poses successful_poses(::x2robot_msgs::action::WholeBodyTestOnce_Feedback::_successful_poses_type arg)
  {
    msg_.successful_poses = std::move(arg);
    return Init_WholeBodyTestOnce_Feedback_failed_poses(msg_);
  }

private:
  ::x2robot_msgs::action::WholeBodyTestOnce_Feedback msg_;
};

class Init_WholeBodyTestOnce_Feedback_progress
{
public:
  explicit Init_WholeBodyTestOnce_Feedback_progress(::x2robot_msgs::action::WholeBodyTestOnce_Feedback & msg)
  : msg_(msg)
  {}
  Init_WholeBodyTestOnce_Feedback_successful_poses progress(::x2robot_msgs::action::WholeBodyTestOnce_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return Init_WholeBodyTestOnce_Feedback_successful_poses(msg_);
  }

private:
  ::x2robot_msgs::action::WholeBodyTestOnce_Feedback msg_;
};

class Init_WholeBodyTestOnce_Feedback_current_pose
{
public:
  Init_WholeBodyTestOnce_Feedback_current_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WholeBodyTestOnce_Feedback_progress current_pose(::x2robot_msgs::action::WholeBodyTestOnce_Feedback::_current_pose_type arg)
  {
    msg_.current_pose = std::move(arg);
    return Init_WholeBodyTestOnce_Feedback_progress(msg_);
  }

private:
  ::x2robot_msgs::action::WholeBodyTestOnce_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::action::WholeBodyTestOnce_Feedback>()
{
  return x2robot_msgs::action::builder::Init_WholeBodyTestOnce_Feedback_current_pose();
}

}  // namespace x2robot_msgs


namespace x2robot_msgs
{

namespace action
{

namespace builder
{

class Init_WholeBodyTestOnce_SendGoal_Request_goal
{
public:
  explicit Init_WholeBodyTestOnce_SendGoal_Request_goal(::x2robot_msgs::action::WholeBodyTestOnce_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::action::WholeBodyTestOnce_SendGoal_Request goal(::x2robot_msgs::action::WholeBodyTestOnce_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::action::WholeBodyTestOnce_SendGoal_Request msg_;
};

class Init_WholeBodyTestOnce_SendGoal_Request_goal_id
{
public:
  Init_WholeBodyTestOnce_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WholeBodyTestOnce_SendGoal_Request_goal goal_id(::x2robot_msgs::action::WholeBodyTestOnce_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_WholeBodyTestOnce_SendGoal_Request_goal(msg_);
  }

private:
  ::x2robot_msgs::action::WholeBodyTestOnce_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::action::WholeBodyTestOnce_SendGoal_Request>()
{
  return x2robot_msgs::action::builder::Init_WholeBodyTestOnce_SendGoal_Request_goal_id();
}

}  // namespace x2robot_msgs


namespace x2robot_msgs
{

namespace action
{

namespace builder
{

class Init_WholeBodyTestOnce_SendGoal_Response_stamp
{
public:
  explicit Init_WholeBodyTestOnce_SendGoal_Response_stamp(::x2robot_msgs::action::WholeBodyTestOnce_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::action::WholeBodyTestOnce_SendGoal_Response stamp(::x2robot_msgs::action::WholeBodyTestOnce_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::action::WholeBodyTestOnce_SendGoal_Response msg_;
};

class Init_WholeBodyTestOnce_SendGoal_Response_accepted
{
public:
  Init_WholeBodyTestOnce_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WholeBodyTestOnce_SendGoal_Response_stamp accepted(::x2robot_msgs::action::WholeBodyTestOnce_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_WholeBodyTestOnce_SendGoal_Response_stamp(msg_);
  }

private:
  ::x2robot_msgs::action::WholeBodyTestOnce_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::action::WholeBodyTestOnce_SendGoal_Response>()
{
  return x2robot_msgs::action::builder::Init_WholeBodyTestOnce_SendGoal_Response_accepted();
}

}  // namespace x2robot_msgs


namespace x2robot_msgs
{

namespace action
{

namespace builder
{

class Init_WholeBodyTestOnce_SendGoal_Event_response
{
public:
  explicit Init_WholeBodyTestOnce_SendGoal_Event_response(::x2robot_msgs::action::WholeBodyTestOnce_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::action::WholeBodyTestOnce_SendGoal_Event response(::x2robot_msgs::action::WholeBodyTestOnce_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::action::WholeBodyTestOnce_SendGoal_Event msg_;
};

class Init_WholeBodyTestOnce_SendGoal_Event_request
{
public:
  explicit Init_WholeBodyTestOnce_SendGoal_Event_request(::x2robot_msgs::action::WholeBodyTestOnce_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_WholeBodyTestOnce_SendGoal_Event_response request(::x2robot_msgs::action::WholeBodyTestOnce_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_WholeBodyTestOnce_SendGoal_Event_response(msg_);
  }

private:
  ::x2robot_msgs::action::WholeBodyTestOnce_SendGoal_Event msg_;
};

class Init_WholeBodyTestOnce_SendGoal_Event_info
{
public:
  Init_WholeBodyTestOnce_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WholeBodyTestOnce_SendGoal_Event_request info(::x2robot_msgs::action::WholeBodyTestOnce_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_WholeBodyTestOnce_SendGoal_Event_request(msg_);
  }

private:
  ::x2robot_msgs::action::WholeBodyTestOnce_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::action::WholeBodyTestOnce_SendGoal_Event>()
{
  return x2robot_msgs::action::builder::Init_WholeBodyTestOnce_SendGoal_Event_info();
}

}  // namespace x2robot_msgs


namespace x2robot_msgs
{

namespace action
{

namespace builder
{

class Init_WholeBodyTestOnce_GetResult_Request_goal_id
{
public:
  Init_WholeBodyTestOnce_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::x2robot_msgs::action::WholeBodyTestOnce_GetResult_Request goal_id(::x2robot_msgs::action::WholeBodyTestOnce_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::action::WholeBodyTestOnce_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::action::WholeBodyTestOnce_GetResult_Request>()
{
  return x2robot_msgs::action::builder::Init_WholeBodyTestOnce_GetResult_Request_goal_id();
}

}  // namespace x2robot_msgs


namespace x2robot_msgs
{

namespace action
{

namespace builder
{

class Init_WholeBodyTestOnce_GetResult_Response_result
{
public:
  explicit Init_WholeBodyTestOnce_GetResult_Response_result(::x2robot_msgs::action::WholeBodyTestOnce_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::action::WholeBodyTestOnce_GetResult_Response result(::x2robot_msgs::action::WholeBodyTestOnce_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::action::WholeBodyTestOnce_GetResult_Response msg_;
};

class Init_WholeBodyTestOnce_GetResult_Response_status
{
public:
  Init_WholeBodyTestOnce_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WholeBodyTestOnce_GetResult_Response_result status(::x2robot_msgs::action::WholeBodyTestOnce_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_WholeBodyTestOnce_GetResult_Response_result(msg_);
  }

private:
  ::x2robot_msgs::action::WholeBodyTestOnce_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::action::WholeBodyTestOnce_GetResult_Response>()
{
  return x2robot_msgs::action::builder::Init_WholeBodyTestOnce_GetResult_Response_status();
}

}  // namespace x2robot_msgs


namespace x2robot_msgs
{

namespace action
{

namespace builder
{

class Init_WholeBodyTestOnce_GetResult_Event_response
{
public:
  explicit Init_WholeBodyTestOnce_GetResult_Event_response(::x2robot_msgs::action::WholeBodyTestOnce_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::action::WholeBodyTestOnce_GetResult_Event response(::x2robot_msgs::action::WholeBodyTestOnce_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::action::WholeBodyTestOnce_GetResult_Event msg_;
};

class Init_WholeBodyTestOnce_GetResult_Event_request
{
public:
  explicit Init_WholeBodyTestOnce_GetResult_Event_request(::x2robot_msgs::action::WholeBodyTestOnce_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_WholeBodyTestOnce_GetResult_Event_response request(::x2robot_msgs::action::WholeBodyTestOnce_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_WholeBodyTestOnce_GetResult_Event_response(msg_);
  }

private:
  ::x2robot_msgs::action::WholeBodyTestOnce_GetResult_Event msg_;
};

class Init_WholeBodyTestOnce_GetResult_Event_info
{
public:
  Init_WholeBodyTestOnce_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WholeBodyTestOnce_GetResult_Event_request info(::x2robot_msgs::action::WholeBodyTestOnce_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_WholeBodyTestOnce_GetResult_Event_request(msg_);
  }

private:
  ::x2robot_msgs::action::WholeBodyTestOnce_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::action::WholeBodyTestOnce_GetResult_Event>()
{
  return x2robot_msgs::action::builder::Init_WholeBodyTestOnce_GetResult_Event_info();
}

}  // namespace x2robot_msgs


namespace x2robot_msgs
{

namespace action
{

namespace builder
{

class Init_WholeBodyTestOnce_FeedbackMessage_feedback
{
public:
  explicit Init_WholeBodyTestOnce_FeedbackMessage_feedback(::x2robot_msgs::action::WholeBodyTestOnce_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::action::WholeBodyTestOnce_FeedbackMessage feedback(::x2robot_msgs::action::WholeBodyTestOnce_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::action::WholeBodyTestOnce_FeedbackMessage msg_;
};

class Init_WholeBodyTestOnce_FeedbackMessage_goal_id
{
public:
  Init_WholeBodyTestOnce_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WholeBodyTestOnce_FeedbackMessage_feedback goal_id(::x2robot_msgs::action::WholeBodyTestOnce_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_WholeBodyTestOnce_FeedbackMessage_feedback(msg_);
  }

private:
  ::x2robot_msgs::action::WholeBodyTestOnce_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::action::WholeBodyTestOnce_FeedbackMessage>()
{
  return x2robot_msgs::action::builder::Init_WholeBodyTestOnce_FeedbackMessage_goal_id();
}

}  // namespace x2robot_msgs

#endif  // X2ROBOT_MSGS__ACTION__DETAIL__WHOLE_BODY_TEST_ONCE__BUILDER_HPP_
