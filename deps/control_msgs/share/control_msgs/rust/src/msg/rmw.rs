#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__AdmittanceControllerState() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__AdmittanceControllerState__init(msg: *mut AdmittanceControllerState) -> bool;
    fn control_msgs__msg__AdmittanceControllerState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AdmittanceControllerState>, size: usize) -> bool;
    fn control_msgs__msg__AdmittanceControllerState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AdmittanceControllerState>);
    fn control_msgs__msg__AdmittanceControllerState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AdmittanceControllerState>, out_seq: *mut rosidl_runtime_rs::Sequence<AdmittanceControllerState>) -> bool;
}

// Corresponds to control_msgs__msg__AdmittanceControllerState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Admittance parameters

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AdmittanceControllerState {
    /// 6-vector of mass terms used in the admittance calculation
    pub mass: std_msgs::msg::rmw::Float64MultiArray,

    /// 6-vector of damping terms used in the admittance calculation
    pub damping: std_msgs::msg::rmw::Float64MultiArray,

    /// 6-vector of stiffness terms used in the admittance calculation
    pub stiffness: std_msgs::msg::rmw::Float64MultiArray,

    /// Frame information
    /// quaternion describing the orientation of the control frame
    pub rot_base_control: geometry_msgs::msg::rmw::Quaternion,

    /// force torque sensor transform at the reference joint configuration
    pub ref_trans_base_ft: geometry_msgs::msg::rmw::TransformStamped,

    /// 6-vector of 0/1 describing if admittance is enable in the corresponding control frame axis
    pub selected_axes: std_msgs::msg::rmw::Int8MultiArray,

    /// name of the force torque frame
    pub ft_sensor_frame: std_msgs::msg::rmw::String,

    /// State information
    /// calculated admittance position in cartesian space
    pub admittance_position: geometry_msgs::msg::rmw::TransformStamped,

    /// calculated admittance acceleration in cartesian space
    pub admittance_acceleration: geometry_msgs::msg::rmw::TwistStamped,

    /// calculated admittance velocity in cartesian space
    pub admittance_velocity: geometry_msgs::msg::rmw::TwistStamped,

    /// wrench used in the admittance calculation
    pub wrench_base: geometry_msgs::msg::rmw::WrenchStamped,

    /// calculated admittance offsets in joint space
    pub joint_state: sensor_msgs::msg::rmw::JointState,

}



impl Default for AdmittanceControllerState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__AdmittanceControllerState__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__AdmittanceControllerState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AdmittanceControllerState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__AdmittanceControllerState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__AdmittanceControllerState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__AdmittanceControllerState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AdmittanceControllerState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AdmittanceControllerState where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/AdmittanceControllerState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__AdmittanceControllerState() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__CANopenState() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__CANopenState__init(msg: *mut CANopenState) -> bool;
    fn control_msgs__msg__CANopenState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CANopenState>, size: usize) -> bool;
    fn control_msgs__msg__CANopenState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CANopenState>);
    fn control_msgs__msg__CANopenState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CANopenState>, out_seq: *mut rosidl_runtime_rs::Sequence<CANopenState>) -> bool;
}

// Corresponds to control_msgs__msg__CANopenState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message presents CANopen-specific device state information
/// Refer CiA 301 and CiA 402 application layer documentation

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CANopenState {
    /// The CANopen node ID of the device (1-127)
    pub node_id: u8,

    /// --- CiA 301 State -------------------------------------------------
    /// Network Management state, see NMTState constants below
    pub nmt_state: u8,

    /// --- CiA 402 State (for drives) ------------------------------------
    /// Drive state machine state for motion control devices, see DSP402State constants below
    pub dsp_402_state: u8,

    /// --- Error Reporting -----------------------------------------------
    /// Last Emergency (EMCY) error code received from the device
    pub last_emcy_code: u32,

}

impl CANopenState {
    /// --- NMT State Constants -------------------------------------------
    /// CiA 301 Network Management states
    /// Device is initializing
    pub const NMT_INITIALISING: u8 = 0;

    /// Device is in pre-operational state
    pub const NMT_PRE_OPERATIONAL: u8 = 127;

    /// Device is operational
    pub const NMT_OPERATIONAL: u8 = 5;

    /// Device is stopped
    pub const NMT_STOPPED: u8 = 4;

    /// --- DSP 402 State Constants ---------------------------------------
    /// CiA 402 Drive state machine states
    /// Not ready to switch on
    pub const DSP402_NOT_READY_TO_SWITCH_ON: u8 = 0;

    /// Switch on disabled
    pub const DSP402_SWITCH_ON_DISABLED: u8 = 1;

    /// Ready to switch on
    pub const DSP402_READY_TO_SWITCH_ON: u8 = 2;

    /// Switched on
    pub const DSP402_SWITCHED_ON: u8 = 3;

    /// Operation enabled
    pub const DSP402_OPERATION_ENABLED: u8 = 4;

    /// Quick stop active
    pub const DSP402_QUICK_STOP_ACTIVE: u8 = 5;

    /// Fault reaction active
    pub const DSP402_FAULT_REACTION_ACTIVE: u8 = 6;

    /// Fault state
    pub const DSP402_FAULT: u8 = 7;

}


impl Default for CANopenState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__CANopenState__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__CANopenState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CANopenState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__CANopenState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__CANopenState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__CANopenState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CANopenState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CANopenState where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/CANopenState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__CANopenState() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__DynamicInterfaceGroupValues() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__DynamicInterfaceGroupValues__init(msg: *mut DynamicInterfaceGroupValues) -> bool;
    fn control_msgs__msg__DynamicInterfaceGroupValues__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DynamicInterfaceGroupValues>, size: usize) -> bool;
    fn control_msgs__msg__DynamicInterfaceGroupValues__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DynamicInterfaceGroupValues>);
    fn control_msgs__msg__DynamicInterfaceGroupValues__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DynamicInterfaceGroupValues>, out_seq: *mut rosidl_runtime_rs::Sequence<DynamicInterfaceGroupValues>) -> bool;
}

// Corresponds to control_msgs__msg__DynamicInterfaceGroupValues
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DynamicInterfaceGroupValues {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// List of interface group names , e.g. ["flange_analog_IOs", "flange_vacuum"]
    pub interface_groups: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// Key-value pairs representing interfaces and their corresponding values for each interface group listed in `interface_groups`
    pub interface_values: rosidl_runtime_rs::Sequence<super::super::msg::rmw::InterfaceValue>,

}



impl Default for DynamicInterfaceGroupValues {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__DynamicInterfaceGroupValues__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__DynamicInterfaceGroupValues__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DynamicInterfaceGroupValues {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__DynamicInterfaceGroupValues__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__DynamicInterfaceGroupValues__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__DynamicInterfaceGroupValues__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DynamicInterfaceGroupValues {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DynamicInterfaceGroupValues where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/DynamicInterfaceGroupValues";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__DynamicInterfaceGroupValues() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__DynamicInterfaceValues() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__DynamicInterfaceValues__init(msg: *mut DynamicInterfaceValues) -> bool;
    fn control_msgs__msg__DynamicInterfaceValues__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DynamicInterfaceValues>, size: usize) -> bool;
    fn control_msgs__msg__DynamicInterfaceValues__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DynamicInterfaceValues>);
    fn control_msgs__msg__DynamicInterfaceValues__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DynamicInterfaceValues>, out_seq: *mut rosidl_runtime_rs::Sequence<DynamicInterfaceValues>) -> bool;
}

// Corresponds to control_msgs__msg__DynamicInterfaceValues
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DynamicInterfaceValues {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub states: super::super::msg::rmw::InterfaceValue,


    // This member is not documented.
    #[allow(missing_docs)]
    pub commands: super::super::msg::rmw::InterfaceValue,

}



impl Default for DynamicInterfaceValues {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__DynamicInterfaceValues__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__DynamicInterfaceValues__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DynamicInterfaceValues {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__DynamicInterfaceValues__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__DynamicInterfaceValues__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__DynamicInterfaceValues__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DynamicInterfaceValues {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DynamicInterfaceValues where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/DynamicInterfaceValues";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__DynamicInterfaceValues() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__DynamicJointState() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__DynamicJointState__init(msg: *mut DynamicJointState) -> bool;
    fn control_msgs__msg__DynamicJointState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DynamicJointState>, size: usize) -> bool;
    fn control_msgs__msg__DynamicJointState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DynamicJointState>);
    fn control_msgs__msg__DynamicJointState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DynamicJointState>, out_seq: *mut rosidl_runtime_rs::Sequence<DynamicJointState>) -> bool;
}

// Corresponds to control_msgs__msg__DynamicJointState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DynamicJointState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// List of resource names, e.g. ["arm_joint_1", "arm_joint_2", "gripper_joint"]
    pub joint_names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// Key-value pairs representing interfaces and their corresponding values for each joint listed in `joint_names`
    pub interface_values: rosidl_runtime_rs::Sequence<super::super::msg::rmw::InterfaceValue>,

}



impl Default for DynamicJointState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__DynamicJointState__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__DynamicJointState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DynamicJointState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__DynamicJointState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__DynamicJointState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__DynamicJointState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DynamicJointState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DynamicJointState where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/DynamicJointState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__DynamicJointState() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__EtherCATState() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__EtherCATState__init(msg: *mut EtherCATState) -> bool;
    fn control_msgs__msg__EtherCATState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EtherCATState>, size: usize) -> bool;
    fn control_msgs__msg__EtherCATState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EtherCATState>);
    fn control_msgs__msg__EtherCATState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EtherCATState>, out_seq: *mut rosidl_runtime_rs::Sequence<EtherCATState>) -> bool;
}

// Corresponds to control_msgs__msg__EtherCATState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message presents EtherCAT-specific device state information
/// Refer ETG.1000 EtherCAT Specification

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EtherCATState {
    /// Position of the slave on the bus (0, 1, 2...)
    pub slave_position: u16,

    /// Unique vendor identifier from the device's ESI file
    pub vendor_id: rosidl_runtime_rs::String,

    /// Unique product code for the device from the device's ESI file
    pub product_code: rosidl_runtime_rs::String,

    /// --- EtherCAT State Machine (ESM) ----------------------------------
    /// Application Layer state, see ALState constants below
    pub al_state: u8,

    /// True if the slave is in an error state
    pub has_error: bool,

    /// AL Status Code indicating the reason for an error (0 = no error)
    pub al_status_code: u16,

}

impl EtherCATState {
    /// --- Application Layer State Constants -----------------------------
    /// EtherCAT slave states according to ETG.1000
    /// INIT state - slave initialization
    pub const AL_STATE_INIT: u8 = 1;

    /// PREOP state - pre-operational, mailbox communication
    pub const AL_STATE_PREOP: u8 = 2;

    /// BOOTSTRAP state - firmware update mode
    pub const AL_STATE_BOOTSTRAP: u8 = 3;

    /// SAFEOP state - safe operational, inputs updated
    pub const AL_STATE_SAFEOP: u8 = 4;

    /// OP state - operational, full communication
    pub const AL_STATE_OP: u8 = 8;

}


impl Default for EtherCATState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__EtherCATState__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__EtherCATState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EtherCATState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__EtherCATState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__EtherCATState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__EtherCATState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EtherCATState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EtherCATState where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/EtherCATState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__EtherCATState() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__GenericHardwareState() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__GenericHardwareState__init(msg: *mut GenericHardwareState) -> bool;
    fn control_msgs__msg__GenericHardwareState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GenericHardwareState>, size: usize) -> bool;
    fn control_msgs__msg__GenericHardwareState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GenericHardwareState>);
    fn control_msgs__msg__GenericHardwareState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GenericHardwareState>, out_seq: *mut rosidl_runtime_rs::Sequence<GenericHardwareState>) -> bool;
}

// Corresponds to control_msgs__msg__GenericHardwareState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message encapsulates the general-purpose status fields, serving as a baseline for any hardware component

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GenericHardwareState {
    /// --- Health & Error ----------------------------------------------
    /// Overall health status of the device, see HealthStatus constants below
    pub health_status: u8,

    /// Array of device errors by category, see ErrorDomain constants below
    pub error_domain: rosidl_runtime_rs::Sequence<u8>,

    /// --- Operational State -------------------------------------------
    /// Current operational mode of the device, see ModeStatus constants below
    pub operational_mode: u8,

    /// Current power state of the device, see PowerState constants below
    pub power_state: u8,

    /// Current connectivity status of the device, see ConnectivityStatus constants below
    pub connectivity_status: u8,

    /// --- Vendor & Version Info ----------------------------------------
    /// Device manufacturer name, e.g. "Bosch"
    pub manufacturer: rosidl_runtime_rs::String,

    /// Device model identifier, e.g. "Lidar-XYZ-v2"
    pub model: rosidl_runtime_rs::String,

    /// Current firmware version, e.g. "1.2.3"
    pub firmware_version: rosidl_runtime_rs::String,

    /// --- Optional Details for Context ---------------------------------
    /// Provides specific quantitative values related to the enums above.
    /// e.g., for power_state, could have {key: "voltage", value: "24.1"}
    /// e.g., for connectivity, could have {key: "signal_strength", value: "-55dBm"}
    pub state_details: rosidl_runtime_rs::Sequence<diagnostic_msgs::msg::rmw::KeyValue>,

}

impl GenericHardwareState {
    /// --- Health Status Constants -------------------------------------
    /// High-level health indicators
    pub const HEALTH_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEALTH_OK: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEALTH_DEGRADED: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEALTH_WARNING: u8 = 3;

    /// Hardware stops publishing state when it returns ERROR/FATAL, how are these set/updated?
    pub const HEALTH_ERROR: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HEALTH_FATAL: u8 = 5;

    /// --- Error Domain Constants --------------------------------------
    /// Error categories
    pub const ERROR_NONE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ERROR_UNKNOWN: u8 = 1;

    /// generic hardware fault/error
    pub const ERROR_HW: u8 = 2;

    /// generic software fault/error
    pub const ERROR_SW: u8 = 3;

    /// Hardware stopped motion because position is over limits
    pub const ERROR_OVER_TRAVEL: u8 = 4;

    /// Hardware/Software emergency and safety states
    /// state of the emergency stop hardware (i.e. e-stop button state)
    pub const EMERGENCY_STOP_HW: u8 = 5;

    /// state of the emergency stop software system (over travel, pinch point)
    pub const EMERGENCY_STOP_SW: u8 = 6;

    /// state of the protective stop hardware (i.e. safety field state)
    pub const PROTECTIVE_STOP_HW: u8 = 7;

    /// state of the software protective stop
    pub const PROTECTIVE_STOP_SW: u8 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SAFETY_STOP: u8 = 9;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CALIBRATION_REQUIRED: u8 = 10;

    /// --- Operational Mode Constants ----------------------------------
    /// Mode of operation
    pub const MODE_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_MANUAL: u8 = 1;

    /// automatic mode when the driver is remote controlling the hardware
    pub const MODE_AUTO: u8 = 2;

    /// what is the expected use case for this mode?
    pub const MODE_SAFE: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_MAINTENANCE: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_JOG_MANUAL: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_ADMITTANCE: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_MONITORED_STOP: u8 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_HOLD_TO_RUN: u8 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_CARTESIAN_TWIST: u8 = 9;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_CARTESIAN_POSE: u8 = 10;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_TRAJECTORY_FORWARDING: u8 = 11;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_TRAJECTORY_STREAMING: u8 = 12;

    /// --- Power State Constants ---------------------------------------
    /// Power states
    pub const POWER_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const POWER_OFF: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const POWER_STANDBY: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const POWER_ON: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const POWER_SLEEP: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const POWER_ERROR: u8 = 5;

    /// Battery power states see BatteryState.msg
    pub const POWER_LEVEL_LOW: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const POWER_LEVEL_CRITICAL: u8 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const POWER_CHARGING: u8 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const POWER_CHARGING_ERROR: u8 = 9;

    /// --- Connectivity Status Constants -------------------------------
    /// Connectivity states
    pub const CONNECT_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONNECT_UP: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONNECT_DOWN: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONNECT_FAILURE: u8 = 3;

    /// to tell the controlling system it is struggling to communicate at rate
    pub const CONNECTION_SLOW: u8 = 4;

}


impl Default for GenericHardwareState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__GenericHardwareState__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__GenericHardwareState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GenericHardwareState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__GenericHardwareState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__GenericHardwareState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__GenericHardwareState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GenericHardwareState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GenericHardwareState where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/GenericHardwareState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__GenericHardwareState() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__GripperCommand() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__GripperCommand__init(msg: *mut GripperCommand) -> bool;
    fn control_msgs__msg__GripperCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripperCommand>, size: usize) -> bool;
    fn control_msgs__msg__GripperCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripperCommand>);
    fn control_msgs__msg__GripperCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripperCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<GripperCommand>) -> bool;
}

// Corresponds to control_msgs__msg__GripperCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub position: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_effort: f64,

}



impl Default for GripperCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__GripperCommand__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__GripperCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripperCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__GripperCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__GripperCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__GripperCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripperCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripperCommand where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/GripperCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__GripperCommand() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__HardwareDeviceDiagnostics() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__HardwareDeviceDiagnostics__init(msg: *mut HardwareDeviceDiagnostics) -> bool;
    fn control_msgs__msg__HardwareDeviceDiagnostics__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HardwareDeviceDiagnostics>, size: usize) -> bool;
    fn control_msgs__msg__HardwareDeviceDiagnostics__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HardwareDeviceDiagnostics>);
    fn control_msgs__msg__HardwareDeviceDiagnostics__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HardwareDeviceDiagnostics>, out_seq: *mut rosidl_runtime_rs::Sequence<HardwareDeviceDiagnostics>) -> bool;
}

// Corresponds to control_msgs__msg__HardwareDeviceDiagnostics
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message presents current hardware device status information

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HardwareDeviceDiagnostics {
    /// Header timestamp should be update time of device diagnostics
    pub header: std_msgs::msg::rmw::Header,

    /// Unique identifier for the device, e.g. "base_motor", "gripper_joint_1"
    pub device_id: rosidl_runtime_rs::String,

    /// --- Diagnostic Entries --------------------------------------------
    /// Key-value pairs representing diagnostic information for the device.
    pub entries: rosidl_runtime_rs::Sequence<diagnostic_msgs::msg::rmw::KeyValue>,

}



impl Default for HardwareDeviceDiagnostics {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__HardwareDeviceDiagnostics__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__HardwareDeviceDiagnostics__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HardwareDeviceDiagnostics {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__HardwareDeviceDiagnostics__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__HardwareDeviceDiagnostics__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__HardwareDeviceDiagnostics__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HardwareDeviceDiagnostics {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HardwareDeviceDiagnostics where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/HardwareDeviceDiagnostics";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__HardwareDeviceDiagnostics() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__HardwareDeviceStatus() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__HardwareDeviceStatus__init(msg: *mut HardwareDeviceStatus) -> bool;
    fn control_msgs__msg__HardwareDeviceStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HardwareDeviceStatus>, size: usize) -> bool;
    fn control_msgs__msg__HardwareDeviceStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HardwareDeviceStatus>);
    fn control_msgs__msg__HardwareDeviceStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HardwareDeviceStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<HardwareDeviceStatus>) -> bool;
}

// Corresponds to control_msgs__msg__HardwareDeviceStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message presents current hardware device status information

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HardwareDeviceStatus {
    /// Header timestamp should be update time of device status
    pub header: std_msgs::msg::rmw::Header,

    /// Unique identifier for the device, e.g. "base_motor", "gripper_joint_1"
    pub device_id: rosidl_runtime_rs::String,

    /// --- Standard-Specific States --------------------------------------
    /// States populated based on the standards relevant to this device.
    /// A device will only fill the arrays for the standards it implements, rest will be empty
    /// Generic hardware status information applicable to any device, it is suggested to fill this for all devices
    pub hardware_status: rosidl_runtime_rs::Sequence<super::super::msg::rmw::GenericHardwareState>,

    /// CANopen-specific device states (DS-301/DS-402 compliant devices)
    pub canopen_states: rosidl_runtime_rs::Sequence<super::super::msg::rmw::CANopenState>,

    /// EtherCAT-specific device states (CoE, FoE, etc.)
    pub ethercat_states: rosidl_runtime_rs::Sequence<super::super::msg::rmw::EtherCATState>,

    /// VDA5050-specific states for AGV/mobile robot devices
    pub vda5050_states: rosidl_runtime_rs::Sequence<super::super::msg::rmw::VDA5050State>,

}



impl Default for HardwareDeviceStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__HardwareDeviceStatus__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__HardwareDeviceStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HardwareDeviceStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__HardwareDeviceStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__HardwareDeviceStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__HardwareDeviceStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HardwareDeviceStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HardwareDeviceStatus where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/HardwareDeviceStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__HardwareDeviceStatus() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__HardwareDiagnostics() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__HardwareDiagnostics__init(msg: *mut HardwareDiagnostics) -> bool;
    fn control_msgs__msg__HardwareDiagnostics__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HardwareDiagnostics>, size: usize) -> bool;
    fn control_msgs__msg__HardwareDiagnostics__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HardwareDiagnostics>);
    fn control_msgs__msg__HardwareDiagnostics__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HardwareDiagnostics>, out_seq: *mut rosidl_runtime_rs::Sequence<HardwareDiagnostics>) -> bool;
}

// Corresponds to control_msgs__msg__HardwareDiagnostics
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message presents current hardware diagnostics

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HardwareDiagnostics {
    /// Header timestamp should be update time of device diagnostics
    pub header: std_msgs::msg::rmw::Header,

    /// Unique identifier per hardware component, ideally the name of the hardware derived from HardwareInfo e.g. "pal_arm"
    pub hardware_id: rosidl_runtime_rs::String,

    /// --- Device Diagnostics Aggregation ---------------------------------
    /// Diagnostics for individual devices within this hardware set
    pub hardware_device_diagnostics: rosidl_runtime_rs::Sequence<super::super::msg::rmw::HardwareDeviceDiagnostics>,

}



impl Default for HardwareDiagnostics {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__HardwareDiagnostics__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__HardwareDiagnostics__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HardwareDiagnostics {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__HardwareDiagnostics__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__HardwareDiagnostics__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__HardwareDiagnostics__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HardwareDiagnostics {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HardwareDiagnostics where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/HardwareDiagnostics";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__HardwareDiagnostics() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__HardwareStatus() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__HardwareStatus__init(msg: *mut HardwareStatus) -> bool;
    fn control_msgs__msg__HardwareStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HardwareStatus>, size: usize) -> bool;
    fn control_msgs__msg__HardwareStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HardwareStatus>);
    fn control_msgs__msg__HardwareStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HardwareStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<HardwareStatus>) -> bool;
}

// Corresponds to control_msgs__msg__HardwareStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message presents current hardware component status information

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HardwareStatus {
    /// Header timestamp should be update time of hardware status
    pub header: std_msgs::msg::rmw::Header,

    /// Unique identifier per hardware component, ideally the name of the hardware derived from HardwareInfo e.g. "pal_arm"
    pub hardware_id: rosidl_runtime_rs::String,

    /// --- Device Status Aggregation ---------------------------------
    /// An array containing the status of individual devices in the hardware component
    pub hardware_device_states: rosidl_runtime_rs::Sequence<super::super::msg::rmw::HardwareDeviceStatus>,

}



impl Default for HardwareStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__HardwareStatus__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__HardwareStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HardwareStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__HardwareStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__HardwareStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__HardwareStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HardwareStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HardwareStatus where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/HardwareStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__HardwareStatus() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__InterfaceValue() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__InterfaceValue__init(msg: *mut InterfaceValue) -> bool;
    fn control_msgs__msg__InterfaceValue__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<InterfaceValue>, size: usize) -> bool;
    fn control_msgs__msg__InterfaceValue__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<InterfaceValue>);
    fn control_msgs__msg__InterfaceValue__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<InterfaceValue>, out_seq: *mut rosidl_runtime_rs::Sequence<InterfaceValue>) -> bool;
}

// Corresponds to control_msgs__msg__InterfaceValue
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// List of resource interface names

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InterfaceValue {

    // This member is not documented.
    #[allow(missing_docs)]
    pub interface_names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// Values corresponding to the list of interfaces in `interface_names`, [1.0, 0.0] for example
    pub values: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for InterfaceValue {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__InterfaceValue__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__InterfaceValue__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for InterfaceValue {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__InterfaceValue__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__InterfaceValue__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__InterfaceValue__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for InterfaceValue {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for InterfaceValue where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/InterfaceValue";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__InterfaceValue() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__JointComponentTolerance() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__JointComponentTolerance__init(msg: *mut JointComponentTolerance) -> bool;
    fn control_msgs__msg__JointComponentTolerance__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointComponentTolerance>, size: usize) -> bool;
    fn control_msgs__msg__JointComponentTolerance__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointComponentTolerance>);
    fn control_msgs__msg__JointComponentTolerance__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointComponentTolerance>, out_seq: *mut rosidl_runtime_rs::Sequence<JointComponentTolerance>) -> bool;
}

// Corresponds to control_msgs__msg__JointComponentTolerance
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Version of JointTolerance.msg with added component field for joints with multiple degrees of freedom
/// The difference between two MultiDOFJointTrajectoryPoint cannot be represented as a single number,
/// hence we use the component field to represent how to calculate the difference in a way that can
/// be represented as a single number.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointComponentTolerance {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub component: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acceleration: f64,

}

impl JointComponentTolerance {
    /// Since each joint has multiple degrees of freedom,
    /// there can be multiple tolerances for each joint, each looking
    /// at different components.
    /// If the component is X_AXIS, Y_AXIS, or Z_AXIS, then the tolerance
    /// is only applied for the specific axis.
    /// However, if the component is TRANSLATION, then the tolerance is for
    /// the overall Euclidean distance.
    /// For these components, the units are meters, meters/sec and meters/sec^2.
    /// Z_AXIS is only valid with a floating joint, not planar.
    /// If the component is ROTATION the tolerance is measured in
    /// radians, radians/sec and radians/sec^2, computed
    /// between the difference in quaternions.
    pub const X_AXIS: u16 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const Y_AXIS: u16 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const Z_AXIS: u16 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TRANSLATION: u16 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ROTATION: u16 = 5;

}


impl Default for JointComponentTolerance {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__JointComponentTolerance__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__JointComponentTolerance__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointComponentTolerance {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__JointComponentTolerance__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__JointComponentTolerance__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__JointComponentTolerance__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointComponentTolerance {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointComponentTolerance where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/JointComponentTolerance";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__JointComponentTolerance() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__JointControllerState() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__JointControllerState__init(msg: *mut JointControllerState) -> bool;
    fn control_msgs__msg__JointControllerState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointControllerState>, size: usize) -> bool;
    fn control_msgs__msg__JointControllerState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointControllerState>);
    fn control_msgs__msg__JointControllerState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointControllerState>, out_seq: *mut rosidl_runtime_rs::Sequence<JointControllerState>) -> bool;
}

// Corresponds to control_msgs__msg__JointControllerState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message presents current controller state of one joint.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointControllerState {
    /// It is deprecated as of Humble in favor of SingleDOFStateStamped.msg
    /// Header timestamp should be update time of controller state
    pub header: std_msgs::msg::rmw::Header,

    /// The set point, that is, desired state.
    pub set_point: f64,

    /// Current value of the process (ie: latest sensor measurement on the controlled value).
    pub process_value: f64,

    /// First time-derivative of the process value.
    pub process_value_dot: f64,

    /// The error of the controlled value, essentially process_value - set_point (for a regular PID implementation).
    pub error: f64,

    /// Time between two consecutive updates/execution of the control law.
    pub time_step: f64,

    /// Current output of the controller.
    pub command: f64,

    /// Current PID parameters of the controller.
    pub p: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub i: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub d: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub i_clamp: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub antiwindup: bool,

}



impl Default for JointControllerState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__JointControllerState__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__JointControllerState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointControllerState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__JointControllerState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__JointControllerState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__JointControllerState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointControllerState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointControllerState where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/JointControllerState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__JointControllerState() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__JointJog() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__JointJog__init(msg: *mut JointJog) -> bool;
    fn control_msgs__msg__JointJog__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointJog>, size: usize) -> bool;
    fn control_msgs__msg__JointJog__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointJog>);
    fn control_msgs__msg__JointJog__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointJog>, out_seq: *mut rosidl_runtime_rs::Sequence<JointJog>) -> bool;
}

// Corresponds to control_msgs__msg__JointJog
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Used in time-stamping the message.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointJog {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Name list of the joints. You don't need to specify all joints of the
    /// robot. Joint names are case-sensitive.
    pub joint_names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// A position command to the joints listed in joint_names.
    /// The order must be identical.
    /// Units are meters or radians.
    /// If displacements and velocities are filled, a profiled motion is requested.
    /// or position_deltas
    pub displacements: rosidl_runtime_rs::Sequence<f64>,

    /// A velocity command to the joints listed in joint_names.
    /// The order must be identical.
    /// Units are m/s or rad/s.
    /// If displacements and velocities are filled, a profiled motion is requested.
    pub velocities: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub duration: f64,

}



impl Default for JointJog {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__JointJog__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__JointJog__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointJog {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__JointJog__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__JointJog__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__JointJog__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointJog {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointJog where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/JointJog";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__JointJog() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__JointTolerance() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__JointTolerance__init(msg: *mut JointTolerance) -> bool;
    fn control_msgs__msg__JointTolerance__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointTolerance>, size: usize) -> bool;
    fn control_msgs__msg__JointTolerance__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointTolerance>);
    fn control_msgs__msg__JointTolerance__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointTolerance>, out_seq: *mut rosidl_runtime_rs::Sequence<JointTolerance>) -> bool;
}

// Corresponds to control_msgs__msg__JointTolerance
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// The tolerances specify the amount the position, velocity, and
/// accelerations can vary from the setpoints.  For example, in the case
/// of trajectory control, when the actual position varies beyond
/// (desired position + position tolerance), the trajectory goal may
/// abort.
///
/// There are two special values for tolerances:
///  * 0 - The tolerance is unspecified and will remain at whatever the default is
///  * -1 - The tolerance is "erased".  If there was a default, the joint will be
///         allowed to move without restriction.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointTolerance {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,

    /// in radians or meters (for a revolute or prismatic joint, respectively)
    pub position: f64,

    /// in rad/sec or m/sec
    pub velocity: f64,

    /// in rad/sec^2 or m/sec^2
    pub acceleration: f64,

}



impl Default for JointTolerance {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__JointTolerance__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__JointTolerance__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointTolerance {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__JointTolerance__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__JointTolerance__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__JointTolerance__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointTolerance {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointTolerance where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/JointTolerance";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__JointTolerance() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__JointTrajectoryControllerState() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__JointTrajectoryControllerState__init(msg: *mut JointTrajectoryControllerState) -> bool;
    fn control_msgs__msg__JointTrajectoryControllerState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointTrajectoryControllerState>, size: usize) -> bool;
    fn control_msgs__msg__JointTrajectoryControllerState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointTrajectoryControllerState>);
    fn control_msgs__msg__JointTrajectoryControllerState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointTrajectoryControllerState>, out_seq: *mut rosidl_runtime_rs::Sequence<JointTrajectoryControllerState>) -> bool;
}

// Corresponds to control_msgs__msg__JointTrajectoryControllerState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message presents current controller state of JTC

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointTrajectoryControllerState {
    /// Header timestamp should be update time of controller state
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// The set point, that is, desired state.
    pub reference: trajectory_msgs::msg::rmw::JointTrajectoryPoint,

    /// Current value of the process (ie: latest sensor measurement on the controlled value).
    pub feedback: trajectory_msgs::msg::rmw::JointTrajectoryPoint,

    /// The error of the controlled value, essentially reference - feedback (for a regular PID implementation).
    pub error: trajectory_msgs::msg::rmw::JointTrajectoryPoint,

    /// Current output of the controller.
    pub output: trajectory_msgs::msg::rmw::JointTrajectoryPoint,


    // This member is not documented.
    #[allow(missing_docs)]
    pub multi_dof_joint_names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// The set point, that is, desired state.
    pub multi_dof_reference: trajectory_msgs::msg::rmw::MultiDOFJointTrajectoryPoint,

    /// Current value of the process (ie: latest sensor measurement on the controlled value).
    pub multi_dof_feedback: trajectory_msgs::msg::rmw::MultiDOFJointTrajectoryPoint,

    /// The error of the controlled value, essentially reference - feedback (for a regular PID implementation).
    pub multi_dof_error: trajectory_msgs::msg::rmw::MultiDOFJointTrajectoryPoint,

    /// Current output of the controller.
    pub multi_dof_output: trajectory_msgs::msg::rmw::MultiDOFJointTrajectoryPoint,

    /// The speed scaling factor the trajectory is currently being executed with
    pub speed_scaling_factor: f64,

}



impl Default for JointTrajectoryControllerState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__JointTrajectoryControllerState__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__JointTrajectoryControllerState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointTrajectoryControllerState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__JointTrajectoryControllerState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__JointTrajectoryControllerState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__JointTrajectoryControllerState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointTrajectoryControllerState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointTrajectoryControllerState where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/JointTrajectoryControllerState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__JointTrajectoryControllerState() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__JointWrenchTrajectory() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__JointWrenchTrajectory__init(msg: *mut JointWrenchTrajectory) -> bool;
    fn control_msgs__msg__JointWrenchTrajectory__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointWrenchTrajectory>, size: usize) -> bool;
    fn control_msgs__msg__JointWrenchTrajectory__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointWrenchTrajectory>);
    fn control_msgs__msg__JointWrenchTrajectory__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointWrenchTrajectory>, out_seq: *mut rosidl_runtime_rs::Sequence<JointWrenchTrajectory>) -> bool;
}

// Corresponds to control_msgs__msg__JointWrenchTrajectory
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// The header is used to specify the reference time for the trajectory durations

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointWrenchTrajectory {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// The names of the active joints in each trajectory point. These names are
    /// ordered and must correspond to the values in each trajectory point.
    pub joint_names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// Array of trajectory points, which describe the joint positions, velocities,
    /// accelerations and/or efforts, and task space wrenches at each time point.
    pub points: rosidl_runtime_rs::Sequence<super::super::msg::rmw::JointWrenchTrajectoryPoint>,

}



impl Default for JointWrenchTrajectory {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__JointWrenchTrajectory__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__JointWrenchTrajectory__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointWrenchTrajectory {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__JointWrenchTrajectory__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__JointWrenchTrajectory__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__JointWrenchTrajectory__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointWrenchTrajectory {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointWrenchTrajectory where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/JointWrenchTrajectory";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__JointWrenchTrajectory() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__JointWrenchTrajectoryPoint() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__JointWrenchTrajectoryPoint__init(msg: *mut JointWrenchTrajectoryPoint) -> bool;
    fn control_msgs__msg__JointWrenchTrajectoryPoint__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointWrenchTrajectoryPoint>, size: usize) -> bool;
    fn control_msgs__msg__JointWrenchTrajectoryPoint__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointWrenchTrajectoryPoint>);
    fn control_msgs__msg__JointWrenchTrajectoryPoint__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointWrenchTrajectoryPoint>, out_seq: *mut rosidl_runtime_rs::Sequence<JointWrenchTrajectoryPoint>) -> bool;
}

// Corresponds to control_msgs__msg__JointWrenchTrajectoryPoint
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// A joint-wrench trajectory point defines joint positions, joint velocities, joint accelerations, joint efforts, and a task space wrench, typically used by controllers.
/// Note: The time_from_start field is included in the JointTrajectoryPoint.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointWrenchTrajectoryPoint {

    // This member is not documented.
    #[allow(missing_docs)]
    pub point: trajectory_msgs::msg::rmw::JointTrajectoryPoint,

    /// The task-space wrench to apply at this trajectory point.
    pub wrench: super::super::msg::rmw::WrenchFramed,

}



impl Default for JointWrenchTrajectoryPoint {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__JointWrenchTrajectoryPoint__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__JointWrenchTrajectoryPoint__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointWrenchTrajectoryPoint {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__JointWrenchTrajectoryPoint__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__JointWrenchTrajectoryPoint__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__JointWrenchTrajectoryPoint__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointWrenchTrajectoryPoint {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointWrenchTrajectoryPoint where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/JointWrenchTrajectoryPoint";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__JointWrenchTrajectoryPoint() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__MecanumDriveControllerState() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__MecanumDriveControllerState__init(msg: *mut MecanumDriveControllerState) -> bool;
    fn control_msgs__msg__MecanumDriveControllerState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MecanumDriveControllerState>, size: usize) -> bool;
    fn control_msgs__msg__MecanumDriveControllerState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MecanumDriveControllerState>);
    fn control_msgs__msg__MecanumDriveControllerState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MecanumDriveControllerState>, out_seq: *mut rosidl_runtime_rs::Sequence<MecanumDriveControllerState>) -> bool;
}

// Corresponds to control_msgs__msg__MecanumDriveControllerState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MecanumDriveControllerState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub front_left_wheel_velocity: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub back_left_wheel_velocity: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub back_right_wheel_velocity: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub front_right_wheel_velocity: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reference_velocity: geometry_msgs::msg::rmw::Twist,

}



impl Default for MecanumDriveControllerState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__MecanumDriveControllerState__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__MecanumDriveControllerState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MecanumDriveControllerState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__MecanumDriveControllerState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__MecanumDriveControllerState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__MecanumDriveControllerState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MecanumDriveControllerState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MecanumDriveControllerState where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/MecanumDriveControllerState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__MecanumDriveControllerState() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__MotionArgument() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__MotionArgument__init(msg: *mut MotionArgument) -> bool;
    fn control_msgs__msg__MotionArgument__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotionArgument>, size: usize) -> bool;
    fn control_msgs__msg__MotionArgument__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotionArgument>);
    fn control_msgs__msg__MotionArgument__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotionArgument>, out_seq: *mut rosidl_runtime_rs::Sequence<MotionArgument>) -> bool;
}

// Corresponds to control_msgs__msg__MotionArgument
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Key Value pair to be used in MotionPrimitive messages

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotionArgument {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: f64,

}



impl Default for MotionArgument {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__MotionArgument__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__MotionArgument__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotionArgument {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__MotionArgument__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__MotionArgument__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__MotionArgument__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotionArgument {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotionArgument where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/MotionArgument";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__MotionArgument() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__MotionPrimitive() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__MotionPrimitive__init(msg: *mut MotionPrimitive) -> bool;
    fn control_msgs__msg__MotionPrimitive__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotionPrimitive>, size: usize) -> bool;
    fn control_msgs__msg__MotionPrimitive__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotionPrimitive>);
    fn control_msgs__msg__MotionPrimitive__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotionPrimitive>, out_seq: *mut rosidl_runtime_rs::Sequence<MotionPrimitive>) -> bool;
}

// Corresponds to control_msgs__msg__MotionPrimitive
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotionPrimitive {
    /// potentially more, such as spline motion
    /// one of the above
    pub type_: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub blend_radius: f64,

    /// MotionArguments are meant to be used as vendor-specific or use-case-specific arguments to
    /// MotionPrimitive messages. This is to avoid bloating the MotionPrimitive message with all possible
    /// uses cases but rather add specific data using as a list of key-value pairs, which is what this
    /// message represents.
    /// (max) velocity, (max) acceleration, efficiency
    pub additional_arguments: rosidl_runtime_rs::Sequence<super::super::msg::rmw::MotionArgument>,

    /// Targets should be either specified through joint configurations or Cartesian poses.
    /// Depending on the motion type and implementation, there might be multiple poses allowed.
    /// For example, circular motions are often specified as via and target
    /// Usually one of these is empty, in some edge cases even both can be empty, when all input is given
    /// in the more flexible MotionArgument[] field.
    pub poses: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::PoseStamped>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_positions: rosidl_runtime_rs::Sequence<f64>,

}

impl MotionPrimitive {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const UNKNOWN: i8 = -1;

    /// Often referred as PTP
    pub const LINEAR_JOINT: i8 = 0;

    /// Often referred as LIN
    pub const LINEAR_CARTESIAN: i8 = 50;

    /// Often referred as CIRC
    pub const CIRCULAR_CARTESIAN: i8 = 51;

}


impl Default for MotionPrimitive {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__MotionPrimitive__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__MotionPrimitive__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotionPrimitive {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__MotionPrimitive__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__MotionPrimitive__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__MotionPrimitive__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotionPrimitive {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotionPrimitive where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/MotionPrimitive";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__MotionPrimitive() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__MotionPrimitiveSequence() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__MotionPrimitiveSequence__init(msg: *mut MotionPrimitiveSequence) -> bool;
    fn control_msgs__msg__MotionPrimitiveSequence__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotionPrimitiveSequence>, size: usize) -> bool;
    fn control_msgs__msg__MotionPrimitiveSequence__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotionPrimitiveSequence>);
    fn control_msgs__msg__MotionPrimitiveSequence__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotionPrimitiveSequence>, out_seq: *mut rosidl_runtime_rs::Sequence<MotionPrimitiveSequence>) -> bool;
}

// Corresponds to control_msgs__msg__MotionPrimitiveSequence
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotionPrimitiveSequence {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motions: rosidl_runtime_rs::Sequence<super::super::msg::rmw::MotionPrimitive>,

}



impl Default for MotionPrimitiveSequence {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__MotionPrimitiveSequence__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__MotionPrimitiveSequence__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotionPrimitiveSequence {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__MotionPrimitiveSequence__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__MotionPrimitiveSequence__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__MotionPrimitiveSequence__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotionPrimitiveSequence {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotionPrimitiveSequence where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/MotionPrimitiveSequence";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__MotionPrimitiveSequence() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__MultiDOFCommand() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__MultiDOFCommand__init(msg: *mut MultiDOFCommand) -> bool;
    fn control_msgs__msg__MultiDOFCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MultiDOFCommand>, size: usize) -> bool;
    fn control_msgs__msg__MultiDOFCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MultiDOFCommand>);
    fn control_msgs__msg__MultiDOFCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MultiDOFCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<MultiDOFCommand>) -> bool;
}

// Corresponds to control_msgs__msg__MultiDOFCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// The message defines command for multiple degrees of freedom (DoF) typically used by many controllers.
/// The message intentionally avoids 'joint' nomenclature because it can be generally use for command with
/// different semantic meanings, e.g., joints, Cartesian axes, or have abstract meaning like GPIO interface.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MultiDOFCommand {
    /// names of degrees of freedom
    pub dof_names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// values used by most of the controller
    pub values: rosidl_runtime_rs::Sequence<f64>,

    /// First derivation of the values, e.g., velocity if values are positions.
    /// This is useful for PID and similar controllers.
    pub values_dot: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for MultiDOFCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__MultiDOFCommand__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__MultiDOFCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MultiDOFCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__MultiDOFCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__MultiDOFCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__MultiDOFCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MultiDOFCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MultiDOFCommand where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/MultiDOFCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__MultiDOFCommand() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__MultiDOFStateStamped() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__MultiDOFStateStamped__init(msg: *mut MultiDOFStateStamped) -> bool;
    fn control_msgs__msg__MultiDOFStateStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MultiDOFStateStamped>, size: usize) -> bool;
    fn control_msgs__msg__MultiDOFStateStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MultiDOFStateStamped>);
    fn control_msgs__msg__MultiDOFStateStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MultiDOFStateStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<MultiDOFStateStamped>) -> bool;
}

// Corresponds to control_msgs__msg__MultiDOFStateStamped
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message presents current controller state of multiple degrees of freedom.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MultiDOFStateStamped {
    /// Header timestamp should be update time of controller state
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dof_states: rosidl_runtime_rs::Sequence<super::super::msg::rmw::SingleDOFState>,

}



impl Default for MultiDOFStateStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__MultiDOFStateStamped__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__MultiDOFStateStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MultiDOFStateStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__MultiDOFStateStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__MultiDOFStateStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__MultiDOFStateStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MultiDOFStateStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MultiDOFStateStamped where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/MultiDOFStateStamped";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__MultiDOFStateStamped() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__PidState() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__PidState__init(msg: *mut PidState) -> bool;
    fn control_msgs__msg__PidState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PidState>, size: usize) -> bool;
    fn control_msgs__msg__PidState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PidState>);
    fn control_msgs__msg__PidState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PidState>, out_seq: *mut rosidl_runtime_rs::Sequence<PidState>) -> bool;
}

// Corresponds to control_msgs__msg__PidState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PidState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestep: builtin_interfaces::msg::rmw::Duration,

    /// error = target - state
    pub error: f64,

    /// derivative of error
    pub error_dot: f64,

    /// weighted integral of error
    pub i_term: f64,

    /// proportional gain
    pub p_gain: f64,

    /// integral gain
    pub i_gain: f64,

    /// derivative gain
    pub d_gain: f64,

    /// output of the PID controller
    pub output: f64,

}



impl Default for PidState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__PidState__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__PidState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PidState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__PidState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__PidState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__PidState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PidState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PidState where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/PidState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__PidState() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__SingleDOFState() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__SingleDOFState__init(msg: *mut SingleDOFState) -> bool;
    fn control_msgs__msg__SingleDOFState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SingleDOFState>, size: usize) -> bool;
    fn control_msgs__msg__SingleDOFState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SingleDOFState>);
    fn control_msgs__msg__SingleDOFState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SingleDOFState>, out_seq: *mut rosidl_runtime_rs::Sequence<SingleDOFState>) -> bool;
}

// Corresponds to control_msgs__msg__SingleDOFState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message presents current controller state of one degree of freedom.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SingleDOFState {
    /// DoF name, e.g., joint or Cartesian axis name
    pub name: rosidl_runtime_rs::String,

    /// The set point, that is, desired state.
    pub reference: f64,

    /// Current value of the process (ie: latest sensor measurement on the controlled value).
    pub feedback: f64,

    /// First time-derivative of the process value. E.g., velocity.
    pub feedback_dot: f64,

    /// The error of the controlled value, essentially reference - feedback (for a regular PID implementation).
    pub error: f64,

    /// First time-derivative of the error of the controlled value.
    pub error_dot: f64,

    /// Time between two consecutive updates/execution of the control law.
    pub time_step: f64,

    /// Current output of the controller.
    pub output: f64,

}



impl Default for SingleDOFState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__SingleDOFState__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__SingleDOFState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SingleDOFState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__SingleDOFState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__SingleDOFState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__SingleDOFState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SingleDOFState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SingleDOFState where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/SingleDOFState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__SingleDOFState() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__SingleDOFStateStamped() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__SingleDOFStateStamped__init(msg: *mut SingleDOFStateStamped) -> bool;
    fn control_msgs__msg__SingleDOFStateStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SingleDOFStateStamped>, size: usize) -> bool;
    fn control_msgs__msg__SingleDOFStateStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SingleDOFStateStamped>);
    fn control_msgs__msg__SingleDOFStateStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SingleDOFStateStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<SingleDOFStateStamped>) -> bool;
}

// Corresponds to control_msgs__msg__SingleDOFStateStamped
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message presents current controller state of one degree of freedom.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SingleDOFStateStamped {
    /// Header timestamp should be update time of controller state
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dof_state: super::super::msg::rmw::SingleDOFState,

}



impl Default for SingleDOFStateStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__SingleDOFStateStamped__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__SingleDOFStateStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SingleDOFStateStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__SingleDOFStateStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__SingleDOFStateStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__SingleDOFStateStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SingleDOFStateStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SingleDOFStateStamped where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/SingleDOFStateStamped";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__SingleDOFStateStamped() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__SteeringControllerStatus() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__SteeringControllerStatus__init(msg: *mut SteeringControllerStatus) -> bool;
    fn control_msgs__msg__SteeringControllerStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SteeringControllerStatus>, size: usize) -> bool;
    fn control_msgs__msg__SteeringControllerStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SteeringControllerStatus>);
    fn control_msgs__msg__SteeringControllerStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SteeringControllerStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<SteeringControllerStatus>) -> bool;
}

// Corresponds to control_msgs__msg__SteeringControllerStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SteeringControllerStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// positions of traction wheels if the robot is controlled by position
    pub traction_wheels_position: rosidl_runtime_rs::Sequence<f64>,

    /// velocities of traction wheels if the robot is controlled by velocity
    pub traction_wheels_velocity: rosidl_runtime_rs::Sequence<f64>,

    /// positions of steering joints
    pub steer_positions: rosidl_runtime_rs::Sequence<f64>,

    /// values commanded to traction joints
    pub traction_command: rosidl_runtime_rs::Sequence<f64>,

    /// values commanded to steering joints
    pub steering_angle_command: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for SteeringControllerStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__SteeringControllerStatus__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__SteeringControllerStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SteeringControllerStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__SteeringControllerStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__SteeringControllerStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__SteeringControllerStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SteeringControllerStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SteeringControllerStatus where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/SteeringControllerStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__SteeringControllerStatus() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__SteeringControllerCommand() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__SteeringControllerCommand__init(msg: *mut SteeringControllerCommand) -> bool;
    fn control_msgs__msg__SteeringControllerCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SteeringControllerCommand>, size: usize) -> bool;
    fn control_msgs__msg__SteeringControllerCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SteeringControllerCommand>);
    fn control_msgs__msg__SteeringControllerCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SteeringControllerCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<SteeringControllerCommand>) -> bool;
}

// Corresponds to control_msgs__msg__SteeringControllerCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SteeringControllerCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// in rad
    pub steering_angle: f64,

    /// in m/s
    pub linear_velocity: f64,

}



impl Default for SteeringControllerCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__SteeringControllerCommand__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__SteeringControllerCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SteeringControllerCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__SteeringControllerCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__SteeringControllerCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__SteeringControllerCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SteeringControllerCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SteeringControllerCommand where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/SteeringControllerCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__SteeringControllerCommand() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__SpeedScalingFactor() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__SpeedScalingFactor__init(msg: *mut SpeedScalingFactor) -> bool;
    fn control_msgs__msg__SpeedScalingFactor__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SpeedScalingFactor>, size: usize) -> bool;
    fn control_msgs__msg__SpeedScalingFactor__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SpeedScalingFactor>);
    fn control_msgs__msg__SpeedScalingFactor__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SpeedScalingFactor>, out_seq: *mut rosidl_runtime_rs::Sequence<SpeedScalingFactor>) -> bool;
}

// Corresponds to control_msgs__msg__SpeedScalingFactor
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message contains a scaling factor to scale trajectory execution. A factor of 1.0 means
/// execution at normal speed, a factor of 0.0 means a full pause.
/// Negative values are not allowed (Which should be checked by any instance consuming this message).

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SpeedScalingFactor {

    // This member is not documented.
    #[allow(missing_docs)]
    pub factor: f64,

}



impl Default for SpeedScalingFactor {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__SpeedScalingFactor__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__SpeedScalingFactor__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SpeedScalingFactor {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__SpeedScalingFactor__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__SpeedScalingFactor__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__SpeedScalingFactor__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SpeedScalingFactor {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SpeedScalingFactor where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/SpeedScalingFactor";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__SpeedScalingFactor() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__VDA5050State() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__VDA5050State__init(msg: *mut VDA5050State) -> bool;
    fn control_msgs__msg__VDA5050State__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VDA5050State>, size: usize) -> bool;
    fn control_msgs__msg__VDA5050State__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VDA5050State>);
    fn control_msgs__msg__VDA5050State__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VDA5050State>, out_seq: *mut rosidl_runtime_rs::Sequence<VDA5050State>) -> bool;
}

// Corresponds to control_msgs__msg__VDA5050State
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message presents VDA5050-specific vehicle state information
/// For AGVs and AMRs compliant with VDA5050, this provides a snapshot of the vehicle's high-level status
/// Refer Official Specification document for the VDA 5050 - https://github.com/VDA5050/VDA5050

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VDA5050State {
    /// --- Order and Action Status ---------------------------------------
    /// ID of the currently executed order
    pub order_id: rosidl_runtime_rs::String,

    /// Current action execution status, see ActionStatus constants below
    pub action_status: rosidl_runtime_rs::String,

    /// ID of the last reached node in the topology
    pub last_node_id: u32,

    /// --- Vehicle State -------------------------------------------------
    /// True if the vehicle's drives are active and vehicle is in motion
    pub driving: bool,

    /// Current battery charge level in percent (0.0 - 100.0)
    pub battery_charge: f64,

    /// Current operating mode of the vehicle, see OperatingMode constants below
    pub operating_mode: rosidl_runtime_rs::String,

    /// --- Error Reporting -----------------------------------------------
    /// Type/category of the current error, empty string if no error
    pub error_type: rosidl_runtime_rs::String,

    /// Human-readable description of the current error, empty string if no error
    pub error_description: rosidl_runtime_rs::String,

}

impl VDA5050State {
    /// --- Action Status Constants ---------------------------------------
    /// VDA5050 action execution states
    /// Action is waiting to be executed
    pub const ACTION_WAITING: &'static str = "WAITING";

    /// Action is being initialized
    pub const ACTION_INITIALIZING: &'static str = "INITIALIZING";

    /// Action is currently executing
    pub const ACTION_RUNNING: &'static str = "RUNNING";

    /// Action execution is paused
    pub const ACTION_PAUSED: &'static str = "PAUSED";

    /// Action completed successfully
    pub const ACTION_FINISHED: &'static str = "FINISHED";

    /// Action execution failed
    pub const ACTION_FAILED: &'static str = "FAILED";

    /// --- Operating Mode Constants -------------------------------------
    /// VDA5050 vehicle operating modes
    /// Vehicle operates autonomously
    pub const MODE_AUTOMATIC: &'static str = "AUTOMATIC";

    /// Vehicle requires operator confirmation
    pub const MODE_SEMI_AUTOMATIC: &'static str = "SEMIAUTOMATIC";

    /// Vehicle is under manual control
    pub const MODE_MANUAL: &'static str = "MANUAL";

    /// Vehicle is in service/maintenance mode
    pub const MODE_SERVICE: &'static str = "SERVICE";

    /// Vehicle is in emergency mode
    pub const MODE_EMERGENCY: &'static str = "EMERGENCY";

    /// Vehicle is in teach-in mode for route learning
    pub const MODE_TEACHIN: &'static str = "TEACHIN";

}


impl Default for VDA5050State {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__VDA5050State__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__VDA5050State__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VDA5050State {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__VDA5050State__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__VDA5050State__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__VDA5050State__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VDA5050State {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VDA5050State where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/VDA5050State";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__VDA5050State() }
  }
}


#[link(name = "control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__WrenchFramed() -> *const std::ffi::c_void;
}

#[link(name = "control_msgs__rosidl_generator_c")]
extern "C" {
    fn control_msgs__msg__WrenchFramed__init(msg: *mut WrenchFramed) -> bool;
    fn control_msgs__msg__WrenchFramed__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WrenchFramed>, size: usize) -> bool;
    fn control_msgs__msg__WrenchFramed__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WrenchFramed>);
    fn control_msgs__msg__WrenchFramed__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WrenchFramed>, out_seq: *mut rosidl_runtime_rs::Sequence<WrenchFramed>) -> bool;
}

// Corresponds to control_msgs__msg__WrenchFramed
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message represents a wrench (force and torque) expressed in a specific reference frame.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WrenchFramed {
    /// The reference frame in which the wrench is expressed.
    pub frame_id: rosidl_runtime_rs::String,

    /// The wrench applied.
    pub wrench: geometry_msgs::msg::rmw::Wrench,

}



impl Default for WrenchFramed {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !control_msgs__msg__WrenchFramed__init(&mut msg as *mut _) {
        panic!("Call to control_msgs__msg__WrenchFramed__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WrenchFramed {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__WrenchFramed__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__WrenchFramed__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { control_msgs__msg__WrenchFramed__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WrenchFramed {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WrenchFramed where Self: Sized {
  const TYPE_NAME: &'static str = "control_msgs/msg/WrenchFramed";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__control_msgs__msg__WrenchFramed() }
  }
}


