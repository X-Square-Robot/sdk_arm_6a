#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to protocol__msg__ErrorCodes
/// ErrorCodes.msg
/// 系统级错误状态（对外唯一错误协议）

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ErrorCodes {
    /// 系统当前存在的错误
    pub error_codes: Vec<super::msg::GlobalError>,

}



impl Default for ErrorCodes {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ErrorCodes::default())
  }
}

impl rosidl_runtime_rs::Message for ErrorCodes {
  type RmwMsg = super::msg::rmw::ErrorCodes;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        error_codes: msg.error_codes
          .into_iter()
          .map(|elem| super::msg::GlobalError::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        error_codes: msg.error_codes
          .iter()
          .map(|elem| super::msg::GlobalError::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      error_codes: msg.error_codes
          .into_iter()
          .map(super::msg::GlobalError::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to protocol__msg__GlobalError
/// GlobalError.msg
/// 系统评估处理后的错误

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GlobalError {
    /// 填写status_code里面的时间戳。
    pub header: std_msgs::msg::Header,

    /// 组成：[Domain 8bit] [Unit 8bit] [Error 16bit]
    pub error_code: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub level: u8,

    /// 通常不建议塞入这里，字符串限制在25个字符以内。
    pub exception: std::string::String,

}



impl Default for GlobalError {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GlobalError::default())
  }
}

impl rosidl_runtime_rs::Message for GlobalError {
  type RmwMsg = super::msg::rmw::GlobalError;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        error_code: msg.error_code,
        level: msg.level,
        exception: msg.exception.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      error_code: msg.error_code,
      level: msg.level,
        exception: msg.exception.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      error_code: msg.error_code,
      level: msg.level,
      exception: msg.exception.to_string(),
    }
  }
}


// Corresponds to protocol__msg__JointMotorStatus
/// joint_motor_status 索引规则
/// 头部：没有特殊说明情况下，默认使用[pitch,yaw]的顺序。若三个自由度使用[roll,pitch,yaw]的顺序，严格按照rpy的顺序来。
/// 机械臂：一定是从肩膀开始数从 0 ~ n
/// 升降关节：只有一个电机

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointMotorStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_motor_status: Vec<super::msg::MotorStatus>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub all_joints_healthy: bool,

}



impl Default for JointMotorStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointMotorStatus::default())
  }
}

impl rosidl_runtime_rs::Message for JointMotorStatus {
  type RmwMsg = super::msg::rmw::JointMotorStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joint_motor_status: msg.joint_motor_status
          .into_iter()
          .map(|elem| super::msg::MotorStatus::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        all_joints_healthy: msg.all_joints_healthy,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joint_motor_status: msg.joint_motor_status
          .iter()
          .map(|elem| super::msg::MotorStatus::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      all_joints_healthy: msg.all_joints_healthy,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      joint_motor_status: msg.joint_motor_status
          .into_iter()
          .map(super::msg::MotorStatus::from_rmw_message)
          .collect(),
      all_joints_healthy: msg.all_joints_healthy,
    }
  }
}


// Corresponds to protocol__msg__MotorStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotorStatus::default())
  }
}

impl rosidl_runtime_rs::Message for MotorStatus {
  type RmwMsg = super::msg::rmw::MotorStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state_code: msg.state_code,
        error_bit_code: msg.error_bit_code,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      state_code: msg.state_code,
      error_bit_code: msg.error_bit_code,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      state_code: msg.state_code,
      error_bit_code: msg.error_bit_code,
    }
  }
}


// Corresponds to protocol__msg__SensorStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorStatus::default())
  }
}

impl rosidl_runtime_rs::Message for SensorStatus {
  type RmwMsg = super::msg::rmw::SensorStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state_code: msg.state_code,
        error_bit_code: msg.error_bit_code,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      state_code: msg.state_code,
      error_bit_code: msg.error_bit_code,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      state_code: msg.state_code,
      error_bit_code: msg.error_bit_code,
    }
  }
}


// Corresponds to protocol__msg__StatusCode
/// status_code.msg
/// 节点定频 + 事件触发上报的状态快照

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StatusCode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    pub error_code: Vec<super::msg::UnitError>,

}



impl Default for StatusCode {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::StatusCode::default())
  }
}

impl rosidl_runtime_rs::Message for StatusCode {
  type RmwMsg = super::msg::rmw::StatusCode;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        domain: msg.domain,
        unit: msg.unit,
        state_code: msg.state_code,
        error_code: msg.error_code
          .into_iter()
          .map(|elem| super::msg::UnitError::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      domain: msg.domain,
      unit: msg.unit,
      state_code: msg.state_code,
        error_code: msg.error_code
          .iter()
          .map(|elem| super::msg::UnitError::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      domain: msg.domain,
      unit: msg.unit,
      state_code: msg.state_code,
      error_code: msg.error_code
          .into_iter()
          .map(super::msg::UnitError::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to protocol__msg__UnitError
/// UnitError.msg
/// 某单元当前仍然存在的错误

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UnitError {
    /// 单元定义的错误码（不含 domain/unit）
    pub error_code: u8,

    /// 0表示info 1表示warning,2表示error,3表示fatal
    pub level: u8,

    /// 一些额外的信息，通常不建议将信息塞入这里。字符串长度限制在25以内。
    pub exception: std::string::String,

}



impl Default for UnitError {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UnitError::default())
  }
}

impl rosidl_runtime_rs::Message for UnitError {
  type RmwMsg = super::msg::rmw::UnitError;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        error_code: msg.error_code,
        level: msg.level,
        exception: msg.exception.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      error_code: msg.error_code,
      level: msg.level,
        exception: msg.exception.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      error_code: msg.error_code,
      level: msg.level,
      exception: msg.exception.to_string(),
    }
  }
}


// Corresponds to protocol__msg__ApplicationUnitEnum

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ApplicationUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for ApplicationUnitEnum {
  type RmwMsg = super::msg::rmw::ApplicationUnitEnum;

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


// Corresponds to protocol__msg__RecorderErrorEnum
/// Unit: RECORDER
/// topic频率过低

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RecorderErrorEnum::default())
  }
}

impl rosidl_runtime_rs::Message for RecorderErrorEnum {
  type RmwMsg = super::msg::rmw::RecorderErrorEnum;

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


// Corresponds to protocol__msg__RecorderUnitEnum
/// Unit: RECORDER
/// topic频率过低

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RecorderUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for RecorderUnitEnum {
  type RmwMsg = super::msg::rmw::RecorderUnitEnum;

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


// Corresponds to protocol__msg__TaskManagerErrorEnum
/// Unit: TASK_MANAGER
/// 任务初始化失败

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TaskManagerErrorEnum::default())
  }
}

impl rosidl_runtime_rs::Message for TaskManagerErrorEnum {
  type RmwMsg = super::msg::rmw::TaskManagerErrorEnum;

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


// Corresponds to protocol__msg__TaskManagerUnitEnum
/// Unit: TASK_MANAGER
/// 任务初始化失败

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TaskManagerUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for TaskManagerUnitEnum {
  type RmwMsg = super::msg::rmw::TaskManagerUnitEnum;

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


// Corresponds to protocol__msg__DomainEnum

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DomainEnum::default())
  }
}

impl rosidl_runtime_rs::Message for DomainEnum {
  type RmwMsg = super::msg::rmw::DomainEnum;

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


// Corresponds to protocol__msg__EaiUnitEnum

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EaiUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for EaiUnitEnum {
  type RmwMsg = super::msg::rmw::EaiUnitEnum;

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


// Corresponds to protocol__msg__X2robotClientErrorEnum
/// Unit: X2ROBOT_CLIENT
/// 模型初始化参数无效

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::X2robotClientErrorEnum::default())
  }
}

impl rosidl_runtime_rs::Message for X2robotClientErrorEnum {
  type RmwMsg = super::msg::rmw::X2robotClientErrorEnum;

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


// Corresponds to protocol__msg__ErrorLevelEnum

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ErrorLevelEnum::default())
  }
}

impl rosidl_runtime_rs::Message for ErrorLevelEnum {
  type RmwMsg = super::msg::rmw::ErrorLevelEnum;

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


// Corresponds to protocol__msg__BodyErrorEnum
/// Unit: BODY
/// 身体板获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BodyErrorEnum::default())
  }
}

impl rosidl_runtime_rs::Message for BodyErrorEnum {
  type RmwMsg = super::msg::rmw::BodyErrorEnum;

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


// Corresponds to protocol__msg__BodyUnitEnum
/// Unit: BODY
/// 身体板获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BodyUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for BodyUnitEnum {
  type RmwMsg = super::msg::rmw::BodyUnitEnum;

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


// Corresponds to protocol__msg__ChassisErrorEnum
/// Unit: CHASSIS
/// 底盘获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ChassisErrorEnum::default())
  }
}

impl rosidl_runtime_rs::Message for ChassisErrorEnum {
  type RmwMsg = super::msg::rmw::ChassisErrorEnum;

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


// Corresponds to protocol__msg__ChassisUnitEnum
/// Unit: CHASSIS
/// 底盘获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ChassisUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for ChassisUnitEnum {
  type RmwMsg = super::msg::rmw::ChassisUnitEnum;

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


// Corresponds to protocol__msg__GripperLeftErrorEnum
/// Unit: GRIPPER_LEFT
/// 心跳超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GripperLeftErrorEnum::default())
  }
}

impl rosidl_runtime_rs::Message for GripperLeftErrorEnum {
  type RmwMsg = super::msg::rmw::GripperLeftErrorEnum;

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


// Corresponds to protocol__msg__GripperLeftUnitEnum
/// Unit: GRIPPER_LEFT
/// 心跳超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GripperLeftUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for GripperLeftUnitEnum {
  type RmwMsg = super::msg::rmw::GripperLeftUnitEnum;

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


// Corresponds to protocol__msg__GripperRightErrorEnum
/// Unit: GRIPPER_RIGHT
/// 心跳超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GripperRightErrorEnum::default())
  }
}

impl rosidl_runtime_rs::Message for GripperRightErrorEnum {
  type RmwMsg = super::msg::rmw::GripperRightErrorEnum;

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


// Corresponds to protocol__msg__GripperRightUnitEnum
/// Unit: GRIPPER_RIGHT
/// 心跳超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GripperRightUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for GripperRightUnitEnum {
  type RmwMsg = super::msg::rmw::GripperRightUnitEnum;

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


// Corresponds to protocol__msg__HalErrorEnum
/// Unit: HAL
/// HAL获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HalErrorEnum::default())
  }
}

impl rosidl_runtime_rs::Message for HalErrorEnum {
  type RmwMsg = super::msg::rmw::HalErrorEnum;

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


// Corresponds to protocol__msg__HalUnitEnum

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HalUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for HalUnitEnum {
  type RmwMsg = super::msg::rmw::HalUnitEnum;

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


// Corresponds to protocol__msg__HeadErrorEnum
/// Unit: HEAD
/// 头部获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HeadErrorEnum::default())
  }
}

impl rosidl_runtime_rs::Message for HeadErrorEnum {
  type RmwMsg = super::msg::rmw::HeadErrorEnum;

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


// Corresponds to protocol__msg__HeadMountErrorEnum
/// Unit: HEAD_MOUNT
/// 心跳超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HeadMountErrorEnum::default())
  }
}

impl rosidl_runtime_rs::Message for HeadMountErrorEnum {
  type RmwMsg = super::msg::rmw::HeadMountErrorEnum;

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


// Corresponds to protocol__msg__HeadMountUnitEnum
/// Unit: HEAD_MOUNT
/// 心跳超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HeadMountUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for HeadMountUnitEnum {
  type RmwMsg = super::msg::rmw::HeadMountUnitEnum;

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


// Corresponds to protocol__msg__HeadUnitEnum
/// Unit: HEAD
/// 头部获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HeadUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for HeadUnitEnum {
  type RmwMsg = super::msg::rmw::HeadUnitEnum;

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


// Corresponds to protocol__msg__LidarErrorEnum
/// Unit: LIDAR
/// 雷达获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LidarErrorEnum::default())
  }
}

impl rosidl_runtime_rs::Message for LidarErrorEnum {
  type RmwMsg = super::msg::rmw::LidarErrorEnum;

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


// Corresponds to protocol__msg__LidarUnitEnum
/// Unit: LIDAR
/// 雷达获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LidarUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for LidarUnitEnum {
  type RmwMsg = super::msg::rmw::LidarUnitEnum;

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


// Corresponds to protocol__msg__CameraErrorEnum
/// Unit: CAMERA
/// 相机节点获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CameraErrorEnum::default())
  }
}

impl rosidl_runtime_rs::Message for CameraErrorEnum {
  type RmwMsg = super::msg::rmw::CameraErrorEnum;

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


// Corresponds to protocol__msg__CameraUnitEnum
/// Unit: CAMERA
/// 相机节点获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CameraUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for CameraUnitEnum {
  type RmwMsg = super::msg::rmw::CameraUnitEnum;

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


// Corresponds to protocol__msg__MediaUnitEnum

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MediaUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for MediaUnitEnum {
  type RmwMsg = super::msg::rmw::MediaUnitEnum;

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


// Corresponds to protocol__msg__MonitorUnitEnum

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MonitorUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for MonitorUnitEnum {
  type RmwMsg = super::msg::rmw::MonitorUnitEnum;

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


// Corresponds to protocol__msg__NetMonitorErrorEnum
/// Unit: NET_MONITOR
/// 网络监控节点获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NetMonitorErrorEnum::default())
  }
}

impl rosidl_runtime_rs::Message for NetMonitorErrorEnum {
  type RmwMsg = super::msg::rmw::NetMonitorErrorEnum;

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


// Corresponds to protocol__msg__NetMonitorUnitEnum
/// Unit: NET_MONITOR
/// 网络监控节点获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NetMonitorUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for NetMonitorUnitEnum {
  type RmwMsg = super::msg::rmw::NetMonitorUnitEnum;

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


// Corresponds to protocol__msg__SystemMonitorErrorEnum
/// Unit: SYSTEM_MONITOR
/// 系统资源监控节点获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SystemMonitorErrorEnum::default())
  }
}

impl rosidl_runtime_rs::Message for SystemMonitorErrorEnum {
  type RmwMsg = super::msg::rmw::SystemMonitorErrorEnum;

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


// Corresponds to protocol__msg__SystemMonitorUnitEnum
/// Unit: SYSTEM_MONITOR
/// 系统资源监控节点获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SystemMonitorUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for SystemMonitorUnitEnum {
  type RmwMsg = super::msg::rmw::SystemMonitorUnitEnum;

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


// Corresponds to protocol__msg__KincoLiftWaistErrorEnum
/// Unit: KINCO_LIFT_WAIST
/// EX001腰部步科电机获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::KincoLiftWaistErrorEnum::default())
  }
}

impl rosidl_runtime_rs::Message for KincoLiftWaistErrorEnum {
  type RmwMsg = super::msg::rmw::KincoLiftWaistErrorEnum;

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


// Corresponds to protocol__msg__KincoLiftWaistUnitEnum
/// Unit: KINCO_LIFT_WAIST
/// EX001腰部步科电机获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::KincoLiftWaistUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for KincoLiftWaistUnitEnum {
  type RmwMsg = super::msg::rmw::KincoLiftWaistUnitEnum;

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


// Corresponds to protocol__msg__LeftArmErrorEnum
/// Unit: LEFT_ARM
/// 左臂硬件获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LeftArmErrorEnum::default())
  }
}

impl rosidl_runtime_rs::Message for LeftArmErrorEnum {
  type RmwMsg = super::msg::rmw::LeftArmErrorEnum;

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


// Corresponds to protocol__msg__LeftArmUnitEnum
/// Unit: LEFT_ARM
/// 左臂硬件获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LeftArmUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for LeftArmUnitEnum {
  type RmwMsg = super::msg::rmw::LeftArmUnitEnum;

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


// Corresponds to protocol__msg__LeftEndEffectorUnitEnum
/// Unit: LEFT_END_EFFECTOR

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LeftEndEffectorUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for LeftEndEffectorUnitEnum {
  type RmwMsg = super::msg::rmw::LeftEndEffectorUnitEnum;

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


// Corresponds to protocol__msg__LeftRmGripperErrorEnum
/// Unit: LEFT_RM_GRIPPER
/// 左 RM 夹爪获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LeftRmGripperErrorEnum::default())
  }
}

impl rosidl_runtime_rs::Message for LeftRmGripperErrorEnum {
  type RmwMsg = super::msg::rmw::LeftRmGripperErrorEnum;

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


// Corresponds to protocol__msg__LeftRmGripperUnitEnum
/// Unit: LEFT_RM_GRIPPER
/// 左 RM 夹爪获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LeftRmGripperUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for LeftRmGripperUnitEnum {
  type RmwMsg = super::msg::rmw::LeftRmGripperUnitEnum;

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


// Corresponds to protocol__msg__LeftTianjiArmErrorEnum
/// Unit: LEFT_TIANJI_ARM
/// 天机左臂获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LeftTianjiArmErrorEnum::default())
  }
}

impl rosidl_runtime_rs::Message for LeftTianjiArmErrorEnum {
  type RmwMsg = super::msg::rmw::LeftTianjiArmErrorEnum;

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


// Corresponds to protocol__msg__LeftTianjiArmUnitEnum
/// Unit: LEFT_TIANJI_ARM
/// 天机左臂获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LeftTianjiArmUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for LeftTianjiArmUnitEnum {
  type RmwMsg = super::msg::rmw::LeftTianjiArmUnitEnum;

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


// Corresponds to protocol__msg__MasterLeftArmErrorEnum
/// Unit: MASTER_LEFT_ARM
/// 左主臂电机获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MasterLeftArmErrorEnum::default())
  }
}

impl rosidl_runtime_rs::Message for MasterLeftArmErrorEnum {
  type RmwMsg = super::msg::rmw::MasterLeftArmErrorEnum;

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


// Corresponds to protocol__msg__MasterLeftArmUnitEnum
/// Unit: MASTER_LEFT_ARM
/// 左主臂电机获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MasterLeftArmUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for MasterLeftArmUnitEnum {
  type RmwMsg = super::msg::rmw::MasterLeftArmUnitEnum;

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


// Corresponds to protocol__msg__MasterRightArmErrorEnum
/// Unit: MASTER_RIGHT_ARM
/// 右主臂获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MasterRightArmErrorEnum::default())
  }
}

impl rosidl_runtime_rs::Message for MasterRightArmErrorEnum {
  type RmwMsg = super::msg::rmw::MasterRightArmErrorEnum;

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


// Corresponds to protocol__msg__MasterRightArmUnitEnum
/// Unit: MASTER_RIGHT_ARM
/// 右主臂获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MasterRightArmUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for MasterRightArmUnitEnum {
  type RmwMsg = super::msg::rmw::MasterRightArmUnitEnum;

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


// Corresponds to protocol__msg__MotionUnitEnum

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotionUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for MotionUnitEnum {
  type RmwMsg = super::msg::rmw::MotionUnitEnum;

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


// Corresponds to protocol__msg__MoveitServerErrorEnum
/// Unit: MOVEIT_SERVER
/// moveit server获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MoveitServerErrorEnum::default())
  }
}

impl rosidl_runtime_rs::Message for MoveitServerErrorEnum {
  type RmwMsg = super::msg::rmw::MoveitServerErrorEnum;

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


// Corresponds to protocol__msg__MoveitServerUnitEnum
/// Unit: MOVEIT_SERVER
/// moveit server获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MoveitServerUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for MoveitServerUnitEnum {
  type RmwMsg = super::msg::rmw::MoveitServerUnitEnum;

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


// Corresponds to protocol__msg__QpControllerErrorEnum
/// Unit: QP_CONTROLLER
/// 控制器状态上报超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::QpControllerErrorEnum::default())
  }
}

impl rosidl_runtime_rs::Message for QpControllerErrorEnum {
  type RmwMsg = super::msg::rmw::QpControllerErrorEnum;

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


// Corresponds to protocol__msg__QpControllerUnitEnum
/// Unit: QP_CONTROLLER
/// 控制器状态上报超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::QpControllerUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for QpControllerUnitEnum {
  type RmwMsg = super::msg::rmw::QpControllerUnitEnum;

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


// Corresponds to protocol__msg__RealtimeControllerErrorEnum
/// Unit: REALTIME_CONTROLLER
/// 安全控制器状态获取超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RealtimeControllerErrorEnum::default())
  }
}

impl rosidl_runtime_rs::Message for RealtimeControllerErrorEnum {
  type RmwMsg = super::msg::rmw::RealtimeControllerErrorEnum;

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


// Corresponds to protocol__msg__RealtimeControllerUnitEnum
/// Unit: REALTIME_CONTROLLER
/// 安全控制器状态获取超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RealtimeControllerUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for RealtimeControllerUnitEnum {
  type RmwMsg = super::msg::rmw::RealtimeControllerUnitEnum;

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


// Corresponds to protocol__msg__RightArmErrorEnum
/// Unit: RIGHT_ARM
/// 右臂硬件获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RightArmErrorEnum::default())
  }
}

impl rosidl_runtime_rs::Message for RightArmErrorEnum {
  type RmwMsg = super::msg::rmw::RightArmErrorEnum;

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


// Corresponds to protocol__msg__RightArmUnitEnum
/// Unit: RIGHT_ARM
/// 右臂硬件获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RightArmUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for RightArmUnitEnum {
  type RmwMsg = super::msg::rmw::RightArmUnitEnum;

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


// Corresponds to protocol__msg__RightEndEffectorUnitEnum
/// Unit: RIGHT_END_EFFECTOR

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RightEndEffectorUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for RightEndEffectorUnitEnum {
  type RmwMsg = super::msg::rmw::RightEndEffectorUnitEnum;

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


// Corresponds to protocol__msg__RightRmGripperErrorEnum
/// Unit: RIGHT_RM_GRIPPER
/// 右 RM 夹爪获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RightRmGripperErrorEnum::default())
  }
}

impl rosidl_runtime_rs::Message for RightRmGripperErrorEnum {
  type RmwMsg = super::msg::rmw::RightRmGripperErrorEnum;

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


// Corresponds to protocol__msg__RightRmGripperUnitEnum
/// Unit: RIGHT_RM_GRIPPER
/// 右 RM 夹爪获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RightRmGripperUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for RightRmGripperUnitEnum {
  type RmwMsg = super::msg::rmw::RightRmGripperUnitEnum;

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


// Corresponds to protocol__msg__RightTianjiArmErrorEnum
/// Unit: RIGHT_TIANJI_ARM
/// 天机右臂获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RightTianjiArmErrorEnum::default())
  }
}

impl rosidl_runtime_rs::Message for RightTianjiArmErrorEnum {
  type RmwMsg = super::msg::rmw::RightTianjiArmErrorEnum;

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


// Corresponds to protocol__msg__RightTianjiArmUnitEnum
/// Unit: RIGHT_TIANJI_ARM
/// 天机右臂获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RightTianjiArmUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for RightTianjiArmUnitEnum {
  type RmwMsg = super::msg::rmw::RightTianjiArmUnitEnum;

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


// Corresponds to protocol__msg__Ti5WaistErrorEnum
/// Unit: TI5_WAIST
/// 钛虎腰部电机获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Ti5WaistErrorEnum::default())
  }
}

impl rosidl_runtime_rs::Message for Ti5WaistErrorEnum {
  type RmwMsg = super::msg::rmw::Ti5WaistErrorEnum;

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


// Corresponds to protocol__msg__Ti5WaistUnitEnum
/// Unit: TI5_WAIST
/// 钛虎腰部电机获取状态超时

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Ti5WaistUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for Ti5WaistUnitEnum {
  type RmwMsg = super::msg::rmw::Ti5WaistUnitEnum;

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


// Corresponds to protocol__msg__SpnUnitEnum
/// No units defined under this domain

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SpnUnitEnum::default())
  }
}

impl rosidl_runtime_rs::Message for SpnUnitEnum {
  type RmwMsg = super::msg::rmw::SpnUnitEnum;

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


// Corresponds to protocol__msg__StateEnum

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::StateEnum::default())
  }
}

impl rosidl_runtime_rs::Message for StateEnum {
  type RmwMsg = super::msg::rmw::StateEnum;

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


