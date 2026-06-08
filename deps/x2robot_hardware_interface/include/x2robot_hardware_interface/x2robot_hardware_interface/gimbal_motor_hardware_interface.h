#ifndef GIMBAL_MOTOR_HARDWARE_INTERFACE_H__
#define GIMBAL_MOTOR_HARDWARE_INTERFACE_H__

#include <hardware_interface/handle.hpp>
#include <hardware_interface/hardware_info.hpp>
#include <hardware_interface/system_interface.hpp>
#include <hardware_interface/types/hardware_interface_return_values.hpp>
#include <hardware_interface/types/hardware_interface_type_values.hpp>
#include <memory>
#include <rclcpp/node.hpp>
#include <rclcpp/publisher.hpp>
#include <rclcpp/subscription.hpp>
#include <string>
#include <x2robot_msgs/msg/serial_data.hpp>

namespace x2robot_hardware_interface {

using CallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;

class GimbalMotorSystemInterface : public hardware_interface::SystemInterface {
 public:
  CallbackReturn on_init(const hardware_interface::HardwareInfo& info) override;

  std::vector<hardware_interface::StateInterface> export_state_interfaces() override;

  std::vector<hardware_interface::CommandInterface> export_command_interfaces() override;

  hardware_interface::CallbackReturn on_activate(const rclcpp_lifecycle::State& previous_state) override;

  hardware_interface::CallbackReturn on_deactivate(const rclcpp_lifecycle::State& previous_state) override;

  hardware_interface::return_type read(const rclcpp::Time& time, const rclcpp::Duration& period) override;

  hardware_interface::return_type write(const rclcpp::Time& /*time*/, const rclcpp::Duration& /*period*/) override;

 private:
  rclcpp::Subscription<x2robot_msgs::msg::SerialData>::SharedPtr serial_data_sub_;
  rclcpp::Publisher<x2robot_msgs::msg::SerialData>::SharedPtr serial_data_pub_;
  rclcpp::Node::SharedPtr node_;
  std::string serial_port_name_;
  double expected_update_period_;
  double read_update_duration_;
  double write_update_duration_;

  std::unordered_map<int, std::unique_ptr<std::promise<void>>> update_promise_;
  void SendSerialCommand(int cmd_id);
  void DecodeSerialCommand(const std::unique_ptr<x2robot_msgs::msg::SerialData>& data_ptr);
  bool WaitAck(int cmd_id);
  bool is_activated_;

  std::vector<double> joint_commands_;
  std::vector<double> joint_states_;
  double fake_state_ = 0;
};

}  // namespace x2robot_hardware_interface

#endif  // GIMBAL_MOTOR_HARDWARE_INTERFACE_H
