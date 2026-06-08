#ifndef RM003_HAND_PROTOCOL_H
#define RM003_HAND_PROTOCOL_H

#include <cstdint>

#include "x2robot_hardware_interface/x2robot_protocol/protocol_v3.h"

namespace x2robot_hardware_interface {
namespace can_cmd_id {

constexpr uint8_t kHandCmdSet = 0x41;
constexpr uint8_t kHandMotorStatus = 0x07;
constexpr uint8_t kHandMotorConfigFeedback = 0x17;
constexpr uint8_t kHandMotorControl = 0x67;
constexpr uint8_t kHandMotorConfig = 0x77;

constexpr uint8_t kTouchSensorSet = 0xA5;
constexpr uint8_t kTouchSensorStatus = 0x02;
constexpr uint8_t kTouchSensorConfig = 0x62;
}  // namespace can_cmd_id

#pragma pack(push, 1)

struct MotorStatus {
  uint16_t position;
  int16_t current;
  uint8_t err_code;
  uint8_t temperature;
};

struct HandMotorCtrl {
  uint16_t target_position;
};

struct HandMotorConfig {
  uint8_t enable;
  uint8_t ctrl_mode;
};

struct TorchSensorStatus {
  float normal_force;
  float tangential_force;
  uint32_t tangential_direction;
  uint32_t proximity_capacitance;
};

struct TouchSensorConfig {
  uint8_t enable;
  uint8_t update_frequency;
};

#pragma pack(pop)
}  // namespace x2robot_hardware_interface

#endif  // RM003_HAND_PROTOCOL_H
