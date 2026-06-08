#pragma once
#include <cstdint>
namespace xr {
namespace status_code {
enum class CameraErrorEnum : uint32_t
{
    UNKNOWN_ERROR = 0xffff
};

enum class GripperErrorEnum : uint32_t
{
    GRIPPER_MOTOR_OFFLINE = 0b0000000000000001,         // 夹爪电机离线
    GRIPPER_TOUCH_SENSOR_OFFLINE = 0b0000000000000010,  // 夹爪触觉传感器离线
    UNKNOWN_ERROR = 0xffff
};

enum class RealtimeControllerErrorEnum : uint32_t
{
    UNKNOWN_ERROR = 0xffff
};

enum class HALErrorEnum : uint32_t
{
    UNKNOWN_ERROR = 0xffff
};

enum class LocalizationErrorEnum : uint32_t
{
    UNKNOWN_ERROR = 0xffff
};

enum class WholeBodyControllerErrorEnum : uint32_t
{
    UNKNOWN_ERROR = 0xffff
};

enum class ComputerMonitorComponentErrorEnum : uint32_t
{
    ROM_HIGH_USAGE = 0b0000000000000001,  // 磁盘占用90%以上
    RAM_HIGH_USAGE = 0b0000000000000010,  // 内存占用90%以上
    UNKNOWN_ERROR = 0xffff
};

}  // namespace status_code
}  // namespace xr
