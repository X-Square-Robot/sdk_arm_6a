#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to x2robot_msgs__srv__HomingRequest_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HomingRequest_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for HomingRequest_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::HomingRequest_Request::default())
  }
}

impl rosidl_runtime_rs::Message for HomingRequest_Request {
  type RmwMsg = super::srv::rmw::HomingRequest_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to x2robot_msgs__srv__HomingRequest_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HomingRequest_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_succ: bool,

}



impl Default for HomingRequest_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::HomingRequest_Response::default())
  }
}

impl rosidl_runtime_rs::Message for HomingRequest_Response {
  type RmwMsg = super::srv::rmw::HomingRequest_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        is_succ: msg.is_succ,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      is_succ: msg.is_succ,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      is_succ: msg.is_succ,
    }
  }
}


// Corresponds to x2robot_msgs__srv__MoveitGroupStateRequest_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveitGroupStateRequest_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub group_state: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub num_planning_attempts: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub allowed_planning_time: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_velocity_scaling_factor: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_acceleration_scaling_factor: f64,

}



impl Default for MoveitGroupStateRequest_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::MoveitGroupStateRequest_Request::default())
  }
}

impl rosidl_runtime_rs::Message for MoveitGroupStateRequest_Request {
  type RmwMsg = super::srv::rmw::MoveitGroupStateRequest_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        group_state: msg.group_state.as_str().into(),
        num_planning_attempts: msg.num_planning_attempts,
        allowed_planning_time: msg.allowed_planning_time,
        max_velocity_scaling_factor: msg.max_velocity_scaling_factor,
        max_acceleration_scaling_factor: msg.max_acceleration_scaling_factor,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        group_state: msg.group_state.as_str().into(),
      num_planning_attempts: msg.num_planning_attempts,
      allowed_planning_time: msg.allowed_planning_time,
      max_velocity_scaling_factor: msg.max_velocity_scaling_factor,
      max_acceleration_scaling_factor: msg.max_acceleration_scaling_factor,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      group_state: msg.group_state.to_string(),
      num_planning_attempts: msg.num_planning_attempts,
      allowed_planning_time: msg.allowed_planning_time,
      max_velocity_scaling_factor: msg.max_velocity_scaling_factor,
      max_acceleration_scaling_factor: msg.max_acceleration_scaling_factor,
    }
  }
}


// Corresponds to x2robot_msgs__srv__MoveitGroupStateRequest_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveitGroupStateRequest_Response {
    /// 查询x2robot_msgs.msg.EnumMoveitMoveResult
    pub moveit_move_result: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for MoveitGroupStateRequest_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::MoveitGroupStateRequest_Response::default())
  }
}

impl rosidl_runtime_rs::Message for MoveitGroupStateRequest_Response {
  type RmwMsg = super::srv::rmw::MoveitGroupStateRequest_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        moveit_move_result: msg.moveit_move_result,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      moveit_move_result: msg.moveit_move_result,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      moveit_move_result: msg.moveit_move_result,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to x2robot_msgs__srv__MoveitJointPositionRequest_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveitJointPositionRequest_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_positions: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub num_planning_attempts: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub allowed_planning_time: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_velocity_scaling_factor: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_acceleration_scaling_factor: f64,

}



impl Default for MoveitJointPositionRequest_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::MoveitJointPositionRequest_Request::default())
  }
}

impl rosidl_runtime_rs::Message for MoveitJointPositionRequest_Request {
  type RmwMsg = super::srv::rmw::MoveitJointPositionRequest_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joint_names: msg.joint_names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        joint_positions: msg.joint_positions.into(),
        num_planning_attempts: msg.num_planning_attempts,
        allowed_planning_time: msg.allowed_planning_time,
        max_velocity_scaling_factor: msg.max_velocity_scaling_factor,
        max_acceleration_scaling_factor: msg.max_acceleration_scaling_factor,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joint_names: msg.joint_names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        joint_positions: msg.joint_positions.as_slice().into(),
      num_planning_attempts: msg.num_planning_attempts,
      allowed_planning_time: msg.allowed_planning_time,
      max_velocity_scaling_factor: msg.max_velocity_scaling_factor,
      max_acceleration_scaling_factor: msg.max_acceleration_scaling_factor,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      joint_names: msg.joint_names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      joint_positions: msg.joint_positions
          .into_iter()
          .collect(),
      num_planning_attempts: msg.num_planning_attempts,
      allowed_planning_time: msg.allowed_planning_time,
      max_velocity_scaling_factor: msg.max_velocity_scaling_factor,
      max_acceleration_scaling_factor: msg.max_acceleration_scaling_factor,
    }
  }
}


// Corresponds to x2robot_msgs__srv__MoveitJointPositionRequest_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveitJointPositionRequest_Response {
    /// 查询x2robot_msgs.msg.EnumMoveitMoveResult
    pub moveit_move_result: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for MoveitJointPositionRequest_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::MoveitJointPositionRequest_Response::default())
  }
}

impl rosidl_runtime_rs::Message for MoveitJointPositionRequest_Response {
  type RmwMsg = super::srv::rmw::MoveitJointPositionRequest_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        moveit_move_result: msg.moveit_move_result,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      moveit_move_result: msg.moveit_move_result,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      moveit_move_result: msg.moveit_move_result,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to x2robot_msgs__srv__SwitchRobotControlMode_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SwitchRobotControlMode_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub request_for_homing: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub try_recover: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_motion_state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data_collection_mode: u8,

}



impl Default for SwitchRobotControlMode_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SwitchRobotControlMode_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SwitchRobotControlMode_Request {
  type RmwMsg = super::srv::rmw::SwitchRobotControlMode_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_mode: msg.target_mode,
        request_for_homing: msg.request_for_homing,
        try_recover: msg.try_recover,
        target_motion_state: msg.target_motion_state,
        data_collection_mode: msg.data_collection_mode,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      target_mode: msg.target_mode,
      request_for_homing: msg.request_for_homing,
      try_recover: msg.try_recover,
      target_motion_state: msg.target_motion_state,
      data_collection_mode: msg.data_collection_mode,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      target_mode: msg.target_mode,
      request_for_homing: msg.request_for_homing,
      try_recover: msg.try_recover,
      target_motion_state: msg.target_motion_state,
      data_collection_mode: msg.data_collection_mode,
    }
  }
}


// Corresponds to x2robot_msgs__srv__SwitchRobotControlMode_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SwitchRobotControlMode_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ok: bool,

}



impl Default for SwitchRobotControlMode_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SwitchRobotControlMode_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SwitchRobotControlMode_Response {
  type RmwMsg = super::srv::rmw::SwitchRobotControlMode_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ok: msg.ok,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      ok: msg.ok,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ok: msg.ok,
    }
  }
}


// Corresponds to x2robot_msgs__srv__TrajectoryPlanRequest_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TrajectoryPlanRequest_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub group_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub start_state_joint_names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub start_states: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_state_joint_names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_states: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tolerance_above: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tolerance_below: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub num_planning_attempts: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub allowed_planning_time: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_velocity_scaling_factor: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_acceleration_scaling_factor: f64,

}



impl Default for TrajectoryPlanRequest_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::TrajectoryPlanRequest_Request::default())
  }
}

impl rosidl_runtime_rs::Message for TrajectoryPlanRequest_Request {
  type RmwMsg = super::srv::rmw::TrajectoryPlanRequest_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        group_name: msg.group_name.as_str().into(),
        start_state_joint_names: msg.start_state_joint_names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        start_states: msg.start_states.into(),
        goal_state_joint_names: msg.goal_state_joint_names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        goal_states: msg.goal_states.into(),
        tolerance_above: msg.tolerance_above.into(),
        tolerance_below: msg.tolerance_below.into(),
        num_planning_attempts: msg.num_planning_attempts,
        allowed_planning_time: msg.allowed_planning_time,
        max_velocity_scaling_factor: msg.max_velocity_scaling_factor,
        max_acceleration_scaling_factor: msg.max_acceleration_scaling_factor,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        group_name: msg.group_name.as_str().into(),
        start_state_joint_names: msg.start_state_joint_names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        start_states: msg.start_states.as_slice().into(),
        goal_state_joint_names: msg.goal_state_joint_names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        goal_states: msg.goal_states.as_slice().into(),
        tolerance_above: msg.tolerance_above.as_slice().into(),
        tolerance_below: msg.tolerance_below.as_slice().into(),
      num_planning_attempts: msg.num_planning_attempts,
      allowed_planning_time: msg.allowed_planning_time,
      max_velocity_scaling_factor: msg.max_velocity_scaling_factor,
      max_acceleration_scaling_factor: msg.max_acceleration_scaling_factor,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      group_name: msg.group_name.to_string(),
      start_state_joint_names: msg.start_state_joint_names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      start_states: msg.start_states
          .into_iter()
          .collect(),
      goal_state_joint_names: msg.goal_state_joint_names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      goal_states: msg.goal_states
          .into_iter()
          .collect(),
      tolerance_above: msg.tolerance_above
          .into_iter()
          .collect(),
      tolerance_below: msg.tolerance_below
          .into_iter()
          .collect(),
      num_planning_attempts: msg.num_planning_attempts,
      allowed_planning_time: msg.allowed_planning_time,
      max_velocity_scaling_factor: msg.max_velocity_scaling_factor,
      max_acceleration_scaling_factor: msg.max_acceleration_scaling_factor,
    }
  }
}


// Corresponds to x2robot_msgs__srv__TrajectoryPlanRequest_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TrajectoryPlanRequest_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub trajectory: trajectory_msgs::msg::JointTrajectory,

}



impl Default for TrajectoryPlanRequest_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::TrajectoryPlanRequest_Response::default())
  }
}

impl rosidl_runtime_rs::Message for TrajectoryPlanRequest_Response {
  type RmwMsg = super::srv::rmw::TrajectoryPlanRequest_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        error_code: msg.error_code,
        trajectory: trajectory_msgs::msg::JointTrajectory::into_rmw_message(std::borrow::Cow::Owned(msg.trajectory)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      error_code: msg.error_code,
        trajectory: trajectory_msgs::msg::JointTrajectory::into_rmw_message(std::borrow::Cow::Borrowed(&msg.trajectory)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      error_code: msg.error_code,
      trajectory: trajectory_msgs::msg::JointTrajectory::from_rmw_message(msg.trajectory),
    }
  }
}






#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__x2robot_msgs__srv__HomingRequest() -> *const std::ffi::c_void;
}

// Corresponds to x2robot_msgs__srv__HomingRequest
#[allow(missing_docs, non_camel_case_types)]
pub struct HomingRequest;

impl rosidl_runtime_rs::Service for HomingRequest {
    type Request = HomingRequest_Request;
    type Response = HomingRequest_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__x2robot_msgs__srv__HomingRequest() }
    }
}




#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__x2robot_msgs__srv__MoveitGroupStateRequest() -> *const std::ffi::c_void;
}

// Corresponds to x2robot_msgs__srv__MoveitGroupStateRequest
#[allow(missing_docs, non_camel_case_types)]
pub struct MoveitGroupStateRequest;

impl rosidl_runtime_rs::Service for MoveitGroupStateRequest {
    type Request = MoveitGroupStateRequest_Request;
    type Response = MoveitGroupStateRequest_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__x2robot_msgs__srv__MoveitGroupStateRequest() }
    }
}




#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__x2robot_msgs__srv__MoveitJointPositionRequest() -> *const std::ffi::c_void;
}

// Corresponds to x2robot_msgs__srv__MoveitJointPositionRequest
#[allow(missing_docs, non_camel_case_types)]
pub struct MoveitJointPositionRequest;

impl rosidl_runtime_rs::Service for MoveitJointPositionRequest {
    type Request = MoveitJointPositionRequest_Request;
    type Response = MoveitJointPositionRequest_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__x2robot_msgs__srv__MoveitJointPositionRequest() }
    }
}




#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__x2robot_msgs__srv__SwitchRobotControlMode() -> *const std::ffi::c_void;
}

// Corresponds to x2robot_msgs__srv__SwitchRobotControlMode
#[allow(missing_docs, non_camel_case_types)]
pub struct SwitchRobotControlMode;

impl rosidl_runtime_rs::Service for SwitchRobotControlMode {
    type Request = SwitchRobotControlMode_Request;
    type Response = SwitchRobotControlMode_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__x2robot_msgs__srv__SwitchRobotControlMode() }
    }
}




#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__x2robot_msgs__srv__TrajectoryPlanRequest() -> *const std::ffi::c_void;
}

// Corresponds to x2robot_msgs__srv__TrajectoryPlanRequest
#[allow(missing_docs, non_camel_case_types)]
pub struct TrajectoryPlanRequest;

impl rosidl_runtime_rs::Service for TrajectoryPlanRequest {
    type Request = TrajectoryPlanRequest_Request;
    type Response = TrajectoryPlanRequest_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__x2robot_msgs__srv__TrajectoryPlanRequest() }
    }
}


