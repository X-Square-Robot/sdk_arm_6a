#pragma once

#include <vector>
#include "protocol/msg/sensor_status.hpp"

#include "protocol/topic.h"

namespace xr {
namespace status_code {

enum class SensorStateCode : uint8_t
{
    DISABLE = 0, // 失能
    ENABLE = 1, // 使能
    STANDBY = 2, // 待机
    CALIBRATING = 3, // 校准中
    DEFAULT = 0xff, // 默认
};

enum class SensorErrorCode : uint8_t // 协议传输时使用bit位来表示，所以结构体可以看作是2的n次方的组合
{
    OFFLINE = 1, // 离线, 对应bit错误码的定义: 0b0000 0000 0000 0000 0000 0000 0000 0001
    // NOTE:空闲位2-5
    WARNING_TEMPERATURE = 6, // 温度预警, 对应bit错误码的定义: 0b0000 0000 0000 0000 0000 0000 0010 0000
    UNKNOWN_ERROR = 0xfe,  // 未知错误, 对应bit错误码的定义: 0b1111 1111 1111 1111 1111 1111 1111 1110
    DEFAULT = 0xff,
};

/***
 * @brief 将uint32_t的错误码转换为SensorErrorCode的vector
 * @param error_code uint32_t类型的错误码,error_bit_code是错误bit码，每一位代表一种错误状态
 * @return std::vector<SensorErrorCode> 包含所有错误码的vector，当健康状态时返回空vector
 */
inline std::vector<SensorErrorCode> GetSensorErrorCode(const uint32_t error_bit_code)
{
    std::vector<SensorErrorCode> error_codes;
    switch(error_bit_code) // 健康状态时直接返回空的vector
    {
        case 0: // 健康状态时直接返回空的vector
            break;
        case 0xfffffffe: // 对应error_code为UNKNOWN_ERROR
            error_codes.push_back(SensorErrorCode::UNKNOWN_ERROR);
            break;
        case 0xffffffff: // 对应error_code为DEFAULT
            error_codes.push_back(SensorErrorCode::DEFAULT);
            break;
        default: // 遍历各个位
            if (error_bit_code & (1 << (static_cast<uint8_t>(SensorErrorCode::OFFLINE) - 1))) error_codes.push_back(SensorErrorCode::OFFLINE);
            if (error_bit_code & (1 << (static_cast<uint8_t>(SensorErrorCode::WARNING_TEMPERATURE) - 1))) error_codes.push_back(SensorErrorCode::WARNING_TEMPERATURE);
            break;
    }
    return error_codes;
};

/***
 * @brief 将SensorErrorCode的vector转换为uint8_t的错误码
 * @param error_codes 包含所有错误码的vector
 * @return uint32_t类型的error_bit_code（bit错误码）
 */
inline uint32_t GetSensorErrorBitCode(const std::vector<SensorErrorCode>& error_codes = {})
{
    uint32_t error_code = 0;
    for (const auto& code : error_codes) // 如果没有错误码，返回0
    {
        switch(code)
        {
            case SensorErrorCode::OFFLINE:
                error_code |= (1 << (static_cast<uint8_t>(SensorErrorCode::OFFLINE) - 1));
                break;
            case SensorErrorCode::WARNING_TEMPERATURE:
                error_code |= (1 << (static_cast<uint8_t>(SensorErrorCode::WARNING_TEMPERATURE) - 1));
                break;
            case SensorErrorCode::UNKNOWN_ERROR:
                error_code = 0xfffffffe;
                return error_code;
            case SensorErrorCode::DEFAULT:
                error_code = 0xffffffff;
                return error_code;
        }
    }
    return error_code;
}

namespace topic {

// 传感器状态反馈协议
TOPIC(ChassisImuSensorStatus, "/chassis/imu/sensor_status", protocol::msg::SensorStatus, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace status_code
}  // namespace xr
