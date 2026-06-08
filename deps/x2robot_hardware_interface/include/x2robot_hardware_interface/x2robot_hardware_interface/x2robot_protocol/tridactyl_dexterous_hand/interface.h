#ifndef TRIDACTYL_HAND_INTERFACE_H
#define TRIDACTYL_HAND_INTERFACE_H

#include <realtime_tools/realtime_publisher.h>

#include <diagnostic_updater/diagnostic_updater.hpp>
#include <hardware_interface/system_interface.hpp>
#include <hardware_interface/types/hardware_interface_return_values.hpp>
#include <hardware_interface/types/hardware_interface_type_values.hpp>
#include <atomic>
#include <chrono>
#include <memory>
#include <mutex>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_lifecycle/state.hpp>
#include <string>
#include <thread>
#include <vector>

#include "protocol/msg/status_code.hpp"
#include "x2robot_hardware_interface/x2robot_protocol/tridactyl_dexterous_hand/motor.h"
#include "x2robot_hardware_interface/x2robot_protocol/tridactyl_dexterous_hand/touch_sensor.h"
#include "x2robot_msgs/msg/can_frame.hpp"
#include "x2robot_msgs/msg/can_frame_batch.hpp"

namespace x2robot_hardware_interface {

using CallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;

/**
 * @brief Hardware interface for the Tridactyl dexterous hand over CAN FD.
 */
class TridactylHandInterface : public hardware_interface::SystemInterface {
 public:
  TridactylHandInterface() = default;
  virtual ~TridactylHandInterface();

  CallbackReturn on_init(const hardware_interface::HardwareInfo& info) override;
  CallbackReturn on_configure(const rclcpp_lifecycle::State& previous_state) override;
  CallbackReturn on_activate(const rclcpp_lifecycle::State& previous_state) override;
  CallbackReturn on_deactivate(const rclcpp_lifecycle::State& previous_state) override;
  CallbackReturn on_shutdown(const rclcpp_lifecycle::State& previous_state) override;

  std::vector<hardware_interface::StateInterface> export_state_interfaces() override;
  std::vector<hardware_interface::CommandInterface> export_command_interfaces() override;
  hardware_interface::return_type read(const rclcpp::Time& time, const rclcpp::Duration& period) override;
  hardware_interface::return_type write(const rclcpp::Time& time, const rclcpp::Duration& period) override;

 private:
  enum class MotorErrorBit : uint8_t {
    kVoltageAbnormal = 0,
    kServoEncoderAbnormal = 1,
    kMotorOverTemperature = 2,
    kOverCurrent = 3,
    kJointEncoderAbnormal = 4,
    kLimitExceeded = 5,
    kMotorOffline = 7,
  };

  enum class HandCommErrorCode : uint32_t {
    kTimeout = 0x100,
  };

  enum class MotorTransitionState {
    kIdle,
    kActivating,
    kDeactivating,
  };

  void PublishCanFrameBatch(std::vector<std::unique_ptr<x2robot_msgs::msg::CanFrame>> frames);
  static void PublishCanFrameBatch(
      const rclcpp::Publisher<x2robot_msgs::msg::CanFrameBatch>::SharedPtr& publisher,
      std::vector<std::unique_ptr<x2robot_msgs::msg::CanFrame>> frames);
  void PublishCanFrame(std::unique_ptr<x2robot_msgs::msg::CanFrame> frame);
  void HandleCanFrame(x2robot_msgs::msg::CanFrame::UniquePtr data_ptr);
  bool ValidateCanFrame(const x2robot_msgs::msg::CanFrame& frame, uint8_t& cmd_set, uint8_t& cmd_id) const;

  void DecodeMotorStatusFrame(const x2robot_msgs::msg::CanFrame& frame, uint16_t data_len);
  void DecodeSensorStatusFrame(const x2robot_msgs::msg::CanFrame& frame, uint16_t data_len);
  void DecodeMotorConfigFeedbackFrame(const x2robot_msgs::msg::CanFrame& frame, uint16_t data_len);
  void AppendMotorErrorDetails(uint8_t err_code, const std::string& joint_name, int& error_count,
                               std::vector<std::string>& error_details) const;

  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateMotorCtrlFrame();
  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateMotorFunctionFrame(bool enable);
  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateTouchSensorConfigFrame(bool enable);

  void StartMotorTransition(MotorTransitionState transition_state);
  void HandleMotorTransitionTick();
  bool IsMotorEnabled() const;
  void SetMotorEnabled(bool enabled);

  void hand_diagnostic_callback(diagnostic_updater::DiagnosticStatusWrapper& stat);
  void publish_status_code();

  rclcpp::Node::SharedPtr node_;
  rclcpp::executors::SingleThreadedExecutor::SharedPtr executor_;
  std::thread executor_thread_;

  rclcpp::Publisher<x2robot_msgs::msg::CanFrameBatch>::SharedPtr can_frame_pub_;
  rclcpp::Subscription<x2robot_msgs::msg::CanFrame>::SharedPtr can_frame_sub_;

  std::unique_ptr<diagnostic_updater::Updater> diagnostic_updater_;
  std::shared_ptr<realtime_tools::RealtimePublisher<protocol::msg::StatusCode>> status_code_rt_pub_;
  uint8_t domain_ = 0;
  uint8_t unit_ = 0;
  /// Min interval between MotorCtrl CAN frames (seconds). 0 = every cycle.
  /// Configured via optional URDF param "tx_period_ms".
  double tx_min_interval_s_ = 0.0;
  double elapsed_since_last_tx_s_ = 0.0;

  std::vector<std::string> joint_order_;
  std::vector<std::unique_ptr<Rm003HandMotor>> motors_;

  std::vector<std::string> sensor_order_;
  std::vector<std::unique_ptr<Rm003TouchSensor>> sensors_;

  std::vector<double> pos_state_;
  std::vector<double> vel_state_;
  /// Joint position from the previous read() (rad); used for velocity differencing vs pos_state_.
  std::vector<double> last_pos_state_;
  std::vector<double> trq_state_;
  std::vector<double> sen_normal_force_;
  std::vector<double> sen_tangential_force_;
  std::vector<double> sen_tangential_direction_;
  std::vector<double> sen_proximity_capacitance_;

  uint16_t tx_can_id_ = 0x300;
  uint16_t rx_can_id_ = 0x310;
  uint8_t module_id_ = 0x41;
  uint8_t module_sub_id_ = 0x00;

  std::mutex state_mutex_;
  std::atomic_bool is_activated_{false};
  std::atomic<int64_t> last_rx_time_ns_{0};
  std::atomic_bool is_comm_timeout_{false};

  std::atomic_bool is_motor_enabled_{false};
  std::mutex motor_transition_mutex_;
  MotorTransitionState motor_transition_state_ = MotorTransitionState::kIdle;
  rclcpp::TimerBase::SharedPtr motor_transition_timer_;
};

}  // namespace x2robot_hardware_interface

#endif  // TRIDACTYL_HAND_INTERFACE_H
