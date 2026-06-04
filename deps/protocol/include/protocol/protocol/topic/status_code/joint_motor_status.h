#pragma once

#include <vector>
#include "protocol/topic/status_code/motor_status.h"
#include "protocol/msg/joint_motor_status.hpp"

#include "protocol/topic.h"

namespace xr {
namespace status_code {

inline bool GetJointMotorHealthStatus(const std::vector<protocol::msg::MotorStatus>& joint_motor_status)
{
    for (const auto& motor_status : joint_motor_status)
    {
        if (motor_status.error_bit_code) // 有错误码则表示不健康
        {
            return false;
        }
    }
    return true;
}

namespace topic {

// 电机状态反馈协议
TOPIC(HeadJointMotorStatus, "/head/joint_motor_status", protocol::msg::JointMotorStatus, QoS::SystemDefaultQoS());
TOPIC(LiftJointMotorStatus, "/lift/joint_motor_status", protocol::msg::JointMotorStatus, QoS::SystemDefaultQoS());

}  // namespace topic
}  // namespace status_code
}  // namespace xr
