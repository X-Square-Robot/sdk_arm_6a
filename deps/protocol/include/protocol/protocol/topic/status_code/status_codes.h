#pragma once

#include "protocol/topic/status_code/status_code.h"
#include "protocol/msg/status_codes.hpp"
#include "protocol/msg/status_code.hpp"
#include "protocol/msg/error_bit_code.hpp"
#include "protocol/msg/state_code.hpp"

#include "protocol/topic.h"

namespace xr {
namespace status_code {

namespace topic {

/*
@brief 从StatusCodes消息中提取状态码中的state字段
@param msg StatusCodes消息
@return 状态码中的state字段
*/
inline bool GetStateFromStatusCodes(const protocol::msg::StatusCodes& msg, uint8_t& node_enum, uint8_t& state_code)
{
    for (const auto& state : msg.states)
    {
        if (state.node_enum == node_enum)
        {
            state_code = state.state_code;
            return true;
        }
    }
    return false; // 未找到对应节点的状态码
}

/*
@brief 从StatusCodes消息中提取状态码中的error字段
@param msg StatusCodes消息
@return 状态码中的error字段
*/
inline bool GetErrorFromStatusCodes(const protocol::msg::StatusCodes& msg, uint8_t node_enum, uint32_t& error_code)
{
    for (const auto& error : msg.errors)
    {
        if (error.node_enum == node_enum)
        {
            error_code = error.bit_code;
            return true;
        }
    }
    return false;  // 未找到对应节点的错误码
}

/*
@brief 构造StatusCodes消息
@param node_enum 节点枚举值
@return Stat
*/
inline bool PushInStatusCodes(uint8_t node_enum, uint8_t state_code, uint32_t error_code, protocol::msg::StatusCodes& msg)
{
    protocol::msg::StateCode state;
    protocol::msg::ErrorBitCode error;
    state.node_enum = node_enum;
    state.state_code = state_code;
    msg.states.push_back(state);
    if (error_code != 0)
    {
        error.node_enum = node_enum;
        error.bit_code = error_code;
        msg.errors.push_back(error);
    }
    return true;
}

// 应用层状态码
TOPIC(ExampleStatusCode, "/application/status_codes", protocol::msg::StatusCodes, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace status_code
}  // namespace xr
