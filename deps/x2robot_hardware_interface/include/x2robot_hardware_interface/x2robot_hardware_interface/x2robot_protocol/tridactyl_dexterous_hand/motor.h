#ifndef RM003_HAND_MOTOR_H
#define RM003_HAND_MOTOR_H

#include <cstdint>
#include <limits>
#include <memory>

#include "rclcpp/logger.hpp"
#include "x2robot_hardware_interface/x2robot_protocol/tridactyl_dexterous_hand/protocol.h"

namespace x2robot_hardware_interface {

class Rm003HandMotor {
 public:
  explicit Rm003HandMotor(uint8_t index);
  ~Rm003HandMotor() = default;

  double target_position = 0.0;

  void update_state(const MotorStatus& status);

  uint8_t get_index() const { return index_; }
  double get_pos_state() const { return pos_state_; }
  double get_current_state() const { return current_state_; }
  double get_temperature() const { return temperature_; }
  double get_err_code() const { return err_code_; }
  bool has_error() const { return err_code_ != 0.0; }

  HandMotorCtrl get_ctrl() const;

  void reset_state();

 private:
  uint8_t index_;

  double pos_state_ = std::numeric_limits<double>::quiet_NaN();
  double current_state_ = std::numeric_limits<double>::quiet_NaN();
  double temperature_ = 0.0;
  double err_code_ = 0.0;

  std::unique_ptr<rclcpp::Logger> logger_ptr_;
};

}  // namespace x2robot_hardware_interface

#endif  // RM003_HAND_MOTOR_H
