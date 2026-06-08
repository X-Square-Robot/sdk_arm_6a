// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/QpControllerErrorEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/qp_controller_error_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__QP_CONTROLLER_ERROR_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__QP_CONTROLLER_ERROR_ENUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'HEARTBEAT_TIMEOUT'.
enum
{
  protocol__msg__QpControllerErrorEnum__HEARTBEAT_TIMEOUT = 1ul
};

/// Constant 'CONFIG_OK'.
/**
  * 配置加载正常
 */
enum
{
  protocol__msg__QpControllerErrorEnum__CONFIG_OK = 16ul
};

/// Constant 'PARAM_MISSING'.
/**
  * 必需参数缺失
 */
enum
{
  protocol__msg__QpControllerErrorEnum__PARAM_MISSING = 17ul
};

/// Constant 'PARAM_INVALID'.
/**
  * 参数取值非法（范围/类型）
 */
enum
{
  protocol__msg__QpControllerErrorEnum__PARAM_INVALID = 18ul
};

/// Constant 'URDF_PARSE_FAILED'.
/**
  * URDF 解析失败
 */
enum
{
  protocol__msg__QpControllerErrorEnum__URDF_PARSE_FAILED = 19ul
};

/// Constant 'MODEL_BUILD_FAILED'.
/**
  * Pinocchio model 构建失败
 */
enum
{
  protocol__msg__QpControllerErrorEnum__MODEL_BUILD_FAILED = 20ul
};

/// Constant 'FRAME_NOT_FOUND'.
/**
  * 配置引用的 frame 在模型中不存在
 */
enum
{
  protocol__msg__QpControllerErrorEnum__FRAME_NOT_FOUND = 21ul
};

/// Constant 'JOINT_NOT_FOUND'.
/**
  * 配置引用的 joint 在模型中不存在
 */
enum
{
  protocol__msg__QpControllerErrorEnum__JOINT_NOT_FOUND = 22ul
};

/// Constant 'CONFIG_DIM_MISMATCH'.
/**
  * 参数维度与模型不匹配
 */
enum
{
  protocol__msg__QpControllerErrorEnum__CONFIG_DIM_MISMATCH = 23ul
};

/// Constant 'HW_INTERFACE_OK'.
/**
  * 硬件接口正常
 */
enum
{
  protocol__msg__QpControllerErrorEnum__HW_INTERFACE_OK = 32ul
};

/// Constant 'STATE_INTERFACE_MISSING'.
/**
  * 请求的 state interface 未被导出
 */
enum
{
  protocol__msg__QpControllerErrorEnum__STATE_INTERFACE_MISSING = 33ul
};

/// Constant 'COMMAND_INTERFACE_MISSING'.
/**
  * 请求的 command interface 未被导出
 */
enum
{
  protocol__msg__QpControllerErrorEnum__COMMAND_INTERFACE_MISSING = 34ul
};

/// Constant 'STATE_READ_NAN'.
/**
  * 读取到 NaN/Inf 的关节状态
 */
enum
{
  protocol__msg__QpControllerErrorEnum__STATE_READ_NAN = 35ul
};

/// Constant 'STATE_STALE'.
/**
  * 状态值长时间未更新
 */
enum
{
  protocol__msg__QpControllerErrorEnum__STATE_STALE = 36ul
};

/// Constant 'COMMAND_WRITE_FAILED'.
/**
  * 向 command interface 写入失败
 */
enum
{
  protocol__msg__QpControllerErrorEnum__COMMAND_WRITE_FAILED = 37ul
};

/// Constant 'KINEMATICS_OK'.
/**
  * 运动学/动力学计算正常
 */
enum
{
  protocol__msg__QpControllerErrorEnum__KINEMATICS_OK = 48ul
};

/// Constant 'FK_FAILED'.
/**
  * 正运动学计算失败
 */
enum
{
  protocol__msg__QpControllerErrorEnum__FK_FAILED = 49ul
};

/// Constant 'JACOBIAN_FAILED'.
/**
  * Jacobian 计算失败
 */
enum
{
  protocol__msg__QpControllerErrorEnum__JACOBIAN_FAILED = 50ul
};

/// Constant 'JACOBIAN_SINGULAR'.
/**
  * Jacobian 接近奇异（条件数过大）
 */
enum
{
  protocol__msg__QpControllerErrorEnum__JACOBIAN_SINGULAR = 51ul
};

/// Constant 'DYNAMICS_FAILED'.
/**
  * CRBA/RNEA 等动力学计算失败
 */
enum
{
  protocol__msg__QpControllerErrorEnum__DYNAMICS_FAILED = 52ul
};

/// Constant 'NON_FINITE_MODEL_OUTPUT'.
/**
  * 运动学/动力学输出含 NaN/Inf
 */
enum
{
  protocol__msg__QpControllerErrorEnum__NON_FINITE_MODEL_OUTPUT = 53ul
};

/// Constant 'QP_OK'.
/**
  * QP 求解正常
 */
enum
{
  protocol__msg__QpControllerErrorEnum__QP_OK = 64ul
};

/// Constant 'QP_SETUP_FAILED'.
/**
  * QP 问题构建失败
 */
enum
{
  protocol__msg__QpControllerErrorEnum__QP_SETUP_FAILED = 65ul
};

/// Constant 'QP_INFEASIBLE'.
/**
  * QP 不可行（约束冲突）
 */
enum
{
  protocol__msg__QpControllerErrorEnum__QP_INFEASIBLE = 66ul
};

/// Constant 'QP_UNBOUNDED'.
/**
  * QP 无界
 */
enum
{
  protocol__msg__QpControllerErrorEnum__QP_UNBOUNDED = 67ul
};

/// Constant 'QP_MAX_ITER'.
/**
  * 达到最大迭代次数但未收敛
 */
enum
{
  protocol__msg__QpControllerErrorEnum__QP_MAX_ITER = 68ul
};

/// Constant 'QP_NUMERICAL'.
/**
  * 数值问题（Hessian 非正定等）
 */
enum
{
  protocol__msg__QpControllerErrorEnum__QP_NUMERICAL = 69ul
};

/// Constant 'QP_SOLVER_TIMEOUT'.
/**
  * 求解超过实时预算
 */
enum
{
  protocol__msg__QpControllerErrorEnum__QP_SOLVER_TIMEOUT = 70ul
};

/// Constant 'QP_SOLUTION_NAN'.
/**
  * 求解结果包含 NaN/Inf
 */
enum
{
  protocol__msg__QpControllerErrorEnum__QP_SOLUTION_NAN = 71ul
};

/// Constant 'TASK_OK'.
/**
  * 任务/约束正常
 */
enum
{
  protocol__msg__QpControllerErrorEnum__TASK_OK = 80ul
};

/// Constant 'TASK_NOT_REGISTERED'.
/**
  * 引用了未注册的 task
 */
enum
{
  protocol__msg__QpControllerErrorEnum__TASK_NOT_REGISTERED = 81ul
};

/// Constant 'TASK_DIM_MISMATCH'.
/**
  * task 输入/输出维度与模型不匹配
 */
enum
{
  protocol__msg__QpControllerErrorEnum__TASK_DIM_MISMATCH = 82ul
};

/// Constant 'TASK_UPDATE_FAILED'.
/**
  * task 更新阶段异常
 */
enum
{
  protocol__msg__QpControllerErrorEnum__TASK_UPDATE_FAILED = 83ul
};

/// Constant 'CONSTRAINT_VIOLATED'.
/**
  * 软约束超限
 */
enum
{
  protocol__msg__QpControllerErrorEnum__CONSTRAINT_VIOLATED = 84ul
};

/// Constant 'ROLLING_CONSTRAINT_SLIP'.
/**
  * 轮式 no-slip 约束偏差过大
 */
enum
{
  protocol__msg__QpControllerErrorEnum__ROLLING_CONSTRAINT_SLIP = 85ul
};

/// Constant 'REFERENCE_OK'.
/**
  * 参考指令正常
 */
enum
{
  protocol__msg__QpControllerErrorEnum__REFERENCE_OK = 96ul
};

/// Constant 'REFERENCE_TIMEOUT'.
/**
  * 长时间未收到参考指令，已切换到 hold
 */
enum
{
  protocol__msg__QpControllerErrorEnum__REFERENCE_TIMEOUT = 97ul
};

/// Constant 'REFERENCE_NAN'.
/**
  * 参考指令含 NaN/Inf，已丢弃
 */
enum
{
  protocol__msg__QpControllerErrorEnum__REFERENCE_NAN = 98ul
};

/// Constant 'REFERENCE_DIM_MISMATCH'.
/**
  * 参考指令维度错误
 */
enum
{
  protocol__msg__QpControllerErrorEnum__REFERENCE_DIM_MISMATCH = 99ul
};

/// Constant 'REFERENCE_JUMP'.
/**
  * 参考指令跳变过大，已限幅
 */
enum
{
  protocol__msg__QpControllerErrorEnum__REFERENCE_JUMP = 100ul
};

/// Constant 'REFERENCE_OUT_OF_WORKSPACE'.
/**
  * 参考位姿超出可达工作空间
 */
enum
{
  protocol__msg__QpControllerErrorEnum__REFERENCE_OUT_OF_WORKSPACE = 101ul
};

/// Constant 'SAFETY_OK'.
/**
  * 安全状态正常
 */
enum
{
  protocol__msg__QpControllerErrorEnum__SAFETY_OK = 112ul
};

/// Constant 'JOINT_POSITION_LIMIT'.
/**
  * 关节位置触限
 */
enum
{
  protocol__msg__QpControllerErrorEnum__JOINT_POSITION_LIMIT = 113ul
};

/// Constant 'JOINT_VELOCITY_LIMIT'.
/**
  * 关节速度触限（已饱和）
 */
enum
{
  protocol__msg__QpControllerErrorEnum__JOINT_VELOCITY_LIMIT = 114ul
};

/// Constant 'JOINT_TORQUE_LIMIT'.
/**
  * 关节力矩触限（已饱和）
 */
enum
{
  protocol__msg__QpControllerErrorEnum__JOINT_TORQUE_LIMIT = 115ul
};

/// Constant 'CARTESIAN_VELOCITY_LIMIT'.
/**
  * 末端速度触限
 */
enum
{
  protocol__msg__QpControllerErrorEnum__CARTESIAN_VELOCITY_LIMIT = 116ul
};

/// Constant 'SELF_COLLISION_IMMINENT'.
/**
  * 自碰撞即将发生
 */
enum
{
  protocol__msg__QpControllerErrorEnum__SELF_COLLISION_IMMINENT = 117ul
};

/// Constant 'EMERGENCY_STOP'.
/**
  * 急停已触发
 */
enum
{
  protocol__msg__QpControllerErrorEnum__EMERGENCY_STOP = 118ul
};

/// Constant 'ODOM_OK'.
/**
  * 里程计/滤波正常
 */
enum
{
  protocol__msg__QpControllerErrorEnum__ODOM_OK = 128ul
};

/// Constant 'ODOM_JUMP_DETECTED'.
/**
  * 里程计/位姿跳变被检测到
 */
enum
{
  protocol__msg__QpControllerErrorEnum__ODOM_JUMP_DETECTED = 129ul
};

/// Constant 'FILTER_DIVERGED'.
/**
  * 滤波器发散
 */
enum
{
  protocol__msg__QpControllerErrorEnum__FILTER_DIVERGED = 130ul
};

/// Constant 'FILTER_INPUT_NAN'.
/**
  * 滤波器输入含 NaN/Inf
 */
enum
{
  protocol__msg__QpControllerErrorEnum__FILTER_INPUT_NAN = 131ul
};

/// Constant 'TIMING_OK'.
/**
  * 实时性正常
 */
enum
{
  protocol__msg__QpControllerErrorEnum__TIMING_OK = 144ul
};

/// Constant 'CONTROL_LOOP_OVERRUN'.
/**
  * 单次 update 超出控制周期
 */
enum
{
  protocol__msg__QpControllerErrorEnum__CONTROL_LOOP_OVERRUN = 145ul
};

/// Constant 'PERIOD_INVALID'.
/**
  * update 传入的 period 非法
 */
enum
{
  protocol__msg__QpControllerErrorEnum__PERIOD_INVALID = 146ul
};

/// Constant 'CLOCK_JUMP'.
/**
  * 时间戳回退或跳变
 */
enum
{
  protocol__msg__QpControllerErrorEnum__CLOCK_JUMP = 147ul
};

/// Struct defined in msg/QpControllerErrorEnum in the package protocol.
/**
  * Unit: QP_CONTROLLER
  * 控制器状态上报超时
 */
typedef struct protocol__msg__QpControllerErrorEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__QpControllerErrorEnum;

// Struct for a sequence of protocol__msg__QpControllerErrorEnum.
typedef struct protocol__msg__QpControllerErrorEnum__Sequence
{
  protocol__msg__QpControllerErrorEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__QpControllerErrorEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__QP_CONTROLLER_ERROR_ENUM__STRUCT_H_
