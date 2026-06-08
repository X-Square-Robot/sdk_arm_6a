#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to control_msgs__msg__AdmittanceControllerState
/// Admittance parameters

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AdmittanceControllerState {
    /// 6-vector of mass terms used in the admittance calculation
    pub mass: std_msgs::msg::Float64MultiArray,

    /// 6-vector of damping terms used in the admittance calculation
    pub damping: std_msgs::msg::Float64MultiArray,

    /// 6-vector of stiffness terms used in the admittance calculation
    pub stiffness: std_msgs::msg::Float64MultiArray,

    /// Frame information
    /// quaternion describing the orientation of the control frame
    pub rot_base_control: geometry_msgs::msg::Quaternion,

    /// force torque sensor transform at the reference joint configuration
    pub ref_trans_base_ft: geometry_msgs::msg::TransformStamped,

    /// 6-vector of 0/1 describing if admittance is enable in the corresponding control frame axis
    pub selected_axes: std_msgs::msg::Int8MultiArray,

    /// name of the force torque frame
    pub ft_sensor_frame: std_msgs::msg::String,

    /// State information
    /// calculated admittance position in cartesian space
    pub admittance_position: geometry_msgs::msg::TransformStamped,

    /// calculated admittance acceleration in cartesian space
    pub admittance_acceleration: geometry_msgs::msg::TwistStamped,

    /// calculated admittance velocity in cartesian space
    pub admittance_velocity: geometry_msgs::msg::TwistStamped,

    /// wrench used in the admittance calculation
    pub wrench_base: geometry_msgs::msg::WrenchStamped,

    /// calculated admittance offsets in joint space
    pub joint_state: sensor_msgs::msg::JointState,

}



impl Default for AdmittanceControllerState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AdmittanceControllerState::default())
  }
}

impl rosidl_runtime_rs::Message for AdmittanceControllerState {
  type RmwMsg = super::msg::rmw::AdmittanceControllerState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mass: std_msgs::msg::Float64MultiArray::into_rmw_message(std::borrow::Cow::Owned(msg.mass)).into_owned(),
        damping: std_msgs::msg::Float64MultiArray::into_rmw_message(std::borrow::Cow::Owned(msg.damping)).into_owned(),
        stiffness: std_msgs::msg::Float64MultiArray::into_rmw_message(std::borrow::Cow::Owned(msg.stiffness)).into_owned(),
        rot_base_control: geometry_msgs::msg::Quaternion::into_rmw_message(std::borrow::Cow::Owned(msg.rot_base_control)).into_owned(),
        ref_trans_base_ft: geometry_msgs::msg::TransformStamped::into_rmw_message(std::borrow::Cow::Owned(msg.ref_trans_base_ft)).into_owned(),
        selected_axes: std_msgs::msg::Int8MultiArray::into_rmw_message(std::borrow::Cow::Owned(msg.selected_axes)).into_owned(),
        ft_sensor_frame: std_msgs::msg::String::into_rmw_message(std::borrow::Cow::Owned(msg.ft_sensor_frame)).into_owned(),
        admittance_position: geometry_msgs::msg::TransformStamped::into_rmw_message(std::borrow::Cow::Owned(msg.admittance_position)).into_owned(),
        admittance_acceleration: geometry_msgs::msg::TwistStamped::into_rmw_message(std::borrow::Cow::Owned(msg.admittance_acceleration)).into_owned(),
        admittance_velocity: geometry_msgs::msg::TwistStamped::into_rmw_message(std::borrow::Cow::Owned(msg.admittance_velocity)).into_owned(),
        wrench_base: geometry_msgs::msg::WrenchStamped::into_rmw_message(std::borrow::Cow::Owned(msg.wrench_base)).into_owned(),
        joint_state: sensor_msgs::msg::JointState::into_rmw_message(std::borrow::Cow::Owned(msg.joint_state)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mass: std_msgs::msg::Float64MultiArray::into_rmw_message(std::borrow::Cow::Borrowed(&msg.mass)).into_owned(),
        damping: std_msgs::msg::Float64MultiArray::into_rmw_message(std::borrow::Cow::Borrowed(&msg.damping)).into_owned(),
        stiffness: std_msgs::msg::Float64MultiArray::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stiffness)).into_owned(),
        rot_base_control: geometry_msgs::msg::Quaternion::into_rmw_message(std::borrow::Cow::Borrowed(&msg.rot_base_control)).into_owned(),
        ref_trans_base_ft: geometry_msgs::msg::TransformStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.ref_trans_base_ft)).into_owned(),
        selected_axes: std_msgs::msg::Int8MultiArray::into_rmw_message(std::borrow::Cow::Borrowed(&msg.selected_axes)).into_owned(),
        ft_sensor_frame: std_msgs::msg::String::into_rmw_message(std::borrow::Cow::Borrowed(&msg.ft_sensor_frame)).into_owned(),
        admittance_position: geometry_msgs::msg::TransformStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.admittance_position)).into_owned(),
        admittance_acceleration: geometry_msgs::msg::TwistStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.admittance_acceleration)).into_owned(),
        admittance_velocity: geometry_msgs::msg::TwistStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.admittance_velocity)).into_owned(),
        wrench_base: geometry_msgs::msg::WrenchStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.wrench_base)).into_owned(),
        joint_state: sensor_msgs::msg::JointState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.joint_state)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mass: std_msgs::msg::Float64MultiArray::from_rmw_message(msg.mass),
      damping: std_msgs::msg::Float64MultiArray::from_rmw_message(msg.damping),
      stiffness: std_msgs::msg::Float64MultiArray::from_rmw_message(msg.stiffness),
      rot_base_control: geometry_msgs::msg::Quaternion::from_rmw_message(msg.rot_base_control),
      ref_trans_base_ft: geometry_msgs::msg::TransformStamped::from_rmw_message(msg.ref_trans_base_ft),
      selected_axes: std_msgs::msg::Int8MultiArray::from_rmw_message(msg.selected_axes),
      ft_sensor_frame: std_msgs::msg::String::from_rmw_message(msg.ft_sensor_frame),
      admittance_position: geometry_msgs::msg::TransformStamped::from_rmw_message(msg.admittance_position),
      admittance_acceleration: geometry_msgs::msg::TwistStamped::from_rmw_message(msg.admittance_acceleration),
      admittance_velocity: geometry_msgs::msg::TwistStamped::from_rmw_message(msg.admittance_velocity),
      wrench_base: geometry_msgs::msg::WrenchStamped::from_rmw_message(msg.wrench_base),
      joint_state: sensor_msgs::msg::JointState::from_rmw_message(msg.joint_state),
    }
  }
}


// Corresponds to control_msgs__msg__CANopenState
/// This message presents CANopen-specific device state information
/// Refer CiA 301 and CiA 402 application layer documentation

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CANopenState::default())
  }
}

impl rosidl_runtime_rs::Message for CANopenState {
  type RmwMsg = super::msg::rmw::CANopenState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_id: msg.node_id,
        nmt_state: msg.nmt_state,
        dsp_402_state: msg.dsp_402_state,
        last_emcy_code: msg.last_emcy_code,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      node_id: msg.node_id,
      nmt_state: msg.nmt_state,
      dsp_402_state: msg.dsp_402_state,
      last_emcy_code: msg.last_emcy_code,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      node_id: msg.node_id,
      nmt_state: msg.nmt_state,
      dsp_402_state: msg.dsp_402_state,
      last_emcy_code: msg.last_emcy_code,
    }
  }
}


// Corresponds to control_msgs__msg__DynamicInterfaceGroupValues

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DynamicInterfaceGroupValues {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// List of interface group names , e.g. ["flange_analog_IOs", "flange_vacuum"]
    pub interface_groups: Vec<std::string::String>,

    /// Key-value pairs representing interfaces and their corresponding values for each interface group listed in `interface_groups`
    pub interface_values: Vec<super::msg::InterfaceValue>,

}



impl Default for DynamicInterfaceGroupValues {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DynamicInterfaceGroupValues::default())
  }
}

impl rosidl_runtime_rs::Message for DynamicInterfaceGroupValues {
  type RmwMsg = super::msg::rmw::DynamicInterfaceGroupValues;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        interface_groups: msg.interface_groups
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        interface_values: msg.interface_values
          .into_iter()
          .map(|elem| super::msg::InterfaceValue::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        interface_groups: msg.interface_groups
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        interface_values: msg.interface_values
          .iter()
          .map(|elem| super::msg::InterfaceValue::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      interface_groups: msg.interface_groups
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      interface_values: msg.interface_values
          .into_iter()
          .map(super::msg::InterfaceValue::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to control_msgs__msg__DynamicInterfaceValues

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DynamicInterfaceValues {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub states: super::msg::InterfaceValue,


    // This member is not documented.
    #[allow(missing_docs)]
    pub commands: super::msg::InterfaceValue,

}



impl Default for DynamicInterfaceValues {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DynamicInterfaceValues::default())
  }
}

impl rosidl_runtime_rs::Message for DynamicInterfaceValues {
  type RmwMsg = super::msg::rmw::DynamicInterfaceValues;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        states: super::msg::InterfaceValue::into_rmw_message(std::borrow::Cow::Owned(msg.states)).into_owned(),
        commands: super::msg::InterfaceValue::into_rmw_message(std::borrow::Cow::Owned(msg.commands)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        states: super::msg::InterfaceValue::into_rmw_message(std::borrow::Cow::Borrowed(&msg.states)).into_owned(),
        commands: super::msg::InterfaceValue::into_rmw_message(std::borrow::Cow::Borrowed(&msg.commands)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      states: super::msg::InterfaceValue::from_rmw_message(msg.states),
      commands: super::msg::InterfaceValue::from_rmw_message(msg.commands),
    }
  }
}


// Corresponds to control_msgs__msg__DynamicJointState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DynamicJointState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// List of resource names, e.g. ["arm_joint_1", "arm_joint_2", "gripper_joint"]
    pub joint_names: Vec<std::string::String>,

    /// Key-value pairs representing interfaces and their corresponding values for each joint listed in `joint_names`
    pub interface_values: Vec<super::msg::InterfaceValue>,

}



impl Default for DynamicJointState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DynamicJointState::default())
  }
}

impl rosidl_runtime_rs::Message for DynamicJointState {
  type RmwMsg = super::msg::rmw::DynamicJointState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        joint_names: msg.joint_names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        interface_values: msg.interface_values
          .into_iter()
          .map(|elem| super::msg::InterfaceValue::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        joint_names: msg.joint_names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        interface_values: msg.interface_values
          .iter()
          .map(|elem| super::msg::InterfaceValue::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      joint_names: msg.joint_names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      interface_values: msg.interface_values
          .into_iter()
          .map(super::msg::InterfaceValue::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to control_msgs__msg__EtherCATState
/// This message presents EtherCAT-specific device state information
/// Refer ETG.1000 EtherCAT Specification

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EtherCATState {
    /// Position of the slave on the bus (0, 1, 2...)
    pub slave_position: u16,

    /// Unique vendor identifier from the device's ESI file
    pub vendor_id: std::string::String,

    /// Unique product code for the device from the device's ESI file
    pub product_code: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EtherCATState::default())
  }
}

impl rosidl_runtime_rs::Message for EtherCATState {
  type RmwMsg = super::msg::rmw::EtherCATState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        slave_position: msg.slave_position,
        vendor_id: msg.vendor_id.as_str().into(),
        product_code: msg.product_code.as_str().into(),
        al_state: msg.al_state,
        has_error: msg.has_error,
        al_status_code: msg.al_status_code,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      slave_position: msg.slave_position,
        vendor_id: msg.vendor_id.as_str().into(),
        product_code: msg.product_code.as_str().into(),
      al_state: msg.al_state,
      has_error: msg.has_error,
      al_status_code: msg.al_status_code,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      slave_position: msg.slave_position,
      vendor_id: msg.vendor_id.to_string(),
      product_code: msg.product_code.to_string(),
      al_state: msg.al_state,
      has_error: msg.has_error,
      al_status_code: msg.al_status_code,
    }
  }
}


// Corresponds to control_msgs__msg__GenericHardwareState
/// This message encapsulates the general-purpose status fields, serving as a baseline for any hardware component

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GenericHardwareState {
    /// --- Health & Error ----------------------------------------------
    /// Overall health status of the device, see HealthStatus constants below
    pub health_status: u8,

    /// Array of device errors by category, see ErrorDomain constants below
    pub error_domain: Vec<u8>,

    /// --- Operational State -------------------------------------------
    /// Current operational mode of the device, see ModeStatus constants below
    pub operational_mode: u8,

    /// Current power state of the device, see PowerState constants below
    pub power_state: u8,

    /// Current connectivity status of the device, see ConnectivityStatus constants below
    pub connectivity_status: u8,

    /// --- Vendor & Version Info ----------------------------------------
    /// Device manufacturer name, e.g. "Bosch"
    pub manufacturer: std::string::String,

    /// Device model identifier, e.g. "Lidar-XYZ-v2"
    pub model: std::string::String,

    /// Current firmware version, e.g. "1.2.3"
    pub firmware_version: std::string::String,

    /// --- Optional Details for Context ---------------------------------
    /// Provides specific quantitative values related to the enums above.
    /// e.g., for power_state, could have {key: "voltage", value: "24.1"}
    /// e.g., for connectivity, could have {key: "signal_strength", value: "-55dBm"}
    pub state_details: Vec<diagnostic_msgs::msg::KeyValue>,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GenericHardwareState::default())
  }
}

impl rosidl_runtime_rs::Message for GenericHardwareState {
  type RmwMsg = super::msg::rmw::GenericHardwareState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        health_status: msg.health_status,
        error_domain: msg.error_domain.into(),
        operational_mode: msg.operational_mode,
        power_state: msg.power_state,
        connectivity_status: msg.connectivity_status,
        manufacturer: msg.manufacturer.as_str().into(),
        model: msg.model.as_str().into(),
        firmware_version: msg.firmware_version.as_str().into(),
        state_details: msg.state_details
          .into_iter()
          .map(|elem| diagnostic_msgs::msg::KeyValue::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      health_status: msg.health_status,
        error_domain: msg.error_domain.as_slice().into(),
      operational_mode: msg.operational_mode,
      power_state: msg.power_state,
      connectivity_status: msg.connectivity_status,
        manufacturer: msg.manufacturer.as_str().into(),
        model: msg.model.as_str().into(),
        firmware_version: msg.firmware_version.as_str().into(),
        state_details: msg.state_details
          .iter()
          .map(|elem| diagnostic_msgs::msg::KeyValue::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      health_status: msg.health_status,
      error_domain: msg.error_domain
          .into_iter()
          .collect(),
      operational_mode: msg.operational_mode,
      power_state: msg.power_state,
      connectivity_status: msg.connectivity_status,
      manufacturer: msg.manufacturer.to_string(),
      model: msg.model.to_string(),
      firmware_version: msg.firmware_version.to_string(),
      state_details: msg.state_details
          .into_iter()
          .map(diagnostic_msgs::msg::KeyValue::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to control_msgs__msg__GripperCommand

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GripperCommand::default())
  }
}

impl rosidl_runtime_rs::Message for GripperCommand {
  type RmwMsg = super::msg::rmw::GripperCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        position: msg.position,
        max_effort: msg.max_effort,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      position: msg.position,
      max_effort: msg.max_effort,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      position: msg.position,
      max_effort: msg.max_effort,
    }
  }
}


// Corresponds to control_msgs__msg__HardwareDeviceDiagnostics
/// This message presents current hardware device status information

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HardwareDeviceDiagnostics {
    /// Header timestamp should be update time of device diagnostics
    pub header: std_msgs::msg::Header,

    /// Unique identifier for the device, e.g. "base_motor", "gripper_joint_1"
    pub device_id: std::string::String,

    /// --- Diagnostic Entries --------------------------------------------
    /// Key-value pairs representing diagnostic information for the device.
    pub entries: Vec<diagnostic_msgs::msg::KeyValue>,

}



impl Default for HardwareDeviceDiagnostics {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HardwareDeviceDiagnostics::default())
  }
}

impl rosidl_runtime_rs::Message for HardwareDeviceDiagnostics {
  type RmwMsg = super::msg::rmw::HardwareDeviceDiagnostics;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        device_id: msg.device_id.as_str().into(),
        entries: msg.entries
          .into_iter()
          .map(|elem| diagnostic_msgs::msg::KeyValue::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        device_id: msg.device_id.as_str().into(),
        entries: msg.entries
          .iter()
          .map(|elem| diagnostic_msgs::msg::KeyValue::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      device_id: msg.device_id.to_string(),
      entries: msg.entries
          .into_iter()
          .map(diagnostic_msgs::msg::KeyValue::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to control_msgs__msg__HardwareDeviceStatus
/// This message presents current hardware device status information

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HardwareDeviceStatus {
    /// Header timestamp should be update time of device status
    pub header: std_msgs::msg::Header,

    /// Unique identifier for the device, e.g. "base_motor", "gripper_joint_1"
    pub device_id: std::string::String,

    /// --- Standard-Specific States --------------------------------------
    /// States populated based on the standards relevant to this device.
    /// A device will only fill the arrays for the standards it implements, rest will be empty
    /// Generic hardware status information applicable to any device, it is suggested to fill this for all devices
    pub hardware_status: Vec<super::msg::GenericHardwareState>,

    /// CANopen-specific device states (DS-301/DS-402 compliant devices)
    pub canopen_states: Vec<super::msg::CANopenState>,

    /// EtherCAT-specific device states (CoE, FoE, etc.)
    pub ethercat_states: Vec<super::msg::EtherCATState>,

    /// VDA5050-specific states for AGV/mobile robot devices
    pub vda5050_states: Vec<super::msg::VDA5050State>,

}



impl Default for HardwareDeviceStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HardwareDeviceStatus::default())
  }
}

impl rosidl_runtime_rs::Message for HardwareDeviceStatus {
  type RmwMsg = super::msg::rmw::HardwareDeviceStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        device_id: msg.device_id.as_str().into(),
        hardware_status: msg.hardware_status
          .into_iter()
          .map(|elem| super::msg::GenericHardwareState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        canopen_states: msg.canopen_states
          .into_iter()
          .map(|elem| super::msg::CANopenState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        ethercat_states: msg.ethercat_states
          .into_iter()
          .map(|elem| super::msg::EtherCATState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        vda5050_states: msg.vda5050_states
          .into_iter()
          .map(|elem| super::msg::VDA5050State::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        device_id: msg.device_id.as_str().into(),
        hardware_status: msg.hardware_status
          .iter()
          .map(|elem| super::msg::GenericHardwareState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        canopen_states: msg.canopen_states
          .iter()
          .map(|elem| super::msg::CANopenState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        ethercat_states: msg.ethercat_states
          .iter()
          .map(|elem| super::msg::EtherCATState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        vda5050_states: msg.vda5050_states
          .iter()
          .map(|elem| super::msg::VDA5050State::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      device_id: msg.device_id.to_string(),
      hardware_status: msg.hardware_status
          .into_iter()
          .map(super::msg::GenericHardwareState::from_rmw_message)
          .collect(),
      canopen_states: msg.canopen_states
          .into_iter()
          .map(super::msg::CANopenState::from_rmw_message)
          .collect(),
      ethercat_states: msg.ethercat_states
          .into_iter()
          .map(super::msg::EtherCATState::from_rmw_message)
          .collect(),
      vda5050_states: msg.vda5050_states
          .into_iter()
          .map(super::msg::VDA5050State::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to control_msgs__msg__HardwareDiagnostics
/// This message presents current hardware diagnostics

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HardwareDiagnostics {
    /// Header timestamp should be update time of device diagnostics
    pub header: std_msgs::msg::Header,

    /// Unique identifier per hardware component, ideally the name of the hardware derived from HardwareInfo e.g. "pal_arm"
    pub hardware_id: std::string::String,

    /// --- Device Diagnostics Aggregation ---------------------------------
    /// Diagnostics for individual devices within this hardware set
    pub hardware_device_diagnostics: Vec<super::msg::HardwareDeviceDiagnostics>,

}



impl Default for HardwareDiagnostics {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HardwareDiagnostics::default())
  }
}

impl rosidl_runtime_rs::Message for HardwareDiagnostics {
  type RmwMsg = super::msg::rmw::HardwareDiagnostics;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        hardware_id: msg.hardware_id.as_str().into(),
        hardware_device_diagnostics: msg.hardware_device_diagnostics
          .into_iter()
          .map(|elem| super::msg::HardwareDeviceDiagnostics::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        hardware_id: msg.hardware_id.as_str().into(),
        hardware_device_diagnostics: msg.hardware_device_diagnostics
          .iter()
          .map(|elem| super::msg::HardwareDeviceDiagnostics::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      hardware_id: msg.hardware_id.to_string(),
      hardware_device_diagnostics: msg.hardware_device_diagnostics
          .into_iter()
          .map(super::msg::HardwareDeviceDiagnostics::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to control_msgs__msg__HardwareStatus
/// This message presents current hardware component status information

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HardwareStatus {
    /// Header timestamp should be update time of hardware status
    pub header: std_msgs::msg::Header,

    /// Unique identifier per hardware component, ideally the name of the hardware derived from HardwareInfo e.g. "pal_arm"
    pub hardware_id: std::string::String,

    /// --- Device Status Aggregation ---------------------------------
    /// An array containing the status of individual devices in the hardware component
    pub hardware_device_states: Vec<super::msg::HardwareDeviceStatus>,

}



impl Default for HardwareStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HardwareStatus::default())
  }
}

impl rosidl_runtime_rs::Message for HardwareStatus {
  type RmwMsg = super::msg::rmw::HardwareStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        hardware_id: msg.hardware_id.as_str().into(),
        hardware_device_states: msg.hardware_device_states
          .into_iter()
          .map(|elem| super::msg::HardwareDeviceStatus::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        hardware_id: msg.hardware_id.as_str().into(),
        hardware_device_states: msg.hardware_device_states
          .iter()
          .map(|elem| super::msg::HardwareDeviceStatus::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      hardware_id: msg.hardware_id.to_string(),
      hardware_device_states: msg.hardware_device_states
          .into_iter()
          .map(super::msg::HardwareDeviceStatus::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to control_msgs__msg__InterfaceValue
/// List of resource interface names

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InterfaceValue {

    // This member is not documented.
    #[allow(missing_docs)]
    pub interface_names: Vec<std::string::String>,

    /// Values corresponding to the list of interfaces in `interface_names`, [1.0, 0.0] for example
    pub values: Vec<f64>,

}



impl Default for InterfaceValue {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::InterfaceValue::default())
  }
}

impl rosidl_runtime_rs::Message for InterfaceValue {
  type RmwMsg = super::msg::rmw::InterfaceValue;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        interface_names: msg.interface_names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        values: msg.values.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        interface_names: msg.interface_names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        values: msg.values.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      interface_names: msg.interface_names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      values: msg.values
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to control_msgs__msg__JointComponentTolerance
/// Version of JointTolerance.msg with added component field for joints with multiple degrees of freedom
/// The difference between two MultiDOFJointTrajectoryPoint cannot be represented as a single number,
/// hence we use the component field to represent how to calculate the difference in a way that can
/// be represented as a single number.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointComponentTolerance {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_name: std::string::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointComponentTolerance::default())
  }
}

impl rosidl_runtime_rs::Message for JointComponentTolerance {
  type RmwMsg = super::msg::rmw::JointComponentTolerance;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joint_name: msg.joint_name.as_str().into(),
        component: msg.component,
        position: msg.position,
        velocity: msg.velocity,
        acceleration: msg.acceleration,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joint_name: msg.joint_name.as_str().into(),
      component: msg.component,
      position: msg.position,
      velocity: msg.velocity,
      acceleration: msg.acceleration,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      joint_name: msg.joint_name.to_string(),
      component: msg.component,
      position: msg.position,
      velocity: msg.velocity,
      acceleration: msg.acceleration,
    }
  }
}


// Corresponds to control_msgs__msg__JointControllerState
/// This message presents current controller state of one joint.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointControllerState {
    /// It is deprecated as of Humble in favor of SingleDOFStateStamped.msg
    /// Header timestamp should be update time of controller state
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointControllerState::default())
  }
}

impl rosidl_runtime_rs::Message for JointControllerState {
  type RmwMsg = super::msg::rmw::JointControllerState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        set_point: msg.set_point,
        process_value: msg.process_value,
        process_value_dot: msg.process_value_dot,
        error: msg.error,
        time_step: msg.time_step,
        command: msg.command,
        p: msg.p,
        i: msg.i,
        d: msg.d,
        i_clamp: msg.i_clamp,
        antiwindup: msg.antiwindup,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      set_point: msg.set_point,
      process_value: msg.process_value,
      process_value_dot: msg.process_value_dot,
      error: msg.error,
      time_step: msg.time_step,
      command: msg.command,
      p: msg.p,
      i: msg.i,
      d: msg.d,
      i_clamp: msg.i_clamp,
      antiwindup: msg.antiwindup,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      set_point: msg.set_point,
      process_value: msg.process_value,
      process_value_dot: msg.process_value_dot,
      error: msg.error,
      time_step: msg.time_step,
      command: msg.command,
      p: msg.p,
      i: msg.i,
      d: msg.d,
      i_clamp: msg.i_clamp,
      antiwindup: msg.antiwindup,
    }
  }
}


// Corresponds to control_msgs__msg__JointJog
/// Used in time-stamping the message.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointJog {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Name list of the joints. You don't need to specify all joints of the
    /// robot. Joint names are case-sensitive.
    pub joint_names: Vec<std::string::String>,

    /// A position command to the joints listed in joint_names.
    /// The order must be identical.
    /// Units are meters or radians.
    /// If displacements and velocities are filled, a profiled motion is requested.
    /// or position_deltas
    pub displacements: Vec<f64>,

    /// A velocity command to the joints listed in joint_names.
    /// The order must be identical.
    /// Units are m/s or rad/s.
    /// If displacements and velocities are filled, a profiled motion is requested.
    pub velocities: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub duration: f64,

}



impl Default for JointJog {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointJog::default())
  }
}

impl rosidl_runtime_rs::Message for JointJog {
  type RmwMsg = super::msg::rmw::JointJog;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        joint_names: msg.joint_names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        displacements: msg.displacements.into(),
        velocities: msg.velocities.into(),
        duration: msg.duration,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        joint_names: msg.joint_names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        displacements: msg.displacements.as_slice().into(),
        velocities: msg.velocities.as_slice().into(),
      duration: msg.duration,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      joint_names: msg.joint_names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      displacements: msg.displacements
          .into_iter()
          .collect(),
      velocities: msg.velocities
          .into_iter()
          .collect(),
      duration: msg.duration,
    }
  }
}


// Corresponds to control_msgs__msg__JointTolerance
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

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointTolerance {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,

    /// in radians or meters (for a revolute or prismatic joint, respectively)
    pub position: f64,

    /// in rad/sec or m/sec
    pub velocity: f64,

    /// in rad/sec^2 or m/sec^2
    pub acceleration: f64,

}



impl Default for JointTolerance {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointTolerance::default())
  }
}

impl rosidl_runtime_rs::Message for JointTolerance {
  type RmwMsg = super::msg::rmw::JointTolerance;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        position: msg.position,
        velocity: msg.velocity,
        acceleration: msg.acceleration,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      position: msg.position,
      velocity: msg.velocity,
      acceleration: msg.acceleration,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      position: msg.position,
      velocity: msg.velocity,
      acceleration: msg.acceleration,
    }
  }
}


// Corresponds to control_msgs__msg__JointTrajectoryControllerState
/// This message presents current controller state of JTC

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointTrajectoryControllerState {
    /// Header timestamp should be update time of controller state
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_names: Vec<std::string::String>,

    /// The set point, that is, desired state.
    pub reference: trajectory_msgs::msg::JointTrajectoryPoint,

    /// Current value of the process (ie: latest sensor measurement on the controlled value).
    pub feedback: trajectory_msgs::msg::JointTrajectoryPoint,

    /// The error of the controlled value, essentially reference - feedback (for a regular PID implementation).
    pub error: trajectory_msgs::msg::JointTrajectoryPoint,

    /// Current output of the controller.
    pub output: trajectory_msgs::msg::JointTrajectoryPoint,


    // This member is not documented.
    #[allow(missing_docs)]
    pub multi_dof_joint_names: Vec<std::string::String>,

    /// The set point, that is, desired state.
    pub multi_dof_reference: trajectory_msgs::msg::MultiDOFJointTrajectoryPoint,

    /// Current value of the process (ie: latest sensor measurement on the controlled value).
    pub multi_dof_feedback: trajectory_msgs::msg::MultiDOFJointTrajectoryPoint,

    /// The error of the controlled value, essentially reference - feedback (for a regular PID implementation).
    pub multi_dof_error: trajectory_msgs::msg::MultiDOFJointTrajectoryPoint,

    /// Current output of the controller.
    pub multi_dof_output: trajectory_msgs::msg::MultiDOFJointTrajectoryPoint,

    /// The speed scaling factor the trajectory is currently being executed with
    pub speed_scaling_factor: f64,

}



impl Default for JointTrajectoryControllerState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointTrajectoryControllerState::default())
  }
}

impl rosidl_runtime_rs::Message for JointTrajectoryControllerState {
  type RmwMsg = super::msg::rmw::JointTrajectoryControllerState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        joint_names: msg.joint_names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        reference: trajectory_msgs::msg::JointTrajectoryPoint::into_rmw_message(std::borrow::Cow::Owned(msg.reference)).into_owned(),
        feedback: trajectory_msgs::msg::JointTrajectoryPoint::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
        error: trajectory_msgs::msg::JointTrajectoryPoint::into_rmw_message(std::borrow::Cow::Owned(msg.error)).into_owned(),
        output: trajectory_msgs::msg::JointTrajectoryPoint::into_rmw_message(std::borrow::Cow::Owned(msg.output)).into_owned(),
        multi_dof_joint_names: msg.multi_dof_joint_names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        multi_dof_reference: trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::into_rmw_message(std::borrow::Cow::Owned(msg.multi_dof_reference)).into_owned(),
        multi_dof_feedback: trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::into_rmw_message(std::borrow::Cow::Owned(msg.multi_dof_feedback)).into_owned(),
        multi_dof_error: trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::into_rmw_message(std::borrow::Cow::Owned(msg.multi_dof_error)).into_owned(),
        multi_dof_output: trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::into_rmw_message(std::borrow::Cow::Owned(msg.multi_dof_output)).into_owned(),
        speed_scaling_factor: msg.speed_scaling_factor,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        joint_names: msg.joint_names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        reference: trajectory_msgs::msg::JointTrajectoryPoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.reference)).into_owned(),
        feedback: trajectory_msgs::msg::JointTrajectoryPoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
        error: trajectory_msgs::msg::JointTrajectoryPoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.error)).into_owned(),
        output: trajectory_msgs::msg::JointTrajectoryPoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.output)).into_owned(),
        multi_dof_joint_names: msg.multi_dof_joint_names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        multi_dof_reference: trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.multi_dof_reference)).into_owned(),
        multi_dof_feedback: trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.multi_dof_feedback)).into_owned(),
        multi_dof_error: trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.multi_dof_error)).into_owned(),
        multi_dof_output: trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.multi_dof_output)).into_owned(),
      speed_scaling_factor: msg.speed_scaling_factor,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      joint_names: msg.joint_names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      reference: trajectory_msgs::msg::JointTrajectoryPoint::from_rmw_message(msg.reference),
      feedback: trajectory_msgs::msg::JointTrajectoryPoint::from_rmw_message(msg.feedback),
      error: trajectory_msgs::msg::JointTrajectoryPoint::from_rmw_message(msg.error),
      output: trajectory_msgs::msg::JointTrajectoryPoint::from_rmw_message(msg.output),
      multi_dof_joint_names: msg.multi_dof_joint_names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      multi_dof_reference: trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::from_rmw_message(msg.multi_dof_reference),
      multi_dof_feedback: trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::from_rmw_message(msg.multi_dof_feedback),
      multi_dof_error: trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::from_rmw_message(msg.multi_dof_error),
      multi_dof_output: trajectory_msgs::msg::MultiDOFJointTrajectoryPoint::from_rmw_message(msg.multi_dof_output),
      speed_scaling_factor: msg.speed_scaling_factor,
    }
  }
}


// Corresponds to control_msgs__msg__JointWrenchTrajectory
/// The header is used to specify the reference time for the trajectory durations

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointWrenchTrajectory {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// The names of the active joints in each trajectory point. These names are
    /// ordered and must correspond to the values in each trajectory point.
    pub joint_names: Vec<std::string::String>,

    /// Array of trajectory points, which describe the joint positions, velocities,
    /// accelerations and/or efforts, and task space wrenches at each time point.
    pub points: Vec<super::msg::JointWrenchTrajectoryPoint>,

}



impl Default for JointWrenchTrajectory {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointWrenchTrajectory::default())
  }
}

impl rosidl_runtime_rs::Message for JointWrenchTrajectory {
  type RmwMsg = super::msg::rmw::JointWrenchTrajectory;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        joint_names: msg.joint_names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        points: msg.points
          .into_iter()
          .map(|elem| super::msg::JointWrenchTrajectoryPoint::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        joint_names: msg.joint_names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        points: msg.points
          .iter()
          .map(|elem| super::msg::JointWrenchTrajectoryPoint::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      joint_names: msg.joint_names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      points: msg.points
          .into_iter()
          .map(super::msg::JointWrenchTrajectoryPoint::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to control_msgs__msg__JointWrenchTrajectoryPoint
/// A joint-wrench trajectory point defines joint positions, joint velocities, joint accelerations, joint efforts, and a task space wrench, typically used by controllers.
/// Note: The time_from_start field is included in the JointTrajectoryPoint.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointWrenchTrajectoryPoint {

    // This member is not documented.
    #[allow(missing_docs)]
    pub point: trajectory_msgs::msg::JointTrajectoryPoint,

    /// The task-space wrench to apply at this trajectory point.
    pub wrench: super::msg::WrenchFramed,

}



impl Default for JointWrenchTrajectoryPoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointWrenchTrajectoryPoint::default())
  }
}

impl rosidl_runtime_rs::Message for JointWrenchTrajectoryPoint {
  type RmwMsg = super::msg::rmw::JointWrenchTrajectoryPoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        point: trajectory_msgs::msg::JointTrajectoryPoint::into_rmw_message(std::borrow::Cow::Owned(msg.point)).into_owned(),
        wrench: super::msg::WrenchFramed::into_rmw_message(std::borrow::Cow::Owned(msg.wrench)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        point: trajectory_msgs::msg::JointTrajectoryPoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.point)).into_owned(),
        wrench: super::msg::WrenchFramed::into_rmw_message(std::borrow::Cow::Borrowed(&msg.wrench)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      point: trajectory_msgs::msg::JointTrajectoryPoint::from_rmw_message(msg.point),
      wrench: super::msg::WrenchFramed::from_rmw_message(msg.wrench),
    }
  }
}


// Corresponds to control_msgs__msg__MecanumDriveControllerState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MecanumDriveControllerState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    pub reference_velocity: geometry_msgs::msg::Twist,

}



impl Default for MecanumDriveControllerState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MecanumDriveControllerState::default())
  }
}

impl rosidl_runtime_rs::Message for MecanumDriveControllerState {
  type RmwMsg = super::msg::rmw::MecanumDriveControllerState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        front_left_wheel_velocity: msg.front_left_wheel_velocity,
        back_left_wheel_velocity: msg.back_left_wheel_velocity,
        back_right_wheel_velocity: msg.back_right_wheel_velocity,
        front_right_wheel_velocity: msg.front_right_wheel_velocity,
        reference_velocity: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Owned(msg.reference_velocity)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      front_left_wheel_velocity: msg.front_left_wheel_velocity,
      back_left_wheel_velocity: msg.back_left_wheel_velocity,
      back_right_wheel_velocity: msg.back_right_wheel_velocity,
      front_right_wheel_velocity: msg.front_right_wheel_velocity,
        reference_velocity: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Borrowed(&msg.reference_velocity)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      front_left_wheel_velocity: msg.front_left_wheel_velocity,
      back_left_wheel_velocity: msg.back_left_wheel_velocity,
      back_right_wheel_velocity: msg.back_right_wheel_velocity,
      front_right_wheel_velocity: msg.front_right_wheel_velocity,
      reference_velocity: geometry_msgs::msg::Twist::from_rmw_message(msg.reference_velocity),
    }
  }
}


// Corresponds to control_msgs__msg__MotionArgument
/// Key Value pair to be used in MotionPrimitive messages

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotionArgument {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: f64,

}



impl Default for MotionArgument {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotionArgument::default())
  }
}

impl rosidl_runtime_rs::Message for MotionArgument {
  type RmwMsg = super::msg::rmw::MotionArgument;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      value: msg.value,
    }
  }
}


// Corresponds to control_msgs__msg__MotionPrimitive

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub additional_arguments: Vec<super::msg::MotionArgument>,

    /// Targets should be either specified through joint configurations or Cartesian poses.
    /// Depending on the motion type and implementation, there might be multiple poses allowed.
    /// For example, circular motions are often specified as via and target
    /// Usually one of these is empty, in some edge cases even both can be empty, when all input is given
    /// in the more flexible MotionArgument[] field.
    pub poses: Vec<geometry_msgs::msg::PoseStamped>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_positions: Vec<f64>,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotionPrimitive::default())
  }
}

impl rosidl_runtime_rs::Message for MotionPrimitive {
  type RmwMsg = super::msg::rmw::MotionPrimitive;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_: msg.type_,
        blend_radius: msg.blend_radius,
        additional_arguments: msg.additional_arguments
          .into_iter()
          .map(|elem| super::msg::MotionArgument::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        poses: msg.poses
          .into_iter()
          .map(|elem| geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        joint_positions: msg.joint_positions.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      type_: msg.type_,
      blend_radius: msg.blend_radius,
        additional_arguments: msg.additional_arguments
          .iter()
          .map(|elem| super::msg::MotionArgument::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        poses: msg.poses
          .iter()
          .map(|elem| geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        joint_positions: msg.joint_positions.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      type_: msg.type_,
      blend_radius: msg.blend_radius,
      additional_arguments: msg.additional_arguments
          .into_iter()
          .map(super::msg::MotionArgument::from_rmw_message)
          .collect(),
      poses: msg.poses
          .into_iter()
          .map(geometry_msgs::msg::PoseStamped::from_rmw_message)
          .collect(),
      joint_positions: msg.joint_positions
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to control_msgs__msg__MotionPrimitiveSequence

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotionPrimitiveSequence {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motions: Vec<super::msg::MotionPrimitive>,

}



impl Default for MotionPrimitiveSequence {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotionPrimitiveSequence::default())
  }
}

impl rosidl_runtime_rs::Message for MotionPrimitiveSequence {
  type RmwMsg = super::msg::rmw::MotionPrimitiveSequence;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motions: msg.motions
          .into_iter()
          .map(|elem| super::msg::MotionPrimitive::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motions: msg.motions
          .iter()
          .map(|elem| super::msg::MotionPrimitive::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motions: msg.motions
          .into_iter()
          .map(super::msg::MotionPrimitive::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to control_msgs__msg__MultiDOFCommand
/// The message defines command for multiple degrees of freedom (DoF) typically used by many controllers.
/// The message intentionally avoids 'joint' nomenclature because it can be generally use for command with
/// different semantic meanings, e.g., joints, Cartesian axes, or have abstract meaning like GPIO interface.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MultiDOFCommand {
    /// names of degrees of freedom
    pub dof_names: Vec<std::string::String>,

    /// values used by most of the controller
    pub values: Vec<f64>,

    /// First derivation of the values, e.g., velocity if values are positions.
    /// This is useful for PID and similar controllers.
    pub values_dot: Vec<f64>,

}



impl Default for MultiDOFCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MultiDOFCommand::default())
  }
}

impl rosidl_runtime_rs::Message for MultiDOFCommand {
  type RmwMsg = super::msg::rmw::MultiDOFCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        dof_names: msg.dof_names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        values: msg.values.into(),
        values_dot: msg.values_dot.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        dof_names: msg.dof_names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        values: msg.values.as_slice().into(),
        values_dot: msg.values_dot.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      dof_names: msg.dof_names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      values: msg.values
          .into_iter()
          .collect(),
      values_dot: msg.values_dot
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to control_msgs__msg__MultiDOFStateStamped
/// This message presents current controller state of multiple degrees of freedom.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MultiDOFStateStamped {
    /// Header timestamp should be update time of controller state
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dof_states: Vec<super::msg::SingleDOFState>,

}



impl Default for MultiDOFStateStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MultiDOFStateStamped::default())
  }
}

impl rosidl_runtime_rs::Message for MultiDOFStateStamped {
  type RmwMsg = super::msg::rmw::MultiDOFStateStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        dof_states: msg.dof_states
          .into_iter()
          .map(|elem| super::msg::SingleDOFState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        dof_states: msg.dof_states
          .iter()
          .map(|elem| super::msg::SingleDOFState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      dof_states: msg.dof_states
          .into_iter()
          .map(super::msg::SingleDOFState::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to control_msgs__msg__PidState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PidState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestep: builtin_interfaces::msg::Duration,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PidState::default())
  }
}

impl rosidl_runtime_rs::Message for PidState {
  type RmwMsg = super::msg::rmw::PidState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        timestep: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.timestep)).into_owned(),
        error: msg.error,
        error_dot: msg.error_dot,
        i_term: msg.i_term,
        p_gain: msg.p_gain,
        i_gain: msg.i_gain,
        d_gain: msg.d_gain,
        output: msg.output,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        timestep: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.timestep)).into_owned(),
      error: msg.error,
      error_dot: msg.error_dot,
      i_term: msg.i_term,
      p_gain: msg.p_gain,
      i_gain: msg.i_gain,
      d_gain: msg.d_gain,
      output: msg.output,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      timestep: builtin_interfaces::msg::Duration::from_rmw_message(msg.timestep),
      error: msg.error,
      error_dot: msg.error_dot,
      i_term: msg.i_term,
      p_gain: msg.p_gain,
      i_gain: msg.i_gain,
      d_gain: msg.d_gain,
      output: msg.output,
    }
  }
}


// Corresponds to control_msgs__msg__SingleDOFState
/// This message presents current controller state of one degree of freedom.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SingleDOFState {
    /// DoF name, e.g., joint or Cartesian axis name
    pub name: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SingleDOFState::default())
  }
}

impl rosidl_runtime_rs::Message for SingleDOFState {
  type RmwMsg = super::msg::rmw::SingleDOFState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        reference: msg.reference,
        feedback: msg.feedback,
        feedback_dot: msg.feedback_dot,
        error: msg.error,
        error_dot: msg.error_dot,
        time_step: msg.time_step,
        output: msg.output,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      reference: msg.reference,
      feedback: msg.feedback,
      feedback_dot: msg.feedback_dot,
      error: msg.error,
      error_dot: msg.error_dot,
      time_step: msg.time_step,
      output: msg.output,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      reference: msg.reference,
      feedback: msg.feedback,
      feedback_dot: msg.feedback_dot,
      error: msg.error,
      error_dot: msg.error_dot,
      time_step: msg.time_step,
      output: msg.output,
    }
  }
}


// Corresponds to control_msgs__msg__SingleDOFStateStamped
/// This message presents current controller state of one degree of freedom.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SingleDOFStateStamped {
    /// Header timestamp should be update time of controller state
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dof_state: super::msg::SingleDOFState,

}



impl Default for SingleDOFStateStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SingleDOFStateStamped::default())
  }
}

impl rosidl_runtime_rs::Message for SingleDOFStateStamped {
  type RmwMsg = super::msg::rmw::SingleDOFStateStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        dof_state: super::msg::SingleDOFState::into_rmw_message(std::borrow::Cow::Owned(msg.dof_state)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        dof_state: super::msg::SingleDOFState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.dof_state)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      dof_state: super::msg::SingleDOFState::from_rmw_message(msg.dof_state),
    }
  }
}


// Corresponds to control_msgs__msg__SteeringControllerStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SteeringControllerStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// positions of traction wheels if the robot is controlled by position
    pub traction_wheels_position: Vec<f64>,

    /// velocities of traction wheels if the robot is controlled by velocity
    pub traction_wheels_velocity: Vec<f64>,

    /// positions of steering joints
    pub steer_positions: Vec<f64>,

    /// values commanded to traction joints
    pub traction_command: Vec<f64>,

    /// values commanded to steering joints
    pub steering_angle_command: Vec<f64>,

}



impl Default for SteeringControllerStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SteeringControllerStatus::default())
  }
}

impl rosidl_runtime_rs::Message for SteeringControllerStatus {
  type RmwMsg = super::msg::rmw::SteeringControllerStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        traction_wheels_position: msg.traction_wheels_position.into(),
        traction_wheels_velocity: msg.traction_wheels_velocity.into(),
        steer_positions: msg.steer_positions.into(),
        traction_command: msg.traction_command.into(),
        steering_angle_command: msg.steering_angle_command.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        traction_wheels_position: msg.traction_wheels_position.as_slice().into(),
        traction_wheels_velocity: msg.traction_wheels_velocity.as_slice().into(),
        steer_positions: msg.steer_positions.as_slice().into(),
        traction_command: msg.traction_command.as_slice().into(),
        steering_angle_command: msg.steering_angle_command.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      traction_wheels_position: msg.traction_wheels_position
          .into_iter()
          .collect(),
      traction_wheels_velocity: msg.traction_wheels_velocity
          .into_iter()
          .collect(),
      steer_positions: msg.steer_positions
          .into_iter()
          .collect(),
      traction_command: msg.traction_command
          .into_iter()
          .collect(),
      steering_angle_command: msg.steering_angle_command
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to control_msgs__msg__SteeringControllerCommand

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SteeringControllerCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// in rad
    pub steering_angle: f64,

    /// in m/s
    pub linear_velocity: f64,

}



impl Default for SteeringControllerCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SteeringControllerCommand::default())
  }
}

impl rosidl_runtime_rs::Message for SteeringControllerCommand {
  type RmwMsg = super::msg::rmw::SteeringControllerCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        steering_angle: msg.steering_angle,
        linear_velocity: msg.linear_velocity,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      steering_angle: msg.steering_angle,
      linear_velocity: msg.linear_velocity,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      steering_angle: msg.steering_angle,
      linear_velocity: msg.linear_velocity,
    }
  }
}


// Corresponds to control_msgs__msg__SpeedScalingFactor
/// This message contains a scaling factor to scale trajectory execution. A factor of 1.0 means
/// execution at normal speed, a factor of 0.0 means a full pause.
/// Negative values are not allowed (Which should be checked by any instance consuming this message).

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SpeedScalingFactor {

    // This member is not documented.
    #[allow(missing_docs)]
    pub factor: f64,

}



impl Default for SpeedScalingFactor {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SpeedScalingFactor::default())
  }
}

impl rosidl_runtime_rs::Message for SpeedScalingFactor {
  type RmwMsg = super::msg::rmw::SpeedScalingFactor;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        factor: msg.factor,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      factor: msg.factor,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      factor: msg.factor,
    }
  }
}


// Corresponds to control_msgs__msg__VDA5050State
/// This message presents VDA5050-specific vehicle state information
/// For AGVs and AMRs compliant with VDA5050, this provides a snapshot of the vehicle's high-level status
/// Refer Official Specification document for the VDA 5050 - https://github.com/VDA5050/VDA5050

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VDA5050State {
    /// --- Order and Action Status ---------------------------------------
    /// ID of the currently executed order
    pub order_id: std::string::String,

    /// Current action execution status, see ActionStatus constants below
    pub action_status: std::string::String,

    /// ID of the last reached node in the topology
    pub last_node_id: u32,

    /// --- Vehicle State -------------------------------------------------
    /// True if the vehicle's drives are active and vehicle is in motion
    pub driving: bool,

    /// Current battery charge level in percent (0.0 - 100.0)
    pub battery_charge: f64,

    /// Current operating mode of the vehicle, see OperatingMode constants below
    pub operating_mode: std::string::String,

    /// --- Error Reporting -----------------------------------------------
    /// Type/category of the current error, empty string if no error
    pub error_type: std::string::String,

    /// Human-readable description of the current error, empty string if no error
    pub error_description: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VDA5050State::default())
  }
}

impl rosidl_runtime_rs::Message for VDA5050State {
  type RmwMsg = super::msg::rmw::VDA5050State;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        order_id: msg.order_id.as_str().into(),
        action_status: msg.action_status.as_str().into(),
        last_node_id: msg.last_node_id,
        driving: msg.driving,
        battery_charge: msg.battery_charge,
        operating_mode: msg.operating_mode.as_str().into(),
        error_type: msg.error_type.as_str().into(),
        error_description: msg.error_description.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        order_id: msg.order_id.as_str().into(),
        action_status: msg.action_status.as_str().into(),
      last_node_id: msg.last_node_id,
      driving: msg.driving,
      battery_charge: msg.battery_charge,
        operating_mode: msg.operating_mode.as_str().into(),
        error_type: msg.error_type.as_str().into(),
        error_description: msg.error_description.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      order_id: msg.order_id.to_string(),
      action_status: msg.action_status.to_string(),
      last_node_id: msg.last_node_id,
      driving: msg.driving,
      battery_charge: msg.battery_charge,
      operating_mode: msg.operating_mode.to_string(),
      error_type: msg.error_type.to_string(),
      error_description: msg.error_description.to_string(),
    }
  }
}


// Corresponds to control_msgs__msg__WrenchFramed
/// This message represents a wrench (force and torque) expressed in a specific reference frame.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WrenchFramed {
    /// The reference frame in which the wrench is expressed.
    pub frame_id: std::string::String,

    /// The wrench applied.
    pub wrench: geometry_msgs::msg::Wrench,

}



impl Default for WrenchFramed {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::WrenchFramed::default())
  }
}

impl rosidl_runtime_rs::Message for WrenchFramed {
  type RmwMsg = super::msg::rmw::WrenchFramed;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        frame_id: msg.frame_id.as_str().into(),
        wrench: geometry_msgs::msg::Wrench::into_rmw_message(std::borrow::Cow::Owned(msg.wrench)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        frame_id: msg.frame_id.as_str().into(),
        wrench: geometry_msgs::msg::Wrench::into_rmw_message(std::borrow::Cow::Borrowed(&msg.wrench)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      frame_id: msg.frame_id.to_string(),
      wrench: geometry_msgs::msg::Wrench::from_rmw_message(msg.wrench),
    }
  }
}


