#ifndef JOYSTICK_INTERFACE_H__
#define JOYSTICK_INTERFACE_H__

#include <hardware_interface/handle.hpp>
#include <hardware_interface/hardware_info.hpp>
#include <hardware_interface/sensor_interface.hpp>
#include <hardware_interface/system_interface.hpp>
#include <hardware_interface/types/hardware_interface_return_values.hpp>
#include <hardware_interface/types/hardware_interface_type_values.hpp>
#include <memory>
#include <rclcpp/node.hpp>
#include <rclcpp/publisher.hpp>
#include <rclcpp/subscription.hpp>
#include <string>
#include <x2robot_msgs/msg/joystick.hpp>
#include <x2robot_msgs/msg/serial_data.hpp>

namespace x2robot_hardware_interface {

#pragma pack(push, 1)
// small endian
union JoystickStatus {
  struct Data {
    int16_t min_chx;
    int16_t max_chx;
    int16_t min_chy;
    int16_t max_chy;
    int16_t min_trigger;
    int16_t max_trigger;
    int16_t raw_chx;
    int16_t raw_chy;
    int16_t raw_trigger;
    int16_t correct_chx;
    int16_t correct_chy;
    int16_t correct_trigger;
    uint8_t sw1 : 1;
    uint8_t sw2 : 1;
    uint8_t reserved;
    uint8_t joy_button;
    uint8_t mode;
    uint8_t state;
    uint8_t version;
  } data;
  uint8_t raw[30];
};
#pragma pack(pop)

using CallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;

class JoystickInterface : public hardware_interface::SystemInterface {
 public:
  RCLCPP_SHARED_PTR_DEFINITIONS(JoystickInterface)
  CallbackReturn on_init(const hardware_interface::HardwareInfo& info) override;

  std::vector<hardware_interface::StateInterface> export_state_interfaces() override;

  std::vector<hardware_interface::CommandInterface> export_command_interfaces() override;

  hardware_interface::CallbackReturn on_activate(const rclcpp_lifecycle::State& previous_state) override;

  hardware_interface::CallbackReturn on_deactivate(const rclcpp_lifecycle::State& previous_state) override;

  hardware_interface::return_type read(const rclcpp::Time& time, const rclcpp::Duration& period) override;

  hardware_interface::return_type write(const rclcpp::Time& time, const rclcpp::Duration& period) override;

 private:
  rclcpp::Subscription<x2robot_msgs::msg::SerialData>::SharedPtr serial_data_sub_;
  rclcpp::Publisher<x2robot_msgs::msg::SerialData>::SharedPtr serial_data_pub_;
  rclcpp::Publisher<x2robot_msgs::msg::Joystick>::SharedPtr state_pub_;
  rclcpp::Node::SharedPtr node_;
  std::string serial_port_name_;
  double expected_update_period_;
  double read_update_duration_;

  void DecodeSerialCommand(const std::unique_ptr<x2robot_msgs::msg::SerialData>& data_ptr);
  bool is_activated_ = false;
  rclcpp::Time last_recv_time_;

  int invert_x_ = 1, invert_y_ = 1;
  int16_t correct_chx_ = 0, correct_chy_ = 0, correct_trigger_ = 0;
  bool joy_button_ = false, sw1_ = false, sw2_ = false;
  double state_chx_ = 0, state_chy_ = 0, state_trigger_ = 0, state_joy_button_ = 0, state_sw1_ = 0, state_sw2_ = 0;
};

}  // namespace x2robot_hardware_interface

#endif
