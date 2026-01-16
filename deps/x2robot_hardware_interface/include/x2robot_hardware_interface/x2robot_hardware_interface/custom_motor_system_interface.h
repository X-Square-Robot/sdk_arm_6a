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
#include <string>

#include "sensor_msgs/msg/joint_state.hpp"
#include "diagnostic_updater/diagnostic_updater.hpp"
#include "diagnostic_msgs/msg/diagnostic_status.hpp"
#include "x2robot_hardware_interface/motor_protocols/can_motor_base.h"
#include "x2robot_hardware_interface/motor_protocols/dmmotor.h"
#include "x2robot_hardware_interface/motor_protocols/encos_motor.h"
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
  rclcpp::Publisher<x2robot_msgs::msg::CanFrame>::SharedPtr can_frame_pub_;

  // Diagnostic updater for motor status monitoring
  std::unique_ptr<diagnostic_updater::Updater> diagnostic_updater_;

  bool UpdateMotorsCmd();
  void PublishCanFrame(std::unique_ptr<x2robot_msgs::msg::CanFrame> frame);

  // Diagnostic callback functions
  void motor_diagnostic_callback(diagnostic_updater::DiagnosticStatusWrapper& stat);
  void update_diagnostics();

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

  // Unified motor management using base class
  std::unordered_map<std::string, std::unique_ptr<CanMotorBase>> motors_;

  // Executor for spinning
  rclcpp::executors::SingleThreadedExecutor::SharedPtr executor_;
  std::thread executor_thread_;

  x2robot_hardware_interface::TaskQueue task_queue_ = x2robot_hardware_interface::TaskQueue(1);
  rclcpp::Node::SharedPtr node_;
};

}  // namespace x2robot_hardware_interface

#endif
