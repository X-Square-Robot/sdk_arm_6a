#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__srv__HomingRequest_Request() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__srv__HomingRequest_Request__init(msg: *mut HomingRequest_Request) -> bool;
    fn x2robot_msgs__srv__HomingRequest_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HomingRequest_Request>, size: usize) -> bool;
    fn x2robot_msgs__srv__HomingRequest_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HomingRequest_Request>);
    fn x2robot_msgs__srv__HomingRequest_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HomingRequest_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<HomingRequest_Request>) -> bool;
}

// Corresponds to x2robot_msgs__srv__HomingRequest_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HomingRequest_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for HomingRequest_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__srv__HomingRequest_Request__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__srv__HomingRequest_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HomingRequest_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__HomingRequest_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__HomingRequest_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__HomingRequest_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HomingRequest_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HomingRequest_Request where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/srv/HomingRequest_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__srv__HomingRequest_Request() }
  }
}


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__srv__HomingRequest_Response() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__srv__HomingRequest_Response__init(msg: *mut HomingRequest_Response) -> bool;
    fn x2robot_msgs__srv__HomingRequest_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HomingRequest_Response>, size: usize) -> bool;
    fn x2robot_msgs__srv__HomingRequest_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HomingRequest_Response>);
    fn x2robot_msgs__srv__HomingRequest_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HomingRequest_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<HomingRequest_Response>) -> bool;
}

// Corresponds to x2robot_msgs__srv__HomingRequest_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HomingRequest_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_succ: bool,

}



impl Default for HomingRequest_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__srv__HomingRequest_Response__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__srv__HomingRequest_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HomingRequest_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__HomingRequest_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__HomingRequest_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__HomingRequest_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HomingRequest_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HomingRequest_Response where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/srv/HomingRequest_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__srv__HomingRequest_Response() }
  }
}


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__srv__MoveitGroupStateRequest_Request() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__srv__MoveitGroupStateRequest_Request__init(msg: *mut MoveitGroupStateRequest_Request) -> bool;
    fn x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveitGroupStateRequest_Request>, size: usize) -> bool;
    fn x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveitGroupStateRequest_Request>);
    fn x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveitGroupStateRequest_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveitGroupStateRequest_Request>) -> bool;
}

// Corresponds to x2robot_msgs__srv__MoveitGroupStateRequest_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveitGroupStateRequest_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub group_state: rosidl_runtime_rs::String,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__srv__MoveitGroupStateRequest_Request__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__srv__MoveitGroupStateRequest_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveitGroupStateRequest_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__MoveitGroupStateRequest_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveitGroupStateRequest_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveitGroupStateRequest_Request where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/srv/MoveitGroupStateRequest_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__srv__MoveitGroupStateRequest_Request() }
  }
}


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__srv__MoveitGroupStateRequest_Response() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__srv__MoveitGroupStateRequest_Response__init(msg: *mut MoveitGroupStateRequest_Response) -> bool;
    fn x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveitGroupStateRequest_Response>, size: usize) -> bool;
    fn x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveitGroupStateRequest_Response>);
    fn x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveitGroupStateRequest_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveitGroupStateRequest_Response>) -> bool;
}

// Corresponds to x2robot_msgs__srv__MoveitGroupStateRequest_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveitGroupStateRequest_Response {
    /// 查询x2robot_msgs.msg.EnumMoveitMoveResult
    pub moveit_move_result: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for MoveitGroupStateRequest_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__srv__MoveitGroupStateRequest_Response__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__srv__MoveitGroupStateRequest_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveitGroupStateRequest_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__MoveitGroupStateRequest_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveitGroupStateRequest_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveitGroupStateRequest_Response where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/srv/MoveitGroupStateRequest_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__srv__MoveitGroupStateRequest_Response() }
  }
}


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__srv__MoveitJointPositionRequest_Request() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__srv__MoveitJointPositionRequest_Request__init(msg: *mut MoveitJointPositionRequest_Request) -> bool;
    fn x2robot_msgs__srv__MoveitJointPositionRequest_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveitJointPositionRequest_Request>, size: usize) -> bool;
    fn x2robot_msgs__srv__MoveitJointPositionRequest_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveitJointPositionRequest_Request>);
    fn x2robot_msgs__srv__MoveitJointPositionRequest_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveitJointPositionRequest_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveitJointPositionRequest_Request>) -> bool;
}

// Corresponds to x2robot_msgs__srv__MoveitJointPositionRequest_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveitJointPositionRequest_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_positions: rosidl_runtime_rs::Sequence<f64>,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__srv__MoveitJointPositionRequest_Request__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__srv__MoveitJointPositionRequest_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveitJointPositionRequest_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__MoveitJointPositionRequest_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__MoveitJointPositionRequest_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__MoveitJointPositionRequest_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveitJointPositionRequest_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveitJointPositionRequest_Request where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/srv/MoveitJointPositionRequest_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__srv__MoveitJointPositionRequest_Request() }
  }
}


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__srv__MoveitJointPositionRequest_Response() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__srv__MoveitJointPositionRequest_Response__init(msg: *mut MoveitJointPositionRequest_Response) -> bool;
    fn x2robot_msgs__srv__MoveitJointPositionRequest_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveitJointPositionRequest_Response>, size: usize) -> bool;
    fn x2robot_msgs__srv__MoveitJointPositionRequest_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveitJointPositionRequest_Response>);
    fn x2robot_msgs__srv__MoveitJointPositionRequest_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveitJointPositionRequest_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveitJointPositionRequest_Response>) -> bool;
}

// Corresponds to x2robot_msgs__srv__MoveitJointPositionRequest_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveitJointPositionRequest_Response {
    /// 查询x2robot_msgs.msg.EnumMoveitMoveResult
    pub moveit_move_result: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for MoveitJointPositionRequest_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__srv__MoveitJointPositionRequest_Response__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__srv__MoveitJointPositionRequest_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveitJointPositionRequest_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__MoveitJointPositionRequest_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__MoveitJointPositionRequest_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__MoveitJointPositionRequest_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveitJointPositionRequest_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveitJointPositionRequest_Response where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/srv/MoveitJointPositionRequest_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__srv__MoveitJointPositionRequest_Response() }
  }
}


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__srv__SwitchRobotControlMode_Request() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__srv__SwitchRobotControlMode_Request__init(msg: *mut SwitchRobotControlMode_Request) -> bool;
    fn x2robot_msgs__srv__SwitchRobotControlMode_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SwitchRobotControlMode_Request>, size: usize) -> bool;
    fn x2robot_msgs__srv__SwitchRobotControlMode_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SwitchRobotControlMode_Request>);
    fn x2robot_msgs__srv__SwitchRobotControlMode_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SwitchRobotControlMode_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SwitchRobotControlMode_Request>) -> bool;
}

// Corresponds to x2robot_msgs__srv__SwitchRobotControlMode_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__srv__SwitchRobotControlMode_Request__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__srv__SwitchRobotControlMode_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SwitchRobotControlMode_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__SwitchRobotControlMode_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__SwitchRobotControlMode_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__SwitchRobotControlMode_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SwitchRobotControlMode_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SwitchRobotControlMode_Request where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/srv/SwitchRobotControlMode_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__srv__SwitchRobotControlMode_Request() }
  }
}


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__srv__SwitchRobotControlMode_Response() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__srv__SwitchRobotControlMode_Response__init(msg: *mut SwitchRobotControlMode_Response) -> bool;
    fn x2robot_msgs__srv__SwitchRobotControlMode_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SwitchRobotControlMode_Response>, size: usize) -> bool;
    fn x2robot_msgs__srv__SwitchRobotControlMode_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SwitchRobotControlMode_Response>);
    fn x2robot_msgs__srv__SwitchRobotControlMode_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SwitchRobotControlMode_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SwitchRobotControlMode_Response>) -> bool;
}

// Corresponds to x2robot_msgs__srv__SwitchRobotControlMode_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SwitchRobotControlMode_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ok: bool,

}



impl Default for SwitchRobotControlMode_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__srv__SwitchRobotControlMode_Response__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__srv__SwitchRobotControlMode_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SwitchRobotControlMode_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__SwitchRobotControlMode_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__SwitchRobotControlMode_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__SwitchRobotControlMode_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SwitchRobotControlMode_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SwitchRobotControlMode_Response where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/srv/SwitchRobotControlMode_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__srv__SwitchRobotControlMode_Response() }
  }
}


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__srv__TrajectoryPlanRequest_Request() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__srv__TrajectoryPlanRequest_Request__init(msg: *mut TrajectoryPlanRequest_Request) -> bool;
    fn x2robot_msgs__srv__TrajectoryPlanRequest_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TrajectoryPlanRequest_Request>, size: usize) -> bool;
    fn x2robot_msgs__srv__TrajectoryPlanRequest_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TrajectoryPlanRequest_Request>);
    fn x2robot_msgs__srv__TrajectoryPlanRequest_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TrajectoryPlanRequest_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TrajectoryPlanRequest_Request>) -> bool;
}

// Corresponds to x2robot_msgs__srv__TrajectoryPlanRequest_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TrajectoryPlanRequest_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub group_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub start_state_joint_names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub start_states: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_state_joint_names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_states: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tolerance_above: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tolerance_below: rosidl_runtime_rs::Sequence<f64>,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__srv__TrajectoryPlanRequest_Request__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__srv__TrajectoryPlanRequest_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TrajectoryPlanRequest_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__TrajectoryPlanRequest_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__TrajectoryPlanRequest_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__TrajectoryPlanRequest_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TrajectoryPlanRequest_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TrajectoryPlanRequest_Request where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/srv/TrajectoryPlanRequest_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__srv__TrajectoryPlanRequest_Request() }
  }
}


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__srv__TrajectoryPlanRequest_Response() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__srv__TrajectoryPlanRequest_Response__init(msg: *mut TrajectoryPlanRequest_Response) -> bool;
    fn x2robot_msgs__srv__TrajectoryPlanRequest_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TrajectoryPlanRequest_Response>, size: usize) -> bool;
    fn x2robot_msgs__srv__TrajectoryPlanRequest_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TrajectoryPlanRequest_Response>);
    fn x2robot_msgs__srv__TrajectoryPlanRequest_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TrajectoryPlanRequest_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TrajectoryPlanRequest_Response>) -> bool;
}

// Corresponds to x2robot_msgs__srv__TrajectoryPlanRequest_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TrajectoryPlanRequest_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub trajectory: trajectory_msgs::msg::rmw::JointTrajectory,

}



impl Default for TrajectoryPlanRequest_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__srv__TrajectoryPlanRequest_Response__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__srv__TrajectoryPlanRequest_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TrajectoryPlanRequest_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__TrajectoryPlanRequest_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__TrajectoryPlanRequest_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__srv__TrajectoryPlanRequest_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TrajectoryPlanRequest_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TrajectoryPlanRequest_Response where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/srv/TrajectoryPlanRequest_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__srv__TrajectoryPlanRequest_Response() }
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


