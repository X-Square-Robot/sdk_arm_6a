#ifndef DMMOTOR_H
#define DMMOTOR_H

#include <x2robot_hardware_interface/motor_protocols/can_motor_base.h>

#include <cstdint>
#include <limits>
#include <memory>
#include <unordered_map>
#include <x2robot_msgs/msg/can_frame.hpp>

namespace x2robot_hardware_interface {

class DmMotor : public CanMotorBase {
 public:
  DmMotor(int motor_id, int master_id, int motor_type);
  ~DmMotor() override = default;

  using DmControlMode = enum { UNKNOWN = 0, MIT = 1, POSITION = 2, VELOCITY = 3, PVT = 4 };
  const std::unordered_map<ControlMode, DmControlMode> mode_map = {
      {ControlMode::MIT, DmControlMode::MIT},
      {ControlMode::POSITION, DmControlMode::POSITION},
      {ControlMode::VELOCITY, DmControlMode::VELOCITY},
      {ControlMode::TORQUE, DmControlMode::MIT},
  };
  using ErrorCode = enum DmErrorCode {
    Disabled = 0x00,
    Enabled = 0x01,
    EncoderError = 0x02,
    OverVoltage = 0x08,
    UnderVoltage = 0x09,
    OverCurrent = 0x0a,
    MosOverTemp = 0x0b,
    MotorOverTemp = 0x0c,
    CommError = 0x0d,
    Overload = 0x0e
  };

  using RegID = enum DmRegID { CtrlMode = 0x0a };

  using MotorType = enum DmMotorType { DM4340_48 = 0, DM4310 = 1, DM6248 = 2, DM3507 = 3 };

  const std::array<std::array<double, 3>, 4> MOTOR_MAX_CONSTANT = {
      {{12.5, 10.0, 28}, {12.5, 30.0, 10}, {12.566, 20.0, 120}, {12.566, 50.0, 5}}};

  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateEnable() override;

  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateDisable() override;

  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateReset() override;

  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateCtrlCmd() override;

  std::unique_ptr<x2robot_msgs::msg::CanFrame> GeneratePosCmd() override;

  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateMitCmd() override;

  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateVelCmd() override;

  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateTorqueCmd() override;

  std::unique_ptr<x2robot_msgs::msg::CanFrame> SwitchControlMode(DmControlMode mode);

  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateWriteReg(int rig, int value);

  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateWriteReg(int rig, float value);

  bool decode_frame(const std::unique_ptr<x2robot_msgs::msg::CanFrame>& frame_ptr) override;

  bool id_match(const std::unique_ptr<x2robot_msgs::msg::CanFrame>& frame_ptr) override;

  std::string GetErrorDescription() const override;

  bool CheckRegType(int number) {
    if ((7 <= number && number <= 10) || (13 <= number && number <= 16) || (35 <= number && number <= 36)) return true;
    return false;
  }

  DmControlMode GetDmModeFromControlMode(ControlMode mode) {
    auto it = mode_map.find(mode);
    if (it != mode_map.end()) {
      return it->second;
    } else {
      return DmControlMode::MIT;  // Default to MIT if not found
    }
  };
  uint8_t motor_id, master_id;
  DmMotorType motor_type;
  DmControlMode dm_control_mode_ = DmControlMode::UNKNOWN;
  bool is_initialized = false;
};

}  // namespace x2robot_hardware_interface

#endif
