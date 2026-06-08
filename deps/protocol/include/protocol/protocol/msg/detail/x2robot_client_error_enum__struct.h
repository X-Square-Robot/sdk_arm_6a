// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/X2robotClientErrorEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/x2robot_client_error_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__X2ROBOT_CLIENT_ERROR_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__X2ROBOT_CLIENT_ERROR_ENUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'MODEL_INFO_INVALID'.
enum
{
  protocol__msg__X2robotClientErrorEnum__MODEL_INFO_INVALID = 16ul
};

/// Constant 'MODEL_ADDRESS_RESOLVE_FAILED'.
/**
  * 模型服务地址解析失败
 */
enum
{
  protocol__msg__X2robotClientErrorEnum__MODEL_ADDRESS_RESOLVE_FAILED = 17ul
};

/// Constant 'MODEL_SERVER_CONNECT_FAILED'.
/**
  * 连接模型服务失败
 */
enum
{
  protocol__msg__X2robotClientErrorEnum__MODEL_SERVER_CONNECT_FAILED = 18ul
};

/// Constant 'MODEL_SERVER_METADATA_TIMEOUT'.
/**
  * 等待模型服务元信息超时
 */
enum
{
  protocol__msg__X2robotClientErrorEnum__MODEL_SERVER_METADATA_TIMEOUT = 19ul
};

/// Constant 'MODEL_SERVER_METADATA_DECODE_FAILED'.
/**
  * 模型服务元信息解析失败
 */
enum
{
  protocol__msg__X2robotClientErrorEnum__MODEL_SERVER_METADATA_DECODE_FAILED = 20ul
};

/// Constant 'ROBOT_CLIENT_INIT_FAILED'.
/**
  * 机器人客户端初始化失败
 */
enum
{
  protocol__msg__X2robotClientErrorEnum__ROBOT_CLIENT_INIT_FAILED = 21ul
};

/// Constant 'ROBOT_MODEL_CONFIG_INVALID'.
/**
  * 机器人型号配置无效
 */
enum
{
  protocol__msg__X2robotClientErrorEnum__ROBOT_MODEL_CONFIG_INVALID = 22ul
};

/// Constant 'UNSUPPORTED_CONTROL_MODE'.
/**
  * 不支持的控制模式
 */
enum
{
  protocol__msg__X2robotClientErrorEnum__UNSUPPORTED_CONTROL_MODE = 23ul
};

/// Constant 'INFERENCE_START_FAILED'.
/**
  * 开始推理失败
 */
enum
{
  protocol__msg__X2robotClientErrorEnum__INFERENCE_START_FAILED = 24ul
};

/// Constant 'INFERENCE_STOP_FAILED'.
/**
  * 停止推理失败
 */
enum
{
  protocol__msg__X2robotClientErrorEnum__INFERENCE_STOP_FAILED = 25ul
};

/// Constant 'INFERENCE_CLOSE_FAILED'.
/**
  * 关闭推理服务失败
 */
enum
{
  protocol__msg__X2robotClientErrorEnum__INFERENCE_CLOSE_FAILED = 26ul
};

/// Constant 'SENSOR_DATA_COLLECT_FAILED'.
/**
  * 机器人状态采集失败
 */
enum
{
  protocol__msg__X2robotClientErrorEnum__SENSOR_DATA_COLLECT_FAILED = 27ul
};

/// Constant 'MODEL_REQUEST_SERIALIZE_FAILED'.
/**
  * 模型请求序列化失败
 */
enum
{
  protocol__msg__X2robotClientErrorEnum__MODEL_REQUEST_SERIALIZE_FAILED = 28ul
};

/// Constant 'MODEL_REQUEST_SEND_FAILED'.
/**
  * 模型请求发送失败
 */
enum
{
  protocol__msg__X2robotClientErrorEnum__MODEL_REQUEST_SEND_FAILED = 29ul
};

/// Constant 'MODEL_RESPONSE_TIMEOUT'.
/**
  * 等待模型响应超时
 */
enum
{
  protocol__msg__X2robotClientErrorEnum__MODEL_RESPONSE_TIMEOUT = 30ul
};

/// Constant 'MODEL_RESPONSE_RECEIVE_FAILED'.
/**
  * 接收模型响应失败
 */
enum
{
  protocol__msg__X2robotClientErrorEnum__MODEL_RESPONSE_RECEIVE_FAILED = 31ul
};

/// Constant 'MODEL_RESPONSE_DECODE_FAILED'.
/**
  * 模型响应解析失败
 */
enum
{
  protocol__msg__X2robotClientErrorEnum__MODEL_RESPONSE_DECODE_FAILED = 32ul
};

/// Constant 'MODEL_OUTPUT_INVALID'.
/**
  * 模型输出字段无效
 */
enum
{
  protocol__msg__X2robotClientErrorEnum__MODEL_OUTPUT_INVALID = 33ul
};

/// Constant 'ACTION_EXECUTE_FAILED'.
/**
  * 动作下发失败
 */
enum
{
  protocol__msg__X2robotClientErrorEnum__ACTION_EXECUTE_FAILED = 34ul
};

/// Constant 'ACTION_CHUNK_PUBLISH_FAILED'.
/**
  * 动作块遥测发布失败
 */
enum
{
  protocol__msg__X2robotClientErrorEnum__ACTION_CHUNK_PUBLISH_FAILED = 35ul
};

/// Constant 'MODEL_OUTPUT_TEXT_PUBLISH_FAILED'.
/**
  * 模型文本输出发布失败
 */
enum
{
  protocol__msg__X2robotClientErrorEnum__MODEL_OUTPUT_TEXT_PUBLISH_FAILED = 36ul
};

/// Constant 'INFERENCE_RUNTIME_EXCEPTION'.
/**
  * 推理运行时异常
 */
enum
{
  protocol__msg__X2robotClientErrorEnum__INFERENCE_RUNTIME_EXCEPTION = 37ul
};

/// Constant 'REMOTE_CONTROL_STATE_FAILED'.
/**
  * 接管状态切换失败
 */
enum
{
  protocol__msg__X2robotClientErrorEnum__REMOTE_CONTROL_STATE_FAILED = 38ul
};

/// Constant 'RESOURCE_CLEANUP_FAILED'.
/**
  * 资源释放失败
 */
enum
{
  protocol__msg__X2robotClientErrorEnum__RESOURCE_CLEANUP_FAILED = 39ul
};

/// Constant 'ASYNC_WORKER_EXCEPTION'.
/**
  * 异步推理线程异常
 */
enum
{
  protocol__msg__X2robotClientErrorEnum__ASYNC_WORKER_EXCEPTION = 40ul
};

/// Constant 'ASYNC_ACTION_QUEUE_STALE'.
/**
  * 异步动作队列过期
 */
enum
{
  protocol__msg__X2robotClientErrorEnum__ASYNC_ACTION_QUEUE_STALE = 41ul
};

/// Struct defined in msg/X2robotClientErrorEnum in the package protocol.
/**
  * Unit: X2ROBOT_CLIENT
  * 模型初始化参数无效
 */
typedef struct protocol__msg__X2robotClientErrorEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__X2robotClientErrorEnum;

// Struct for a sequence of protocol__msg__X2robotClientErrorEnum.
typedef struct protocol__msg__X2robotClientErrorEnum__Sequence
{
  protocol__msg__X2robotClientErrorEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__X2robotClientErrorEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__X2ROBOT_CLIENT_ERROR_ENUM__STRUCT_H_
