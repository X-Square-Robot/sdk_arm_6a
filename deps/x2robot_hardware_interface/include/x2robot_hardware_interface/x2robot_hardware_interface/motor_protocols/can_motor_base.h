#ifndef CAN_MOTOR_BASE_H
#define CAN_MOTOR_BASE_H

#include <algorithm>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <limits>
#include <memory>
#include <rclcpp/clock.hpp>
#include <rclcpp/logger.hpp>
#include <rclcpp/logging.hpp>
#include <string>
#include <utility>
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

  enum class ErrorType : uint8_t {
    NORMAL = 0x00,              // No error
    OVER_VOLTAGE = 0x01,        // Over voltage
    UNDER_VOLTAGE = 0x02,       // Under voltage
    OVER_CURRENT = 0x03,        // Over current
    MOS_OVER_TEMP = 0x04,       // MOS over temperature
    MOTOR_OVER_HEAT = 0x05,     // Motor over heat
    COMMUNICATION_LOST = 0x06,  // Communication lost (set by interface, not motor)
    OVERLOAD = 0x07,            // Overload
    UNKNOWN_ERROR = 0x0F        // Unknown error
  };

  enum class ControlWord : int {
    Undefined = 0,
    ResetError = 1 << 0,
    EnableMotor = 1 << 1,
    SetZero = 1 << 2,
  };

  enum class StateWord : int {
    Undefined = -1,
    Error = 1,
    ReadyToOperation = 2,
    OperationEnable = 3,
  };

  enum class InternalState {
    INIT,            // 等待首次反馈
    READY,           // 已失能，无错误
    ENABLING,        // 已发送 Enable，等待确认
    ENABLED,         // 正常运转
    MODE_SWITCHING,  // 已发送切换指令，等待确认
    RESETTING,       // 已发送 Reset，等待确认
    FAULT            // 错误状态
  };

  static constexpr double kTransitionTimeoutSec = 0.1;

  /**
   * @brief Constructor
   */
  explicit CanMotorBase(std::string name) : name_(std::move(name)), logger_(rclcpp::get_logger(name_)) {
    reset_state();
  }

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
   * @brief Generate a CAN frame to set motor position to zero
   * @return Unique pointer to the generated CAN frame, or nullptr if not supported
   */
  virtual std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateSetZero() { return nullptr; }

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
   * @brief Get unified error type for status code publishing
   * Maps motor-specific error codes to unified ErrorType enum
   * @return Unified error type
   */
  virtual ErrorType get_unified_error_type() const = 0;

  /**
   * @brief Get motor error code description
   * @return String description of current error based on unified error type
   */
  virtual std::string GetErrorDescription() const {
    switch (get_unified_error_type()) {
      case ErrorType::NORMAL:
        return "No Error";
      case ErrorType::OVER_VOLTAGE:
        return "Over Voltage";
      case ErrorType::UNDER_VOLTAGE:
        return "Under Voltage";
      case ErrorType::OVER_CURRENT:
        return "Over Current";
      case ErrorType::MOS_OVER_TEMP:
        return "MOS Over Temperature";
      case ErrorType::MOTOR_OVER_HEAT:
        return "Motor Over Heat";
      case ErrorType::COMMUNICATION_LOST:
        return "Communication Lost";
      case ErrorType::OVERLOAD:
        return "Overload";
      case ErrorType::UNKNOWN_ERROR:
      default:
        return "Unknown Error (" + std::to_string(err_code_) + ")";
    }
  }

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
  void set_auto_enable(bool auto_enable) { auto_enable_ = auto_enable; }
  void set_status_word(double status) { status_word = status; }

  // State getters (apply direction multiplier)
  double get_pos_state() const { return pos_state * direction_; }
  double get_vel_state() const { return vel_state * direction_; }
  double get_trq_state() const { return trq_state * direction_; }
  double get_status_word() const { return status_word; }
  float get_motor_temp() const { return motor_temp_; }

  int get_err_code() const { return err_code_; }
  bool is_enabled() const { return enabled_; }
  const std::string& get_name() const { return name_; }
  InternalState get_internal_state() const { return internal_state_; }

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
  inline std::chrono::duration<double> get_time_since_last_update() const {
    return last_command_time_ - last_response_time_;
  }

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
  double control_word;

 protected:
  /**
   * @brief Reset command variables to default values
   */
  void reset_state() {
    enabled_ = false;
    control_mode_ = ControlMode::UNKNOWN;
    internal_state_ = InternalState::INIT;
    target_pos = std::numeric_limits<double>::quiet_NaN();
    target_vel = 0.0;
    tau_ff = 0.0;
    ctrl_mode_cmd = static_cast<double>(ControlMode::MIT);
    mit_kp = 0.0;
    mit_kd = 0.0;
    control_word = static_cast<double>(ControlWord::Undefined);
    status_word = static_cast<double>(StateWord::Undefined);
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
  bool auto_enable_ = false;  // Whether to automatically send enable command if motor is not enabled
  double home_offset_ = 0.0;  // Home position offset
  double direction_ = 1.0;    // Motor direction (1.0 or -1.0)
  double gear_ratio_ = 1.0;   // Gear ratio for scaling
  double upper_limit_ = std::numeric_limits<double>::max();     // Position upper limit (rad)
  double lower_limit_ = std::numeric_limits<double>::lowest();  // Position lower limit (rad)
  double max_torque_ = std::numeric_limits<double>::max();      // Maximum torque (Nm)

  // === State Variables ===
  ControlMode control_mode_;                                    // Current control mode
  double pos_state = std::numeric_limits<double>::quiet_NaN();  // Current position (rad)
  double vel_state = std::numeric_limits<double>::quiet_NaN();  // Current velocity (rad/s)
  double trq_state = std::numeric_limits<double>::quiet_NaN();  // Current torque (Nm)
  double status_word = static_cast<double>(StateWord::Undefined);

  // === Status Information ===
  int err_code_ = 0;         // Current error code
  float mos_temp_ = 0.0f;    // MOSFET temperature
  float motor_temp_ = 0.0f;  // Motor temperature
  bool enabled_ = false;     // Motor enable status

  // === FSM ===
  InternalState internal_state_ = InternalState::INIT;
  std::chrono::steady_clock::time_point state_transition_time_;

  void enter_state(InternalState s) {
    internal_state_ = s;
    state_transition_time_ = std::chrono::steady_clock::now();
  }

  bool transition_timed_out() const {
    return std::chrono::duration<double>(std::chrono::steady_clock::now() - state_transition_time_).count() >
           kTransitionTimeoutSec;
  }

  // === Timing ===
  std::chrono::steady_clock::time_point last_command_time_;   // Last command timestamp
  std::chrono::steady_clock::time_point last_response_time_;  // Last response timestamp

  // === Logger ===
  std::string name_;       // Motor instance name: interface_name + joint_name
  rclcpp::Logger logger_;  // Logger named by motor instance name

  // Per-instance throttle clock — prevents cross-instance log suppression when
  // multiple motors share the same RCLCPP_*_THROTTLE callsite (same file:line).
  rclcpp::Clock throttle_clock_;
};

}  // namespace x2robot_hardware_interface

#endif  // CAN_MOTOR_BASE_H
