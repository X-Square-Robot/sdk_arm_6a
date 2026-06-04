#pragma once

#include <vector>
#include "protocol/msg/motor_status.hpp"
#include "protocol/topic.h"

namespace xr {
namespace status_code {

enum class MotorStateCode : uint8_t
{
    DISABLE = 0, // 失能
    ENABLE = 1, // 使能
    STANDBY = 2, // 待机
    CALIBRATING = 3, // 校准中
    DEFAULT = 0xff, // 默认
};

enum class MotorErrorCode : uint8_t // 协议传输时使用bit位来表示，所以结构体可以看作是2的n次方的组合
{
    OFFLINE = 1, // 离线, 对应bit错误码的定义: 0b0000 0000 0000 0000 0000 0000 0000 0001
    OVER_HEAT = 2, // 过热(一般会导致电机保护停机), 对应bit错误码的定义: 0b0000 0000 0000 0000 0000 0000 0000 0010
    OVER_CURRENT = 3, // 过流, 对应bit错误码的定义: 0b0000 0000 0000 0000 0000 0000 0000 0100
    OVER_VOLTAGE = 4, // 过压, 对应bit错误码的定义: 0b0000 0000 0000 0000 0000 0000 0000 1000
    UNDER_VOLTAGE = 5, // 欠压, 对应bit错误码的定义: 0b0000 0000 0000 0000 0000 0000 0001 0000
    WARNING_TEMPERATURE = 6, // 温度预警, 对应bit错误码的定义: 0b0000 0000 0000 0000 0000 0000 0010 0000
    OVERLOAD = 7, // 过载, 对应bit错误码的定义: 0b0000 0000 0000 0000 0000 0000 0100 0000
    UNKNOWN_ERROR = 0xfe,  // 未知错误, 对应bit错误码的定义: 0b1111 1111 1111 1111 1111 1111 1111 1110
    DEFAULT = 0xff, // 默认, 对应bit错误码的定义: 0b1111 1111 1111 1111 1111 1111 1111 1111
};

/***
 * @brief 将uint32_t的错误码转换为MotorErrorCode的vector
 * @param error_code uint32_t类型的错误码,error_bit_code是错误bit码，每一位代表一种错误状态
 * @return std::vector<MotorErrorCode> 包含所有错误码的vector，当健康状态时返回空vector
 */
inline std::vector<MotorErrorCode> GetMotorErrorCode(const uint32_t error_bit_code)
{
    std::vector<MotorErrorCode> error_codes;
    switch(error_bit_code)
    {
        case 0: // 健康状态时直接返回空的vector
            break;
        case 0xfffffffe: // 对应error_code为UNKNOWN_ERROR
            error_codes.push_back(MotorErrorCode::UNKNOWN_ERROR);
            break;
        case 0xffffffff: // 对应error_code为DEFAULT
            error_codes.push_back(MotorErrorCode::DEFAULT);
            break;
        default: // 遍历各个位
            if (error_bit_code & (1 << (static_cast<uint8_t>(MotorErrorCode::OFFLINE) - 1))) error_codes.push_back(MotorErrorCode::OFFLINE);
            if (error_bit_code & (1 << (static_cast<uint8_t>(MotorErrorCode::OVER_HEAT) - 1))) error_codes.push_back(MotorErrorCode::OVER_HEAT);
            if (error_bit_code & (1 << (static_cast<uint8_t>(MotorErrorCode::OVER_CURRENT) - 1))) error_codes.push_back(MotorErrorCode::OVER_CURRENT);
            if (error_bit_code & (1 << (static_cast<uint8_t>(MotorErrorCode::OVER_VOLTAGE) - 1))) error_codes.push_back(MotorErrorCode::OVER_VOLTAGE);
            if (error_bit_code & (1 << (static_cast<uint8_t>(MotorErrorCode::UNDER_VOLTAGE) - 1))) error_codes.push_back(MotorErrorCode::UNDER_VOLTAGE);
            if (error_bit_code & (1 << (static_cast<uint8_t>(MotorErrorCode::WARNING_TEMPERATURE) - 1))) error_codes.push_back(MotorErrorCode::WARNING_TEMPERATURE);
            if (error_bit_code & (1 << (static_cast<uint8_t>(MotorErrorCode::OVERLOAD) - 1))) error_codes.push_back(MotorErrorCode::OVERLOAD);
            break;
    }
    return error_codes;
};

/***
 * @brief 将MotorErrorCode的vector转换为uint8_t的错误码
 * @param error_codes 包含所有错误码的vector
 * @return uint32_t类型的error_bit_code（bit错误码）
 */
inline uint32_t GetMotorErrorBitCode(const std::vector<MotorErrorCode>& error_codes = {})
{
    uint32_t error_code = 0;
    for (const auto& code : error_codes) // 如果没有错误码，返回0
    {
        switch(code)
        {
            case MotorErrorCode::OFFLINE:
                error_code |= (1 << (static_cast<uint8_t>(MotorErrorCode::OFFLINE) - 1));
                break;
            case MotorErrorCode::OVER_HEAT:
                error_code |= (1 << (static_cast<uint8_t>(MotorErrorCode::OVER_HEAT) - 1));
                break;
            case MotorErrorCode::OVER_CURRENT:
                error_code |= (1 << (static_cast<uint8_t>(MotorErrorCode::OVER_CURRENT) - 1));
                break;
            case MotorErrorCode::OVER_VOLTAGE:
                error_code |= (1 << (static_cast<uint8_t>(MotorErrorCode::OVER_VOLTAGE) - 1));
                break;
            case MotorErrorCode::UNDER_VOLTAGE:
                error_code |= (1 << (static_cast<uint8_t>(MotorErrorCode::UNDER_VOLTAGE) - 1));
                break;
            case MotorErrorCode::WARNING_TEMPERATURE:
                error_code |= (1 << (static_cast<uint8_t>(MotorErrorCode::WARNING_TEMPERATURE) - 1));
                break;
            case MotorErrorCode::OVERLOAD:
                error_code |= (1 << (static_cast<uint8_t>(MotorErrorCode::OVERLOAD) - 1));
                break;
            case MotorErrorCode::UNKNOWN_ERROR:
                error_code = 0xfffffffe;
                return error_code;
            case MotorErrorCode::DEFAULT:
                error_code = 0xffffffff;
                return error_code;
        }
    }
    return error_code;
}

namespace topic {

// 电机状态反馈协议（测试）
TOPIC(TestMotorStatus, "/test/motor_status", protocol::msg::MotorStatus, QoS::SystemDefaultQoS());


}  // namespace topic
}  // namespace status_code
}  // namespace xr
