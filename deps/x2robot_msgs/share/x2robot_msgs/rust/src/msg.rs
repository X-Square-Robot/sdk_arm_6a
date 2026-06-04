#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to x2robot_msgs__msg__ArmPose

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArmPose {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gripper: f64,

}



impl Default for ArmPose {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ArmPose::default())
  }
}

impl rosidl_runtime_rs::Message for ArmPose {
  type RmwMsg = super::msg::rmw::ArmPose;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        gripper: msg.gripper,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
      gripper: msg.gripper,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
      gripper: msg.gripper,
    }
  }
}


// Corresponds to x2robot_msgs__msg__CanFrame

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CanFrame {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CanFrame::default())
  }
}

impl rosidl_runtime_rs::Message for CanFrame {
  type RmwMsg = super::msg::rmw::CanFrame;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        can_id: msg.can_id,
        dlc: msg.dlc,
        data: msg.data,
        err: msg.err,
        rtr: msg.rtr,
        eff: msg.eff,
        fd: msg.fd,
        brs: msg.brs,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      can_id: msg.can_id,
      dlc: msg.dlc,
        data: msg.data,
      err: msg.err,
      rtr: msg.rtr,
      eff: msg.eff,
      fd: msg.fd,
      brs: msg.brs,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      can_id: msg.can_id,
      dlc: msg.dlc,
      data: msg.data,
      err: msg.err,
      rtr: msg.rtr,
      eff: msg.eff,
      fd: msg.fd,
      brs: msg.brs,
    }
  }
}


// Corresponds to x2robot_msgs__msg__CanFrameBatch

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CanFrameBatch {

    // This member is not documented.
    #[allow(missing_docs)]
    pub frames: Vec<super::msg::CanFrame>,

}



impl Default for CanFrameBatch {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CanFrameBatch::default())
  }
}

impl rosidl_runtime_rs::Message for CanFrameBatch {
  type RmwMsg = super::msg::rmw::CanFrameBatch;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        frames: msg.frames
          .into_iter()
          .map(|elem| super::msg::CanFrame::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        frames: msg.frames
          .iter()
          .map(|elem| super::msg::CanFrame::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      frames: msg.frames
          .into_iter()
          .map(super::msg::CanFrame::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to x2robot_msgs__msg__EnumControllerMode

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EnumControllerMode::default())
  }
}

impl rosidl_runtime_rs::Message for EnumControllerMode {
  type RmwMsg = super::msg::rmw::EnumControllerMode;

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


// Corresponds to x2robot_msgs__msg__EnumDataCollectionMode

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EnumDataCollectionMode::default())
  }
}

impl rosidl_runtime_rs::Message for EnumDataCollectionMode {
  type RmwMsg = super::msg::rmw::EnumDataCollectionMode;

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


// Corresponds to x2robot_msgs__msg__EnumMotionState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EnumMotionState::default())
  }
}

impl rosidl_runtime_rs::Message for EnumMotionState {
  type RmwMsg = super::msg::rmw::EnumMotionState;

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


// Corresponds to x2robot_msgs__msg__EnumMoveitMoveResult

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EnumMoveitMoveResult::default())
  }
}

impl rosidl_runtime_rs::Message for EnumMoveitMoveResult {
  type RmwMsg = super::msg::rmw::EnumMoveitMoveResult;

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


// Corresponds to x2robot_msgs__msg__Joystick
/// 摇杆x轴 [-1, 1]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Joystick::default())
  }
}

impl rosidl_runtime_rs::Message for Joystick {
  type RmwMsg = super::msg::rmw::Joystick;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joystick_x: msg.joystick_x,
        joystick_y: msg.joystick_y,
        trigger: msg.trigger,
        joy_button: msg.joy_button,
        sw1: msg.sw1,
        sw2: msg.sw2,
        sw3: msg.sw3,
        sw4: msg.sw4,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      joystick_x: msg.joystick_x,
      joystick_y: msg.joystick_y,
      trigger: msg.trigger,
      joy_button: msg.joy_button,
      sw1: msg.sw1,
      sw2: msg.sw2,
      sw3: msg.sw3,
      sw4: msg.sw4,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      joystick_x: msg.joystick_x,
      joystick_y: msg.joystick_y,
      trigger: msg.trigger,
      joy_button: msg.joy_button,
      sw1: msg.sw1,
      sw2: msg.sw2,
      sw3: msg.sw3,
      sw4: msg.sw4,
    }
  }
}


// Corresponds to x2robot_msgs__msg__RobotArmState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotArmState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_control_mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_msg: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RobotArmState::default())
  }
}

impl rosidl_runtime_rs::Message for RobotArmState {
  type RmwMsg = super::msg::rmw::RobotArmState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        robot_state: msg.robot_state,
        current_control_mode: msg.current_control_mode,
        error_msg: msg.error_msg.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      robot_state: msg.robot_state,
      current_control_mode: msg.current_control_mode,
        error_msg: msg.error_msg.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      robot_state: msg.robot_state,
      current_control_mode: msg.current_control_mode,
      error_msg: msg.error_msg.to_string(),
    }
  }
}


// Corresponds to x2robot_msgs__msg__SerialData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SerialData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device_id: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cmd_id: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub payload: Vec<u8>,

}



impl Default for SerialData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SerialData::default())
  }
}

impl rosidl_runtime_rs::Message for SerialData {
  type RmwMsg = super::msg::rmw::SerialData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        device_id: msg.device_id,
        cmd_id: msg.cmd_id,
        payload: msg.payload.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      device_id: msg.device_id,
      cmd_id: msg.cmd_id,
        payload: msg.payload.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      device_id: msg.device_id,
      cmd_id: msg.cmd_id,
      payload: msg.payload
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to x2robot_msgs__msg__ServoDriveState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoDriveState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_codes: Vec<u32>,

    /// 0 for no error
    /// non-zero for primitive servo error code, only for debug
    pub current_mode: u8,

}



impl Default for ServoDriveState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ServoDriveState::default())
  }
}

impl rosidl_runtime_rs::Message for ServoDriveState {
  type RmwMsg = super::msg::rmw::ServoDriveState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        joint_names: msg.joint_names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        error_codes: msg.error_codes.into(),
        current_mode: msg.current_mode,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
        joint_names: msg.joint_names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        error_codes: msg.error_codes.as_slice().into(),
      current_mode: msg.current_mode,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      joint_names: msg.joint_names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      error_codes: msg.error_codes
          .into_iter()
          .collect(),
      current_mode: msg.current_mode,
    }
  }
}


// Corresponds to x2robot_msgs__msg__TashanTactileData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TashanTactileData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor_names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frame_ids: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub normal_forces: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tangential_forces: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub directions: Vec<i16>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub capacitances: Vec<u32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_codes: Vec<u8>,

}



impl Default for TashanTactileData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TashanTactileData::default())
  }
}

impl rosidl_runtime_rs::Message for TashanTactileData {
  type RmwMsg = super::msg::rmw::TashanTactileData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        sensor_names: msg.sensor_names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        frame_ids: msg.frame_ids
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        normal_forces: msg.normal_forces.into(),
        tangential_forces: msg.tangential_forces.into(),
        directions: msg.directions.into(),
        capacitances: msg.capacitances.into(),
        error_codes: msg.error_codes.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
        sensor_names: msg.sensor_names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        frame_ids: msg.frame_ids
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        normal_forces: msg.normal_forces.as_slice().into(),
        tangential_forces: msg.tangential_forces.as_slice().into(),
        directions: msg.directions.as_slice().into(),
        capacitances: msg.capacitances.as_slice().into(),
        error_codes: msg.error_codes.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      sensor_names: msg.sensor_names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      frame_ids: msg.frame_ids
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      normal_forces: msg.normal_forces
          .into_iter()
          .collect(),
      tangential_forces: msg.tangential_forces
          .into_iter()
          .collect(),
      directions: msg.directions
          .into_iter()
          .collect(),
      capacitances: msg.capacitances
          .into_iter()
          .collect(),
      error_codes: msg.error_codes
          .into_iter()
          .collect(),
    }
  }
}


