#ifndef ENCOS_MOTOR_H
#define ENCOS_MOTOR_H

#include <x2robot_hardware_interface/motor_protocols/can_motor_base.h>

#include <chrono>
#include <cstdint>
#include <limits>
#include <memory>
#include <x2robot_msgs/msg/can_frame.hpp>

namespace x2robot_hardware_interface {

class EncosMotor : public CanMotorBase {
 public:
  EncosMotor(int motor_id);
  ~EncosMotor() override = default;

  using EncosControlMode = enum { MIT = 0, POSITION, VELOCITY };

  using ErrorCode = enum EncosErrorCode {
    NoError = 0x00,
    OverHeat = 0x01,
    OverCurrent = 0x02,
    UnderVoltage = 0x03,
    EncoderError = 0x04,
    BrakeOverVoltage = 0x06,
    CommError = 0x07
  };

  union RV_TypeConvert {
    float to_float;
    int to_int;
    unsigned int to_uint;
    uint8_t buf[4];
  } rv_type_convert;

  std::unique_ptr<x2robot_msgs::msg::CanFrame> GeneratePing();

  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateCtrlCmd() override;

  std::unique_ptr<x2robot_msgs::msg::CanFrame> GeneratePosCmd() override;

  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateMitCmd() override;

  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateVelCmd() override;

  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateTorqueCmd() override;

  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateEnable() override;

  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateDisable() override {
    reset_state();
    return nullptr;
  }

  std::unique_ptr<x2robot_msgs::msg::CanFrame> SwitchControlMode(ControlMode mode);

  bool decode_frame(const std::unique_ptr<x2robot_msgs::msg::CanFrame>& frame_ptr) override;

  bool id_match(const std::unique_ptr<x2robot_msgs::msg::CanFrame>& frame_ptr) override;

  std::string GetErrorDescription() const override;

  uint8_t motor_id;
  bool is_initialized = false;
};

}  // namespace x2robot_hardware_interface

#endif
