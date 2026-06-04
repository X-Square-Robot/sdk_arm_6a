
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to x2robot_msgs__action__WholeBodyTestOnce_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WholeBodyTestOnce_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub max_velocity_scaling_factor: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_acceleration_scaling_factor: f32,

}



impl Default for WholeBodyTestOnce_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::WholeBodyTestOnce_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for WholeBodyTestOnce_Goal {
  type RmwMsg = super::action::rmw::WholeBodyTestOnce_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        max_velocity_scaling_factor: msg.max_velocity_scaling_factor,
        max_acceleration_scaling_factor: msg.max_acceleration_scaling_factor,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      max_velocity_scaling_factor: msg.max_velocity_scaling_factor,
      max_acceleration_scaling_factor: msg.max_acceleration_scaling_factor,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      max_velocity_scaling_factor: msg.max_velocity_scaling_factor,
      max_acceleration_scaling_factor: msg.max_acceleration_scaling_factor,
    }
  }
}


// Corresponds to x2robot_msgs__action__WholeBodyTestOnce_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WholeBodyTestOnce_Result {
    /// Result definition
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub successful_poses: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub failed_poses: Vec<std::string::String>,

}



impl Default for WholeBodyTestOnce_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::WholeBodyTestOnce_Result::default())
  }
}

impl rosidl_runtime_rs::Message for WholeBodyTestOnce_Result {
  type RmwMsg = super::action::rmw::WholeBodyTestOnce_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        successful_poses: msg.successful_poses
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        failed_poses: msg.failed_poses
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        successful_poses: msg.successful_poses
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        failed_poses: msg.failed_poses
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      successful_poses: msg.successful_poses
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      failed_poses: msg.failed_poses
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to x2robot_msgs__action__WholeBodyTestOnce_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WholeBodyTestOnce_Feedback {
    /// Feedback definition
    pub current_pose: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub progress: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub successful_poses: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub failed_poses: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub total_poses: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_index: i32,

}



impl Default for WholeBodyTestOnce_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::WholeBodyTestOnce_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for WholeBodyTestOnce_Feedback {
  type RmwMsg = super::action::rmw::WholeBodyTestOnce_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_pose: msg.current_pose.as_str().into(),
        progress: msg.progress,
        successful_poses: msg.successful_poses
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        failed_poses: msg.failed_poses
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        total_poses: msg.total_poses,
        current_index: msg.current_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_pose: msg.current_pose.as_str().into(),
      progress: msg.progress,
        successful_poses: msg.successful_poses
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        failed_poses: msg.failed_poses
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      total_poses: msg.total_poses,
      current_index: msg.current_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      current_pose: msg.current_pose.to_string(),
      progress: msg.progress,
      successful_poses: msg.successful_poses
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      failed_poses: msg.failed_poses
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      total_poses: msg.total_poses,
      current_index: msg.current_index,
    }
  }
}


// Corresponds to x2robot_msgs__action__WholeBodyTestOnce_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WholeBodyTestOnce_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::WholeBodyTestOnce_Feedback,

}



impl Default for WholeBodyTestOnce_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::WholeBodyTestOnce_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for WholeBodyTestOnce_FeedbackMessage {
  type RmwMsg = super::action::rmw::WholeBodyTestOnce_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::WholeBodyTestOnce_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::WholeBodyTestOnce_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::WholeBodyTestOnce_Feedback::from_rmw_message(msg.feedback),
    }
  }
}






// Corresponds to x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WholeBodyTestOnce_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::WholeBodyTestOnce_Goal,

}



impl Default for WholeBodyTestOnce_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::WholeBodyTestOnce_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for WholeBodyTestOnce_SendGoal_Request {
  type RmwMsg = super::action::rmw::WholeBodyTestOnce_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::WholeBodyTestOnce_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::WholeBodyTestOnce_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::WholeBodyTestOnce_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WholeBodyTestOnce_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for WholeBodyTestOnce_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::WholeBodyTestOnce_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for WholeBodyTestOnce_SendGoal_Response {
  type RmwMsg = super::action::rmw::WholeBodyTestOnce_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to x2robot_msgs__action__WholeBodyTestOnce_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WholeBodyTestOnce_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for WholeBodyTestOnce_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::WholeBodyTestOnce_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for WholeBodyTestOnce_GetResult_Request {
  type RmwMsg = super::action::rmw::WholeBodyTestOnce_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to x2robot_msgs__action__WholeBodyTestOnce_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WholeBodyTestOnce_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::WholeBodyTestOnce_Result,

}



impl Default for WholeBodyTestOnce_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::WholeBodyTestOnce_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for WholeBodyTestOnce_GetResult_Response {
  type RmwMsg = super::action::rmw::WholeBodyTestOnce_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::WholeBodyTestOnce_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::WholeBodyTestOnce_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::WholeBodyTestOnce_Result::from_rmw_message(msg.result),
    }
  }
}






#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__x2robot_msgs__action__WholeBodyTestOnce_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to x2robot_msgs__action__WholeBodyTestOnce_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct WholeBodyTestOnce_SendGoal;

impl rosidl_runtime_rs::Service for WholeBodyTestOnce_SendGoal {
    type Request = WholeBodyTestOnce_SendGoal_Request;
    type Response = WholeBodyTestOnce_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__x2robot_msgs__action__WholeBodyTestOnce_SendGoal() }
    }
}




#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__x2robot_msgs__action__WholeBodyTestOnce_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to x2robot_msgs__action__WholeBodyTestOnce_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct WholeBodyTestOnce_GetResult;

impl rosidl_runtime_rs::Service for WholeBodyTestOnce_GetResult {
    type Request = WholeBodyTestOnce_GetResult_Request;
    type Response = WholeBodyTestOnce_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__x2robot_msgs__action__WholeBodyTestOnce_GetResult() }
    }
}






#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__x2robot_msgs__action__WholeBodyTestOnce() -> *const std::ffi::c_void;
}

// Corresponds to x2robot_msgs__action__WholeBodyTestOnce
#[allow(missing_docs, non_camel_case_types)]
pub struct WholeBodyTestOnce;

impl rosidl_runtime_rs::Action for WholeBodyTestOnce {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = WholeBodyTestOnce_Goal;

  /// The result message defined in the action definition.
  type Result = WholeBodyTestOnce_Result;

  /// The feedback message defined in the action definition.
  type Feedback = WholeBodyTestOnce_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::WholeBodyTestOnce_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::WholeBodyTestOnce_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::WholeBodyTestOnce_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__x2robot_msgs__action__WholeBodyTestOnce() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::WholeBodyTestOnce_Goal,
  ) -> super::action::rmw::WholeBodyTestOnce_SendGoal_Request {
   super::action::rmw::WholeBodyTestOnce_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::WholeBodyTestOnce_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::WholeBodyTestOnce_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::WholeBodyTestOnce_SendGoal_Response {
   super::action::rmw::WholeBodyTestOnce_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::WholeBodyTestOnce_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::WholeBodyTestOnce_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::WholeBodyTestOnce_Feedback,
  ) -> super::action::rmw::WholeBodyTestOnce_FeedbackMessage {
    let mut message = super::action::rmw::WholeBodyTestOnce_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::WholeBodyTestOnce_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::WholeBodyTestOnce_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::WholeBodyTestOnce_GetResult_Request {
   super::action::rmw::WholeBodyTestOnce_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::WholeBodyTestOnce_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::WholeBodyTestOnce_Result,
  ) -> super::action::rmw::WholeBodyTestOnce_GetResult_Response {
   super::action::rmw::WholeBodyTestOnce_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::WholeBodyTestOnce_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::WholeBodyTestOnce_Result,
  ) {
    (response.status, response.result)
  }
}


