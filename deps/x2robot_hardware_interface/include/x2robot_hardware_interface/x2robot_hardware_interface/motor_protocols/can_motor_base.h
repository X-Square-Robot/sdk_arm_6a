#ifndef CAN_MOTOR_BASE_H
#define CAN_MOTOR_BASE_H

#include <algorithm>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <limits>
#include <memory>
#include <x2robot_msgs/msg/can_frame.hpp>

namespace x2robot_hardware_interface {

/**
 * @brief Abstract base class for CAN-based motor controllers
 *
 * This class provides a common interface for different motor protocols
 * that communicate over CAN bus. It defines the common functionality
 * and data structures shared across different motor implementations.
 */
class CanMotorBase {
 public:
  /**
   * @brief Common control modes for motor operation
   */
  enum class ControlMode {
    UNKNOWN = 0,   // Unknown control mode
    MIT = 1,       // Feedforward torque control with target position/velocity
    POSITION = 2,  // Position control mode
    VELOCITY = 3,  // Velocity control mode
    TORQUE = 4     // Torque control mode
  };

  /**
   * @brief Constructor
   */
  explicit CanMotorBase() { reset_state(); }

  /**
   * @brief Virtual destructor
   */
  virtual ~CanMotorBase() = default;

  // === Pure Virtual Functions (must be implemented by derived classes) ===
  /**
   * @brief Generate a CAN frame for control command
   * @return Unique pointer to the generated CAN frame
   */
  virtual std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateCtrlCmd() = 0;

  /**
   * @brief Generate a CAN frame for position control command
   * @return Unique pointer to the generated CAN frame
   */
  virtual std::unique_ptr<x2robot_msgs::msg::CanFrame> GeneratePosCmd() = 0;

  /**
   * @brief Generate a CAN frame for MIT control command
   * @return Unique pointer to the generated CAN frame
   */
  virtual std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateMitCmd() = 0;

  /**
   * @brief Generate a CAN frame for velocity control command
   * @return Unique pointer to the generated CAN frame, or nullptr if not supported
   */
  virtual std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateVelCmd() { return nullptr; }

  /**
   * @brief Generate a CAN frame for torque control command
   * @return Unique pointer to the generated CAN frame, or nullptr if not supported
   */
  virtual std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateTorqueCmd() { return nullptr; }

  /**
   * @brief Generate a CAN frame to enable motor
   * @return Unique pointer to the generated CAN frame, or nullptr if not supported
   */
  virtual std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateEnable() { return nullptr; }

  /**
   * @brief Generate a CAN frame to disable motor
   * @return Unique pointer to the generated CAN frame, or nullptr if not supported
   */
  virtual std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateDisable() { return nullptr; }

  /**
   * @brief Generate a CAN frame to reset error
   * @return Unique pointer to the generated CAN frame, or nullptr if not supported
   */
  virtual std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateReset() { return nullptr; }

  /**
   * @brief Arbitrate CAN frame ID for this motor
   * @param can_id CAN ID to check against
   * @return true if the CAN ID matches this motor's ID, false otherwise
   */
  virtual bool id_match(const std::unique_ptr<x2robot_msgs::msg::CanFrame>& frame_ptr) = 0;

  /**
   * @brief Decode received CAN frame and update motor state
   * @param frame_ptr Pointer to the received CAN frame
   * @return true if frame was successfully decoded, false otherwise
   */
  virtual bool decode_frame(const std::unique_ptr<x2robot_msgs::msg::CanFrame>& frame_ptr) = 0;

  /**
   * @brief Get motor-specific error code description
   * @return String description of current error
   */
  virtual std::string GetErrorDescription() const = 0;

  // === Common Utility Functions ===

  /**
   * @brief Convert unsigned integer to float with scaling
   * @param x_int Input integer value
   * @param x_min Minimum float value
   * @param x_max Maximum float value
   * @param bits Number of bits used for encoding
   * @return Scaled float value
   */
  static float uint_to_float(const int x_int, const float x_min, const float x_max, const int bits) {
    const float span = x_max - x_min;
    const float offset = x_min;
    return static_cast<float>(x_int) * span / static_cast<float>((1 << bits) - 1) + offset;
  }

  /**
   * @brief Convert float to unsigned integer with scaling
   * @param x Input float value
   * @param x_min Minimum float value
   * @param x_max Maximum float value
   * @param bits Number of bits used for encoding
   * @return Scaled integer value
   */
  static int float_to_uint(const float x, const float x_min, const float x_max, const int bits) {
    const float span = x_max - x_min;
    const float offset = x_min;
    return static_cast<int>((x - offset) * (static_cast<float>((1 << bits) - 1)) / span);
  }

  // === Getters and Setters ===

  void set_home_offset(double offset) { home_offset_ = offset; }
  void set_direction(double dir) {
    if (dir != 1.0 && dir != -1.0) {
      throw std::invalid_argument("Direction must be either 1.0 or -1.0");
    }
    direction_ = dir;
  }
  void set_gear_ratio(double ratio) { gear_ratio_ = ratio; }
  void set_upper_limit(double limit) { upper_limit_ = limit; }
  void set_lower_limit(double limit) { lower_limit_ = limit; }
  void set_max_torque(double torque) { max_torque_ = std::abs(torque); }

  // State getters (apply direction multiplier)
  double get_pos_state() const { return pos_state * direction_; }
  double get_vel_state() const { return vel_state * direction_; }
  double get_trq_state() const { return trq_state * direction_; }
  float get_motor_temp() const { return motor_temp_; }

  int get_err_code() const { return err_code_; }
  bool is_enabled() const { return enabled_; }

  /**
   * @brief Update last communication timestamp
   */
  void update_response_time() { last_response_time_ = std::chrono::steady_clock::now(); }

  /**
   * @brief Update last command timestamp
   */
  void update_command_time() { last_command_time_ = std::chrono::steady_clock::now(); }
  /**
   * @brief Get time since last update
   * @return Duration since last successful communication
   */
  std::chrono::duration<double> get_time_since_last_update() const { return last_command_time_ - last_response_time_; }

  /**
   * @brief Validate and sanitize command inputs
   *
   * ROS2 controllers may send NaN values when:
   * - Controller is not active
   * - During controller transitions
   * - When specific interfaces are not being used
   *
   * This method replaces NaN with safe fallback values:
   * - target_pos: current position (prevent sudden jumps)
   * - target_vel: 0.0 (stop motion)
   * - tau_ff: 0.0 (no feedforward torque)
   * - MIT gains can remain NaN (indicates mode not active)
   */
  bool validate_commands() {
    if (std::isnan(target_pos) || std::isnan(target_vel) || std::isnan(tau_ff)) {
      return false;
    }
    return true;
  }

  // === Command Variables (public for direct access by hardware interface) ===
  double target_pos;     // Position command (rad)
  double target_vel;     // Velocity command (rad/s)
  double tau_ff;         // Torque feedforward command (Nm)
  double ctrl_mode_cmd;  // Control mode command (Default to MIT mode)
  double mit_kp;         // MIT mode proportional gain
  double mit_kd;         // MIT mode derivative gain

 protected:
  /**
   * @brief Reset command variables to default values
   */
  void reset_state() {
    enabled_ = false;
    control_mode_ = ControlMode::UNKNOWN;
    target_pos = 0.0;
    target_vel = 0.0;
    tau_ff = 0.0;
    ctrl_mode_cmd = 1.0;  // Default to MIT mode
    mit_kp = 0.0;
    mit_kd = 0.0;
  }

  /**
   * @brief Get target position clipped within limits
   * @return Clipped target position
   */
  double clipped_target_pos() const {
    if (target_pos > upper_limit_) {
      return upper_limit_;
    } else if (target_pos < lower_limit_) {
      return lower_limit_;
    } else {
      return target_pos;
    }
  }

  // === Command getters with direction applied (for use in motor protocol implementations) ===
  double raw_target_pos() const { return clipped_target_pos() * direction_; }
  double raw_target_vel() const { return target_vel * direction_; }
  double raw_tau_ff() const { return tau_ff * direction_; }

  inline double clamp_torque(double torque) const { return std::clamp(torque, -max_torque_, max_torque_); }
  // === Configuration Parameters ===
  double home_offset_ = 0.0;                                    // Home position offset
  double direction_ = 1.0;                                      // Motor direction (1.0 or -1.0)
  double gear_ratio_ = 1.0;                                     // Gear ratio for scaling
  double upper_limit_ = std::numeric_limits<double>::max();     // Position upper limit (rad)
  double lower_limit_ = std::numeric_limits<double>::lowest();  // Position lower limit (rad)
  double max_torque_ = std::numeric_limits<double>::max();      // Maximum torque (Nm)

  // === State Variables ===
  ControlMode control_mode_;                                    // Current control mode
  double pos_state = std::numeric_limits<double>::quiet_NaN();  // Current position (rad)
  double vel_state = std::numeric_limits<double>::quiet_NaN();  // Current velocity (rad/s)
  double trq_state = std::numeric_limits<double>::quiet_NaN();  // Current torque (Nm)

  // === Status Information ===
  int err_code_ = 0;         // Current error code
  float mos_temp_ = 0.0f;    // MOSFET temperature
  float motor_temp_ = 0.0f;  // Motor temperature
  bool enabled_ = false;     // Motor enable status

  // === Timing ===
  std::chrono::steady_clock::time_point last_command_time_;   // Last command timestamp
  std::chrono::steady_clock::time_point last_response_time_;  // Last response timestamp
};

}  // namespace x2robot_hardware_interface

#endif  // CAN_MOTOR_BASE_H
