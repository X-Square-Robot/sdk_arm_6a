#ifndef X2ROBOT_CAN_MOTOR_H
#define X2ROBOT_CAN_MOTOR_H

#include <algorithm>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <limits>
#include <memory>
#include <vector>
#include <x2robot_msgs/msg/can_frame.hpp>

#include "rclcpp/logger.hpp"
#include "x2robot_hardware_interface/x2robot_protocol/can_arm/protocol.h"

namespace x2robot_hardware_interface {

class X2RobotCanMotor {
 public:
  enum class ControlMode : uint8_t { UNKNOWN = 0, POSITION = 2, VELOCITY = 3, MIT = 4, TORQUE = 5, TORQUE_IQ = 6 };

  enum class FocState : uint8_t { IDLE = 0, INIT = 1, DEBUG = 20, LINEAR = 21, RUN = 50, STOP = 51, FAULT = 100 };

  enum class ControllerState : uint8_t {
    IDLE = 0,
    INIT = 1,
    HARDWARE_CHECK = 2,
    ENCODER_CALIBRATION = 6,
    RUN = 20,
    STOP = 21,
    RESET = 4,
    FAULT = 120
  };

  enum class ErrorType : uint8_t {
    NORMAL = 0x00,
    OVER_VOLTAGE = 0x01,
    UNDER_VOLTAGE = 0x02,
    OVER_CURRENT = 0x03,
    MOS_OVER_TEMP = 0x04,
    MOTOR_OVER_HEAT = 0x05,
    COMMUNICATION_LOST = 0x06,
    OVERLOAD = 0x07,
    UNKNOWN_ERROR = 0x0F
  };

  explicit X2RobotCanMotor(uint8_t motor_id);
  ~X2RobotCanMotor() = default;

  void set_home_offset(double offset) { home_offset_ = offset; }
  void set_direction(double dir);
  void set_gear_ratio(double ratio) { gear_ratio_ = ratio; }
  void set_upper_limit(double limit) { upper_limit_ = limit; }
  void set_lower_limit(double limit) { lower_limit_ = limit; }
  void set_max_torque(double torque) { max_torque_ = std::abs(torque); }

  double get_pos_state() const { return pos_state_ * direction_; }
  double get_vel_state() const { return vel_state_ * direction_; }
  double get_trq_state() const { return trq_state_ * direction_; }
  bool is_enabled() const { return enabled_; }
  ControllerState get_controller_state() const { return controller_state_; }
  uint32_t get_abnormal_state() const { return abnormal_state_; }
  uint16_t get_motor_temp() const { return motor_temp_; }
  ErrorType get_error_type() const;

  double target_pos = 0.0;
  double target_vel = 0.0;
  double tau_ff = 0.0;
  double mit_kp = 0.0;
  double mit_kd = 0.0;
  double ctrl_mode_cmd = 1.0;

  bool validate_commands();
  bool is_mode_matched() const;
  bool is_mit_params_matched() const;
  bool has_error() const { return abnormal_state_ != 0; }
  void reset_state();

  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateEnableCmd(bool enable);
  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateModeCmd();
  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateMitParamsCmd();
  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateClearFaultCmd();
  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateGetStateCmd();
  std::unique_ptr<x2robot_msgs::msg::CanFrame> GeneratePreControlFrame();

  bool decode_frame(const std::unique_ptr<x2robot_msgs::msg::CanFrame>& frame_ptr);

  void update_response_time() { last_response_time_ = std::chrono::steady_clock::now(); }
  void update_command_time() { last_command_time_ = std::chrono::steady_clock::now(); }
  std::chrono::duration<double> get_time_since_last_update() const { return last_command_time_ - last_response_time_; }

  uint8_t get_motor_id() const { return motor_id_; }
  double get_clipped_target_pos() const;
  double get_raw_target_pos() const { return get_clipped_target_pos() * direction_; }
  double get_raw_target_vel() const { return target_vel * direction_; }
  double get_raw_tau_ff() const { return clamp_torque(tau_ff) * direction_; }

  int16_t get_mit_pos_int16() const;
  int16_t get_mit_vel_int16() const;
  int16_t get_mit_tor_int16() const;

 private:
  std::unique_ptr<x2robot_msgs::msg::CanFrame> create_frame(uint8_t cmd_set, uint8_t cmd_id, const uint8_t* data,
                                                            size_t data_len);
  void normalize_targets_for_mode();
  double clamp_torque(double torque) const { return std::clamp(torque, -max_torque_, max_torque_); }

  uint8_t motor_id_;
  double home_offset_ = 0.0;
  double direction_ = 1.0;
  double gear_ratio_ = 1.0;
  double upper_limit_ = std::numeric_limits<double>::max();
  double lower_limit_ = std::numeric_limits<double>::lowest();
  double max_torque_ = std::numeric_limits<double>::max();

  ControlMode current_mode_ = ControlMode::UNKNOWN;
  double pos_state_ = std::numeric_limits<double>::quiet_NaN();
  double vel_state_ = std::numeric_limits<double>::quiet_NaN();
  double trq_state_ = std::numeric_limits<double>::quiet_NaN();

  ControllerState controller_state_ = ControllerState::IDLE;
  uint32_t abnormal_state_ = 0;
  int16_t mos_temp_ = 0;
  int16_t motor_temp_ = 0;
  bool enabled_ = false;

  double current_mit_kp_ = 0.0;
  double current_mit_kd_ = 0.0;

  static constexpr float kPositionMax = 10.0 * M_PI * 2.0;
  static constexpr float kVelocityMax = M_PI * 4.0;
  static constexpr float kTorqueMax = 120.0f;

  std::chrono::steady_clock::time_point last_command_time_;
  std::chrono::steady_clock::time_point last_response_time_;

  std::unique_ptr<rclcpp::Logger> logger_ptr_;
};
}  // namespace x2robot_hardware_interface

#endif  // X2ROBOT_CAN_MOTOR_H
