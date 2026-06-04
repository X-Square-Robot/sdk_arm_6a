#ifndef CUSTOM_MOTOR_SYSTEM_INTERFACE_H
#define CUSTOM_MMOTOR_SYSTEM_INTERFACE_H

#include <atomic>
#include <future>
#include <hardware_interface/handle.hpp>
#include <hardware_interface/hardware_info.hpp>
#include <hardware_interface/sensor_interface.hpp>
#include <hardware_interface/system_interface.hpp>
#include <hardware_interface/types/hardware_interface_return_values.hpp>
#include <hardware_interface/types/hardware_interface_type_values.hpp>
#include <memory>
#include <mutex>
#include <rclcpp/rclcpp.hpp>
#include <realtime_tools/realtime_publisher.hpp>
#include <string>

#include "diagnostic_msgs/msg/diagnostic_status.hpp"
#include "diagnostic_updater/diagnostic_updater.hpp"
#include "protocol/msg/status_code.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include "x2robot_msgs/msg/can_frame_batch.hpp"
#include "x2robot_hardware_interface/motor_protocols/can_motor_base.h"
#include "x2robot_hardware_interface/motor_protocols/dmmotor.h"
#include "x2robot_hardware_interface/motor_protocols/encos_motor.h"
#include "x2robot_hardware_interface/motor_protocols/newstart_motor.h"
#include "x2robot_hardware_interface/task_queue.h"

namespace x2robot_hardware_interface {

using CallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;

class CustomMotorSystemInterface : public hardware_interface::SystemInterface {
 public:
  RCLCPP_SHARED_PTR_DEFINITIONS(CustomMotorSystemInterface)
  CallbackReturn on_init(const hardware_interface::HardwareInfo& info) override;

  std::vector<hardware_interface::StateInterface> export_state_interfaces() override;

  std::vector<hardware_interface::CommandInterface> export_command_interfaces() override;

  hardware_interface::CallbackReturn on_configure(const rclcpp_lifecycle::State& previous_state) override;

  hardware_interface::CallbackReturn on_activate(const rclcpp_lifecycle::State& previous_state) override;

  hardware_interface::CallbackReturn on_deactivate(const rclcpp_lifecycle::State& previous_state) override;

  hardware_interface::CallbackReturn on_shutdown(const rclcpp_lifecycle::State& previous_state) override;

  hardware_interface::return_type read(const rclcpp::Time& time, const rclcpp::Duration& period) override;

  hardware_interface::return_type write(const rclcpp::Time& time, const rclcpp::Duration& period) override;

 private:
  rclcpp::Subscription<x2robot_msgs::msg::CanFrame>::SharedPtr can_frame_sub_;
  rclcpp::Publisher<x2robot_msgs::msg::CanFrameBatch>::SharedPtr can_frame_pub_;

  // StatusCode publisher for error reporting
  std::shared_ptr<realtime_tools::RealtimePublisher<protocol::msg::StatusCode>> status_code_rt_pub_;
  uint8_t domain_;
  uint8_t unit_;
  rclcpp::Time last_status_code_publish_time_;

  // Diagnostic updater for motor status monitoring
  std::unique_ptr<diagnostic_updater::Updater> diagnostic_updater_;

  void PublishCanFrameBatch(std::vector<std::unique_ptr<x2robot_msgs::msg::CanFrame>> frames);
  static void PublishCanFrameBatch(
      const rclcpp::Publisher<x2robot_msgs::msg::CanFrameBatch>::SharedPtr& publisher,
      std::vector<std::unique_ptr<x2robot_msgs::msg::CanFrame>> frames);

  // Diagnostic callback functions
  void motor_diagnostic_callback(diagnostic_updater::DiagnosticStatusWrapper& stat);
  void update_diagnostics();

  // StatusCode publishing
  void publish_status_code();
  uint8_t get_motor_index_from_joint_name(const std::string& joint_name);

  // Helper methods for motor creation and configuration
  std::unique_ptr<CanMotorBase> MotorFactory(const hardware_interface::ComponentInfo& joint);
  std::unique_ptr<CanMotorBase> CreateDmMotor(const hardware_interface::ComponentInfo& joint);
  std::unique_ptr<CanMotorBase> CreateEncosMotor(const hardware_interface::ComponentInfo& joint);
  bool ConfigureMotorParameters(CanMotorBase* motor, const hardware_interface::ComponentInfo& joint);

  bool is_activated_;
  std::vector<std::string> joint_order_;

  std::mutex state_mutex_;
  std::vector<double> pos_state_;
  std::vector<double> vel_state_;
  std::vector<double> trq_state_;
  std::vector<double> status_word_state_;

  // Unified motor management using base class
  std::unordered_map<std::string, std::unique_ptr<CanMotorBase>> motors_;

  // Executor for spinning
  rclcpp::executors::SingleThreadedExecutor::SharedPtr executor_;
  std::thread executor_thread_;

  // Per-instance overrun statistics (no mutex needed — only accessed from write())
  struct OverrunStats {
    size_t overrun_cycles = 0;      // cycles that had overrun in current window
    size_t total_cycles = 0;        // total write cycles in current window
    size_t peak_consecutive = 0;    // max consecutive overruns in current window
    std::chrono::steady_clock::time_point window_start = std::chrono::steady_clock::now();
    static constexpr std::chrono::seconds kReportInterval{5};
  } overrun_stats_;

  rclcpp::Node::SharedPtr node_;
  x2robot_hardware_interface::TaskQueue task_queue_ = x2robot_hardware_interface::TaskQueue(1);
};

}  // namespace x2robot_hardware_interface

#endif
