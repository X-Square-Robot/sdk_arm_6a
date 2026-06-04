#ifndef NEWSTART_MOTOR_H
#define NEWSTART_MOTOR_H

#include <x2robot_hardware_interface/motor_protocols/can_motor_base.h>

#include <cstdint>
#include <limits>
#include <memory>
#include <unordered_map>
#include <x2robot_msgs/msg/can_frame.hpp>

namespace x2robot_hardware_interface {

constexpr float POS_MIN = -5.0f;
constexpr float POS_MAX = 5.0f;
constexpr float VEL_MIN = -20.0f;
constexpr float VEL_MAX = 20.0f;
constexpr float TORQUE_MIN = -500.0f;
constexpr float TORQUE_MAX = 500.0f;

constexpr float KP_MIN = 0.0f;
constexpr float KP_MAX = 500.0f;
constexpr float KD_MIN = 0.0f;
constexpr float KD_MAX = 20.0f;
/**
 * @brief NewStart motor controller implementation
 * Based on NewStart FDCAN Communication Protocol V1.7.
 */
class NewStartMotor : public CanMotorBase {
 public:
  NewStartMotor(int motor_id, const std::string& name);
  ~NewStartMotor() override = default;

  // NewStart error codes (ERR1: bits 0-7, ERR2: bits 8-10).
  using ErrorCode = enum NewStartErrorCode {
    NoError = 0x0000,
    // ERR1 bits (0-7)
    PhaseCurrentOvercurrent = 0x0001,  // Bit0
    OverVoltage = 0x0002,              // Bit1
    MosOverTemp = 0x0004,              // Bit2
    MotorOverTemp = 0x0008,            // Bit3
    BusCurrentOvercurrent = 0x0010,    // Bit4
    OverLoad = 0x0020,                 // Bit5
    EncoderError = 0x0040,             // Bit6
    OtherError = 0x0080,               // Bit7
    // ERR2 bits (8-10)
    NodeLost = 0x0100,      // Bit8 (ERR2 Bit0)
    UnderVoltage = 0x0200,  // Bit9 (ERR2 Bit1)
    OverSpeed = 0x0400      // Bit10 (ERR2 Bit2)
  };

  // Protocol-defined commands.
  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateEnable() override;
  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateDisable() override;
  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateReset() override;

  // Velocity/torque/position/MIT control commands (protocol 1.3-1.6).
  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateCtrlCmd() override;
  std::unique_ptr<x2robot_msgs::msg::CanFrame> GeneratePosCmd() override;
  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateMitCmd() override;
  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateVelCmd() override;
  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateTorqueCmd() override;

  // Frame processing
  bool decode_frame(const std::unique_ptr<x2robot_msgs::msg::CanFrame>& frame_ptr) override;
  bool id_match(const std::unique_ptr<x2robot_msgs::msg::CanFrame>& frame_ptr) override;

  ErrorType get_unified_error_type() const override;

  uint16_t motor_id_;
  uint16_t master_id_;
};

}  // namespace x2robot_hardware_interface

#endif  // NEWSTART_MOTOR_H
