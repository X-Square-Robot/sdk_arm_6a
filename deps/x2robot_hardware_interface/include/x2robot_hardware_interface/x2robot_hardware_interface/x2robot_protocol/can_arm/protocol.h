#ifndef X2ROBOT_CAN_PROTOCOL_H
#define X2ROBOT_CAN_PROTOCOL_H

#include <cstdint>

#include "x2robot_hardware_interface/x2robot_protocol/protocol_v3.h"

namespace x2robot_hardware_interface {

namespace can_cmd_id {

constexpr uint8_t kCtrlCmdSet = 0x01;

constexpr uint8_t kCmdIdMotorServoOn = 0x00;
constexpr uint8_t kCmdIdMotorControlModeSet = 0x01;
constexpr uint8_t kCmdIdMotorMaxSet = 0x02;
constexpr uint8_t kCmdIdMotorPosLoopParamSet = 0x03;
constexpr uint8_t kCmdIdMotorPosTarget = 0x04;
constexpr uint8_t kCmdIdMotorSpdLoopParamSet = 0x05;
constexpr uint8_t kCmdIdMotorSpdTarget = 0x06;
constexpr uint8_t kCmdIdMotorMitParamSet = 0x07;
constexpr uint8_t kCmdIdMotorMitTarget = 0x08;
constexpr uint8_t kCmdIdParaSaveToFlash = 0x09;
constexpr uint8_t kCmdIdMotorTorqueTarget = 0x0A;
constexpr uint8_t kCmdIdMotorTorqueIqTarget = 0x0B;
constexpr uint8_t kCmdIdMotorControlModeGet = 0x1B;
constexpr uint8_t kCmdIdMotorMaxGet = 0x1C;
constexpr uint8_t kCmdIdMotorPosLoopParamGet = 0x1D;
constexpr uint8_t kCmdIdMotorVeloLoopParamGet = 0x1E;
constexpr uint8_t kCmdIdMotorMitParamGet = 0x1F;
constexpr uint8_t kCmdIdMotorVoltageLimitEnable = 0x20;
constexpr uint8_t kCmdIdMotorVoltageLimitSet = 0x21;
constexpr uint8_t kCmdIdMotorTempLimitEnable = 0x22;
constexpr uint8_t kCmdIdMotorTempLimitSet = 0x23;
constexpr uint8_t kCmdIdMotorOverLoadEnable = 0x24;
constexpr uint8_t kCmdIdMotorOverLoadSet = 0x25;
constexpr uint8_t kCmdIdMotorProtectParamSave = 0x26;
constexpr uint8_t kCmdIdMotorModuleParamGet = 0x2E;
constexpr uint8_t kCmdIdMotorFaultReset = 0x2F;
constexpr uint8_t kCmdIdMotorStatusFeedback = 0x30;
constexpr uint8_t kCmdIdMotorStatusSimpleFeedback = 0x31;

}  // namespace can_cmd_id

#pragma pack(push, 1)

struct MotorServoOnResp {
  frame_head_t frame_head;
  uint8_t enable;
  uint16_t crc16;
};

struct MotorControlModeSetResp {
  frame_head_t frame_head;
  uint8_t control_mode;
  uint16_t crc16;
};

struct MotorMaxSetResp {
  frame_head_t frame_head;
  float pos_max;
  float velo_max;
  float torque_max;
  float acc_max;
  uint16_t crc16;
};

struct MotorPosLoopParamSetResp {
  frame_head_t frame_head;
  float kp;
  float ki;
  float kd;
  float error_max;
  float integral_limit;
  float out_lilmit;
  uint16_t crc16;
};

struct MotorSpdLoopParamSetResp {
  frame_head_t frame_head;
  float kp;
  float ki;
  float kd;
  float error_max;
  float integral_limit;
  float out_lilmit;
  uint16_t crc16;
};

struct MotorMitParamSetResp {
  frame_head_t frame_head;
  float kp;
  float kd;
  uint16_t crc16;
};

struct ParaSaveToFlashResp {
  frame_head_t frame_head;
  uint16_t crc16;
};

struct MotorControlModeGetResp {
  frame_head_t frame_head;
  uint8_t control_mode;
  uint16_t crc16;
};

struct MotorMaxGetResp {
  frame_head_t frame_head;
  float pos_max;
  float velo_max;
  float torque_max;
  float acc_max;
  uint16_t crc16;
};

struct MotorPosLoopParamGetResp {
  frame_head_t frame_head;
  float kp;
  float ki;
  float kd;
  float error_max;
  float integral_limit;
  float out_lilmit;
  uint16_t crc16;
};

struct MotorVeloLoopParamGetResp {
  frame_head_t frame_head;
  float kp;
  float ki;
  float kd;
  float error_max;
  float integral_limit;
  float out_lilmit;
  uint16_t crc16;
};

struct MotorMitParamGetResp {
  frame_head_t frame_head;
  float kp;
  float kd;
  uint16_t crc16;
};

struct MotorVoltageLimitEnableResp {
  frame_head_t frame_head;
  uint8_t enable;
  uint16_t crc16;
};

struct MotorVoltageLimitSetResp {
  frame_head_t frame_head;
  uint16_t over_voltage;
  uint16_t under_voltage;
  uint16_t crc16;
};

struct MotorTempLimitEnableResp {
  frame_head_t frame_head;
  uint8_t enable;
  uint16_t crc16;
};

struct MotorTempLimitSetResp {
  frame_head_t frame_head;
  int16_t motor_temperature;
  int16_t mos_temperature;
  uint16_t crc16;
};

struct MotorOverLoadEnableResp {
  frame_head_t frame_head;
  uint8_t enable;
  uint16_t crc16;
};

struct MotorOverLoadSetResp {
  frame_head_t frame_head;
  float over_loader_torque;
  uint16_t duration;
  uint16_t crc16;
};

struct MotorProtectParamSaveResp {
  frame_head_t frame_head;
  uint16_t crc16;
};

struct MotorModuleParamGetResp {
  frame_head_t frame_head;
  uint8_t voltage_protect_enable;
  uint8_t temperature_protect_enable;
  uint8_t over_loader_protect_enable;
  uint16_t over_voltage_value;
  uint16_t under_voltage_value;
  int16_t motor_temperature_value;
  int16_t mos_temperature_value;
  float over_loader_torque_value;
  uint16_t duration_value;
  uint16_t crc16;
};

struct MotorFaultResetResp {
  frame_head_t frame_head;
  uint16_t crc16;
};

typedef union {
  uint32_t all;
  struct {
    uint32_t mos_over_temp : 1;
    uint32_t motor_over_temp : 1;
    uint32_t over_voltage : 1;
    uint32_t under_voltage : 1;
    uint32_t over_current : 1;
    uint32_t overload : 1;
    uint32_t over_speed : 1;
    uint32_t over_machine_limit : 1;
    uint32_t sensor1_err : 1;
    uint32_t sensor2_err : 1;
    uint32_t hardware_err : 1;
    uint32_t motor_brake_err : 1;
    uint32_t commu_sync_err : 1;
    uint32_t commu_lost : 1;
    uint32_t reserved : 18;
  } bits;
} AbnormalState;

struct MotorStatusFeedbackResp {
  frame_head_t frame_head;
  uint8_t foc_state;             // Motor operating state.
  uint8_t controller_state;      // Closed-loop control state.
  AbnormalState abnormal_state;  // Abnormal-state flags.
  float joint_pos_rad;
  float joint_velo_rad;
  float foc_iq_A;
  uint16_t crc16;
};

struct MotorStatusSimpleFeedbackResp {
  frame_head_t frame_head;
  int16_t motor_temperature;
  int16_t mos_temperature;
  uint16_t voltage_bus;
  uint16_t foc_electrical_angle;
  uint16_t crc16;
};

struct MotorServoOnReq {
  frame_head_t frame_head;
  uint8_t enable;
  uint16_t crc16;
};

struct MotorControlModeSetReq {
  frame_head_t frame_head;
  uint8_t control_mode;
  uint16_t crc16;
};

struct MotorMaxSetReq {
  frame_head_t frame_head;
  float pos_max;
  float velo_max;
  float torque_max;
  float acc_max;
  uint16_t crc16;
};

struct MotorPosLoopParamSetReq {
  frame_head_t frame_head;
  float kp;
  float ki;
  float kd;
  float error_max;
  float integral_limit;
  float out_lilmit;
  uint16_t crc16;
};

struct MotorPosTargetReq {
  frame_head_t frame_head;
  float pos_target[12];
  uint16_t crc16;
};

struct MotorSpdLoopParamSetReq {
  frame_head_t frame_head;
  float kp;
  float ki;
  float kd;
  float error_max;
  float integral_limit;
  float out_lilmit;
  uint16_t crc16;
};

struct MotorSpdTargetReq {
  frame_head_t frame_head;
  float velo_target[12];
  uint16_t crc16;
};

struct MotorMitParamSetReq {
  frame_head_t frame_head;
  float kp;
  float kd;
  uint16_t crc16;
};

struct MotorMitTargetReq {
  frame_head_t frame_head;
  int16_t pos_target[8];
  int16_t velo_target[8];
  int16_t torque_target[8];
  uint16_t crc16;
};

struct ParaSaveToFlashReq {
  frame_head_t frame_head;
  uint16_t crc16;
};

struct MotorTorqueTargetReq {
  frame_head_t frame_head;
  float torque_target[12];
  uint16_t crc16;
};

struct MotorTorqueIqTargetReq {
  frame_head_t frame_head;
  float torque_target[12];
  uint16_t crc16;
};

struct MotorControlModeGetReq {
  frame_head_t frame_head;
  uint16_t crc16;
};

struct MotorMaxGetReq {
  frame_head_t frame_head;
  uint16_t crc16;
};

struct MotorPosLoopParamGetReq {
  frame_head_t frame_head;
  uint16_t crc16;
};

struct MotorVeloLoopParamGetReq {
  frame_head_t frame_head;
  uint16_t crc16;
};

struct MotorMitParamGetReq {
  frame_head_t frame_head;
  uint16_t crc16;
};

struct MotorVoltageLimitEnableReq {
  frame_head_t frame_head;
  uint8_t enable;
  uint16_t crc16;
};

struct MotorVoltageLimitSetReq {
  frame_head_t frame_head;
  uint16_t over_voltage;
  uint16_t under_voltage;
  uint16_t crc16;
};

struct MotorTempLimitEnableReq {
  frame_head_t frame_head;
  uint8_t enable;
  uint16_t crc16;
};

struct MotorTempLimitSetReq {
  frame_head_t frame_head;
  int16_t motor_temperature;
  int16_t mos_temperature;
  uint16_t crc16;
};

struct MotorOverLoadEnableReq {
  frame_head_t frame_head;
  uint8_t enable;
  uint16_t crc16;
};

struct MotorOverLoadSetReq {
  frame_head_t frame_head;
  float over_loader_torque;
  uint16_t duration;
  uint16_t crc16;
};

struct MotorProtectParamSaveReq {
  frame_head_t frame_head;
  uint16_t crc16;
};

struct MotorModuleParamGetReq {
  frame_head_t frame_head;
  uint16_t crc16;
};

struct MotorFaultResetReq {
  frame_head_t frame_head;
  uint16_t crc16;
};

#pragma pack(pop)

}  // namespace x2robot_hardware_interface

#endif  // X2ROBOT_CAN_PROTOCOL_H
