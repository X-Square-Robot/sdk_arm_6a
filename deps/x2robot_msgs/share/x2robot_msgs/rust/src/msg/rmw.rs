#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__msg__ArmPose() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__msg__ArmPose__init(msg: *mut ArmPose) -> bool;
    fn x2robot_msgs__msg__ArmPose__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ArmPose>, size: usize) -> bool;
    fn x2robot_msgs__msg__ArmPose__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ArmPose>);
    fn x2robot_msgs__msg__ArmPose__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ArmPose>, out_seq: *mut rosidl_runtime_rs::Sequence<ArmPose>) -> bool;
}

// Corresponds to x2robot_msgs__msg__ArmPose
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArmPose {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gripper: f64,

}



impl Default for ArmPose {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__msg__ArmPose__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__msg__ArmPose__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ArmPose {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__ArmPose__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__ArmPose__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__ArmPose__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ArmPose {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ArmPose where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/msg/ArmPose";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__msg__ArmPose() }
  }
}


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__msg__CanFrame() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__msg__CanFrame__init(msg: *mut CanFrame) -> bool;
    fn x2robot_msgs__msg__CanFrame__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CanFrame>, size: usize) -> bool;
    fn x2robot_msgs__msg__CanFrame__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CanFrame>);
    fn x2robot_msgs__msg__CanFrame__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CanFrame>, out_seq: *mut rosidl_runtime_rs::Sequence<CanFrame>) -> bool;
}

// Corresponds to x2robot_msgs__msg__CanFrame
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CanFrame {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub can_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dlc: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub data: [u8; 64],


    // This member is not documented.
    #[allow(missing_docs)]
    pub err: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rtr: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub eff: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fd: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub brs: u8,

}



impl Default for CanFrame {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__msg__CanFrame__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__msg__CanFrame__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CanFrame {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__CanFrame__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__CanFrame__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__CanFrame__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CanFrame {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CanFrame where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/msg/CanFrame";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__msg__CanFrame() }
  }
}


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__msg__CanFrameBatch() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__msg__CanFrameBatch__init(msg: *mut CanFrameBatch) -> bool;
    fn x2robot_msgs__msg__CanFrameBatch__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CanFrameBatch>, size: usize) -> bool;
    fn x2robot_msgs__msg__CanFrameBatch__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CanFrameBatch>);
    fn x2robot_msgs__msg__CanFrameBatch__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CanFrameBatch>, out_seq: *mut rosidl_runtime_rs::Sequence<CanFrameBatch>) -> bool;
}

// Corresponds to x2robot_msgs__msg__CanFrameBatch
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CanFrameBatch {

    // This member is not documented.
    #[allow(missing_docs)]
    pub frames: rosidl_runtime_rs::Sequence<super::super::msg::rmw::CanFrame>,

}



impl Default for CanFrameBatch {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__msg__CanFrameBatch__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__msg__CanFrameBatch__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CanFrameBatch {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__CanFrameBatch__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__CanFrameBatch__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__CanFrameBatch__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CanFrameBatch {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CanFrameBatch where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/msg/CanFrameBatch";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__msg__CanFrameBatch() }
  }
}


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__msg__EnumControllerMode() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__msg__EnumControllerMode__init(msg: *mut EnumControllerMode) -> bool;
    fn x2robot_msgs__msg__EnumControllerMode__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EnumControllerMode>, size: usize) -> bool;
    fn x2robot_msgs__msg__EnumControllerMode__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EnumControllerMode>);
    fn x2robot_msgs__msg__EnumControllerMode__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EnumControllerMode>, out_seq: *mut rosidl_runtime_rs::Sequence<EnumControllerMode>) -> bool;
}

// Corresponds to x2robot_msgs__msg__EnumControllerMode
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EnumControllerMode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl EnumControllerMode {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const IDLE: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SWITHCING: u8 = 255;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DATA_COLLECT: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REPLAY: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const INFERENCE: u8 = 4;

}


impl Default for EnumControllerMode {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__msg__EnumControllerMode__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__msg__EnumControllerMode__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EnumControllerMode {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__EnumControllerMode__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__EnumControllerMode__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__EnumControllerMode__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EnumControllerMode {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EnumControllerMode where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/msg/EnumControllerMode";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__msg__EnumControllerMode() }
  }
}


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__msg__EnumDataCollectionMode() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__msg__EnumDataCollectionMode__init(msg: *mut EnumDataCollectionMode) -> bool;
    fn x2robot_msgs__msg__EnumDataCollectionMode__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EnumDataCollectionMode>, size: usize) -> bool;
    fn x2robot_msgs__msg__EnumDataCollectionMode__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EnumDataCollectionMode>);
    fn x2robot_msgs__msg__EnumDataCollectionMode__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EnumDataCollectionMode>, out_seq: *mut rosidl_runtime_rs::Sequence<EnumDataCollectionMode>) -> bool;
}

// Corresponds to x2robot_msgs__msg__EnumDataCollectionMode
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EnumDataCollectionMode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl EnumDataCollectionMode {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TRACKER_TRIGGER: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EXOSKELETON_ARM_TRIGGER: u8 = 2;

}


impl Default for EnumDataCollectionMode {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__msg__EnumDataCollectionMode__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__msg__EnumDataCollectionMode__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EnumDataCollectionMode {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__EnumDataCollectionMode__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__EnumDataCollectionMode__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__EnumDataCollectionMode__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EnumDataCollectionMode {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EnumDataCollectionMode where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/msg/EnumDataCollectionMode";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__msg__EnumDataCollectionMode() }
  }
}


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__msg__EnumMotionState() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__msg__EnumMotionState__init(msg: *mut EnumMotionState) -> bool;
    fn x2robot_msgs__msg__EnumMotionState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EnumMotionState>, size: usize) -> bool;
    fn x2robot_msgs__msg__EnumMotionState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EnumMotionState>);
    fn x2robot_msgs__msg__EnumMotionState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EnumMotionState>, out_seq: *mut rosidl_runtime_rs::Sequence<EnumMotionState>) -> bool;
}

// Corresponds to x2robot_msgs__msg__EnumMotionState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EnumMotionState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl EnumMotionState {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BAGGING: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SLACKING_OFF: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REPLAY_BAG: u8 = 3;

}


impl Default for EnumMotionState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__msg__EnumMotionState__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__msg__EnumMotionState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EnumMotionState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__EnumMotionState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__EnumMotionState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__EnumMotionState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EnumMotionState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EnumMotionState where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/msg/EnumMotionState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__msg__EnumMotionState() }
  }
}


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__msg__EnumMoveitMoveResult() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__msg__EnumMoveitMoveResult__init(msg: *mut EnumMoveitMoveResult) -> bool;
    fn x2robot_msgs__msg__EnumMoveitMoveResult__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EnumMoveitMoveResult>, size: usize) -> bool;
    fn x2robot_msgs__msg__EnumMoveitMoveResult__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EnumMoveitMoveResult>);
    fn x2robot_msgs__msg__EnumMoveitMoveResult__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EnumMoveitMoveResult>, out_seq: *mut rosidl_runtime_rs::Sequence<EnumMoveitMoveResult>) -> bool;
}

// Corresponds to x2robot_msgs__msg__EnumMoveitMoveResult
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EnumMoveitMoveResult {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl EnumMoveitMoveResult {
    /// 规划与执行成功
    pub const SUCCESS: u8 = 0;

    /// 目标无效
    pub const INVALID_TARGET: u8 = 1;

    /// 未成功获取当前位置
    pub const INVALID_CURRENT_POS: u8 = 2;

    /// Moveit规划服务(/move_action)未就绪
    pub const PLANING_ACTION_NOT_READY: u8 = 3;

    /// 规划请求被拒绝
    pub const PLANING_ACTION_REJECTED: u8 = 4;

    /// 规划超时
    pub const PLANING_TIMEOUT: u8 = 5;

    /// 规划失败
    pub const PLANING_FAILED: u8 = 6;

    /// 执行轨迹服务(/whole_body_joint_trajectory_controller/follow_joint_trajectory)未就绪
    pub const EXECUTING_ACTION_NOT_READY: u8 = 7;

    /// 轨迹执行请求被拒绝
    pub const EXECUTING_ACTION_REJECTED: u8 = 8;

    /// 轨迹执行超时
    pub const EXECUTING_TIMEOUT: u8 = 9;

    /// 轨迹执行失败
    pub const EXECUTING_FAILED: u8 = 10;

    /// 执行过程中出现异常
    pub const EXCEPTION: u8 = 11;

}


impl Default for EnumMoveitMoveResult {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__msg__EnumMoveitMoveResult__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__msg__EnumMoveitMoveResult__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EnumMoveitMoveResult {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__EnumMoveitMoveResult__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__EnumMoveitMoveResult__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__EnumMoveitMoveResult__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EnumMoveitMoveResult {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EnumMoveitMoveResult where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/msg/EnumMoveitMoveResult";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__msg__EnumMoveitMoveResult() }
  }
}


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__msg__Joystick() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__msg__Joystick__init(msg: *mut Joystick) -> bool;
    fn x2robot_msgs__msg__Joystick__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Joystick>, size: usize) -> bool;
    fn x2robot_msgs__msg__Joystick__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Joystick>);
    fn x2robot_msgs__msg__Joystick__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Joystick>, out_seq: *mut rosidl_runtime_rs::Sequence<Joystick>) -> bool;
}

// Corresponds to x2robot_msgs__msg__Joystick
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 摇杆x轴 [-1, 1]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Joystick {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joystick_x: f64,

    /// 摇杆y轴 [-1, 1]
    pub joystick_y: f64,

    /// 扳机 [0, 1]
    pub trigger: f64,

    /// 按钮 True为按下
    pub joy_button: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sw1: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sw2: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sw3: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sw4: bool,

}



impl Default for Joystick {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__msg__Joystick__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__msg__Joystick__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Joystick {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__Joystick__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__Joystick__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__Joystick__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Joystick {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Joystick where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/msg/Joystick";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__msg__Joystick() }
  }
}


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__msg__RobotArmState() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__msg__RobotArmState__init(msg: *mut RobotArmState) -> bool;
    fn x2robot_msgs__msg__RobotArmState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotArmState>, size: usize) -> bool;
    fn x2robot_msgs__msg__RobotArmState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotArmState>);
    fn x2robot_msgs__msg__RobotArmState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotArmState>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotArmState>) -> bool;
}

// Corresponds to x2robot_msgs__msg__RobotArmState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotArmState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_control_mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_msg: rosidl_runtime_rs::String,

}

impl RobotArmState {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NO_ERROR: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const READY: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EMCY_STOPPED: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const POWER_OFF: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NOT_ENABLED: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MOTOR_ERROR: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMM_BUS_ERROR: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CYCLIC_POSITION_MODE: u8 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FORCE_MODE_TORQUE_SENSOR: u8 = 15;

}


impl Default for RobotArmState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__msg__RobotArmState__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__msg__RobotArmState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotArmState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__RobotArmState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__RobotArmState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__RobotArmState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotArmState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotArmState where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/msg/RobotArmState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__msg__RobotArmState() }
  }
}


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__msg__SerialData() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__msg__SerialData__init(msg: *mut SerialData) -> bool;
    fn x2robot_msgs__msg__SerialData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SerialData>, size: usize) -> bool;
    fn x2robot_msgs__msg__SerialData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SerialData>);
    fn x2robot_msgs__msg__SerialData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SerialData>, out_seq: *mut rosidl_runtime_rs::Sequence<SerialData>) -> bool;
}

// Corresponds to x2robot_msgs__msg__SerialData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SerialData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device_id: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cmd_id: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub payload: rosidl_runtime_rs::Sequence<u8>,

}



impl Default for SerialData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__msg__SerialData__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__msg__SerialData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SerialData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__SerialData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__SerialData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__SerialData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SerialData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SerialData where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/msg/SerialData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__msg__SerialData() }
  }
}


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__msg__ServoDriveState() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__msg__ServoDriveState__init(msg: *mut ServoDriveState) -> bool;
    fn x2robot_msgs__msg__ServoDriveState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ServoDriveState>, size: usize) -> bool;
    fn x2robot_msgs__msg__ServoDriveState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ServoDriveState>);
    fn x2robot_msgs__msg__ServoDriveState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ServoDriveState>, out_seq: *mut rosidl_runtime_rs::Sequence<ServoDriveState>) -> bool;
}

// Corresponds to x2robot_msgs__msg__ServoDriveState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoDriveState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_codes: rosidl_runtime_rs::Sequence<u32>,

    /// 0 for no error
    /// non-zero for primitive servo error code, only for debug
    pub current_mode: u8,

}



impl Default for ServoDriveState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__msg__ServoDriveState__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__msg__ServoDriveState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ServoDriveState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__ServoDriveState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__ServoDriveState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__ServoDriveState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ServoDriveState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ServoDriveState where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/msg/ServoDriveState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__msg__ServoDriveState() }
  }
}


#[link(name = "x2robot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__msg__TashanTactileData() -> *const std::ffi::c_void;
}

#[link(name = "x2robot_msgs__rosidl_generator_c")]
extern "C" {
    fn x2robot_msgs__msg__TashanTactileData__init(msg: *mut TashanTactileData) -> bool;
    fn x2robot_msgs__msg__TashanTactileData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TashanTactileData>, size: usize) -> bool;
    fn x2robot_msgs__msg__TashanTactileData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TashanTactileData>);
    fn x2robot_msgs__msg__TashanTactileData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TashanTactileData>, out_seq: *mut rosidl_runtime_rs::Sequence<TashanTactileData>) -> bool;
}

// Corresponds to x2robot_msgs__msg__TashanTactileData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TashanTactileData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor_names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frame_ids: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub normal_forces: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tangential_forces: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub directions: rosidl_runtime_rs::Sequence<i16>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub capacitances: rosidl_runtime_rs::Sequence<u32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_codes: rosidl_runtime_rs::Sequence<u8>,

}



impl Default for TashanTactileData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !x2robot_msgs__msg__TashanTactileData__init(&mut msg as *mut _) {
        panic!("Call to x2robot_msgs__msg__TashanTactileData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TashanTactileData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__TashanTactileData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__TashanTactileData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { x2robot_msgs__msg__TashanTactileData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TashanTactileData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TashanTactileData where Self: Sized {
  const TYPE_NAME: &'static str = "x2robot_msgs/msg/TashanTactileData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__x2robot_msgs__msg__TashanTactileData() }
  }
}


