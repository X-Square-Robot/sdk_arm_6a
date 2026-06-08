
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__action__WholeBodyTestOnce_Goal() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__action__WholeBodyTestOnce_Goal__init(msg: *mut WholeBodyTestOnce_Goal) -> bool;
    fn x2robot_msgs__action__WholeBodyTestOnce_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WholeBodyTestOnce_Goal>, size: usize) -> bool;
    fn x2robot_msgs__action__WholeBodyTestOnce_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WholeBodyTestOnce_Goal>);
    fn x2robot_msgs__action__WholeBodyTestOnce_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WholeBodyTestOnce_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<WholeBodyTestOnce_Goal>) -> bool;
}

// Corresponds to x2robot_msgs__action__WholeBodyTestOnce_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__action__WholeBodyTestOnce_Goal__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__action__WholeBodyTestOnce_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WholeBodyTestOnce_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__action__WholeBodyTestOnce_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__action__WholeBodyTestOnce_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__action__WholeBodyTestOnce_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WholeBodyTestOnce_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WholeBodyTestOnce_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/action/WholeBodyTestOnce_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__action__WholeBodyTestOnce_Goal() }
  }
}


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__action__WholeBodyTestOnce_Result() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__action__WholeBodyTestOnce_Result__init(msg: *mut WholeBodyTestOnce_Result) -> bool;
    fn x2robot_msgs__action__WholeBodyTestOnce_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WholeBodyTestOnce_Result>, size: usize) -> bool;
    fn x2robot_msgs__action__WholeBodyTestOnce_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WholeBodyTestOnce_Result>);
    fn x2robot_msgs__action__WholeBodyTestOnce_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WholeBodyTestOnce_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<WholeBodyTestOnce_Result>) -> bool;
}

// Corresponds to x2robot_msgs__action__WholeBodyTestOnce_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WholeBodyTestOnce_Result {
    /// Result definition
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub successful_poses: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub failed_poses: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for WholeBodyTestOnce_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__action__WholeBodyTestOnce_Result__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__action__WholeBodyTestOnce_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WholeBodyTestOnce_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__action__WholeBodyTestOnce_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__action__WholeBodyTestOnce_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__action__WholeBodyTestOnce_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WholeBodyTestOnce_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WholeBodyTestOnce_Result where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/action/WholeBodyTestOnce_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__action__WholeBodyTestOnce_Result() }
  }
}


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__action__WholeBodyTestOnce_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__action__WholeBodyTestOnce_Feedback__init(msg: *mut WholeBodyTestOnce_Feedback) -> bool;
    fn x2robot_msgs__action__WholeBodyTestOnce_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WholeBodyTestOnce_Feedback>, size: usize) -> bool;
    fn x2robot_msgs__action__WholeBodyTestOnce_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WholeBodyTestOnce_Feedback>);
    fn x2robot_msgs__action__WholeBodyTestOnce_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WholeBodyTestOnce_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<WholeBodyTestOnce_Feedback>) -> bool;
}

// Corresponds to x2robot_msgs__action__WholeBodyTestOnce_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WholeBodyTestOnce_Feedback {
    /// Feedback definition
    pub current_pose: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub progress: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub successful_poses: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub failed_poses: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub total_poses: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_index: i32,

}



impl Default for WholeBodyTestOnce_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__action__WholeBodyTestOnce_Feedback__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__action__WholeBodyTestOnce_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WholeBodyTestOnce_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__action__WholeBodyTestOnce_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__action__WholeBodyTestOnce_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__action__WholeBodyTestOnce_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WholeBodyTestOnce_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WholeBodyTestOnce_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/action/WholeBodyTestOnce_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__action__WholeBodyTestOnce_Feedback() }
  }
}


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__action__WholeBodyTestOnce_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__action__WholeBodyTestOnce_FeedbackMessage__init(msg: *mut WholeBodyTestOnce_FeedbackMessage) -> bool;
    fn x2robot_msgs__action__WholeBodyTestOnce_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WholeBodyTestOnce_FeedbackMessage>, size: usize) -> bool;
    fn x2robot_msgs__action__WholeBodyTestOnce_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WholeBodyTestOnce_FeedbackMessage>);
    fn x2robot_msgs__action__WholeBodyTestOnce_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WholeBodyTestOnce_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<WholeBodyTestOnce_FeedbackMessage>) -> bool;
}

// Corresponds to x2robot_msgs__action__WholeBodyTestOnce_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WholeBodyTestOnce_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::WholeBodyTestOnce_Feedback,

}



impl Default for WholeBodyTestOnce_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__action__WholeBodyTestOnce_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__action__WholeBodyTestOnce_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WholeBodyTestOnce_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__action__WholeBodyTestOnce_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__action__WholeBodyTestOnce_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__action__WholeBodyTestOnce_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WholeBodyTestOnce_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WholeBodyTestOnce_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/action/WholeBodyTestOnce_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__action__WholeBodyTestOnce_FeedbackMessage() }
  }
}




#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Request__init(msg: *mut WholeBodyTestOnce_SendGoal_Request) -> bool;
    fn x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WholeBodyTestOnce_SendGoal_Request>, size: usize) -> bool;
    fn x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WholeBodyTestOnce_SendGoal_Request>);
    fn x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WholeBodyTestOnce_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<WholeBodyTestOnce_SendGoal_Request>) -> bool;
}

// Corresponds to x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WholeBodyTestOnce_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::WholeBodyTestOnce_Goal,

}



impl Default for WholeBodyTestOnce_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WholeBodyTestOnce_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WholeBodyTestOnce_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WholeBodyTestOnce_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/action/WholeBodyTestOnce_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Request() }
  }
}


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Response__init(msg: *mut WholeBodyTestOnce_SendGoal_Response) -> bool;
    fn x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WholeBodyTestOnce_SendGoal_Response>, size: usize) -> bool;
    fn x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WholeBodyTestOnce_SendGoal_Response>);
    fn x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WholeBodyTestOnce_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<WholeBodyTestOnce_SendGoal_Response>) -> bool;
}

// Corresponds to x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WholeBodyTestOnce_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for WholeBodyTestOnce_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WholeBodyTestOnce_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WholeBodyTestOnce_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WholeBodyTestOnce_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/action/WholeBodyTestOnce_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__action__WholeBodyTestOnce_SendGoal_Response() }
  }
}


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__action__WholeBodyTestOnce_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__action__WholeBodyTestOnce_GetResult_Request__init(msg: *mut WholeBodyTestOnce_GetResult_Request) -> bool;
    fn x2robot_msgs__action__WholeBodyTestOnce_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WholeBodyTestOnce_GetResult_Request>, size: usize) -> bool;
    fn x2robot_msgs__action__WholeBodyTestOnce_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WholeBodyTestOnce_GetResult_Request>);
    fn x2robot_msgs__action__WholeBodyTestOnce_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WholeBodyTestOnce_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<WholeBodyTestOnce_GetResult_Request>) -> bool;
}

// Corresponds to x2robot_msgs__action__WholeBodyTestOnce_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WholeBodyTestOnce_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for WholeBodyTestOnce_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__action__WholeBodyTestOnce_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__action__WholeBodyTestOnce_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WholeBodyTestOnce_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__action__WholeBodyTestOnce_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__action__WholeBodyTestOnce_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__action__WholeBodyTestOnce_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WholeBodyTestOnce_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WholeBodyTestOnce_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/action/WholeBodyTestOnce_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__action__WholeBodyTestOnce_GetResult_Request() }
  }
}


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__action__WholeBodyTestOnce_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__action__WholeBodyTestOnce_GetResult_Response__init(msg: *mut WholeBodyTestOnce_GetResult_Response) -> bool;
    fn x2robot_msgs__action__WholeBodyTestOnce_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WholeBodyTestOnce_GetResult_Response>, size: usize) -> bool;
    fn x2robot_msgs__action__WholeBodyTestOnce_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WholeBodyTestOnce_GetResult_Response>);
    fn x2robot_msgs__action__WholeBodyTestOnce_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WholeBodyTestOnce_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<WholeBodyTestOnce_GetResult_Response>) -> bool;
}

// Corresponds to x2robot_msgs__action__WholeBodyTestOnce_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WholeBodyTestOnce_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::WholeBodyTestOnce_Result,

}



impl Default for WholeBodyTestOnce_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__action__WholeBodyTestOnce_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__action__WholeBodyTestOnce_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WholeBodyTestOnce_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__action__WholeBodyTestOnce_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__action__WholeBodyTestOnce_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__action__WholeBodyTestOnce_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WholeBodyTestOnce_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WholeBodyTestOnce_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/action/WholeBodyTestOnce_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__action__WholeBodyTestOnce_GetResult_Response() }
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


