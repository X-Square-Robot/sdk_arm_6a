#ifndef X2ROBOT_CAN_MOTOR_INTERFACE_H
#define X2ROBOT_CAN_MOTOR_INTERFACE_H

#include <realtime_tools/realtime_publisher.h>

#include <diagnostic_updater/diagnostic_updater.hpp>
#include <hardware_interface/system_interface.hpp>
#include <hardware_interface/types/hardware_interface_return_values.hpp>
#include <hardware_interface/types/hardware_interface_type_values.hpp>
#include <memory>
#include <mutex>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_lifecycle/state.hpp>
#include <string>
#include <thread>
#include <unordered_map>
#include <vector>

#include "protocol/msg/status_code.hpp"
#include "x2robot_hardware_interface/x2robot_protocol/can_arm/motor.h"
#include "x2robot_msgs/msg/can_frame.hpp"
#include "x2robot_msgs/msg/can_frame_batch.hpp"

namespace x2robot_hardware_interface {

using CallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;

/**
 * @brief Hardware interface for X2Robot CAN motors
 *
 * Features:
 * - Supports multiple X2Robot CAN motors
 * - Multi-axis control frames for position, velocity, MIT, and torque modes
 * - Individual functional frames for enable, mode config, MIT params, etc.
 * - Automatic state management and error handling
 */
class X2RobotCanMotorInterface : public hardware_interface::SystemInterface {
 public:
  X2RobotCanMotorInterface() = default;
  virtual ~X2RobotCanMotorInterface();

  // Lifecycle Management
  CallbackReturn on_init(const hardware_interface::HardwareInfo& info) override;
  CallbackReturn on_configure(const rclcpp_lifecycle::State& previous_state) override;
  CallbackReturn on_activate(const rclcpp_lifecycle::State& previous_state) override;
  CallbackReturn on_deactivate(const rclcpp_lifecycle::State& previous_state) override;
  CallbackReturn on_shutdown(const rclcpp_lifecycle::State& previous_state) override;

  // Hardware Interface
  std::vector<hardware_interface::StateInterface> export_state_interfaces() override;
  std::vector<hardware_interface::CommandInterface> export_command_interfaces() override;

  hardware_interface::return_type read(const rclcpp::Time& time, const rclcpp::Duration& period) override;
  hardware_interface::return_type write(const rclcpp::Time& time, const rclcpp::Duration& period) override;

 private:
  // Initialization Helpers
  bool ConfigureMotorParameters(X2RobotCanMotor* motor, const hardware_interface::ComponentInfo& joint);

  // Communication
  void PublishCanFrameBatch(std::vector<std::unique_ptr<x2robot_msgs::msg::CanFrame>> frames);
  static void PublishCanFrameBatch(
      const rclcpp::Publisher<x2robot_msgs::msg::CanFrameBatch>::SharedPtr& publisher,
      std::vector<std::unique_ptr<x2robot_msgs::msg::CanFrame>> frames);
  void PublishCanFrame(std::unique_ptr<x2robot_msgs::msg::CanFrame> frame);
  void HandleCanFrame(x2robot_msgs::msg::CanFrame::UniquePtr data_ptr);
  bool ValidateCanFrame(const x2robot_msgs::msg::CanFrame& frame, uint8_t& header_can_id, uint16_t& dlc) const;

  // Control Frame Generation (Multi-axis)
  std::unique_ptr<x2robot_msgs::msg::CanFrame> GeneratePositionCtrlFrame();
  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateVelocityCtrlFrame();
  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateMitCtrlFrame();
  std::unique_ptr<x2robot_msgs::msg::CanFrame> GenerateTorqueCtrlFrame();

  // Motor Management
  void SendGetStateToNormalMotors(const std::vector<X2RobotCanMotor*>& normal_motors);

  // Diagnostics
  void motor_diagnostic_callback(diagnostic_updater::DiagnosticStatusWrapper& stat);
  void publish_status_code();

  // ROS2 Node and Communication
  rclcpp::Node::SharedPtr node_;
  rclcpp::executors::SingleThreadedExecutor::SharedPtr executor_;
  std::thread executor_thread_;

  rclcpp::Publisher<x2robot_msgs::msg::CanFrameBatch>::SharedPtr can_frame_pub_;
  rclcpp::Subscription<x2robot_msgs::msg::CanFrame>::SharedPtr can_frame_sub_;

  // Diagnostics
  std::unique_ptr<diagnostic_updater::Updater> diagnostic_updater_;

  // Status Code Publishing
  std::shared_ptr<realtime_tools::RealtimePublisher<protocol::msg::StatusCode>> status_code_rt_pub_;
  uint8_t domain_ = 0;
  uint8_t unit_ = 0;

  // Motor Management
  std::vector<std::string> joint_order_;
  std::unordered_map<std::string, std::unique_ptr<X2RobotCanMotor>> motors_;
  std::unordered_map<uint8_t, X2RobotCanMotor*> motor_id_map_;

  // State Buffers
  std::vector<double> pos_state_;
  std::vector<double> vel_state_;
  std::vector<double> trq_state_;
  std::vector<X2RobotCanMotor*> normal_motors_buffer_;

  // Thread Safety
  std::mutex state_mutex_;

  // Status
  bool is_activated_ = false;

  // Constants
  static constexpr size_t MAX_MOTORS_PER_FRAME = 12;
  static constexpr size_t MAX_MIT_MOTORS_PER_FRAME = 8;
};

}  // namespace x2robot_hardware_interface

#endif  // X2ROBOT_CAN_MOTOR_INTERFACE_H
