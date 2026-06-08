#pragma once
#include <cstdint>
namespace xr {
namespace status_code {
enum class CamerasStateEnum : uint8_t
{
    RUNNING = 1, // 摄像头工作中
    UNKNOWN_STATE = 255
};

enum class GripperStateEnum: uint8_t
{
    RUNNING = 1, // 夹爪工作中
    CALIBRATING = 2, // 夹爪校准中
    UNKNOWN_STATE = 0xff
};

enum class RealtimeControllerStateEnum : uint8_t
{
    IDLE = 1,
    DATA_COLLECT = 2,
    REPLAY = 3,
    INFERENCE = 4,
    SWITHCING_MODE = 0xff, // 不合适，后面切成UNKNOWN_STATE
};

enum class HALStateEnum : uint8_t
{
    RUNNING = 1,
    INITIALIZING = 2, // 节点初始化中(这个过程中可能需要等待完成头部的初始化工作)
    EMERGENCY_STOPPED = 3, // 急停状态
    UNKNOWN_STATE = 255,
};

enum class LOCALIZATIONStateEnum : uint8_t
{
    RUNNING = 1,
    INITIALIZING = 2, // 定位初始化中
    UNKNOWN_STATE = 255,
};

enum class WholeBodyControllerStateEnum : uint8_t
{
    RUNNING = 1,
    INITIALIZING = 2, // 控制器初始化中
    UNKNOWN_STATE = 255,
};

enum class ComputerMonitorComponentStateEnum : uint8_t
{
    RUNNING = 1,
    UNKNOWN_STATE = 255,
};
} // namespace status_code
} // namespace xr