#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__ErrorCodes() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__ErrorCodes__init(msg: *mut ErrorCodes) -> bool;
    fn protocol__msg__ErrorCodes__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ErrorCodes>, size: usize) -> bool;
    fn protocol__msg__ErrorCodes__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ErrorCodes>);
    fn protocol__msg__ErrorCodes__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ErrorCodes>, out_seq: *mut rosidl_runtime_rs::Sequence<ErrorCodes>) -> bool;
}

// Corresponds to protocol__msg__ErrorCodes
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// ErrorCodes.msg
/// 系统级错误状态（对外唯一错误协议）

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ErrorCodes {
    /// 系统当前存在的错误
    pub error_codes: rosidl_runtime_rs::Sequence<super::super::msg::rmw::GlobalError>,

}



impl Default for ErrorCodes {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__ErrorCodes__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__ErrorCodes__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ErrorCodes {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__ErrorCodes__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__ErrorCodes__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__ErrorCodes__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ErrorCodes {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ErrorCodes where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/ErrorCodes";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__ErrorCodes() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__GlobalError() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__GlobalError__init(msg: *mut GlobalError) -> bool;
    fn protocol__msg__GlobalError__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GlobalError>, size: usize) -> bool;
    fn protocol__msg__GlobalError__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GlobalError>);
    fn protocol__msg__GlobalError__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GlobalError>, out_seq: *mut rosidl_runtime_rs::Sequence<GlobalError>) -> bool;
}

// Corresponds to protocol__msg__GlobalError
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// GlobalError.msg
/// 系统评估处理后的错误

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GlobalError {
    /// 填写status_code里面的时间戳。
    pub header: std_msgs::msg::rmw::Header,

    /// 组成：[Domain 8bit] [Unit 8bit] [Error 16bit]
    pub error_code: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub level: u8,

    /// 通常不建议塞入这里，字符串限制在25个字符以内。
    pub exception: rosidl_runtime_rs::String,

}



impl Default for GlobalError {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__GlobalError__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__GlobalError__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GlobalError {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__GlobalError__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__GlobalError__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__GlobalError__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GlobalError {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GlobalError where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/GlobalError";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__GlobalError() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__JointMotorStatus() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__JointMotorStatus__init(msg: *mut JointMotorStatus) -> bool;
    fn protocol__msg__JointMotorStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointMotorStatus>, size: usize) -> bool;
    fn protocol__msg__JointMotorStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointMotorStatus>);
    fn protocol__msg__JointMotorStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointMotorStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<JointMotorStatus>) -> bool;
}

// Corresponds to protocol__msg__JointMotorStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// joint_motor_status 索引规则
/// 头部：没有特殊说明情况下，默认使用[pitch,yaw]的顺序。若三个自由度使用[roll,pitch,yaw]的顺序，严格按照rpy的顺序来。
/// 机械臂：一定是从肩膀开始数从 0 ~ n
/// 升降关节：只有一个电机

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointMotorStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_motor_status: rosidl_runtime_rs::Sequence<super::super::msg::rmw::MotorStatus>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub all_joints_healthy: bool,

}



impl Default for JointMotorStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__JointMotorStatus__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__JointMotorStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointMotorStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__JointMotorStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__JointMotorStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__JointMotorStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointMotorStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointMotorStatus where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/JointMotorStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__JointMotorStatus() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__MotorStatus() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__MotorStatus__init(msg: *mut MotorStatus) -> bool;
    fn protocol__msg__MotorStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorStatus>, size: usize) -> bool;
    fn protocol__msg__MotorStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorStatus>);
    fn protocol__msg__MotorStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorStatus>) -> bool;
}

// Corresponds to protocol__msg__MotorStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state_code: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_bit_code: u32,

}



impl Default for MotorStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__MotorStatus__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__MotorStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MotorStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MotorStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MotorStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorStatus where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/MotorStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__MotorStatus() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__SensorStatus() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__SensorStatus__init(msg: *mut SensorStatus) -> bool;
    fn protocol__msg__SensorStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SensorStatus>, size: usize) -> bool;
    fn protocol__msg__SensorStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SensorStatus>);
    fn protocol__msg__SensorStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SensorStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<SensorStatus>) -> bool;
}

// Corresponds to protocol__msg__SensorStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state_code: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_bit_code: u32,

}



impl Default for SensorStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__SensorStatus__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__SensorStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SensorStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__SensorStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__SensorStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__SensorStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SensorStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SensorStatus where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/SensorStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__SensorStatus() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__StatusCode() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__StatusCode__init(msg: *mut StatusCode) -> bool;
    fn protocol__msg__StatusCode__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StatusCode>, size: usize) -> bool;
    fn protocol__msg__StatusCode__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StatusCode>);
    fn protocol__msg__StatusCode__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StatusCode>, out_seq: *mut rosidl_runtime_rs::Sequence<StatusCode>) -> bool;
}

// Corresponds to protocol__msg__StatusCode
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// status_code.msg
/// 节点定频 + 事件触发上报的状态快照

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StatusCode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// 一级标识：系统域
    pub domain: u8,

    /// 二级标识：域内单元
    pub unit: u8,

    /// 节点生命周期状态（为异常处理模块服务，异常处理时可能会需要额外的状态知晓节点当前的状态）
    pub state_code: u8,

    /// 0 = UNINITIALIZED
    /// 1 = INITIALIZED
    /// 2 = RUNNING
    /// 3 = ERROR
    /// 4 = OFFLINE
    /// 当前节点所有仍然存在的错误，不存在可为空
    pub error_code: rosidl_runtime_rs::Sequence<super::super::msg::rmw::UnitError>,

}



impl Default for StatusCode {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__StatusCode__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__StatusCode__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StatusCode {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__StatusCode__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__StatusCode__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__StatusCode__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StatusCode {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StatusCode where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/StatusCode";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__StatusCode() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__UnitError() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__UnitError__init(msg: *mut UnitError) -> bool;
    fn protocol__msg__UnitError__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UnitError>, size: usize) -> bool;
    fn protocol__msg__UnitError__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UnitError>);
    fn protocol__msg__UnitError__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UnitError>, out_seq: *mut rosidl_runtime_rs::Sequence<UnitError>) -> bool;
}

// Corresponds to protocol__msg__UnitError
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// UnitError.msg
/// 某单元当前仍然存在的错误

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UnitError {
    /// 单元定义的错误码（不含 domain/unit）
    pub error_code: u8,

    /// 0表示info 1表示warning,2表示error,3表示fatal
    pub level: u8,

    /// 一些额外的信息，通常不建议将信息塞入这里。字符串长度限制在25以内。
    pub exception: rosidl_runtime_rs::String,

}



impl Default for UnitError {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__UnitError__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__UnitError__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UnitError {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__UnitError__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__UnitError__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__UnitError__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UnitError {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UnitError where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/UnitError";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__UnitError() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__ApplicationUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__ApplicationUnitEnum__init(msg: *mut ApplicationUnitEnum) -> bool;
    fn protocol__msg__ApplicationUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ApplicationUnitEnum>, size: usize) -> bool;
    fn protocol__msg__ApplicationUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ApplicationUnitEnum>);
    fn protocol__msg__ApplicationUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ApplicationUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<ApplicationUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__ApplicationUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ApplicationUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl ApplicationUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TASK_MANAGER: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RECORDER: u8 = 2;

}


impl Default for ApplicationUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__ApplicationUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__ApplicationUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ApplicationUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__ApplicationUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__ApplicationUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__ApplicationUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ApplicationUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ApplicationUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/ApplicationUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__ApplicationUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__RecorderErrorEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__RecorderErrorEnum__init(msg: *mut RecorderErrorEnum) -> bool;
    fn protocol__msg__RecorderErrorEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RecorderErrorEnum>, size: usize) -> bool;
    fn protocol__msg__RecorderErrorEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RecorderErrorEnum>);
    fn protocol__msg__RecorderErrorEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RecorderErrorEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<RecorderErrorEnum>) -> bool;
}

// Corresponds to protocol__msg__RecorderErrorEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: RECORDER
/// topic频率过低

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RecorderErrorEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl RecorderErrorEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TOPIC_FREQ_LOW: u32 = 1;

    /// 完全无数据
    pub const TOPIC_NO_DATA: u32 = 2;

    /// 无法开始录制：正在打包
    pub const RECORD_BLOCKED_COMPRESSING: u32 = 3;

    /// 无法开始录制：正在上传
    pub const RECORD_BLOCKED_UPLOADING: u32 = 4;

    /// 录制时间过长
    pub const RECORDING_TIME_TOO_LONG: u32 = 5;

    /// 磁盘空间不足
    pub const DISK_SPACE_LOW_WARNING: u32 = 6;

    /// 磁盘空间严重不足
    pub const DISK_SPACE_CRITICALLY_LOW: u32 = 7;

}


impl Default for RecorderErrorEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__RecorderErrorEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__RecorderErrorEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RecorderErrorEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RecorderErrorEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RecorderErrorEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RecorderErrorEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RecorderErrorEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RecorderErrorEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/RecorderErrorEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__RecorderErrorEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__RecorderUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__RecorderUnitEnum__init(msg: *mut RecorderUnitEnum) -> bool;
    fn protocol__msg__RecorderUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RecorderUnitEnum>, size: usize) -> bool;
    fn protocol__msg__RecorderUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RecorderUnitEnum>);
    fn protocol__msg__RecorderUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RecorderUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<RecorderUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__RecorderUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: RECORDER
/// topic频率过低

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RecorderUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl RecorderUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TOPIC_FREQ_LOW: u32 = 1;

    /// 完全无数据
    pub const TOPIC_NO_DATA: u32 = 2;

    /// 无法开始录制：正在打包
    pub const RECORD_BLOCKED_COMPRESSING: u32 = 3;

    /// 无法开始录制：正在上传
    pub const RECORD_BLOCKED_UPLOADING: u32 = 4;

    /// 录制时间过长
    pub const RECORDING_TIME_TOO_LONG: u32 = 5;

    /// 磁盘空间不足
    pub const DISK_SPACE_LOW_WARNING: u32 = 6;

    /// 磁盘空间严重不足
    pub const DISK_SPACE_CRITICALLY_LOW: u32 = 7;

}


impl Default for RecorderUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__RecorderUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__RecorderUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RecorderUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RecorderUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RecorderUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RecorderUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RecorderUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RecorderUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/RecorderUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__RecorderUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__TaskManagerErrorEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__TaskManagerErrorEnum__init(msg: *mut TaskManagerErrorEnum) -> bool;
    fn protocol__msg__TaskManagerErrorEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TaskManagerErrorEnum>, size: usize) -> bool;
    fn protocol__msg__TaskManagerErrorEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TaskManagerErrorEnum>);
    fn protocol__msg__TaskManagerErrorEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TaskManagerErrorEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<TaskManagerErrorEnum>) -> bool;
}

// Corresponds to protocol__msg__TaskManagerErrorEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: TASK_MANAGER
/// 任务初始化失败

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskManagerErrorEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl TaskManagerErrorEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TASK_INIT_FAILED: u32 = 16;

    /// 任务运行错误
    pub const TASK_RUNNING_ERROR: u32 = 17;

    /// 任务暂停失败
    pub const TASK_PAUSED_FAILED: u32 = 18;

    /// 任务继续失败
    pub const TASK_RESUME_FAILED: u32 = 19;

    /// 任务终止失败
    pub const TASK_TERMINATE_FAILED: u32 = 20;

    /// 任务挂起失败
    pub const TASK_SUSPEND_FAILED: u32 = 21;

    /// 任务退出挂起失败
    pub const TASK_EXIT_SUSPEND_FAILED: u32 = 22;

    /// 任务完成后清理失败
    pub const TASK_FINISH_FAILED: u32 = 23;

}


impl Default for TaskManagerErrorEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__TaskManagerErrorEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__TaskManagerErrorEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TaskManagerErrorEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__TaskManagerErrorEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__TaskManagerErrorEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__TaskManagerErrorEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TaskManagerErrorEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TaskManagerErrorEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/TaskManagerErrorEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__TaskManagerErrorEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__TaskManagerUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__TaskManagerUnitEnum__init(msg: *mut TaskManagerUnitEnum) -> bool;
    fn protocol__msg__TaskManagerUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TaskManagerUnitEnum>, size: usize) -> bool;
    fn protocol__msg__TaskManagerUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TaskManagerUnitEnum>);
    fn protocol__msg__TaskManagerUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TaskManagerUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<TaskManagerUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__TaskManagerUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: TASK_MANAGER
/// 任务初始化失败

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskManagerUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl TaskManagerUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TASK_INIT_FAILED: u32 = 16;

    /// 任务运行错误
    pub const TASK_RUNNING_ERROR: u32 = 17;

    /// 任务暂停失败
    pub const TASK_PAUSED_FAILED: u32 = 18;

    /// 任务继续失败
    pub const TASK_RESUME_FAILED: u32 = 19;

    /// 任务终止失败
    pub const TASK_TERMINATE_FAILED: u32 = 20;

    /// 任务挂起失败
    pub const TASK_SUSPEND_FAILED: u32 = 21;

    /// 任务退出挂起失败
    pub const TASK_EXIT_SUSPEND_FAILED: u32 = 22;

    /// 任务完成后清理失败
    pub const TASK_FINISH_FAILED: u32 = 23;

}


impl Default for TaskManagerUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__TaskManagerUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__TaskManagerUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TaskManagerUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__TaskManagerUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__TaskManagerUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__TaskManagerUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TaskManagerUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TaskManagerUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/TaskManagerUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__TaskManagerUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__DomainEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__DomainEnum__init(msg: *mut DomainEnum) -> bool;
    fn protocol__msg__DomainEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DomainEnum>, size: usize) -> bool;
    fn protocol__msg__DomainEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DomainEnum>);
    fn protocol__msg__DomainEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DomainEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<DomainEnum>) -> bool;
}

// Corresponds to protocol__msg__DomainEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DomainEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl DomainEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HAL: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MOTION: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MONITOR: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const APPLICATION: u8 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MEDIA: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EAI: u8 = 6;

}


impl Default for DomainEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__DomainEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__DomainEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DomainEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__DomainEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__DomainEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__DomainEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DomainEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DomainEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/DomainEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__DomainEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__EaiUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__EaiUnitEnum__init(msg: *mut EaiUnitEnum) -> bool;
    fn protocol__msg__EaiUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EaiUnitEnum>, size: usize) -> bool;
    fn protocol__msg__EaiUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EaiUnitEnum>);
    fn protocol__msg__EaiUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EaiUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<EaiUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__EaiUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EaiUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl EaiUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const X2ROBOT_CLIENT: u8 = 1;

}


impl Default for EaiUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__EaiUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__EaiUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EaiUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__EaiUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__EaiUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__EaiUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EaiUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EaiUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/EaiUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__EaiUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__X2robotClientErrorEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__X2robotClientErrorEnum__init(msg: *mut X2robotClientErrorEnum) -> bool;
    fn protocol__msg__X2robotClientErrorEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<X2robotClientErrorEnum>, size: usize) -> bool;
    fn protocol__msg__X2robotClientErrorEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<X2robotClientErrorEnum>);
    fn protocol__msg__X2robotClientErrorEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<X2robotClientErrorEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<X2robotClientErrorEnum>) -> bool;
}

// Corresponds to protocol__msg__X2robotClientErrorEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: X2ROBOT_CLIENT
/// 模型初始化参数无效

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct X2robotClientErrorEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl X2robotClientErrorEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODEL_INFO_INVALID: u32 = 16;

    /// 模型服务地址解析失败
    pub const MODEL_ADDRESS_RESOLVE_FAILED: u32 = 17;

    /// 连接模型服务失败
    pub const MODEL_SERVER_CONNECT_FAILED: u32 = 18;

    /// 等待模型服务元信息超时
    pub const MODEL_SERVER_METADATA_TIMEOUT: u32 = 19;

    /// 模型服务元信息解析失败
    pub const MODEL_SERVER_METADATA_DECODE_FAILED: u32 = 20;

    /// 机器人客户端初始化失败
    pub const ROBOT_CLIENT_INIT_FAILED: u32 = 21;

    /// 机器人型号配置无效
    pub const ROBOT_MODEL_CONFIG_INVALID: u32 = 22;

    /// 不支持的控制模式
    pub const UNSUPPORTED_CONTROL_MODE: u32 = 23;

    /// 开始推理失败
    pub const INFERENCE_START_FAILED: u32 = 24;

    /// 停止推理失败
    pub const INFERENCE_STOP_FAILED: u32 = 25;

    /// 关闭推理服务失败
    pub const INFERENCE_CLOSE_FAILED: u32 = 26;

    /// 机器人状态采集失败
    pub const SENSOR_DATA_COLLECT_FAILED: u32 = 27;

    /// 模型请求序列化失败
    pub const MODEL_REQUEST_SERIALIZE_FAILED: u32 = 28;

    /// 模型请求发送失败
    pub const MODEL_REQUEST_SEND_FAILED: u32 = 29;

    /// 等待模型响应超时
    pub const MODEL_RESPONSE_TIMEOUT: u32 = 30;

    /// 接收模型响应失败
    pub const MODEL_RESPONSE_RECEIVE_FAILED: u32 = 31;

    /// 模型响应解析失败
    pub const MODEL_RESPONSE_DECODE_FAILED: u32 = 32;

    /// 模型输出字段无效
    pub const MODEL_OUTPUT_INVALID: u32 = 33;

    /// 动作下发失败
    pub const ACTION_EXECUTE_FAILED: u32 = 34;

    /// 动作块遥测发布失败
    pub const ACTION_CHUNK_PUBLISH_FAILED: u32 = 35;

    /// 模型文本输出发布失败
    pub const MODEL_OUTPUT_TEXT_PUBLISH_FAILED: u32 = 36;

    /// 推理运行时异常
    pub const INFERENCE_RUNTIME_EXCEPTION: u32 = 37;

    /// 接管状态切换失败
    pub const REMOTE_CONTROL_STATE_FAILED: u32 = 38;

    /// 资源释放失败
    pub const RESOURCE_CLEANUP_FAILED: u32 = 39;

    /// 异步推理线程异常
    pub const ASYNC_WORKER_EXCEPTION: u32 = 40;

    /// 异步动作队列过期
    pub const ASYNC_ACTION_QUEUE_STALE: u32 = 41;

}


impl Default for X2robotClientErrorEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__X2robotClientErrorEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__X2robotClientErrorEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for X2robotClientErrorEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__X2robotClientErrorEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__X2robotClientErrorEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__X2robotClientErrorEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for X2robotClientErrorEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for X2robotClientErrorEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/X2robotClientErrorEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__X2robotClientErrorEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__ErrorLevelEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__ErrorLevelEnum__init(msg: *mut ErrorLevelEnum) -> bool;
    fn protocol__msg__ErrorLevelEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ErrorLevelEnum>, size: usize) -> bool;
    fn protocol__msg__ErrorLevelEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ErrorLevelEnum>);
    fn protocol__msg__ErrorLevelEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ErrorLevelEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<ErrorLevelEnum>) -> bool;
}

// Corresponds to protocol__msg__ErrorLevelEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ErrorLevelEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl ErrorLevelEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const LEVEL_INFO: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const LEVEL_WARNING: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const LEVEL_ERROR: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const LEVEL_FATAL: u8 = 3;

}


impl Default for ErrorLevelEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__ErrorLevelEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__ErrorLevelEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ErrorLevelEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__ErrorLevelEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__ErrorLevelEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__ErrorLevelEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ErrorLevelEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ErrorLevelEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/ErrorLevelEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__ErrorLevelEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__BodyErrorEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__BodyErrorEnum__init(msg: *mut BodyErrorEnum) -> bool;
    fn protocol__msg__BodyErrorEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BodyErrorEnum>, size: usize) -> bool;
    fn protocol__msg__BodyErrorEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BodyErrorEnum>);
    fn protocol__msg__BodyErrorEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BodyErrorEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<BodyErrorEnum>) -> bool;
}

// Corresponds to protocol__msg__BodyErrorEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: BODY
/// 身体板获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BodyErrorEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl BodyErrorEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 身体板imu断连
    pub const IMU_CONN_FAIL: u32 = 17;

}


impl Default for BodyErrorEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__BodyErrorEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__BodyErrorEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BodyErrorEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__BodyErrorEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__BodyErrorEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__BodyErrorEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BodyErrorEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BodyErrorEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/BodyErrorEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__BodyErrorEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__BodyUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__BodyUnitEnum__init(msg: *mut BodyUnitEnum) -> bool;
    fn protocol__msg__BodyUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BodyUnitEnum>, size: usize) -> bool;
    fn protocol__msg__BodyUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BodyUnitEnum>);
    fn protocol__msg__BodyUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BodyUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<BodyUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__BodyUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: BODY
/// 身体板获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BodyUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl BodyUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 身体板imu断连
    pub const IMU_CONN_FAIL: u32 = 17;

}


impl Default for BodyUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__BodyUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__BodyUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BodyUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__BodyUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__BodyUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__BodyUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BodyUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BodyUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/BodyUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__BodyUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__ChassisErrorEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__ChassisErrorEnum__init(msg: *mut ChassisErrorEnum) -> bool;
    fn protocol__msg__ChassisErrorEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ChassisErrorEnum>, size: usize) -> bool;
    fn protocol__msg__ChassisErrorEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ChassisErrorEnum>);
    fn protocol__msg__ChassisErrorEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ChassisErrorEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<ChassisErrorEnum>) -> bool;
}

// Corresponds to protocol__msg__ChassisErrorEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: CHASSIS
/// 底盘获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChassisErrorEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl ChassisErrorEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 底盘板imu断连
    pub const IMU_CONN_FAIL: u32 = 17;

}


impl Default for ChassisErrorEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__ChassisErrorEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__ChassisErrorEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ChassisErrorEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__ChassisErrorEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__ChassisErrorEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__ChassisErrorEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ChassisErrorEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ChassisErrorEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/ChassisErrorEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__ChassisErrorEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__ChassisUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__ChassisUnitEnum__init(msg: *mut ChassisUnitEnum) -> bool;
    fn protocol__msg__ChassisUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ChassisUnitEnum>, size: usize) -> bool;
    fn protocol__msg__ChassisUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ChassisUnitEnum>);
    fn protocol__msg__ChassisUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ChassisUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<ChassisUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__ChassisUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: CHASSIS
/// 底盘获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChassisUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl ChassisUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 底盘板imu断连
    pub const IMU_CONN_FAIL: u32 = 17;

}


impl Default for ChassisUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__ChassisUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__ChassisUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ChassisUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__ChassisUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__ChassisUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__ChassisUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ChassisUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ChassisUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/ChassisUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__ChassisUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__GripperLeftErrorEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__GripperLeftErrorEnum__init(msg: *mut GripperLeftErrorEnum) -> bool;
    fn protocol__msg__GripperLeftErrorEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripperLeftErrorEnum>, size: usize) -> bool;
    fn protocol__msg__GripperLeftErrorEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripperLeftErrorEnum>);
    fn protocol__msg__GripperLeftErrorEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripperLeftErrorEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<GripperLeftErrorEnum>) -> bool;
}

// Corresponds to protocol__msg__GripperLeftErrorEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: GRIPPER_LEFT
/// 心跳超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperLeftErrorEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl GripperLeftErrorEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 编码器数据解析异常
    pub const GRIPPER_ENCODER_FAIL: u32 = 17;

    /// 指示灯配置异常
    pub const GRIPPER_LED_FAIL: u32 = 18;

    /// 按键配置异常
    pub const GRIPPER_BUTTON_FAIL: u32 = 19;

    /// IMU配置异常
    pub const GRIPPER_IMU_FAIL: u32 = 20;

    /// 补光灯配置异常
    pub const GRIPPER_FILL_LIGHT_FAIL: u32 = 21;

    /// 电池电量配置异常
    pub const GRIPPER_BATTERY_FAIL: u32 = 22;

    /// 触觉传感器异常
    pub const GRIPPER_TACTILE_FAIL: u32 = 23;

}


impl Default for GripperLeftErrorEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__GripperLeftErrorEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__GripperLeftErrorEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripperLeftErrorEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__GripperLeftErrorEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__GripperLeftErrorEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__GripperLeftErrorEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripperLeftErrorEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripperLeftErrorEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/GripperLeftErrorEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__GripperLeftErrorEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__GripperLeftUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__GripperLeftUnitEnum__init(msg: *mut GripperLeftUnitEnum) -> bool;
    fn protocol__msg__GripperLeftUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripperLeftUnitEnum>, size: usize) -> bool;
    fn protocol__msg__GripperLeftUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripperLeftUnitEnum>);
    fn protocol__msg__GripperLeftUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripperLeftUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<GripperLeftUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__GripperLeftUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: GRIPPER_LEFT
/// 心跳超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperLeftUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl GripperLeftUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 编码器数据解析异常
    pub const GRIPPER_ENCODER_FAIL: u32 = 17;

    /// 指示灯配置异常
    pub const GRIPPER_LED_FAIL: u32 = 18;

    /// 按键配置异常
    pub const GRIPPER_BUTTON_FAIL: u32 = 19;

    /// IMU配置异常
    pub const GRIPPER_IMU_FAIL: u32 = 20;

    /// 补光灯配置异常
    pub const GRIPPER_FILL_LIGHT_FAIL: u32 = 21;

    /// 电池电量配置异常
    pub const GRIPPER_BATTERY_FAIL: u32 = 22;

    /// 触觉传感器异常
    pub const GRIPPER_TACTILE_FAIL: u32 = 23;

}


impl Default for GripperLeftUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__GripperLeftUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__GripperLeftUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripperLeftUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__GripperLeftUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__GripperLeftUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__GripperLeftUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripperLeftUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripperLeftUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/GripperLeftUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__GripperLeftUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__GripperRightErrorEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__GripperRightErrorEnum__init(msg: *mut GripperRightErrorEnum) -> bool;
    fn protocol__msg__GripperRightErrorEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripperRightErrorEnum>, size: usize) -> bool;
    fn protocol__msg__GripperRightErrorEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripperRightErrorEnum>);
    fn protocol__msg__GripperRightErrorEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripperRightErrorEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<GripperRightErrorEnum>) -> bool;
}

// Corresponds to protocol__msg__GripperRightErrorEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: GRIPPER_RIGHT
/// 心跳超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperRightErrorEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl GripperRightErrorEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 编码器数据解析异常
    pub const GRIPPER_ENCODER_FAIL: u32 = 17;

    /// 指示灯配置异常
    pub const GRIPPER_LED_FAIL: u32 = 18;

    /// 按键配置异常
    pub const GRIPPER_BUTTON_FAIL: u32 = 19;

    /// IMU配置异常
    pub const GRIPPER_IMU_FAIL: u32 = 20;

    /// 补光灯配置异常
    pub const GRIPPER_FILL_LIGHT_FAIL: u32 = 21;

    /// 电池电量配置异常
    pub const GRIPPER_BATTERY_FAIL: u32 = 22;

    /// 触觉传感器异常
    pub const GRIPPER_TACTILE_FAIL: u32 = 23;

}


impl Default for GripperRightErrorEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__GripperRightErrorEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__GripperRightErrorEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripperRightErrorEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__GripperRightErrorEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__GripperRightErrorEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__GripperRightErrorEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripperRightErrorEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripperRightErrorEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/GripperRightErrorEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__GripperRightErrorEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__GripperRightUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__GripperRightUnitEnum__init(msg: *mut GripperRightUnitEnum) -> bool;
    fn protocol__msg__GripperRightUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripperRightUnitEnum>, size: usize) -> bool;
    fn protocol__msg__GripperRightUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripperRightUnitEnum>);
    fn protocol__msg__GripperRightUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripperRightUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<GripperRightUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__GripperRightUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: GRIPPER_RIGHT
/// 心跳超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperRightUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl GripperRightUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 编码器数据解析异常
    pub const GRIPPER_ENCODER_FAIL: u32 = 17;

    /// 指示灯配置异常
    pub const GRIPPER_LED_FAIL: u32 = 18;

    /// 按键配置异常
    pub const GRIPPER_BUTTON_FAIL: u32 = 19;

    /// IMU配置异常
    pub const GRIPPER_IMU_FAIL: u32 = 20;

    /// 补光灯配置异常
    pub const GRIPPER_FILL_LIGHT_FAIL: u32 = 21;

    /// 电池电量配置异常
    pub const GRIPPER_BATTERY_FAIL: u32 = 22;

    /// 触觉传感器异常
    pub const GRIPPER_TACTILE_FAIL: u32 = 23;

}


impl Default for GripperRightUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__GripperRightUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__GripperRightUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripperRightUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__GripperRightUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__GripperRightUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__GripperRightUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripperRightUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripperRightUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/GripperRightUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__GripperRightUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__HalErrorEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__HalErrorEnum__init(msg: *mut HalErrorEnum) -> bool;
    fn protocol__msg__HalErrorEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HalErrorEnum>, size: usize) -> bool;
    fn protocol__msg__HalErrorEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HalErrorEnum>);
    fn protocol__msg__HalErrorEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HalErrorEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<HalErrorEnum>) -> bool;
}

// Corresponds to protocol__msg__HalErrorEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: HAL
/// HAL获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HalErrorEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl HalErrorEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 底盘板断连
    pub const CHASSIS_CONN_FAIL: u32 = 17;

    /// 身体板断连
    pub const BODY_CONN_FAIL: u32 = 18;

    /// 头部板断连
    pub const HEAD_CONN_FAIL: u32 = 19;

    /// 电源板断连
    pub const POWER_CONN_FAIL: u32 = 20;

    /// 头部板版本信息解析失败
    pub const PARSE_HEAD_VERSION_FAIL: u32 = 32;

    /// 头部板云台状态数据解析失败
    pub const PARSE_HEAD_JOINT_FAIL: u32 = 33;

    /// 头部板IMU数据解析失败
    pub const PARSE_HEAD_IMU_FAIL: u32 = 34;

    /// 头部板日志数据解析失败
    pub const PARSE_HEAD_LOG_FAIL: u32 = 35;

    /// 头部板电源状态数据解析失败
    pub const PARSE_HEAD_POWER_FAIL: u32 = 36;

    /// 身体板版本信息解析失败
    pub const PARSE_BODY_VERSION_FAIL: u32 = 37;

    /// 身体板云台状态数据解析失败
    pub const PARSE_BODY_HEAD_JOINT_FAIL: u32 = 38;

    /// 身体板IMU数据解析失败
    pub const PARSE_BODY_IMU_FAIL: u32 = 39;

    /// 身体板日志数据解析失败
    pub const PARSE_BODY_LOG_FAIL: u32 = 40;

    /// 身体板电源系统状态数据解析失败
    pub const PARSE_BODY_POWER_FAIL: u32 = 41;

    /// 底盘板版本信息解析失败
    pub const PARSE_CHASSIS_VERSION_FAIL: u32 = 42;

    /// 底盘板系统状态数据解析失败
    pub const PARSE_CHASSIS_POWER_FAIL: u32 = 43;

    /// 底盘板TOF传感器数据解析失败
    pub const PARSE_CHASSIS_TOF_FAIL: u32 = 44;

    /// 底盘板超声波传感器数据解析失败
    pub const PARSE_CHASSIS_ULTRASONIC_FAIL: u32 = 45;

    /// 底盘板IMU数据解析失败
    pub const PARSE_CHASSIS_IMU_FAIL: u32 = 46;

    /// 底盘板日志数据解析失败
    pub const PARSE_CHASSIS_LOG_FAIL: u32 = 47;

    /// 底盘板充电桩数据解析失败
    pub const PARSE_CHASSIS_ROBOT_STATION_INFO_FAIL: u32 = 48;

    /// 底盘板里程计Odom数据解析失败
    pub const PARSE_CHASSIS_ODOM_FAIL: u32 = 49;

    /// 身体板TOF传感器数据解析失败
    pub const PARSE_BODY_TOF_FAIL: u32 = 50;

    /// 身体板超声波传感器数据解析失败
    pub const PARSE_BODY_ULTRASONIC_FAIL: u32 = 51;

}


impl Default for HalErrorEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__HalErrorEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__HalErrorEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HalErrorEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__HalErrorEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__HalErrorEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__HalErrorEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HalErrorEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HalErrorEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/HalErrorEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__HalErrorEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__HalUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__HalUnitEnum__init(msg: *mut HalUnitEnum) -> bool;
    fn protocol__msg__HalUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HalUnitEnum>, size: usize) -> bool;
    fn protocol__msg__HalUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HalUnitEnum>);
    fn protocol__msg__HalUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HalUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<HalUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__HalUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HalUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl HalUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HAL: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CHASSIS: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BODY: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEAD: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const LIDAR: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GRIPPER_LEFT: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GRIPPER_RIGHT: u8 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEAD_MOUNT: u8 = 8;

    /// HAL获取状态超时
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 底盘板断连
    pub const CHASSIS_CONN_FAIL: u32 = 17;

    /// 身体板断连
    pub const BODY_CONN_FAIL: u32 = 18;

    /// 头部板断连
    pub const HEAD_CONN_FAIL: u32 = 19;

    /// 电源板断连
    pub const POWER_CONN_FAIL: u32 = 20;

    /// 头部板版本信息解析失败
    pub const PARSE_HEAD_VERSION_FAIL: u32 = 32;

    /// 头部板云台状态数据解析失败
    pub const PARSE_HEAD_JOINT_FAIL: u32 = 33;

    /// 头部板IMU数据解析失败
    pub const PARSE_HEAD_IMU_FAIL: u32 = 34;

    /// 头部板日志数据解析失败
    pub const PARSE_HEAD_LOG_FAIL: u32 = 35;

    /// 头部板电源状态数据解析失败
    pub const PARSE_HEAD_POWER_FAIL: u32 = 36;

    /// 身体板版本信息解析失败
    pub const PARSE_BODY_VERSION_FAIL: u32 = 37;

    /// 身体板云台状态数据解析失败
    pub const PARSE_BODY_HEAD_JOINT_FAIL: u32 = 38;

    /// 身体板IMU数据解析失败
    pub const PARSE_BODY_IMU_FAIL: u32 = 39;

    /// 身体板日志数据解析失败
    pub const PARSE_BODY_LOG_FAIL: u32 = 40;

    /// 身体板电源系统状态数据解析失败
    pub const PARSE_BODY_POWER_FAIL: u32 = 41;

    /// 底盘板版本信息解析失败
    pub const PARSE_CHASSIS_VERSION_FAIL: u32 = 42;

    /// 底盘板系统状态数据解析失败
    pub const PARSE_CHASSIS_POWER_FAIL: u32 = 43;

    /// 底盘板TOF传感器数据解析失败
    pub const PARSE_CHASSIS_TOF_FAIL: u32 = 44;

    /// 底盘板超声波传感器数据解析失败
    pub const PARSE_CHASSIS_ULTRASONIC_FAIL: u32 = 45;

    /// 底盘板IMU数据解析失败
    pub const PARSE_CHASSIS_IMU_FAIL: u32 = 46;

    /// 底盘板日志数据解析失败
    pub const PARSE_CHASSIS_LOG_FAIL: u32 = 47;

    /// 底盘板充电桩数据解析失败
    pub const PARSE_CHASSIS_ROBOT_STATION_INFO_FAIL: u32 = 48;

    /// 底盘板里程计Odom数据解析失败
    pub const PARSE_CHASSIS_ODOM_FAIL: u32 = 49;

    /// 身体板TOF传感器数据解析失败
    pub const PARSE_BODY_TOF_FAIL: u32 = 50;

    /// 身体板超声波传感器数据解析失败
    pub const PARSE_BODY_ULTRASONIC_FAIL: u32 = 51;

}


impl Default for HalUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__HalUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__HalUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HalUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__HalUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__HalUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__HalUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HalUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HalUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/HalUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__HalUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__HeadErrorEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__HeadErrorEnum__init(msg: *mut HeadErrorEnum) -> bool;
    fn protocol__msg__HeadErrorEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HeadErrorEnum>, size: usize) -> bool;
    fn protocol__msg__HeadErrorEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HeadErrorEnum>);
    fn protocol__msg__HeadErrorEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HeadErrorEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<HeadErrorEnum>) -> bool;
}

// Corresponds to protocol__msg__HeadErrorEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: HEAD
/// 头部获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HeadErrorEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl HeadErrorEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 头部板imu断连
    pub const IMU_CONN_FAIL: u32 = 17;

}


impl Default for HeadErrorEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__HeadErrorEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__HeadErrorEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HeadErrorEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__HeadErrorEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__HeadErrorEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__HeadErrorEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HeadErrorEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HeadErrorEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/HeadErrorEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__HeadErrorEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__HeadMountErrorEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__HeadMountErrorEnum__init(msg: *mut HeadMountErrorEnum) -> bool;
    fn protocol__msg__HeadMountErrorEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HeadMountErrorEnum>, size: usize) -> bool;
    fn protocol__msg__HeadMountErrorEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HeadMountErrorEnum>);
    fn protocol__msg__HeadMountErrorEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HeadMountErrorEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<HeadMountErrorEnum>) -> bool;
}

// Corresponds to protocol__msg__HeadMountErrorEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: HEAD_MOUNT
/// 心跳超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HeadMountErrorEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl HeadMountErrorEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 指示灯配置异常
    pub const HEAD_LED_FAIL: u32 = 17;

    /// 按键配置异常
    pub const GRIPPER_BUTTON_FAIL: u32 = 18;

    /// IMU配置异常
    pub const GRIPPER_IMU_FAIL: u32 = 19;

    /// IMU配置异常
    pub const HEAD_IMU_FAIL: u32 = 21;

    /// 电池配置异常
    pub const HEAD_BATTERY_FAIL: u32 = 20;

}


impl Default for HeadMountErrorEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__HeadMountErrorEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__HeadMountErrorEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HeadMountErrorEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__HeadMountErrorEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__HeadMountErrorEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__HeadMountErrorEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HeadMountErrorEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HeadMountErrorEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/HeadMountErrorEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__HeadMountErrorEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__HeadMountUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__HeadMountUnitEnum__init(msg: *mut HeadMountUnitEnum) -> bool;
    fn protocol__msg__HeadMountUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HeadMountUnitEnum>, size: usize) -> bool;
    fn protocol__msg__HeadMountUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HeadMountUnitEnum>);
    fn protocol__msg__HeadMountUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HeadMountUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<HeadMountUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__HeadMountUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: HEAD_MOUNT
/// 心跳超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HeadMountUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl HeadMountUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 指示灯配置异常
    pub const HEAD_LED_FAIL: u32 = 17;

    /// 按键配置异常
    pub const GRIPPER_BUTTON_FAIL: u32 = 18;

    /// IMU配置异常
    pub const GRIPPER_IMU_FAIL: u32 = 19;

    /// IMU配置异常
    pub const HEAD_IMU_FAIL: u32 = 21;

    /// 电池配置异常
    pub const HEAD_BATTERY_FAIL: u32 = 20;

}


impl Default for HeadMountUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__HeadMountUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__HeadMountUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HeadMountUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__HeadMountUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__HeadMountUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__HeadMountUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HeadMountUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HeadMountUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/HeadMountUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__HeadMountUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__HeadUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__HeadUnitEnum__init(msg: *mut HeadUnitEnum) -> bool;
    fn protocol__msg__HeadUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HeadUnitEnum>, size: usize) -> bool;
    fn protocol__msg__HeadUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HeadUnitEnum>);
    fn protocol__msg__HeadUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HeadUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<HeadUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__HeadUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: HEAD
/// 头部获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HeadUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl HeadUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 头部板imu断连
    pub const IMU_CONN_FAIL: u32 = 17;

}


impl Default for HeadUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__HeadUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__HeadUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HeadUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__HeadUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__HeadUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__HeadUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HeadUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HeadUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/HeadUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__HeadUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__LidarErrorEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__LidarErrorEnum__init(msg: *mut LidarErrorEnum) -> bool;
    fn protocol__msg__LidarErrorEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LidarErrorEnum>, size: usize) -> bool;
    fn protocol__msg__LidarErrorEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LidarErrorEnum>);
    fn protocol__msg__LidarErrorEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LidarErrorEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<LidarErrorEnum>) -> bool;
}

// Corresponds to protocol__msg__LidarErrorEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: LIDAR
/// 雷达获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LidarErrorEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl LidarErrorEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 连接失败
    pub const CONN_FAIL: u32 = 17;

    /// 解析校验失败
    pub const PARSE_CRC_FAIL: u32 = 18;

}


impl Default for LidarErrorEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__LidarErrorEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__LidarErrorEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LidarErrorEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__LidarErrorEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__LidarErrorEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__LidarErrorEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LidarErrorEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LidarErrorEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/LidarErrorEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__LidarErrorEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__LidarUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__LidarUnitEnum__init(msg: *mut LidarUnitEnum) -> bool;
    fn protocol__msg__LidarUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LidarUnitEnum>, size: usize) -> bool;
    fn protocol__msg__LidarUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LidarUnitEnum>);
    fn protocol__msg__LidarUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LidarUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<LidarUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__LidarUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: LIDAR
/// 雷达获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LidarUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl LidarUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 连接失败
    pub const CONN_FAIL: u32 = 17;

    /// 解析校验失败
    pub const PARSE_CRC_FAIL: u32 = 18;

}


impl Default for LidarUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__LidarUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__LidarUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LidarUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__LidarUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__LidarUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__LidarUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LidarUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LidarUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/LidarUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__LidarUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__CameraErrorEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__CameraErrorEnum__init(msg: *mut CameraErrorEnum) -> bool;
    fn protocol__msg__CameraErrorEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CameraErrorEnum>, size: usize) -> bool;
    fn protocol__msg__CameraErrorEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CameraErrorEnum>);
    fn protocol__msg__CameraErrorEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CameraErrorEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<CameraErrorEnum>) -> bool;
}

// Corresponds to protocol__msg__CameraErrorEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: CAMERA
/// 相机节点获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CameraErrorEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl CameraErrorEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// /dev/ArmCamLeft设备节点连接失败
    pub const CAMERA_TYPE_LEFT_HAND_DISCONNECT: u32 = 17;

    /// /dev/ArmCamRight设备节点连接失败
    pub const CAMERA_TYPE_RIGHT_HAND_DISCONNECT: u32 = 18;

    /// /dev/BackCamLeft设备节点连接失败
    pub const CAMERA_TYPE_CHEST_BACK_DISCONNECT: u32 = 19;

    /// /dev/HeadStereoRGB设备节点连接失败
    pub const CAMERA_TYPE_HEAD_STEREO_DISCONNECT: u32 = 20;

    /// /dev/BirdEyeViewCamLeft 设备节点连接失败
    pub const CAMERA_TYPE_SHOULDER_FISHEYE_LEFT_DISCONNECT: u32 = 21;

    /// /dev/BirdEyeViewCamRight设备节点连接失败
    pub const CAMERA_TYPE_SHOULDER_FISHEYE_RIGHT_DISCONNECT: u32 = 22;

    /// /dev/BellyCamRight设备节点连接失败
    pub const CAMERA_TYPE_CHEST_FRONT_DISCONNECT: u32 = 23;

    /// CAMERA_TYPE_LEFT_HAND 相机帧率异常
    pub const CAMERA_TYPE_LEFT_HAND_FRAME_RATE_ABNORMAL: u32 = 65;

    /// CAMERA_TYPE_HEAD 相机帧率异常
    pub const CAMERA_TYPE_HEAD_FRAME_RATE_ABNORMAL: u32 = 66;

    /// CAMERA_TYPE_RIGHT_HAND 相机帧率异常
    pub const CAMERA_TYPE_RIGHT_HAND_FRAME_RATE_ABNORMAL: u32 = 67;

    /// CAMERA_TYPE_CHEST_BACK 相机帧率异常
    pub const CAMERA_TYPE_CHEST_BACK_FRAME_RATE_ABNORMAL: u32 = 68;

    /// CAMERA_TYPE_CHASSIS_FRAME_RATE 相机帧率异常
    pub const CAMERA_TYPE_CHASSIS_FRAME_RATE_ABNORMAL: u32 = 69;

    /// CAMERA_TYPE_HEAD_STEREO 相机帧率异常
    pub const CAMERA_TYPE_HEAD_STEREO_FRAME_RATE_ABNORMAL: u32 = 70;

    /// CAMERA_TYPE_SHOULDER_FISHEYE_LEFT 相机帧率异常
    pub const CAMERA_TYPE_SHOULDER_FISHEYE_LEFT_FRAME_RATE_ABNORMAL: u32 = 71;

    /// CAMERA_TYPE_SHOULDER_FISHEYE_RIGHT 相机帧率异常
    pub const CAMERA_TYPE_SHOULDER_FISHEYE_RIGHT_FRAME_RATE_ABNORMAL: u32 = 72;

    /// CAMERA_TYPE_BEV 相机帧率异常
    pub const CAMERA_TYPE_BEV_FRAME_RATE_ABNORMAL: u32 = 73;

    /// CAMERA_TYPE_CHEST_FRONT 相机帧率异常
    pub const CAMERA_TYPE_CHEST_FRONT_FRAME_RATE_ABNORMAL: u32 = 74;

}


impl Default for CameraErrorEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__CameraErrorEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__CameraErrorEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CameraErrorEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__CameraErrorEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__CameraErrorEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__CameraErrorEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CameraErrorEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CameraErrorEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/CameraErrorEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__CameraErrorEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__CameraUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__CameraUnitEnum__init(msg: *mut CameraUnitEnum) -> bool;
    fn protocol__msg__CameraUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CameraUnitEnum>, size: usize) -> bool;
    fn protocol__msg__CameraUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CameraUnitEnum>);
    fn protocol__msg__CameraUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CameraUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<CameraUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__CameraUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: CAMERA
/// 相机节点获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CameraUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl CameraUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// /dev/ArmCamLeft设备节点连接失败
    pub const CAMERA_TYPE_LEFT_HAND_DISCONNECT: u32 = 17;

    /// /dev/ArmCamRight设备节点连接失败
    pub const CAMERA_TYPE_RIGHT_HAND_DISCONNECT: u32 = 18;

    /// /dev/BackCamLeft设备节点连接失败
    pub const CAMERA_TYPE_CHEST_BACK_DISCONNECT: u32 = 19;

    /// /dev/HeadStereoRGB设备节点连接失败
    pub const CAMERA_TYPE_HEAD_STEREO_DISCONNECT: u32 = 20;

    /// /dev/BirdEyeViewCamLeft 设备节点连接失败
    pub const CAMERA_TYPE_SHOULDER_FISHEYE_LEFT_DISCONNECT: u32 = 21;

    /// /dev/BirdEyeViewCamRight设备节点连接失败
    pub const CAMERA_TYPE_SHOULDER_FISHEYE_RIGHT_DISCONNECT: u32 = 22;

    /// /dev/BellyCamRight设备节点连接失败
    pub const CAMERA_TYPE_CHEST_FRONT_DISCONNECT: u32 = 23;

    /// CAMERA_TYPE_LEFT_HAND 相机帧率异常
    pub const CAMERA_TYPE_LEFT_HAND_FRAME_RATE_ABNORMAL: u32 = 65;

    /// CAMERA_TYPE_HEAD 相机帧率异常
    pub const CAMERA_TYPE_HEAD_FRAME_RATE_ABNORMAL: u32 = 66;

    /// CAMERA_TYPE_RIGHT_HAND 相机帧率异常
    pub const CAMERA_TYPE_RIGHT_HAND_FRAME_RATE_ABNORMAL: u32 = 67;

    /// CAMERA_TYPE_CHEST_BACK 相机帧率异常
    pub const CAMERA_TYPE_CHEST_BACK_FRAME_RATE_ABNORMAL: u32 = 68;

    /// CAMERA_TYPE_CHASSIS_FRAME_RATE 相机帧率异常
    pub const CAMERA_TYPE_CHASSIS_FRAME_RATE_ABNORMAL: u32 = 69;

    /// CAMERA_TYPE_HEAD_STEREO 相机帧率异常
    pub const CAMERA_TYPE_HEAD_STEREO_FRAME_RATE_ABNORMAL: u32 = 70;

    /// CAMERA_TYPE_SHOULDER_FISHEYE_LEFT 相机帧率异常
    pub const CAMERA_TYPE_SHOULDER_FISHEYE_LEFT_FRAME_RATE_ABNORMAL: u32 = 71;

    /// CAMERA_TYPE_SHOULDER_FISHEYE_RIGHT 相机帧率异常
    pub const CAMERA_TYPE_SHOULDER_FISHEYE_RIGHT_FRAME_RATE_ABNORMAL: u32 = 72;

    /// CAMERA_TYPE_BEV 相机帧率异常
    pub const CAMERA_TYPE_BEV_FRAME_RATE_ABNORMAL: u32 = 73;

    /// CAMERA_TYPE_CHEST_FRONT 相机帧率异常
    pub const CAMERA_TYPE_CHEST_FRONT_FRAME_RATE_ABNORMAL: u32 = 74;

}


impl Default for CameraUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__CameraUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__CameraUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CameraUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__CameraUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__CameraUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__CameraUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CameraUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CameraUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/CameraUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__CameraUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__MediaUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__MediaUnitEnum__init(msg: *mut MediaUnitEnum) -> bool;
    fn protocol__msg__MediaUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MediaUnitEnum>, size: usize) -> bool;
    fn protocol__msg__MediaUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MediaUnitEnum>);
    fn protocol__msg__MediaUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MediaUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<MediaUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__MediaUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MediaUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl MediaUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CAMERA: u8 = 1;

}


impl Default for MediaUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__MediaUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__MediaUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MediaUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MediaUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MediaUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MediaUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MediaUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MediaUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/MediaUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__MediaUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__MonitorUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__MonitorUnitEnum__init(msg: *mut MonitorUnitEnum) -> bool;
    fn protocol__msg__MonitorUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MonitorUnitEnum>, size: usize) -> bool;
    fn protocol__msg__MonitorUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MonitorUnitEnum>);
    fn protocol__msg__MonitorUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MonitorUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<MonitorUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__MonitorUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MonitorUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl MonitorUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SYSTEM_MONITOR: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NET_MONITOR: u8 = 2;

}


impl Default for MonitorUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__MonitorUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__MonitorUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MonitorUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MonitorUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MonitorUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MonitorUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MonitorUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MonitorUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/MonitorUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__MonitorUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__NetMonitorErrorEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__NetMonitorErrorEnum__init(msg: *mut NetMonitorErrorEnum) -> bool;
    fn protocol__msg__NetMonitorErrorEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NetMonitorErrorEnum>, size: usize) -> bool;
    fn protocol__msg__NetMonitorErrorEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NetMonitorErrorEnum>);
    fn protocol__msg__NetMonitorErrorEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NetMonitorErrorEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<NetMonitorErrorEnum>) -> bool;
}

// Corresponds to protocol__msg__NetMonitorErrorEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: NET_MONITOR
/// 网络监控节点获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NetMonitorErrorEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl NetMonitorErrorEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 没有任何网络连接
    pub const NO_NETWORK: u32 = 17;

    /// 无法访问公网
    pub const NO_CONNECTIVITY: u32 = 18;

    /// 路由配置错误
    pub const INVALID_DEFAULT_ROUTE: u32 = 20;

    /// 没有WIFI可以连接
    pub const NO_WIFI_SSID: u32 = 33;

    /// 连接WiFi失败
    pub const FAILED_WIFI_CONNECTION: u32 = 34;

    /// 没有5G模块
    pub const NO_MODEM: u32 = 49;

    /// 没有SIM卡
    pub const NO_SIM_CARD: u32 = 50;

    /// 没有信号，检查射频信号
    pub const NO_MODEM_SIGNAL: u32 = 51;

    /// 基站入网失败，联系ISP
    pub const FAILED_MODEM_REGISTRATION: u32 = 52;

}


impl Default for NetMonitorErrorEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__NetMonitorErrorEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__NetMonitorErrorEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NetMonitorErrorEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__NetMonitorErrorEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__NetMonitorErrorEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__NetMonitorErrorEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NetMonitorErrorEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NetMonitorErrorEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/NetMonitorErrorEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__NetMonitorErrorEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__NetMonitorUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__NetMonitorUnitEnum__init(msg: *mut NetMonitorUnitEnum) -> bool;
    fn protocol__msg__NetMonitorUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NetMonitorUnitEnum>, size: usize) -> bool;
    fn protocol__msg__NetMonitorUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NetMonitorUnitEnum>);
    fn protocol__msg__NetMonitorUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NetMonitorUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<NetMonitorUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__NetMonitorUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: NET_MONITOR
/// 网络监控节点获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NetMonitorUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl NetMonitorUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 没有任何网络连接
    pub const NO_NETWORK: u32 = 17;

    /// 无法访问公网
    pub const NO_CONNECTIVITY: u32 = 18;

    /// 路由配置错误
    pub const INVALID_DEFAULT_ROUTE: u32 = 20;

    /// 没有WIFI可以连接
    pub const NO_WIFI_SSID: u32 = 33;

    /// 连接WiFi失败
    pub const FAILED_WIFI_CONNECTION: u32 = 34;

    /// 没有5G模块
    pub const NO_MODEM: u32 = 49;

    /// 没有SIM卡
    pub const NO_SIM_CARD: u32 = 50;

    /// 没有信号，检查射频信号
    pub const NO_MODEM_SIGNAL: u32 = 51;

    /// 基站入网失败，联系ISP
    pub const FAILED_MODEM_REGISTRATION: u32 = 52;

}


impl Default for NetMonitorUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__NetMonitorUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__NetMonitorUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NetMonitorUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__NetMonitorUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__NetMonitorUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__NetMonitorUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NetMonitorUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NetMonitorUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/NetMonitorUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__NetMonitorUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__SystemMonitorErrorEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__SystemMonitorErrorEnum__init(msg: *mut SystemMonitorErrorEnum) -> bool;
    fn protocol__msg__SystemMonitorErrorEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SystemMonitorErrorEnum>, size: usize) -> bool;
    fn protocol__msg__SystemMonitorErrorEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SystemMonitorErrorEnum>);
    fn protocol__msg__SystemMonitorErrorEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SystemMonitorErrorEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<SystemMonitorErrorEnum>) -> bool;
}

// Corresponds to protocol__msg__SystemMonitorErrorEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: SYSTEM_MONITOR
/// 系统资源监控节点获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SystemMonitorErrorEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl SystemMonitorErrorEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 磁盘负载过高
    pub const ROM_HIGH_USAGE: u32 = 16;

    /// 运存负载过高
    pub const RAM_HIGH_USAGE: u32 = 17;

    /// CPU过温
    pub const CPU_OVERHEAT: u32 = 18;

    /// GPU过温
    pub const GPU_OVERHEAT: u32 = 19;

}


impl Default for SystemMonitorErrorEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__SystemMonitorErrorEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__SystemMonitorErrorEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SystemMonitorErrorEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__SystemMonitorErrorEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__SystemMonitorErrorEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__SystemMonitorErrorEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SystemMonitorErrorEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SystemMonitorErrorEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/SystemMonitorErrorEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__SystemMonitorErrorEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__SystemMonitorUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__SystemMonitorUnitEnum__init(msg: *mut SystemMonitorUnitEnum) -> bool;
    fn protocol__msg__SystemMonitorUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SystemMonitorUnitEnum>, size: usize) -> bool;
    fn protocol__msg__SystemMonitorUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SystemMonitorUnitEnum>);
    fn protocol__msg__SystemMonitorUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SystemMonitorUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<SystemMonitorUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__SystemMonitorUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: SYSTEM_MONITOR
/// 系统资源监控节点获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SystemMonitorUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl SystemMonitorUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 磁盘负载过高
    pub const ROM_HIGH_USAGE: u32 = 16;

    /// 运存负载过高
    pub const RAM_HIGH_USAGE: u32 = 17;

    /// CPU过温
    pub const CPU_OVERHEAT: u32 = 18;

    /// GPU过温
    pub const GPU_OVERHEAT: u32 = 19;

}


impl Default for SystemMonitorUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__SystemMonitorUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__SystemMonitorUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SystemMonitorUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__SystemMonitorUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__SystemMonitorUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__SystemMonitorUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SystemMonitorUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SystemMonitorUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/SystemMonitorUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__SystemMonitorUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__KincoLiftWaistErrorEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__KincoLiftWaistErrorEnum__init(msg: *mut KincoLiftWaistErrorEnum) -> bool;
    fn protocol__msg__KincoLiftWaistErrorEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<KincoLiftWaistErrorEnum>, size: usize) -> bool;
    fn protocol__msg__KincoLiftWaistErrorEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<KincoLiftWaistErrorEnum>);
    fn protocol__msg__KincoLiftWaistErrorEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<KincoLiftWaistErrorEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<KincoLiftWaistErrorEnum>) -> bool;
}

// Corresponds to protocol__msg__KincoLiftWaistErrorEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: KINCO_LIFT_WAIST
/// EX001腰部步科电机获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KincoLiftWaistErrorEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl KincoLiftWaistErrorEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 升降腰正常
    pub const MOTOR_NORMAL: u32 = 16;

    /// 升降腰不正常
    pub const MOTOR_ABNORMAL: u32 = 17;

}


impl Default for KincoLiftWaistErrorEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__KincoLiftWaistErrorEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__KincoLiftWaistErrorEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for KincoLiftWaistErrorEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__KincoLiftWaistErrorEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__KincoLiftWaistErrorEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__KincoLiftWaistErrorEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for KincoLiftWaistErrorEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for KincoLiftWaistErrorEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/KincoLiftWaistErrorEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__KincoLiftWaistErrorEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__KincoLiftWaistUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__KincoLiftWaistUnitEnum__init(msg: *mut KincoLiftWaistUnitEnum) -> bool;
    fn protocol__msg__KincoLiftWaistUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<KincoLiftWaistUnitEnum>, size: usize) -> bool;
    fn protocol__msg__KincoLiftWaistUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<KincoLiftWaistUnitEnum>);
    fn protocol__msg__KincoLiftWaistUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<KincoLiftWaistUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<KincoLiftWaistUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__KincoLiftWaistUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: KINCO_LIFT_WAIST
/// EX001腰部步科电机获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KincoLiftWaistUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl KincoLiftWaistUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 升降腰正常
    pub const MOTOR_NORMAL: u32 = 16;

    /// 升降腰不正常
    pub const MOTOR_ABNORMAL: u32 = 17;

}


impl Default for KincoLiftWaistUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__KincoLiftWaistUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__KincoLiftWaistUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for KincoLiftWaistUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__KincoLiftWaistUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__KincoLiftWaistUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__KincoLiftWaistUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for KincoLiftWaistUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for KincoLiftWaistUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/KincoLiftWaistUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__KincoLiftWaistUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__LeftArmErrorEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__LeftArmErrorEnum__init(msg: *mut LeftArmErrorEnum) -> bool;
    fn protocol__msg__LeftArmErrorEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LeftArmErrorEnum>, size: usize) -> bool;
    fn protocol__msg__LeftArmErrorEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LeftArmErrorEnum>);
    fn protocol__msg__LeftArmErrorEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LeftArmErrorEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<LeftArmErrorEnum>) -> bool;
}

// Corresponds to protocol__msg__LeftArmErrorEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: LEFT_ARM
/// 左臂硬件获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LeftArmErrorEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl LeftArmErrorEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 左臂J3电机正常
    pub const J3_MOTOR_NORMAL: u32 = 48;

    /// 左臂J3轴过压
    pub const J3_OVER_VOLTAGE: u32 = 49;

    /// 左臂J3轴欠压
    pub const J3_UNDER_VOLTAGE: u32 = 50;

    /// 左臂J3过流
    pub const J3_OVER_CURRENT: u32 = 51;

    /// 左臂J3 MOS过热
    pub const J3_MOS_OVER_TEMP: u32 = 52;

    /// 左臂J3电机过热
    pub const J3_MOTOR_OVER_HEAT: u32 = 53;

    /// 左臂J1电机正常
    pub const J1_MOTOR_NORMAL: u32 = 16;

    /// 左臂J1轴过压
    pub const J1_OVER_VOLTAGE: u32 = 17;

    /// 左臂J1轴欠压
    pub const J1_UNDER_VOLTAGE: u32 = 18;

    /// 左臂J1过流
    pub const J1_OVER_CURRENT: u32 = 19;

    /// 左臂J1 MOS过热
    pub const J1_MOS_OVER_TEMP: u32 = 20;

    /// 左臂J1电机过热
    pub const J1_MOTOR_OVER_HEAT: u32 = 21;

    /// 左臂J1通讯丢失
    pub const J1_COMMUNICATION_LOST: u32 = 22;

    /// 左臂J1过载
    pub const J1_OVERLOAD: u32 = 23;

    /// 左臂J2电机正常
    pub const J2_MOTOR_NORMAL: u32 = 32;

    /// 左臂J2轴过压
    pub const J2_OVER_VOLTAGE: u32 = 33;

    /// 左臂J2轴欠压
    pub const J2_UNDER_VOLTAGE: u32 = 34;

    /// 左臂J2过流
    pub const J2_OVER_CURRENT: u32 = 35;

    /// 左臂J2 MOS过热
    pub const J2_MOS_OVER_TEMP: u32 = 36;

    /// 左臂J2电机过热
    pub const J2_MOTOR_OVER_HEAT: u32 = 37;

    /// 左臂J2通讯丢失
    pub const J2_COMMUNICATION_LOST: u32 = 38;

    /// 左臂J2过载
    pub const J2_OVERLOAD: u32 = 39;

    /// 左臂J3通讯丢失
    pub const J3_COMMUNICATION_LOST: u32 = 54;

    /// 左臂J3过载
    pub const J3_OVERLOAD: u32 = 55;

    /// 左臂J4电机正常
    pub const J4_MOTOR_NORMAL: u32 = 64;

    /// 左臂J4轴过压
    pub const J4_OVER_VOLTAGE: u32 = 65;

    /// 左臂J4轴欠压
    pub const J4_UNDER_VOLTAGE: u32 = 66;

    /// 左臂J4过流
    pub const J4_OVER_CURRENT: u32 = 67;

    /// 左臂J4 MOS过热
    pub const J4_MOS_OVER_TEMP: u32 = 68;

    /// 左臂J4电机过热
    pub const J4_MOTOR_OVER_HEAT: u32 = 69;

    /// 左臂J4通讯丢失
    pub const J4_COMMUNICATION_LOST: u32 = 70;

    /// 左臂J4过载
    pub const J4_OVERLOAD: u32 = 71;

    /// 左臂J5电机正常
    pub const J5_MOTOR_NORMAL: u32 = 80;

    /// 左臂J5轴过压
    pub const J5_OVER_VOLTAGE: u32 = 81;

    /// 左臂J5轴欠压
    pub const J5_UNDER_VOLTAGE: u32 = 82;

    /// 左臂J5过流
    pub const J5_OVER_CURRENT: u32 = 83;

    /// 左臂J5 MOS过热
    pub const J5_MOS_OVER_TEMP: u32 = 84;

    /// 左臂J5电机过热
    pub const J5_MOTOR_OVER_HEAT: u32 = 85;

    /// 左臂J5通讯丢失
    pub const J5_COMMUNICATION_LOST: u32 = 86;

    /// 左臂J5过载
    pub const J5_OVERLOAD: u32 = 87;

    /// 左臂J6电机正常
    pub const J6_MOTOR_NORMAL: u32 = 96;

    /// 左臂J6轴过压
    pub const J6_OVER_VOLTAGE: u32 = 97;

    /// 左臂J6轴欠压
    pub const J6_UNDER_VOLTAGE: u32 = 98;

    /// 左臂J6过流
    pub const J6_OVER_CURRENT: u32 = 99;

    /// 左臂J6 MOS过热
    pub const J6_MOS_OVER_TEMP: u32 = 100;

    /// 左臂J6电机过热
    pub const J6_MOTOR_OVER_HEAT: u32 = 101;

    /// 左臂J6通讯丢失
    pub const J6_COMMUNICATION_LOST: u32 = 102;

    /// 左臂J6过载
    pub const J6_OVERLOAD: u32 = 103;

}


impl Default for LeftArmErrorEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__LeftArmErrorEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__LeftArmErrorEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LeftArmErrorEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__LeftArmErrorEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__LeftArmErrorEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__LeftArmErrorEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LeftArmErrorEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LeftArmErrorEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/LeftArmErrorEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__LeftArmErrorEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__LeftArmUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__LeftArmUnitEnum__init(msg: *mut LeftArmUnitEnum) -> bool;
    fn protocol__msg__LeftArmUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LeftArmUnitEnum>, size: usize) -> bool;
    fn protocol__msg__LeftArmUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LeftArmUnitEnum>);
    fn protocol__msg__LeftArmUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LeftArmUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<LeftArmUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__LeftArmUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: LEFT_ARM
/// 左臂硬件获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LeftArmUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl LeftArmUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 左臂J3电机正常
    pub const J3_MOTOR_NORMAL: u32 = 48;

    /// 左臂J3轴过压
    pub const J3_OVER_VOLTAGE: u32 = 49;

    /// 左臂J3轴欠压
    pub const J3_UNDER_VOLTAGE: u32 = 50;

    /// 左臂J3过流
    pub const J3_OVER_CURRENT: u32 = 51;

    /// 左臂J3 MOS过热
    pub const J3_MOS_OVER_TEMP: u32 = 52;

    /// 左臂J3电机过热
    pub const J3_MOTOR_OVER_HEAT: u32 = 53;

    /// 左臂J1电机正常
    pub const J1_MOTOR_NORMAL: u32 = 16;

    /// 左臂J1轴过压
    pub const J1_OVER_VOLTAGE: u32 = 17;

    /// 左臂J1轴欠压
    pub const J1_UNDER_VOLTAGE: u32 = 18;

    /// 左臂J1过流
    pub const J1_OVER_CURRENT: u32 = 19;

    /// 左臂J1 MOS过热
    pub const J1_MOS_OVER_TEMP: u32 = 20;

    /// 左臂J1电机过热
    pub const J1_MOTOR_OVER_HEAT: u32 = 21;

    /// 左臂J1通讯丢失
    pub const J1_COMMUNICATION_LOST: u32 = 22;

    /// 左臂J1过载
    pub const J1_OVERLOAD: u32 = 23;

    /// 左臂J2电机正常
    pub const J2_MOTOR_NORMAL: u32 = 32;

    /// 左臂J2轴过压
    pub const J2_OVER_VOLTAGE: u32 = 33;

    /// 左臂J2轴欠压
    pub const J2_UNDER_VOLTAGE: u32 = 34;

    /// 左臂J2过流
    pub const J2_OVER_CURRENT: u32 = 35;

    /// 左臂J2 MOS过热
    pub const J2_MOS_OVER_TEMP: u32 = 36;

    /// 左臂J2电机过热
    pub const J2_MOTOR_OVER_HEAT: u32 = 37;

    /// 左臂J2通讯丢失
    pub const J2_COMMUNICATION_LOST: u32 = 38;

    /// 左臂J2过载
    pub const J2_OVERLOAD: u32 = 39;

    /// 左臂J3通讯丢失
    pub const J3_COMMUNICATION_LOST: u32 = 54;

    /// 左臂J3过载
    pub const J3_OVERLOAD: u32 = 55;

    /// 左臂J4电机正常
    pub const J4_MOTOR_NORMAL: u32 = 64;

    /// 左臂J4轴过压
    pub const J4_OVER_VOLTAGE: u32 = 65;

    /// 左臂J4轴欠压
    pub const J4_UNDER_VOLTAGE: u32 = 66;

    /// 左臂J4过流
    pub const J4_OVER_CURRENT: u32 = 67;

    /// 左臂J4 MOS过热
    pub const J4_MOS_OVER_TEMP: u32 = 68;

    /// 左臂J4电机过热
    pub const J4_MOTOR_OVER_HEAT: u32 = 69;

    /// 左臂J4通讯丢失
    pub const J4_COMMUNICATION_LOST: u32 = 70;

    /// 左臂J4过载
    pub const J4_OVERLOAD: u32 = 71;

    /// 左臂J5电机正常
    pub const J5_MOTOR_NORMAL: u32 = 80;

    /// 左臂J5轴过压
    pub const J5_OVER_VOLTAGE: u32 = 81;

    /// 左臂J5轴欠压
    pub const J5_UNDER_VOLTAGE: u32 = 82;

    /// 左臂J5过流
    pub const J5_OVER_CURRENT: u32 = 83;

    /// 左臂J5 MOS过热
    pub const J5_MOS_OVER_TEMP: u32 = 84;

    /// 左臂J5电机过热
    pub const J5_MOTOR_OVER_HEAT: u32 = 85;

    /// 左臂J5通讯丢失
    pub const J5_COMMUNICATION_LOST: u32 = 86;

    /// 左臂J5过载
    pub const J5_OVERLOAD: u32 = 87;

    /// 左臂J6电机正常
    pub const J6_MOTOR_NORMAL: u32 = 96;

    /// 左臂J6轴过压
    pub const J6_OVER_VOLTAGE: u32 = 97;

    /// 左臂J6轴欠压
    pub const J6_UNDER_VOLTAGE: u32 = 98;

    /// 左臂J6过流
    pub const J6_OVER_CURRENT: u32 = 99;

    /// 左臂J6 MOS过热
    pub const J6_MOS_OVER_TEMP: u32 = 100;

    /// 左臂J6电机过热
    pub const J6_MOTOR_OVER_HEAT: u32 = 101;

    /// 左臂J6通讯丢失
    pub const J6_COMMUNICATION_LOST: u32 = 102;

    /// 左臂J6过载
    pub const J6_OVERLOAD: u32 = 103;

}


impl Default for LeftArmUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__LeftArmUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__LeftArmUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LeftArmUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__LeftArmUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__LeftArmUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__LeftArmUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LeftArmUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LeftArmUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/LeftArmUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__LeftArmUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__LeftEndEffectorUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__LeftEndEffectorUnitEnum__init(msg: *mut LeftEndEffectorUnitEnum) -> bool;
    fn protocol__msg__LeftEndEffectorUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LeftEndEffectorUnitEnum>, size: usize) -> bool;
    fn protocol__msg__LeftEndEffectorUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LeftEndEffectorUnitEnum>);
    fn protocol__msg__LeftEndEffectorUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LeftEndEffectorUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<LeftEndEffectorUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__LeftEndEffectorUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: LEFT_END_EFFECTOR

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LeftEndEffectorUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl LeftEndEffectorUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_MOTOR_NORMAL: u32 = 16;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_OVER_VOLTAGE: u32 = 17;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_UNDER_VOLTAGE: u32 = 18;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_OVER_CURRENT: u32 = 19;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_MOS_OVER_TEMP: u32 = 20;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_MOTOR_OVER_HEAT: u32 = 21;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_COMMUNICATION_LOST: u32 = 22;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_OVERLOAD: u32 = 23;

}


impl Default for LeftEndEffectorUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__LeftEndEffectorUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__LeftEndEffectorUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LeftEndEffectorUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__LeftEndEffectorUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__LeftEndEffectorUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__LeftEndEffectorUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LeftEndEffectorUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LeftEndEffectorUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/LeftEndEffectorUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__LeftEndEffectorUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__LeftRmGripperErrorEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__LeftRmGripperErrorEnum__init(msg: *mut LeftRmGripperErrorEnum) -> bool;
    fn protocol__msg__LeftRmGripperErrorEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LeftRmGripperErrorEnum>, size: usize) -> bool;
    fn protocol__msg__LeftRmGripperErrorEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LeftRmGripperErrorEnum>);
    fn protocol__msg__LeftRmGripperErrorEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LeftRmGripperErrorEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<LeftRmGripperErrorEnum>) -> bool;
}

// Corresponds to protocol__msg__LeftRmGripperErrorEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: LEFT_RM_GRIPPER
/// 左 RM 夹爪获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LeftRmGripperErrorEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl LeftRmGripperErrorEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 左夹爪电机正常
    pub const MOTOR_NORMAL: u32 = 16;

    /// 左夹爪电机过压
    pub const OVER_VOLTAGE: u32 = 17;

    /// 左夹爪电机欠压
    pub const UNDER_VOLTAGE: u32 = 18;

    /// 左夹爪电机过流
    pub const OVER_CURRENT: u32 = 19;

    /// 左夹爪电机MOS过温
    pub const MOS_OVER_TEMP: u32 = 20;

    /// 左夹爪电机线圈过热
    pub const MOTOR_OVER_HEAT: u32 = 21;

    /// 左夹爪电机通讯丢失
    pub const COMMUNICATION_LOST: u32 = 22;

    /// 左夹爪电机过载
    pub const OVERLOAD: u32 = 23;

    /// 左夹爪电机缺相
    pub const PHASE_LOSS: u32 = 24;

    /// 左夹爪电机短路
    pub const MOTOR_SHORT_CIRCUIT: u32 = 25;

    /// 左夹爪电机堵转
    pub const MOTOR_STALL: u32 = 26;

    /// 左夹爪电机复位故障
    pub const RESET_FAULT: u32 = 27;

}


impl Default for LeftRmGripperErrorEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__LeftRmGripperErrorEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__LeftRmGripperErrorEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LeftRmGripperErrorEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__LeftRmGripperErrorEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__LeftRmGripperErrorEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__LeftRmGripperErrorEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LeftRmGripperErrorEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LeftRmGripperErrorEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/LeftRmGripperErrorEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__LeftRmGripperErrorEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__LeftRmGripperUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__LeftRmGripperUnitEnum__init(msg: *mut LeftRmGripperUnitEnum) -> bool;
    fn protocol__msg__LeftRmGripperUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LeftRmGripperUnitEnum>, size: usize) -> bool;
    fn protocol__msg__LeftRmGripperUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LeftRmGripperUnitEnum>);
    fn protocol__msg__LeftRmGripperUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LeftRmGripperUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<LeftRmGripperUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__LeftRmGripperUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: LEFT_RM_GRIPPER
/// 左 RM 夹爪获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LeftRmGripperUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl LeftRmGripperUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 左夹爪电机正常
    pub const MOTOR_NORMAL: u32 = 16;

    /// 左夹爪电机过压
    pub const OVER_VOLTAGE: u32 = 17;

    /// 左夹爪电机欠压
    pub const UNDER_VOLTAGE: u32 = 18;

    /// 左夹爪电机过流
    pub const OVER_CURRENT: u32 = 19;

    /// 左夹爪电机MOS过温
    pub const MOS_OVER_TEMP: u32 = 20;

    /// 左夹爪电机线圈过热
    pub const MOTOR_OVER_HEAT: u32 = 21;

    /// 左夹爪电机通讯丢失
    pub const COMMUNICATION_LOST: u32 = 22;

    /// 左夹爪电机过载
    pub const OVERLOAD: u32 = 23;

    /// 左夹爪电机缺相
    pub const PHASE_LOSS: u32 = 24;

    /// 左夹爪电机短路
    pub const MOTOR_SHORT_CIRCUIT: u32 = 25;

    /// 左夹爪电机堵转
    pub const MOTOR_STALL: u32 = 26;

    /// 左夹爪电机复位故障
    pub const RESET_FAULT: u32 = 27;

}


impl Default for LeftRmGripperUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__LeftRmGripperUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__LeftRmGripperUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LeftRmGripperUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__LeftRmGripperUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__LeftRmGripperUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__LeftRmGripperUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LeftRmGripperUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LeftRmGripperUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/LeftRmGripperUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__LeftRmGripperUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__LeftTianjiArmErrorEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__LeftTianjiArmErrorEnum__init(msg: *mut LeftTianjiArmErrorEnum) -> bool;
    fn protocol__msg__LeftTianjiArmErrorEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LeftTianjiArmErrorEnum>, size: usize) -> bool;
    fn protocol__msg__LeftTianjiArmErrorEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LeftTianjiArmErrorEnum>);
    fn protocol__msg__LeftTianjiArmErrorEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LeftTianjiArmErrorEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<LeftTianjiArmErrorEnum>) -> bool;
}

// Corresponds to protocol__msg__LeftTianjiArmErrorEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: LEFT_TIANJI_ARM
/// 天机左臂获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LeftTianjiArmErrorEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl LeftTianjiArmErrorEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_MOTOR_NORMAL: u32 = 16;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_MOTOR_ABNORMAL: u32 = 17;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J2_MOTOR_NORMAL: u32 = 32;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J2_MOTOR_ABNORMAL: u32 = 33;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J3_MOTOR_NORMAL: u32 = 48;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J3_MOTOR_ABNORMAL: u32 = 49;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J4_MOTOR_NORMAL: u32 = 64;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J4_MOTOR_ABNORMAL: u32 = 65;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J5_MOTOR_NORMAL: u32 = 80;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J5_MOTOR_ABNORMAL: u32 = 81;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J6_MOTOR_NORMAL: u32 = 96;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J6_MOTOR_ABNORMAL: u32 = 97;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J7_MOTOR_NORMAL: u32 = 112;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J7_MOTOR_ABNORMAL: u32 = 113;

}


impl Default for LeftTianjiArmErrorEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__LeftTianjiArmErrorEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__LeftTianjiArmErrorEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LeftTianjiArmErrorEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__LeftTianjiArmErrorEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__LeftTianjiArmErrorEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__LeftTianjiArmErrorEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LeftTianjiArmErrorEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LeftTianjiArmErrorEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/LeftTianjiArmErrorEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__LeftTianjiArmErrorEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__LeftTianjiArmUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__LeftTianjiArmUnitEnum__init(msg: *mut LeftTianjiArmUnitEnum) -> bool;
    fn protocol__msg__LeftTianjiArmUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LeftTianjiArmUnitEnum>, size: usize) -> bool;
    fn protocol__msg__LeftTianjiArmUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LeftTianjiArmUnitEnum>);
    fn protocol__msg__LeftTianjiArmUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LeftTianjiArmUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<LeftTianjiArmUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__LeftTianjiArmUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: LEFT_TIANJI_ARM
/// 天机左臂获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LeftTianjiArmUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl LeftTianjiArmUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_MOTOR_NORMAL: u32 = 16;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_MOTOR_ABNORMAL: u32 = 17;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J2_MOTOR_NORMAL: u32 = 32;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J2_MOTOR_ABNORMAL: u32 = 33;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J3_MOTOR_NORMAL: u32 = 48;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J3_MOTOR_ABNORMAL: u32 = 49;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J4_MOTOR_NORMAL: u32 = 64;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J4_MOTOR_ABNORMAL: u32 = 65;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J5_MOTOR_NORMAL: u32 = 80;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J5_MOTOR_ABNORMAL: u32 = 81;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J6_MOTOR_NORMAL: u32 = 96;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J6_MOTOR_ABNORMAL: u32 = 97;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J7_MOTOR_NORMAL: u32 = 112;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J7_MOTOR_ABNORMAL: u32 = 113;

}


impl Default for LeftTianjiArmUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__LeftTianjiArmUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__LeftTianjiArmUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LeftTianjiArmUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__LeftTianjiArmUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__LeftTianjiArmUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__LeftTianjiArmUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LeftTianjiArmUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LeftTianjiArmUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/LeftTianjiArmUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__LeftTianjiArmUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__MasterLeftArmErrorEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__MasterLeftArmErrorEnum__init(msg: *mut MasterLeftArmErrorEnum) -> bool;
    fn protocol__msg__MasterLeftArmErrorEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MasterLeftArmErrorEnum>, size: usize) -> bool;
    fn protocol__msg__MasterLeftArmErrorEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MasterLeftArmErrorEnum>);
    fn protocol__msg__MasterLeftArmErrorEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MasterLeftArmErrorEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<MasterLeftArmErrorEnum>) -> bool;
}

// Corresponds to protocol__msg__MasterLeftArmErrorEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: MASTER_LEFT_ARM
/// 左主臂电机获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MasterLeftArmErrorEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl MasterLeftArmErrorEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 左主臂J1电机正常
    pub const J1_MOTOR_NORMAL: u32 = 16;

    /// 左主臂J1轴过压
    pub const J1_OVER_VOLTAGE: u32 = 17;

    /// 左主臂J1轴欠压
    pub const J1_UNDER_VOLTAGE: u32 = 18;

    /// 左主臂J1过流
    pub const J1_OVER_CURRENT: u32 = 19;

    /// 左主臂J1 MOS过热
    pub const J1_MOS_OVER_TEMP: u32 = 20;

    /// 左主臂J1电机过热
    pub const J1_MOTOR_OVER_HEAT: u32 = 21;

    /// 左主臂J1通讯丢失
    pub const J1_COMMUNICATION_LOST: u32 = 22;

    /// 左主臂J1过载
    pub const J1_OVERLOAD: u32 = 23;

    /// 左主臂J2电机正常
    pub const J2_MOTOR_NORMAL: u32 = 32;

    /// 左主臂J2轴过压
    pub const J2_OVER_VOLTAGE: u32 = 33;

    /// 左主臂J2轴欠压
    pub const J2_UNDER_VOLTAGE: u32 = 34;

    /// 左主臂J2过流
    pub const J2_OVER_CURRENT: u32 = 35;

    /// 左主臂J2 MOS过热
    pub const J2_MOS_OVER_TEMP: u32 = 36;

    /// 左主臂J2电机过热
    pub const J2_MOTOR_OVER_HEAT: u32 = 37;

    /// 左主臂J2通讯丢失
    pub const J2_COMMUNICATION_LOST: u32 = 38;

    /// 左主臂J2过载
    pub const J2_OVERLOAD: u32 = 39;

    /// 左主臂J3电机正常
    pub const J3_MOTOR_NORMAL: u32 = 48;

    /// 左主臂J3轴过压
    pub const J3_OVER_VOLTAGE: u32 = 49;

    /// 左主臂J3轴欠压
    pub const J3_UNDER_VOLTAGE: u32 = 50;

    /// 左主臂J3过流
    pub const J3_OVER_CURRENT: u32 = 51;

    /// 左主臂J3 MOS过热
    pub const J3_MOS_OVER_TEMP: u32 = 52;

    /// 左主臂J3电机过热
    pub const J3_MOTOR_OVER_HEAT: u32 = 53;

    /// 左主臂J3通讯丢失
    pub const J3_COMMUNICATION_LOST: u32 = 54;

    /// 左主臂J3过载
    pub const J3_OVERLOAD: u32 = 55;

    /// 左主臂J4电机正常
    pub const J4_MOTOR_NORMAL: u32 = 64;

    /// 左主臂J4轴过压
    pub const J4_OVER_VOLTAGE: u32 = 65;

    /// 左主臂J4轴欠压
    pub const J4_UNDER_VOLTAGE: u32 = 66;

    /// 左主臂J4过流
    pub const J4_OVER_CURRENT: u32 = 67;

    /// 左主臂J4 MOS过热
    pub const J4_MOS_OVER_TEMP: u32 = 68;

    /// 左主臂J4电机过热
    pub const J4_MOTOR_OVER_HEAT: u32 = 69;

    /// 左主臂J4通讯丢失
    pub const J4_COMMUNICATION_LOST: u32 = 70;

    /// 左主臂J4过载
    pub const J4_OVERLOAD: u32 = 71;

    /// 左主臂J5电机正常
    pub const J5_MOTOR_NORMAL: u32 = 80;

    /// 左主臂J5轴过压
    pub const J5_OVER_VOLTAGE: u32 = 81;

    /// 左主臂J5轴欠压
    pub const J5_UNDER_VOLTAGE: u32 = 82;

    /// 左主臂J5过流
    pub const J5_OVER_CURRENT: u32 = 83;

    /// 左主臂J5 MOS过热
    pub const J5_MOS_OVER_TEMP: u32 = 84;

    /// 左主臂J5电机过热
    pub const J5_MOTOR_OVER_HEAT: u32 = 85;

    /// 左主臂J5通讯丢失
    pub const J5_COMMUNICATION_LOST: u32 = 86;

    /// 左主臂J5过载
    pub const J5_OVERLOAD: u32 = 87;

    /// 左主臂J6电机正常
    pub const J6_MOTOR_NORMAL: u32 = 96;

    /// 左主臂J6轴过压
    pub const J6_OVER_VOLTAGE: u32 = 97;

    /// 左主臂J6轴欠压
    pub const J6_UNDER_VOLTAGE: u32 = 98;

    /// 左主臂J6过流
    pub const J6_OVER_CURRENT: u32 = 99;

    /// 左主臂J6 MOS过热
    pub const J6_MOS_OVER_TEMP: u32 = 100;

    /// 左主臂J6电机过热
    pub const J6_MOTOR_OVER_HEAT: u32 = 101;

    /// 左主臂J6通讯丢失
    pub const J6_COMMUNICATION_LOST: u32 = 102;

    /// 左主臂J6过载
    pub const J6_OVERLOAD: u32 = 103;

}


impl Default for MasterLeftArmErrorEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__MasterLeftArmErrorEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__MasterLeftArmErrorEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MasterLeftArmErrorEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MasterLeftArmErrorEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MasterLeftArmErrorEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MasterLeftArmErrorEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MasterLeftArmErrorEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MasterLeftArmErrorEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/MasterLeftArmErrorEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__MasterLeftArmErrorEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__MasterLeftArmUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__MasterLeftArmUnitEnum__init(msg: *mut MasterLeftArmUnitEnum) -> bool;
    fn protocol__msg__MasterLeftArmUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MasterLeftArmUnitEnum>, size: usize) -> bool;
    fn protocol__msg__MasterLeftArmUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MasterLeftArmUnitEnum>);
    fn protocol__msg__MasterLeftArmUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MasterLeftArmUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<MasterLeftArmUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__MasterLeftArmUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: MASTER_LEFT_ARM
/// 左主臂电机获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MasterLeftArmUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl MasterLeftArmUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 左主臂J1电机正常
    pub const J1_MOTOR_NORMAL: u32 = 16;

    /// 左主臂J1轴过压
    pub const J1_OVER_VOLTAGE: u32 = 17;

    /// 左主臂J1轴欠压
    pub const J1_UNDER_VOLTAGE: u32 = 18;

    /// 左主臂J1过流
    pub const J1_OVER_CURRENT: u32 = 19;

    /// 左主臂J1 MOS过热
    pub const J1_MOS_OVER_TEMP: u32 = 20;

    /// 左主臂J1电机过热
    pub const J1_MOTOR_OVER_HEAT: u32 = 21;

    /// 左主臂J1通讯丢失
    pub const J1_COMMUNICATION_LOST: u32 = 22;

    /// 左主臂J1过载
    pub const J1_OVERLOAD: u32 = 23;

    /// 左主臂J2电机正常
    pub const J2_MOTOR_NORMAL: u32 = 32;

    /// 左主臂J2轴过压
    pub const J2_OVER_VOLTAGE: u32 = 33;

    /// 左主臂J2轴欠压
    pub const J2_UNDER_VOLTAGE: u32 = 34;

    /// 左主臂J2过流
    pub const J2_OVER_CURRENT: u32 = 35;

    /// 左主臂J2 MOS过热
    pub const J2_MOS_OVER_TEMP: u32 = 36;

    /// 左主臂J2电机过热
    pub const J2_MOTOR_OVER_HEAT: u32 = 37;

    /// 左主臂J2通讯丢失
    pub const J2_COMMUNICATION_LOST: u32 = 38;

    /// 左主臂J2过载
    pub const J2_OVERLOAD: u32 = 39;

    /// 左主臂J3电机正常
    pub const J3_MOTOR_NORMAL: u32 = 48;

    /// 左主臂J3轴过压
    pub const J3_OVER_VOLTAGE: u32 = 49;

    /// 左主臂J3轴欠压
    pub const J3_UNDER_VOLTAGE: u32 = 50;

    /// 左主臂J3过流
    pub const J3_OVER_CURRENT: u32 = 51;

    /// 左主臂J3 MOS过热
    pub const J3_MOS_OVER_TEMP: u32 = 52;

    /// 左主臂J3电机过热
    pub const J3_MOTOR_OVER_HEAT: u32 = 53;

    /// 左主臂J3通讯丢失
    pub const J3_COMMUNICATION_LOST: u32 = 54;

    /// 左主臂J3过载
    pub const J3_OVERLOAD: u32 = 55;

    /// 左主臂J4电机正常
    pub const J4_MOTOR_NORMAL: u32 = 64;

    /// 左主臂J4轴过压
    pub const J4_OVER_VOLTAGE: u32 = 65;

    /// 左主臂J4轴欠压
    pub const J4_UNDER_VOLTAGE: u32 = 66;

    /// 左主臂J4过流
    pub const J4_OVER_CURRENT: u32 = 67;

    /// 左主臂J4 MOS过热
    pub const J4_MOS_OVER_TEMP: u32 = 68;

    /// 左主臂J4电机过热
    pub const J4_MOTOR_OVER_HEAT: u32 = 69;

    /// 左主臂J4通讯丢失
    pub const J4_COMMUNICATION_LOST: u32 = 70;

    /// 左主臂J4过载
    pub const J4_OVERLOAD: u32 = 71;

    /// 左主臂J5电机正常
    pub const J5_MOTOR_NORMAL: u32 = 80;

    /// 左主臂J5轴过压
    pub const J5_OVER_VOLTAGE: u32 = 81;

    /// 左主臂J5轴欠压
    pub const J5_UNDER_VOLTAGE: u32 = 82;

    /// 左主臂J5过流
    pub const J5_OVER_CURRENT: u32 = 83;

    /// 左主臂J5 MOS过热
    pub const J5_MOS_OVER_TEMP: u32 = 84;

    /// 左主臂J5电机过热
    pub const J5_MOTOR_OVER_HEAT: u32 = 85;

    /// 左主臂J5通讯丢失
    pub const J5_COMMUNICATION_LOST: u32 = 86;

    /// 左主臂J5过载
    pub const J5_OVERLOAD: u32 = 87;

    /// 左主臂J6电机正常
    pub const J6_MOTOR_NORMAL: u32 = 96;

    /// 左主臂J6轴过压
    pub const J6_OVER_VOLTAGE: u32 = 97;

    /// 左主臂J6轴欠压
    pub const J6_UNDER_VOLTAGE: u32 = 98;

    /// 左主臂J6过流
    pub const J6_OVER_CURRENT: u32 = 99;

    /// 左主臂J6 MOS过热
    pub const J6_MOS_OVER_TEMP: u32 = 100;

    /// 左主臂J6电机过热
    pub const J6_MOTOR_OVER_HEAT: u32 = 101;

    /// 左主臂J6通讯丢失
    pub const J6_COMMUNICATION_LOST: u32 = 102;

    /// 左主臂J6过载
    pub const J6_OVERLOAD: u32 = 103;

}


impl Default for MasterLeftArmUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__MasterLeftArmUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__MasterLeftArmUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MasterLeftArmUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MasterLeftArmUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MasterLeftArmUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MasterLeftArmUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MasterLeftArmUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MasterLeftArmUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/MasterLeftArmUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__MasterLeftArmUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__MasterRightArmErrorEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__MasterRightArmErrorEnum__init(msg: *mut MasterRightArmErrorEnum) -> bool;
    fn protocol__msg__MasterRightArmErrorEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MasterRightArmErrorEnum>, size: usize) -> bool;
    fn protocol__msg__MasterRightArmErrorEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MasterRightArmErrorEnum>);
    fn protocol__msg__MasterRightArmErrorEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MasterRightArmErrorEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<MasterRightArmErrorEnum>) -> bool;
}

// Corresponds to protocol__msg__MasterRightArmErrorEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: MASTER_RIGHT_ARM
/// 右主臂获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MasterRightArmErrorEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl MasterRightArmErrorEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 右主臂J1电机正常
    pub const J1_MOTOR_NORMAL: u32 = 16;

    /// 右主臂J1轴过压
    pub const J1_OVER_VOLTAGE: u32 = 17;

    /// 右主臂J1轴欠压
    pub const J1_UNDER_VOLTAGE: u32 = 18;

    /// 右主臂J1过流
    pub const J1_OVER_CURRENT: u32 = 19;

    /// 右主臂J1 MOS过热
    pub const J1_MOS_OVER_TEMP: u32 = 20;

    /// 右主臂J1电机过热
    pub const J1_MOTOR_OVER_HEAT: u32 = 21;

    /// 右主臂J1通讯丢失
    pub const J1_COMMUNICATION_LOST: u32 = 22;

    /// 右主臂J1过载
    pub const J1_OVERLOAD: u32 = 23;

    /// 右主臂J2电机正常
    pub const J2_MOTOR_NORMAL: u32 = 32;

    /// 右主臂J2轴过压
    pub const J2_OVER_VOLTAGE: u32 = 33;

    /// 右主臂J2轴欠压
    pub const J2_UNDER_VOLTAGE: u32 = 34;

    /// 右主臂J2过流
    pub const J2_OVER_CURRENT: u32 = 35;

    /// 右主臂J2 MOS过热
    pub const J2_MOS_OVER_TEMP: u32 = 36;

    /// 右主臂J2电机过热
    pub const J2_MOTOR_OVER_HEAT: u32 = 37;

    /// 右主臂J2通讯丢失
    pub const J2_COMMUNICATION_LOST: u32 = 38;

    /// 右主臂J2过载
    pub const J2_OVERLOAD: u32 = 39;

    /// 右主臂J3电机正常
    pub const J3_MOTOR_NORMAL: u32 = 48;

    /// 右主臂J3轴过压
    pub const J3_OVER_VOLTAGE: u32 = 49;

    /// 右主臂J3轴欠压
    pub const J3_UNDER_VOLTAGE: u32 = 50;

    /// 右主臂J3过流
    pub const J3_OVER_CURRENT: u32 = 51;

    /// 右主臂J3 MOS过热
    pub const J3_MOS_OVER_TEMP: u32 = 52;

    /// 右主臂J3电机过热
    pub const J3_MOTOR_OVER_HEAT: u32 = 53;

    /// 右主臂J3通讯丢失
    pub const J3_COMMUNICATION_LOST: u32 = 54;

    /// 右主臂J3过载
    pub const J3_OVERLOAD: u32 = 55;

    /// 右主臂J4电机正常
    pub const J4_MOTOR_NORMAL: u32 = 64;

    /// 右主臂J4轴过压
    pub const J4_OVER_VOLTAGE: u32 = 65;

    /// 右主臂J4轴欠压
    pub const J4_UNDER_VOLTAGE: u32 = 66;

    /// 右主臂J4过流
    pub const J4_OVER_CURRENT: u32 = 67;

    /// 右主臂J4 MOS过热
    pub const J4_MOS_OVER_TEMP: u32 = 68;

    /// 右主臂J4电机过热
    pub const J4_MOTOR_OVER_HEAT: u32 = 69;

    /// 右主臂J4通讯丢失
    pub const J4_COMMUNICATION_LOST: u32 = 70;

    /// 右主臂J4过载
    pub const J4_OVERLOAD: u32 = 71;

    /// 右主臂J5电机正常
    pub const J5_MOTOR_NORMAL: u32 = 80;

    /// 右主臂J5轴过压
    pub const J5_OVER_VOLTAGE: u32 = 81;

    /// 右主臂J5轴欠压
    pub const J5_UNDER_VOLTAGE: u32 = 82;

    /// 右主臂J5过流
    pub const J5_OVER_CURRENT: u32 = 83;

    /// 右主臂J5 MOS过热
    pub const J5_MOS_OVER_TEMP: u32 = 84;

    /// 右主臂J5电机过热
    pub const J5_MOTOR_OVER_HEAT: u32 = 85;

    /// 右主臂J5通讯丢失
    pub const J5_COMMUNICATION_LOST: u32 = 86;

    /// 右主臂J5过载
    pub const J5_OVERLOAD: u32 = 87;

    /// 右主臂J6电机正常
    pub const J6_MOTOR_NORMAL: u32 = 96;

    /// 右主臂J6轴过压
    pub const J6_OVER_VOLTAGE: u32 = 97;

    /// 右主臂J6轴欠压
    pub const J6_UNDER_VOLTAGE: u32 = 98;

    /// 右主臂J6过流
    pub const J6_OVER_CURRENT: u32 = 99;

    /// 右主臂J6 MOS过热
    pub const J6_MOS_OVER_TEMP: u32 = 100;

    /// 右主臂J6电机过热
    pub const J6_MOTOR_OVER_HEAT: u32 = 101;

    /// 右主臂J6通讯丢失
    pub const J6_COMMUNICATION_LOST: u32 = 102;

    /// 右主臂J6过载
    pub const J6_OVERLOAD: u32 = 103;

}


impl Default for MasterRightArmErrorEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__MasterRightArmErrorEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__MasterRightArmErrorEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MasterRightArmErrorEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MasterRightArmErrorEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MasterRightArmErrorEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MasterRightArmErrorEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MasterRightArmErrorEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MasterRightArmErrorEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/MasterRightArmErrorEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__MasterRightArmErrorEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__MasterRightArmUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__MasterRightArmUnitEnum__init(msg: *mut MasterRightArmUnitEnum) -> bool;
    fn protocol__msg__MasterRightArmUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MasterRightArmUnitEnum>, size: usize) -> bool;
    fn protocol__msg__MasterRightArmUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MasterRightArmUnitEnum>);
    fn protocol__msg__MasterRightArmUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MasterRightArmUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<MasterRightArmUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__MasterRightArmUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: MASTER_RIGHT_ARM
/// 右主臂获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MasterRightArmUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl MasterRightArmUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 右主臂J1电机正常
    pub const J1_MOTOR_NORMAL: u32 = 16;

    /// 右主臂J1轴过压
    pub const J1_OVER_VOLTAGE: u32 = 17;

    /// 右主臂J1轴欠压
    pub const J1_UNDER_VOLTAGE: u32 = 18;

    /// 右主臂J1过流
    pub const J1_OVER_CURRENT: u32 = 19;

    /// 右主臂J1 MOS过热
    pub const J1_MOS_OVER_TEMP: u32 = 20;

    /// 右主臂J1电机过热
    pub const J1_MOTOR_OVER_HEAT: u32 = 21;

    /// 右主臂J1通讯丢失
    pub const J1_COMMUNICATION_LOST: u32 = 22;

    /// 右主臂J1过载
    pub const J1_OVERLOAD: u32 = 23;

    /// 右主臂J2电机正常
    pub const J2_MOTOR_NORMAL: u32 = 32;

    /// 右主臂J2轴过压
    pub const J2_OVER_VOLTAGE: u32 = 33;

    /// 右主臂J2轴欠压
    pub const J2_UNDER_VOLTAGE: u32 = 34;

    /// 右主臂J2过流
    pub const J2_OVER_CURRENT: u32 = 35;

    /// 右主臂J2 MOS过热
    pub const J2_MOS_OVER_TEMP: u32 = 36;

    /// 右主臂J2电机过热
    pub const J2_MOTOR_OVER_HEAT: u32 = 37;

    /// 右主臂J2通讯丢失
    pub const J2_COMMUNICATION_LOST: u32 = 38;

    /// 右主臂J2过载
    pub const J2_OVERLOAD: u32 = 39;

    /// 右主臂J3电机正常
    pub const J3_MOTOR_NORMAL: u32 = 48;

    /// 右主臂J3轴过压
    pub const J3_OVER_VOLTAGE: u32 = 49;

    /// 右主臂J3轴欠压
    pub const J3_UNDER_VOLTAGE: u32 = 50;

    /// 右主臂J3过流
    pub const J3_OVER_CURRENT: u32 = 51;

    /// 右主臂J3 MOS过热
    pub const J3_MOS_OVER_TEMP: u32 = 52;

    /// 右主臂J3电机过热
    pub const J3_MOTOR_OVER_HEAT: u32 = 53;

    /// 右主臂J3通讯丢失
    pub const J3_COMMUNICATION_LOST: u32 = 54;

    /// 右主臂J3过载
    pub const J3_OVERLOAD: u32 = 55;

    /// 右主臂J4电机正常
    pub const J4_MOTOR_NORMAL: u32 = 64;

    /// 右主臂J4轴过压
    pub const J4_OVER_VOLTAGE: u32 = 65;

    /// 右主臂J4轴欠压
    pub const J4_UNDER_VOLTAGE: u32 = 66;

    /// 右主臂J4过流
    pub const J4_OVER_CURRENT: u32 = 67;

    /// 右主臂J4 MOS过热
    pub const J4_MOS_OVER_TEMP: u32 = 68;

    /// 右主臂J4电机过热
    pub const J4_MOTOR_OVER_HEAT: u32 = 69;

    /// 右主臂J4通讯丢失
    pub const J4_COMMUNICATION_LOST: u32 = 70;

    /// 右主臂J4过载
    pub const J4_OVERLOAD: u32 = 71;

    /// 右主臂J5电机正常
    pub const J5_MOTOR_NORMAL: u32 = 80;

    /// 右主臂J5轴过压
    pub const J5_OVER_VOLTAGE: u32 = 81;

    /// 右主臂J5轴欠压
    pub const J5_UNDER_VOLTAGE: u32 = 82;

    /// 右主臂J5过流
    pub const J5_OVER_CURRENT: u32 = 83;

    /// 右主臂J5 MOS过热
    pub const J5_MOS_OVER_TEMP: u32 = 84;

    /// 右主臂J5电机过热
    pub const J5_MOTOR_OVER_HEAT: u32 = 85;

    /// 右主臂J5通讯丢失
    pub const J5_COMMUNICATION_LOST: u32 = 86;

    /// 右主臂J5过载
    pub const J5_OVERLOAD: u32 = 87;

    /// 右主臂J6电机正常
    pub const J6_MOTOR_NORMAL: u32 = 96;

    /// 右主臂J6轴过压
    pub const J6_OVER_VOLTAGE: u32 = 97;

    /// 右主臂J6轴欠压
    pub const J6_UNDER_VOLTAGE: u32 = 98;

    /// 右主臂J6过流
    pub const J6_OVER_CURRENT: u32 = 99;

    /// 右主臂J6 MOS过热
    pub const J6_MOS_OVER_TEMP: u32 = 100;

    /// 右主臂J6电机过热
    pub const J6_MOTOR_OVER_HEAT: u32 = 101;

    /// 右主臂J6通讯丢失
    pub const J6_COMMUNICATION_LOST: u32 = 102;

    /// 右主臂J6过载
    pub const J6_OVERLOAD: u32 = 103;

}


impl Default for MasterRightArmUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__MasterRightArmUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__MasterRightArmUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MasterRightArmUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MasterRightArmUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MasterRightArmUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MasterRightArmUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MasterRightArmUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MasterRightArmUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/MasterRightArmUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__MasterRightArmUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__MotionUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__MotionUnitEnum__init(msg: *mut MotionUnitEnum) -> bool;
    fn protocol__msg__MotionUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotionUnitEnum>, size: usize) -> bool;
    fn protocol__msg__MotionUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotionUnitEnum>);
    fn protocol__msg__MotionUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotionUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<MotionUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__MotionUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotionUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl MotionUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REALTIME_CONTROLLER: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MOVEIT_SERVER: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const LEFT_ARM: u8 = 17;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RIGHT_ARM: u8 = 18;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const LEFT_TIANJI_ARM: u8 = 19;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RIGHT_TIANJI_ARM: u8 = 20;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const LEFT_RM_GRIPPER: u8 = 81;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RIGHT_RM_GRIPPER: u8 = 82;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TI5_WAIST: u8 = 178;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KINCO_LIFT_WAIST: u8 = 177;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MASTER_LEFT_ARM: u8 = 33;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MASTER_RIGHT_ARM: u8 = 34;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const QP_CONTROLLER: u8 = 21;

}


impl Default for MotionUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__MotionUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__MotionUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotionUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MotionUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MotionUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MotionUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotionUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotionUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/MotionUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__MotionUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__MoveitServerErrorEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__MoveitServerErrorEnum__init(msg: *mut MoveitServerErrorEnum) -> bool;
    fn protocol__msg__MoveitServerErrorEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveitServerErrorEnum>, size: usize) -> bool;
    fn protocol__msg__MoveitServerErrorEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveitServerErrorEnum>);
    fn protocol__msg__MoveitServerErrorEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveitServerErrorEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveitServerErrorEnum>) -> bool;
}

// Corresponds to protocol__msg__MoveitServerErrorEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: MOVEIT_SERVER
/// moveit server获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveitServerErrorEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl MoveitServerErrorEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 规划与执行成功
    pub const SUCCESS: u32 = 16;

    /// 目标无效
    pub const INVALID_TARGET: u32 = 17;

    /// 未成功获取当前位置
    pub const INVALID_CURRENT_POS: u32 = 18;

    /// Moveit规划服务(/move_action)未就绪
    pub const PLANING_ACTION_NOT_READY: u32 = 19;

    /// 规划请求被拒绝
    pub const PLANING_ACTION_REJECTED: u32 = 20;

    /// 规划超时
    pub const PLANING_TIMEOUT: u32 = 21;

    /// 规划失败
    pub const PLANING_FAILED: u32 = 22;

    /// 执行轨迹服务(/whole_body_joint_trajectory_controller/follow_joint_trajectory)未就绪
    pub const EXECUTING_ACTION_NOT_READY: u32 = 23;

    /// 轨迹执行请求被拒绝
    pub const EXECUTING_ACTION_REJECTED: u32 = 24;

    /// 轨迹执行超时
    pub const EXECUTING_TIMEOUT: u32 = 25;

    /// 轨迹执行失败
    pub const EXECUTING_FAILED: u32 = 26;

    /// 执行过程中出现异常
    pub const EXCEPTION: u32 = 27;

}


impl Default for MoveitServerErrorEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__MoveitServerErrorEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__MoveitServerErrorEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveitServerErrorEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MoveitServerErrorEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MoveitServerErrorEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MoveitServerErrorEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveitServerErrorEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveitServerErrorEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/MoveitServerErrorEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__MoveitServerErrorEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__MoveitServerUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__MoveitServerUnitEnum__init(msg: *mut MoveitServerUnitEnum) -> bool;
    fn protocol__msg__MoveitServerUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveitServerUnitEnum>, size: usize) -> bool;
    fn protocol__msg__MoveitServerUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveitServerUnitEnum>);
    fn protocol__msg__MoveitServerUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveitServerUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveitServerUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__MoveitServerUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: MOVEIT_SERVER
/// moveit server获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveitServerUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl MoveitServerUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 规划与执行成功
    pub const SUCCESS: u32 = 16;

    /// 目标无效
    pub const INVALID_TARGET: u32 = 17;

    /// 未成功获取当前位置
    pub const INVALID_CURRENT_POS: u32 = 18;

    /// Moveit规划服务(/move_action)未就绪
    pub const PLANING_ACTION_NOT_READY: u32 = 19;

    /// 规划请求被拒绝
    pub const PLANING_ACTION_REJECTED: u32 = 20;

    /// 规划超时
    pub const PLANING_TIMEOUT: u32 = 21;

    /// 规划失败
    pub const PLANING_FAILED: u32 = 22;

    /// 执行轨迹服务(/whole_body_joint_trajectory_controller/follow_joint_trajectory)未就绪
    pub const EXECUTING_ACTION_NOT_READY: u32 = 23;

    /// 轨迹执行请求被拒绝
    pub const EXECUTING_ACTION_REJECTED: u32 = 24;

    /// 轨迹执行超时
    pub const EXECUTING_TIMEOUT: u32 = 25;

    /// 轨迹执行失败
    pub const EXECUTING_FAILED: u32 = 26;

    /// 执行过程中出现异常
    pub const EXCEPTION: u32 = 27;

}


impl Default for MoveitServerUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__MoveitServerUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__MoveitServerUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveitServerUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MoveitServerUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MoveitServerUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__MoveitServerUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveitServerUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveitServerUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/MoveitServerUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__MoveitServerUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__QpControllerErrorEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__QpControllerErrorEnum__init(msg: *mut QpControllerErrorEnum) -> bool;
    fn protocol__msg__QpControllerErrorEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<QpControllerErrorEnum>, size: usize) -> bool;
    fn protocol__msg__QpControllerErrorEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<QpControllerErrorEnum>);
    fn protocol__msg__QpControllerErrorEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<QpControllerErrorEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<QpControllerErrorEnum>) -> bool;
}

// Corresponds to protocol__msg__QpControllerErrorEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: QP_CONTROLLER
/// 控制器状态上报超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct QpControllerErrorEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl QpControllerErrorEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 配置加载正常
    pub const CONFIG_OK: u32 = 16;

    /// 必需参数缺失
    pub const PARAM_MISSING: u32 = 17;

    /// 参数取值非法（范围/类型）
    pub const PARAM_INVALID: u32 = 18;

    /// URDF 解析失败
    pub const URDF_PARSE_FAILED: u32 = 19;

    /// Pinocchio model 构建失败
    pub const MODEL_BUILD_FAILED: u32 = 20;

    /// 配置引用的 frame 在模型中不存在
    pub const FRAME_NOT_FOUND: u32 = 21;

    /// 配置引用的 joint 在模型中不存在
    pub const JOINT_NOT_FOUND: u32 = 22;

    /// 参数维度与模型不匹配
    pub const CONFIG_DIM_MISMATCH: u32 = 23;

    /// 硬件接口正常
    pub const HW_INTERFACE_OK: u32 = 32;

    /// 请求的 state interface 未被导出
    pub const STATE_INTERFACE_MISSING: u32 = 33;

    /// 请求的 command interface 未被导出
    pub const COMMAND_INTERFACE_MISSING: u32 = 34;

    /// 读取到 NaN/Inf 的关节状态
    pub const STATE_READ_NAN: u32 = 35;

    /// 状态值长时间未更新
    pub const STATE_STALE: u32 = 36;

    /// 向 command interface 写入失败
    pub const COMMAND_WRITE_FAILED: u32 = 37;

    /// 运动学/动力学计算正常
    pub const KINEMATICS_OK: u32 = 48;

    /// 正运动学计算失败
    pub const FK_FAILED: u32 = 49;

    /// Jacobian 计算失败
    pub const JACOBIAN_FAILED: u32 = 50;

    /// Jacobian 接近奇异（条件数过大）
    pub const JACOBIAN_SINGULAR: u32 = 51;

    /// CRBA/RNEA 等动力学计算失败
    pub const DYNAMICS_FAILED: u32 = 52;

    /// 运动学/动力学输出含 NaN/Inf
    pub const NON_FINITE_MODEL_OUTPUT: u32 = 53;

    /// QP 求解正常
    pub const QP_OK: u32 = 64;

    /// QP 问题构建失败
    pub const QP_SETUP_FAILED: u32 = 65;

    /// QP 不可行（约束冲突）
    pub const QP_INFEASIBLE: u32 = 66;

    /// QP 无界
    pub const QP_UNBOUNDED: u32 = 67;

    /// 达到最大迭代次数但未收敛
    pub const QP_MAX_ITER: u32 = 68;

    /// 数值问题（Hessian 非正定等）
    pub const QP_NUMERICAL: u32 = 69;

    /// 求解超过实时预算
    pub const QP_SOLVER_TIMEOUT: u32 = 70;

    /// 求解结果包含 NaN/Inf
    pub const QP_SOLUTION_NAN: u32 = 71;

    /// 任务/约束正常
    pub const TASK_OK: u32 = 80;

    /// 引用了未注册的 task
    pub const TASK_NOT_REGISTERED: u32 = 81;

    /// task 输入/输出维度与模型不匹配
    pub const TASK_DIM_MISMATCH: u32 = 82;

    /// task 更新阶段异常
    pub const TASK_UPDATE_FAILED: u32 = 83;

    /// 软约束超限
    pub const CONSTRAINT_VIOLATED: u32 = 84;

    /// 轮式 no-slip 约束偏差过大
    pub const ROLLING_CONSTRAINT_SLIP: u32 = 85;

    /// 参考指令正常
    pub const REFERENCE_OK: u32 = 96;

    /// 长时间未收到参考指令，已切换到 hold
    pub const REFERENCE_TIMEOUT: u32 = 97;

    /// 参考指令含 NaN/Inf，已丢弃
    pub const REFERENCE_NAN: u32 = 98;

    /// 参考指令维度错误
    pub const REFERENCE_DIM_MISMATCH: u32 = 99;

    /// 参考指令跳变过大，已限幅
    pub const REFERENCE_JUMP: u32 = 100;

    /// 参考位姿超出可达工作空间
    pub const REFERENCE_OUT_OF_WORKSPACE: u32 = 101;

    /// 安全状态正常
    pub const SAFETY_OK: u32 = 112;

    /// 关节位置触限
    pub const JOINT_POSITION_LIMIT: u32 = 113;

    /// 关节速度触限（已饱和）
    pub const JOINT_VELOCITY_LIMIT: u32 = 114;

    /// 关节力矩触限（已饱和）
    pub const JOINT_TORQUE_LIMIT: u32 = 115;

    /// 末端速度触限
    pub const CARTESIAN_VELOCITY_LIMIT: u32 = 116;

    /// 自碰撞即将发生
    pub const SELF_COLLISION_IMMINENT: u32 = 117;

    /// 急停已触发
    pub const EMERGENCY_STOP: u32 = 118;

    /// 里程计/滤波正常
    pub const ODOM_OK: u32 = 128;

    /// 里程计/位姿跳变被检测到
    pub const ODOM_JUMP_DETECTED: u32 = 129;

    /// 滤波器发散
    pub const FILTER_DIVERGED: u32 = 130;

    /// 滤波器输入含 NaN/Inf
    pub const FILTER_INPUT_NAN: u32 = 131;

    /// 实时性正常
    pub const TIMING_OK: u32 = 144;

    /// 单次 update 超出控制周期
    pub const CONTROL_LOOP_OVERRUN: u32 = 145;

    /// update 传入的 period 非法
    pub const PERIOD_INVALID: u32 = 146;

    /// 时间戳回退或跳变
    pub const CLOCK_JUMP: u32 = 147;

}


impl Default for QpControllerErrorEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__QpControllerErrorEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__QpControllerErrorEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for QpControllerErrorEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__QpControllerErrorEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__QpControllerErrorEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__QpControllerErrorEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for QpControllerErrorEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for QpControllerErrorEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/QpControllerErrorEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__QpControllerErrorEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__QpControllerUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__QpControllerUnitEnum__init(msg: *mut QpControllerUnitEnum) -> bool;
    fn protocol__msg__QpControllerUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<QpControllerUnitEnum>, size: usize) -> bool;
    fn protocol__msg__QpControllerUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<QpControllerUnitEnum>);
    fn protocol__msg__QpControllerUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<QpControllerUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<QpControllerUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__QpControllerUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: QP_CONTROLLER
/// 控制器状态上报超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct QpControllerUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl QpControllerUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 配置加载正常
    pub const CONFIG_OK: u32 = 16;

    /// 必需参数缺失
    pub const PARAM_MISSING: u32 = 17;

    /// 参数取值非法（范围/类型）
    pub const PARAM_INVALID: u32 = 18;

    /// URDF 解析失败
    pub const URDF_PARSE_FAILED: u32 = 19;

    /// Pinocchio model 构建失败
    pub const MODEL_BUILD_FAILED: u32 = 20;

    /// 配置引用的 frame 在模型中不存在
    pub const FRAME_NOT_FOUND: u32 = 21;

    /// 配置引用的 joint 在模型中不存在
    pub const JOINT_NOT_FOUND: u32 = 22;

    /// 参数维度与模型不匹配
    pub const CONFIG_DIM_MISMATCH: u32 = 23;

    /// 硬件接口正常
    pub const HW_INTERFACE_OK: u32 = 32;

    /// 请求的 state interface 未被导出
    pub const STATE_INTERFACE_MISSING: u32 = 33;

    /// 请求的 command interface 未被导出
    pub const COMMAND_INTERFACE_MISSING: u32 = 34;

    /// 读取到 NaN/Inf 的关节状态
    pub const STATE_READ_NAN: u32 = 35;

    /// 状态值长时间未更新
    pub const STATE_STALE: u32 = 36;

    /// 向 command interface 写入失败
    pub const COMMAND_WRITE_FAILED: u32 = 37;

    /// 运动学/动力学计算正常
    pub const KINEMATICS_OK: u32 = 48;

    /// 正运动学计算失败
    pub const FK_FAILED: u32 = 49;

    /// Jacobian 计算失败
    pub const JACOBIAN_FAILED: u32 = 50;

    /// Jacobian 接近奇异（条件数过大）
    pub const JACOBIAN_SINGULAR: u32 = 51;

    /// CRBA/RNEA 等动力学计算失败
    pub const DYNAMICS_FAILED: u32 = 52;

    /// 运动学/动力学输出含 NaN/Inf
    pub const NON_FINITE_MODEL_OUTPUT: u32 = 53;

    /// QP 求解正常
    pub const QP_OK: u32 = 64;

    /// QP 问题构建失败
    pub const QP_SETUP_FAILED: u32 = 65;

    /// QP 不可行（约束冲突）
    pub const QP_INFEASIBLE: u32 = 66;

    /// QP 无界
    pub const QP_UNBOUNDED: u32 = 67;

    /// 达到最大迭代次数但未收敛
    pub const QP_MAX_ITER: u32 = 68;

    /// 数值问题（Hessian 非正定等）
    pub const QP_NUMERICAL: u32 = 69;

    /// 求解超过实时预算
    pub const QP_SOLVER_TIMEOUT: u32 = 70;

    /// 求解结果包含 NaN/Inf
    pub const QP_SOLUTION_NAN: u32 = 71;

    /// 任务/约束正常
    pub const TASK_OK: u32 = 80;

    /// 引用了未注册的 task
    pub const TASK_NOT_REGISTERED: u32 = 81;

    /// task 输入/输出维度与模型不匹配
    pub const TASK_DIM_MISMATCH: u32 = 82;

    /// task 更新阶段异常
    pub const TASK_UPDATE_FAILED: u32 = 83;

    /// 软约束超限
    pub const CONSTRAINT_VIOLATED: u32 = 84;

    /// 轮式 no-slip 约束偏差过大
    pub const ROLLING_CONSTRAINT_SLIP: u32 = 85;

    /// 参考指令正常
    pub const REFERENCE_OK: u32 = 96;

    /// 长时间未收到参考指令，已切换到 hold
    pub const REFERENCE_TIMEOUT: u32 = 97;

    /// 参考指令含 NaN/Inf，已丢弃
    pub const REFERENCE_NAN: u32 = 98;

    /// 参考指令维度错误
    pub const REFERENCE_DIM_MISMATCH: u32 = 99;

    /// 参考指令跳变过大，已限幅
    pub const REFERENCE_JUMP: u32 = 100;

    /// 参考位姿超出可达工作空间
    pub const REFERENCE_OUT_OF_WORKSPACE: u32 = 101;

    /// 安全状态正常
    pub const SAFETY_OK: u32 = 112;

    /// 关节位置触限
    pub const JOINT_POSITION_LIMIT: u32 = 113;

    /// 关节速度触限（已饱和）
    pub const JOINT_VELOCITY_LIMIT: u32 = 114;

    /// 关节力矩触限（已饱和）
    pub const JOINT_TORQUE_LIMIT: u32 = 115;

    /// 末端速度触限
    pub const CARTESIAN_VELOCITY_LIMIT: u32 = 116;

    /// 自碰撞即将发生
    pub const SELF_COLLISION_IMMINENT: u32 = 117;

    /// 急停已触发
    pub const EMERGENCY_STOP: u32 = 118;

    /// 里程计/滤波正常
    pub const ODOM_OK: u32 = 128;

    /// 里程计/位姿跳变被检测到
    pub const ODOM_JUMP_DETECTED: u32 = 129;

    /// 滤波器发散
    pub const FILTER_DIVERGED: u32 = 130;

    /// 滤波器输入含 NaN/Inf
    pub const FILTER_INPUT_NAN: u32 = 131;

    /// 实时性正常
    pub const TIMING_OK: u32 = 144;

    /// 单次 update 超出控制周期
    pub const CONTROL_LOOP_OVERRUN: u32 = 145;

    /// update 传入的 period 非法
    pub const PERIOD_INVALID: u32 = 146;

    /// 时间戳回退或跳变
    pub const CLOCK_JUMP: u32 = 147;

}


impl Default for QpControllerUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__QpControllerUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__QpControllerUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for QpControllerUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__QpControllerUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__QpControllerUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__QpControllerUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for QpControllerUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for QpControllerUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/QpControllerUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__QpControllerUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__RealtimeControllerErrorEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__RealtimeControllerErrorEnum__init(msg: *mut RealtimeControllerErrorEnum) -> bool;
    fn protocol__msg__RealtimeControllerErrorEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RealtimeControllerErrorEnum>, size: usize) -> bool;
    fn protocol__msg__RealtimeControllerErrorEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RealtimeControllerErrorEnum>);
    fn protocol__msg__RealtimeControllerErrorEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RealtimeControllerErrorEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<RealtimeControllerErrorEnum>) -> bool;
}

// Corresponds to protocol__msg__RealtimeControllerErrorEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: REALTIME_CONTROLLER
/// 安全控制器状态获取超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RealtimeControllerErrorEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl RealtimeControllerErrorEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 正常工作状态
    pub const IS_WORKING: u32 = 16;

    /// 执行器控制模式切换中
    pub const IS_CONTROLMODECHANGED: u32 = 17;

    /// 插值轨迹运行中
    pub const IS_TRAJRUNNING: u32 = 18;

    /// 碰撞回退
    pub const IS_BACKOFF: u32 = 19;

    /// 限位回退
    pub const IS_AVOIDLIMITS: u32 = 20;

    /// 软急停，执行器下使能
    pub const IS_SOFTSTOP: u32 = 21;

    /// 硬急停，执行器下电
    pub const IS_ESTOPPED: u32 = 22;

    /// 执行器正常，等待启动
    pub const IS_READYFORRESETACK: u32 = 23;

    /// 内部错误
    pub const IS_INTERNALERROR: u32 = 24;

    /// 升降腰正在回零
    pub const IS_LIFTWAISTHOMING: u32 = 25;

}


impl Default for RealtimeControllerErrorEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__RealtimeControllerErrorEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__RealtimeControllerErrorEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RealtimeControllerErrorEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RealtimeControllerErrorEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RealtimeControllerErrorEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RealtimeControllerErrorEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RealtimeControllerErrorEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RealtimeControllerErrorEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/RealtimeControllerErrorEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__RealtimeControllerErrorEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__RealtimeControllerUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__RealtimeControllerUnitEnum__init(msg: *mut RealtimeControllerUnitEnum) -> bool;
    fn protocol__msg__RealtimeControllerUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RealtimeControllerUnitEnum>, size: usize) -> bool;
    fn protocol__msg__RealtimeControllerUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RealtimeControllerUnitEnum>);
    fn protocol__msg__RealtimeControllerUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RealtimeControllerUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<RealtimeControllerUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__RealtimeControllerUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: REALTIME_CONTROLLER
/// 安全控制器状态获取超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RealtimeControllerUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl RealtimeControllerUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 正常工作状态
    pub const IS_WORKING: u32 = 16;

    /// 执行器控制模式切换中
    pub const IS_CONTROLMODECHANGED: u32 = 17;

    /// 插值轨迹运行中
    pub const IS_TRAJRUNNING: u32 = 18;

    /// 碰撞回退
    pub const IS_BACKOFF: u32 = 19;

    /// 限位回退
    pub const IS_AVOIDLIMITS: u32 = 20;

    /// 软急停，执行器下使能
    pub const IS_SOFTSTOP: u32 = 21;

    /// 硬急停，执行器下电
    pub const IS_ESTOPPED: u32 = 22;

    /// 执行器正常，等待启动
    pub const IS_READYFORRESETACK: u32 = 23;

    /// 内部错误
    pub const IS_INTERNALERROR: u32 = 24;

    /// 升降腰正在回零
    pub const IS_LIFTWAISTHOMING: u32 = 25;

}


impl Default for RealtimeControllerUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__RealtimeControllerUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__RealtimeControllerUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RealtimeControllerUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RealtimeControllerUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RealtimeControllerUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RealtimeControllerUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RealtimeControllerUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RealtimeControllerUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/RealtimeControllerUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__RealtimeControllerUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__RightArmErrorEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__RightArmErrorEnum__init(msg: *mut RightArmErrorEnum) -> bool;
    fn protocol__msg__RightArmErrorEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RightArmErrorEnum>, size: usize) -> bool;
    fn protocol__msg__RightArmErrorEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RightArmErrorEnum>);
    fn protocol__msg__RightArmErrorEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RightArmErrorEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<RightArmErrorEnum>) -> bool;
}

// Corresponds to protocol__msg__RightArmErrorEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: RIGHT_ARM
/// 右臂硬件获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RightArmErrorEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl RightArmErrorEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 右臂J1电机正常
    pub const J1_MOTOR_NORMAL: u32 = 16;

    /// 右臂J1轴过压
    pub const J1_OVER_VOLTAGE: u32 = 17;

    /// 右臂J1轴欠压错误
    pub const J1_UNDER_VOLTAGE: u32 = 18;

    /// 右臂J1轴过流错误
    pub const J1_OVER_CURRENT: u32 = 19;

    /// 右臂J1 MOS管过热错误
    pub const J1_MOS_OVER_TEMP: u32 = 20;

    /// 右臂J1电机过热错误
    pub const J1_MOTOR_OVER_HEAT: u32 = 21;

    /// 右臂J1关节通讯丢失
    pub const J1_COMMUNICATION_LOST: u32 = 22;

    /// 右臂J1轴过载
    pub const J1_OVERLOAD: u32 = 23;

    /// 右臂J2电机正常
    pub const J2_MOTOR_NORMAL: u32 = 32;

    /// 右臂J2轴过压
    pub const J2_OVER_VOLTAGE: u32 = 33;

    /// 右臂J2轴欠压错误
    pub const J2_UNDER_VOLTAGE: u32 = 34;

    /// 右臂J2轴过流
    pub const J2_OVER_CURRENT: u32 = 35;

    /// 右臂J2电机过热错误
    pub const J2_MOTOR_OVER_HEAT: u32 = 37;

    /// 右臂J2关节通讯丢失
    pub const J2_COMMUNICATION_LOST: u32 = 38;

    /// 右臂J2轴过载
    pub const J2_OVERLOAD: u32 = 39;

    /// 右臂J3电机正常
    pub const J3_MOTOR_NORMAL: u32 = 48;

    /// 右臂J3轴过压
    pub const J3_OVER_VOLTAGE: u32 = 49;

    /// 右臂J3轴欠压错误
    pub const J3_UNDER_VOLTAGE: u32 = 50;

    /// 右臂J3轴过流
    pub const J3_OVER_CURRENT: u32 = 51;

    /// 右臂J3 MOS管过热错误
    pub const J3_MOS_OVER_TEMP: u32 = 52;

    /// 右臂J3电机过热错误
    pub const J3_MOTOR_OVER_HEAT: u32 = 53;

    /// 右臂J3关节通讯丢失
    pub const J3_COMMUNICATION_LOST: u32 = 54;

    /// 右臂J3轴过载
    pub const J3_OVERLOAD: u32 = 55;

    /// 右臂J4电机正常
    pub const J4_MOTOR_NORMAL: u32 = 64;

    /// 右臂J4轴过压
    pub const J4_OVER_VOLTAGE: u32 = 65;

    /// 右臂J4轴欠压错误
    pub const J4_UNDER_VOLTAGE: u32 = 66;

    /// 右臂J4轴过流
    pub const J4_OVER_CURRENT: u32 = 67;

    /// 右臂J4 MOS管过热错误
    pub const J4_MOS_OVER_TEMP: u32 = 68;

    /// 右臂J4电机过热错误
    pub const J4_MOTOR_OVER_HEAT: u32 = 69;

    /// 右臂J4关节通讯丢失
    pub const J4_COMMUNICATION_LOST: u32 = 70;

    /// 右臂J4轴过载
    pub const J4_OVERLOAD: u32 = 71;

    /// 右臂J5电机正常
    pub const J5_MOTOR_NORMAL: u32 = 80;

    /// 右臂J5轴过压
    pub const J5_OVER_VOLTAGE: u32 = 81;

    /// 右臂J5轴欠压错误
    pub const J5_UNDER_VOLTAGE: u32 = 82;

    /// 右臂J5轴过流
    pub const J5_OVER_CURRENT: u32 = 83;

    /// 右臂J5 MOS管过热错误
    pub const J5_MOS_OVER_TEMP: u32 = 84;

    /// 右臂J5电机过热错误
    pub const J5_MOTOR_OVER_HEAT: u32 = 85;

    /// 右臂J5关节通讯丢失
    pub const J5_COMMUNICATION_LOST: u32 = 86;

    /// 右臂J5轴过载
    pub const J5_OVERLOAD: u32 = 87;

    /// 右臂J6电机正常
    pub const J6_MOTOR_NORMAL: u32 = 96;

    /// 右臂J6轴过压
    pub const J6_OVER_VOLTAGE: u32 = 97;

    /// 右臂J6轴欠压错误
    pub const J6_UNDER_VOLTAGE: u32 = 98;

    /// 右臂J6轴过流
    pub const J6_OVER_CURRENT: u32 = 99;

    /// 右臂J6 MOS管过热错误
    pub const J6_MOS_OVER_TEMP: u32 = 100;

    /// 右臂J6电机过热错误
    pub const J6_MOTOR_OVER_HEAT: u32 = 101;

    /// 右臂J6关节通讯丢失
    pub const J6_COMMUNICATION_LOST: u32 = 102;

    /// 右臂J6轴过载
    pub const J6_OVERLOAD: u32 = 103;

    /// 右臂J2 MOS管过热错误
    pub const J2_MOS_OVER_TEMP: u32 = 36;

}


impl Default for RightArmErrorEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__RightArmErrorEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__RightArmErrorEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RightArmErrorEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RightArmErrorEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RightArmErrorEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RightArmErrorEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RightArmErrorEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RightArmErrorEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/RightArmErrorEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__RightArmErrorEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__RightArmUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__RightArmUnitEnum__init(msg: *mut RightArmUnitEnum) -> bool;
    fn protocol__msg__RightArmUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RightArmUnitEnum>, size: usize) -> bool;
    fn protocol__msg__RightArmUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RightArmUnitEnum>);
    fn protocol__msg__RightArmUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RightArmUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<RightArmUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__RightArmUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: RIGHT_ARM
/// 右臂硬件获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RightArmUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl RightArmUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 右臂J1电机正常
    pub const J1_MOTOR_NORMAL: u32 = 16;

    /// 右臂J1轴过压
    pub const J1_OVER_VOLTAGE: u32 = 17;

    /// 右臂J1轴欠压错误
    pub const J1_UNDER_VOLTAGE: u32 = 18;

    /// 右臂J1轴过流错误
    pub const J1_OVER_CURRENT: u32 = 19;

    /// 右臂J1 MOS管过热错误
    pub const J1_MOS_OVER_TEMP: u32 = 20;

    /// 右臂J1电机过热错误
    pub const J1_MOTOR_OVER_HEAT: u32 = 21;

    /// 右臂J1关节通讯丢失
    pub const J1_COMMUNICATION_LOST: u32 = 22;

    /// 右臂J1轴过载
    pub const J1_OVERLOAD: u32 = 23;

    /// 右臂J2电机正常
    pub const J2_MOTOR_NORMAL: u32 = 32;

    /// 右臂J2轴过压
    pub const J2_OVER_VOLTAGE: u32 = 33;

    /// 右臂J2轴欠压错误
    pub const J2_UNDER_VOLTAGE: u32 = 34;

    /// 右臂J2轴过流
    pub const J2_OVER_CURRENT: u32 = 35;

    /// 右臂J2电机过热错误
    pub const J2_MOTOR_OVER_HEAT: u32 = 37;

    /// 右臂J2关节通讯丢失
    pub const J2_COMMUNICATION_LOST: u32 = 38;

    /// 右臂J2轴过载
    pub const J2_OVERLOAD: u32 = 39;

    /// 右臂J3电机正常
    pub const J3_MOTOR_NORMAL: u32 = 48;

    /// 右臂J3轴过压
    pub const J3_OVER_VOLTAGE: u32 = 49;

    /// 右臂J3轴欠压错误
    pub const J3_UNDER_VOLTAGE: u32 = 50;

    /// 右臂J3轴过流
    pub const J3_OVER_CURRENT: u32 = 51;

    /// 右臂J3 MOS管过热错误
    pub const J3_MOS_OVER_TEMP: u32 = 52;

    /// 右臂J3电机过热错误
    pub const J3_MOTOR_OVER_HEAT: u32 = 53;

    /// 右臂J3关节通讯丢失
    pub const J3_COMMUNICATION_LOST: u32 = 54;

    /// 右臂J3轴过载
    pub const J3_OVERLOAD: u32 = 55;

    /// 右臂J4电机正常
    pub const J4_MOTOR_NORMAL: u32 = 64;

    /// 右臂J4轴过压
    pub const J4_OVER_VOLTAGE: u32 = 65;

    /// 右臂J4轴欠压错误
    pub const J4_UNDER_VOLTAGE: u32 = 66;

    /// 右臂J4轴过流
    pub const J4_OVER_CURRENT: u32 = 67;

    /// 右臂J4 MOS管过热错误
    pub const J4_MOS_OVER_TEMP: u32 = 68;

    /// 右臂J4电机过热错误
    pub const J4_MOTOR_OVER_HEAT: u32 = 69;

    /// 右臂J4关节通讯丢失
    pub const J4_COMMUNICATION_LOST: u32 = 70;

    /// 右臂J4轴过载
    pub const J4_OVERLOAD: u32 = 71;

    /// 右臂J5电机正常
    pub const J5_MOTOR_NORMAL: u32 = 80;

    /// 右臂J5轴过压
    pub const J5_OVER_VOLTAGE: u32 = 81;

    /// 右臂J5轴欠压错误
    pub const J5_UNDER_VOLTAGE: u32 = 82;

    /// 右臂J5轴过流
    pub const J5_OVER_CURRENT: u32 = 83;

    /// 右臂J5 MOS管过热错误
    pub const J5_MOS_OVER_TEMP: u32 = 84;

    /// 右臂J5电机过热错误
    pub const J5_MOTOR_OVER_HEAT: u32 = 85;

    /// 右臂J5关节通讯丢失
    pub const J5_COMMUNICATION_LOST: u32 = 86;

    /// 右臂J5轴过载
    pub const J5_OVERLOAD: u32 = 87;

    /// 右臂J6电机正常
    pub const J6_MOTOR_NORMAL: u32 = 96;

    /// 右臂J6轴过压
    pub const J6_OVER_VOLTAGE: u32 = 97;

    /// 右臂J6轴欠压错误
    pub const J6_UNDER_VOLTAGE: u32 = 98;

    /// 右臂J6轴过流
    pub const J6_OVER_CURRENT: u32 = 99;

    /// 右臂J6 MOS管过热错误
    pub const J6_MOS_OVER_TEMP: u32 = 100;

    /// 右臂J6电机过热错误
    pub const J6_MOTOR_OVER_HEAT: u32 = 101;

    /// 右臂J6关节通讯丢失
    pub const J6_COMMUNICATION_LOST: u32 = 102;

    /// 右臂J6轴过载
    pub const J6_OVERLOAD: u32 = 103;

    /// 右臂J2 MOS管过热错误
    pub const J2_MOS_OVER_TEMP: u32 = 36;

}


impl Default for RightArmUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__RightArmUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__RightArmUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RightArmUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RightArmUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RightArmUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RightArmUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RightArmUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RightArmUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/RightArmUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__RightArmUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__RightEndEffectorUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__RightEndEffectorUnitEnum__init(msg: *mut RightEndEffectorUnitEnum) -> bool;
    fn protocol__msg__RightEndEffectorUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RightEndEffectorUnitEnum>, size: usize) -> bool;
    fn protocol__msg__RightEndEffectorUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RightEndEffectorUnitEnum>);
    fn protocol__msg__RightEndEffectorUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RightEndEffectorUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<RightEndEffectorUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__RightEndEffectorUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: RIGHT_END_EFFECTOR

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RightEndEffectorUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl RightEndEffectorUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_OVERLOAD: u32 = 23;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_MOTOR_NORMAL: u32 = 16;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_OVER_VOLTAGE: u32 = 17;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_UNDER_VOLTAGE: u32 = 18;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_OVER_CURRENT: u32 = 19;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_MOS_OVER_TEMP: u32 = 20;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_MOTOR_OVER_HEAT: u32 = 21;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_COMMUNICATION_LOST: u32 = 22;

}


impl Default for RightEndEffectorUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__RightEndEffectorUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__RightEndEffectorUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RightEndEffectorUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RightEndEffectorUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RightEndEffectorUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RightEndEffectorUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RightEndEffectorUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RightEndEffectorUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/RightEndEffectorUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__RightEndEffectorUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__RightRmGripperErrorEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__RightRmGripperErrorEnum__init(msg: *mut RightRmGripperErrorEnum) -> bool;
    fn protocol__msg__RightRmGripperErrorEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RightRmGripperErrorEnum>, size: usize) -> bool;
    fn protocol__msg__RightRmGripperErrorEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RightRmGripperErrorEnum>);
    fn protocol__msg__RightRmGripperErrorEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RightRmGripperErrorEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<RightRmGripperErrorEnum>) -> bool;
}

// Corresponds to protocol__msg__RightRmGripperErrorEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: RIGHT_RM_GRIPPER
/// 右 RM 夹爪获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RightRmGripperErrorEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl RightRmGripperErrorEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 右夹爪电机正常
    pub const J1_MOTOR_NORMAL: u32 = 16;

    /// 右夹爪电机过压
    pub const OVER_VOLTAGE: u32 = 17;

    /// 右夹爪电机欠压
    pub const UNDER_VOLTAGE: u32 = 18;

    /// 右夹爪电机过流
    pub const OVER_CURRENT: u32 = 19;

    /// 右夹爪电机MOS过温
    pub const MOS_OVER_TEMP: u32 = 20;

    /// 右夹爪电机线圈过热
    pub const MOTOR_OVER_HEAT: u32 = 21;

    /// 右夹爪电机通讯丢失
    pub const COMMUNICATION_LOST: u32 = 22;

    /// 右夹爪电机过载
    pub const OVERLOAD: u32 = 23;

    /// 右夹爪电机缺相
    pub const PHASE_LOSS: u32 = 24;

    /// 右夹爪电机短路
    pub const MOTOR_SHORT_CIRCUIT: u32 = 25;

    /// 右夹爪电机堵转
    pub const MOTOR_STALL: u32 = 26;

    /// 右夹爪电机复位故障
    pub const RESET_FAULT: u32 = 27;

}


impl Default for RightRmGripperErrorEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__RightRmGripperErrorEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__RightRmGripperErrorEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RightRmGripperErrorEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RightRmGripperErrorEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RightRmGripperErrorEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RightRmGripperErrorEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RightRmGripperErrorEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RightRmGripperErrorEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/RightRmGripperErrorEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__RightRmGripperErrorEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__RightRmGripperUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__RightRmGripperUnitEnum__init(msg: *mut RightRmGripperUnitEnum) -> bool;
    fn protocol__msg__RightRmGripperUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RightRmGripperUnitEnum>, size: usize) -> bool;
    fn protocol__msg__RightRmGripperUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RightRmGripperUnitEnum>);
    fn protocol__msg__RightRmGripperUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RightRmGripperUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<RightRmGripperUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__RightRmGripperUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: RIGHT_RM_GRIPPER
/// 右 RM 夹爪获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RightRmGripperUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl RightRmGripperUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;

    /// 右夹爪电机正常
    pub const J1_MOTOR_NORMAL: u32 = 16;

    /// 右夹爪电机过压
    pub const OVER_VOLTAGE: u32 = 17;

    /// 右夹爪电机欠压
    pub const UNDER_VOLTAGE: u32 = 18;

    /// 右夹爪电机过流
    pub const OVER_CURRENT: u32 = 19;

    /// 右夹爪电机MOS过温
    pub const MOS_OVER_TEMP: u32 = 20;

    /// 右夹爪电机线圈过热
    pub const MOTOR_OVER_HEAT: u32 = 21;

    /// 右夹爪电机通讯丢失
    pub const COMMUNICATION_LOST: u32 = 22;

    /// 右夹爪电机过载
    pub const OVERLOAD: u32 = 23;

    /// 右夹爪电机缺相
    pub const PHASE_LOSS: u32 = 24;

    /// 右夹爪电机短路
    pub const MOTOR_SHORT_CIRCUIT: u32 = 25;

    /// 右夹爪电机堵转
    pub const MOTOR_STALL: u32 = 26;

    /// 右夹爪电机复位故障
    pub const RESET_FAULT: u32 = 27;

}


impl Default for RightRmGripperUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__RightRmGripperUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__RightRmGripperUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RightRmGripperUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RightRmGripperUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RightRmGripperUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RightRmGripperUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RightRmGripperUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RightRmGripperUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/RightRmGripperUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__RightRmGripperUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__RightTianjiArmErrorEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__RightTianjiArmErrorEnum__init(msg: *mut RightTianjiArmErrorEnum) -> bool;
    fn protocol__msg__RightTianjiArmErrorEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RightTianjiArmErrorEnum>, size: usize) -> bool;
    fn protocol__msg__RightTianjiArmErrorEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RightTianjiArmErrorEnum>);
    fn protocol__msg__RightTianjiArmErrorEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RightTianjiArmErrorEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<RightTianjiArmErrorEnum>) -> bool;
}

// Corresponds to protocol__msg__RightTianjiArmErrorEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: RIGHT_TIANJI_ARM
/// 天机右臂获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RightTianjiArmErrorEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl RightTianjiArmErrorEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_MOTOR_NORMAL: u32 = 16;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_MOTOR_ABNORMAL: u32 = 17;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J2_MOTOR_NORMAL: u32 = 32;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J2_MOTOR_ABNORMAL: u32 = 33;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J3_MOTOR_NORMAL: u32 = 48;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J3_MOTOR_ABNORMAL: u32 = 49;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J4_MOTOR_NORMAL: u32 = 64;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J4_MOTOR_ABNORMAL: u32 = 65;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J5_MOTOR_NORMAL: u32 = 80;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J5_MOTOR_ABNORMAL: u32 = 81;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J6_MOTOR_NORMAL: u32 = 96;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J6_MOTOR_ABNORMAL: u32 = 97;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J7_MOTOR_NORMAL: u32 = 112;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J7_MOTOR_ABNORMAL: u32 = 113;

}


impl Default for RightTianjiArmErrorEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__RightTianjiArmErrorEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__RightTianjiArmErrorEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RightTianjiArmErrorEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RightTianjiArmErrorEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RightTianjiArmErrorEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RightTianjiArmErrorEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RightTianjiArmErrorEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RightTianjiArmErrorEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/RightTianjiArmErrorEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__RightTianjiArmErrorEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__RightTianjiArmUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__RightTianjiArmUnitEnum__init(msg: *mut RightTianjiArmUnitEnum) -> bool;
    fn protocol__msg__RightTianjiArmUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RightTianjiArmUnitEnum>, size: usize) -> bool;
    fn protocol__msg__RightTianjiArmUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RightTianjiArmUnitEnum>);
    fn protocol__msg__RightTianjiArmUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RightTianjiArmUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<RightTianjiArmUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__RightTianjiArmUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: RIGHT_TIANJI_ARM
/// 天机右臂获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RightTianjiArmUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl RightTianjiArmUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_MOTOR_NORMAL: u32 = 16;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_MOTOR_ABNORMAL: u32 = 17;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J2_MOTOR_NORMAL: u32 = 32;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J2_MOTOR_ABNORMAL: u32 = 33;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J3_MOTOR_NORMAL: u32 = 48;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J3_MOTOR_ABNORMAL: u32 = 49;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J4_MOTOR_NORMAL: u32 = 64;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J4_MOTOR_ABNORMAL: u32 = 65;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J5_MOTOR_NORMAL: u32 = 80;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J5_MOTOR_ABNORMAL: u32 = 81;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J6_MOTOR_NORMAL: u32 = 96;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J6_MOTOR_ABNORMAL: u32 = 97;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J7_MOTOR_NORMAL: u32 = 112;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J7_MOTOR_ABNORMAL: u32 = 113;

}


impl Default for RightTianjiArmUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__RightTianjiArmUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__RightTianjiArmUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RightTianjiArmUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RightTianjiArmUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RightTianjiArmUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__RightTianjiArmUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RightTianjiArmUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RightTianjiArmUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/RightTianjiArmUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__RightTianjiArmUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__Ti5WaistErrorEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__Ti5WaistErrorEnum__init(msg: *mut Ti5WaistErrorEnum) -> bool;
    fn protocol__msg__Ti5WaistErrorEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Ti5WaistErrorEnum>, size: usize) -> bool;
    fn protocol__msg__Ti5WaistErrorEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Ti5WaistErrorEnum>);
    fn protocol__msg__Ti5WaistErrorEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Ti5WaistErrorEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<Ti5WaistErrorEnum>) -> bool;
}

// Corresponds to protocol__msg__Ti5WaistErrorEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: TI5_WAIST
/// 钛虎腰部电机获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Ti5WaistErrorEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl Ti5WaistErrorEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_MOTOR_NORMAL: u32 = 16;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_MOTOR_ABNORMAL: u32 = 17;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J2_MOTOR_NORMAL: u32 = 32;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J2_MOTOR_ABNORMAL: u32 = 33;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J3_MOTOR_NORMAL: u32 = 48;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J3_MOTOR_ABNORMAL: u32 = 49;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J4_MOTOR_NORMAL: u32 = 64;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J4_MOTOR_ABNORMAL: u32 = 65;

}


impl Default for Ti5WaistErrorEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__Ti5WaistErrorEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__Ti5WaistErrorEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Ti5WaistErrorEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__Ti5WaistErrorEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__Ti5WaistErrorEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__Ti5WaistErrorEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Ti5WaistErrorEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Ti5WaistErrorEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/Ti5WaistErrorEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__Ti5WaistErrorEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__Ti5WaistUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__Ti5WaistUnitEnum__init(msg: *mut Ti5WaistUnitEnum) -> bool;
    fn protocol__msg__Ti5WaistUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Ti5WaistUnitEnum>, size: usize) -> bool;
    fn protocol__msg__Ti5WaistUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Ti5WaistUnitEnum>);
    fn protocol__msg__Ti5WaistUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Ti5WaistUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<Ti5WaistUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__Ti5WaistUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unit: TI5_WAIST
/// 钛虎腰部电机获取状态超时

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Ti5WaistUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl Ti5WaistUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEARTBEAT_TIMEOUT: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_MOTOR_NORMAL: u32 = 16;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J1_MOTOR_ABNORMAL: u32 = 17;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J2_MOTOR_NORMAL: u32 = 32;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J2_MOTOR_ABNORMAL: u32 = 33;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J3_MOTOR_NORMAL: u32 = 48;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J3_MOTOR_ABNORMAL: u32 = 49;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J4_MOTOR_NORMAL: u32 = 64;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const J4_MOTOR_ABNORMAL: u32 = 65;

}


impl Default for Ti5WaistUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__Ti5WaistUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__Ti5WaistUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Ti5WaistUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__Ti5WaistUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__Ti5WaistUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__Ti5WaistUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Ti5WaistUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Ti5WaistUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/Ti5WaistUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__Ti5WaistUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__SpnUnitEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__SpnUnitEnum__init(msg: *mut SpnUnitEnum) -> bool;
    fn protocol__msg__SpnUnitEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SpnUnitEnum>, size: usize) -> bool;
    fn protocol__msg__SpnUnitEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SpnUnitEnum>);
    fn protocol__msg__SpnUnitEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SpnUnitEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<SpnUnitEnum>) -> bool;
}

// Corresponds to protocol__msg__SpnUnitEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// No units defined under this domain

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SpnUnitEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl SpnUnitEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RESERVED: u8 = 0;

}


impl Default for SpnUnitEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__SpnUnitEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__SpnUnitEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SpnUnitEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__SpnUnitEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__SpnUnitEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__SpnUnitEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SpnUnitEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SpnUnitEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/SpnUnitEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__SpnUnitEnum() }
  }
}


#[link(name = "protocol__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__StateEnum() -> *const std::ffi::c_void;
}

#[link(name = "protocol__rosidl_generator_c")]
extern "C" {
    fn protocol__msg__StateEnum__init(msg: *mut StateEnum) -> bool;
    fn protocol__msg__StateEnum__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StateEnum>, size: usize) -> bool;
    fn protocol__msg__StateEnum__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StateEnum>);
    fn protocol__msg__StateEnum__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StateEnum>, out_seq: *mut rosidl_runtime_rs::Sequence<StateEnum>) -> bool;
}

// Corresponds to protocol__msg__StateEnum
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StateEnum {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}

impl StateEnum {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_UNINITIALIZED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_INITIALIZED: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_RUNNING: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_ERROR: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_OFFLINE: u8 = 4;

}


impl Default for StateEnum {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !protocol__msg__StateEnum__init(&mut msg as *mut _) {
        panic!("Call to protocol__msg__StateEnum__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StateEnum {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__StateEnum__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__StateEnum__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { protocol__msg__StateEnum__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StateEnum {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StateEnum where Self: Sized {
  const TYPE_NAME: &'static str = "protocol/msg/StateEnum";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__protocol__msg__StateEnum() }
  }
}


