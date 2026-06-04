#ifndef SUCTION_GRIPPER_HARDWARE_INTERFACE_H__
#define SUCTION_GRIPPER_HARDWARE_INTERFACE_H__

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
#include <x2robot_msgs/msg/serial_data.hpp>

#include "rclcpp/executor.hpp"
#include "rclcpp/executors/single_threaded_executor.hpp"

namespace x2robot_hardware_interface {

using CallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;

class SuctionGripperInterface : public hardware_interface::SystemInterface {
 public:
  RCLCPP_SHARED_PTR_DEFINITIONS(SuctionGripperInterface)

  CallbackReturn on_init(const hardware_interface::HardwareInfo& info) override;

  std::vector<hardware_interface::StateInterface> export_state_interfaces() override;

  std::vector<hardware_interface::CommandInterface> export_command_interfaces() override;

  hardware_interface::CallbackReturn on_activate(const rclcpp_lifecycle::State& previous_state) override;

  hardware_interface::CallbackReturn on_deactivate(const rclcpp_lifecycle::State& previous_state) override;

  hardware_interface::return_type read(const rclcpp::Time& time, const rclcpp::Duration& period) override;

  hardware_interface::return_type write(const rclcpp::Time& time, const rclcpp::Duration& period) override;

 private:
  // Enum for commands
  enum Command {
    ReadTactileSensorInfo = 0xA1,
    ReadGripperMotorInfo = 0xA2,
    SetGripperMotorAbsPosTor = 0xA3,
    ClearGripperMotorFault = 0xA4,
    SetGripperMotorHomePosition = 0xA5,
    SetGripperMotorEstop = 0xA6,
    SetSuctionMotorStartStop = 0xA7
  };

  /**
   * @brief Command enum for gripper operations
   * @return true if serial command recv success
   */
  bool SendSerialCommand(const Command& cmd);

  /**
   * @brief Decode the serial command received from the gripper
   * @param data_ptr pointer to the received serial data
   */
  void DecodeSerialCommand(const x2robot_msgs::msg::SerialData::UniquePtr& data_ptr);

  /**
   * @brief append value of template type into payload vector
   * @tparam T                value type
   * @param  payload          payload vector
   * @param  value            value of template type
   */
  template <typename T>
  void AppendToPayload(std::vector<uint8_t>& payload, T value);

  /**
   * @brief Check if the hardware has timed out
   * @param time the last recorded time
   * @return true if hardware timeout
   */
  bool check_hardware_timeout(const rclcpp::Time& time, const int timeout_sec);

  // ROS Node and communication
  rclcpp::Node::SharedPtr node_;
  rclcpp::Subscription<x2robot_msgs::msg::SerialData>::SharedPtr serial_data_sub_;
  rclcpp::Publisher<x2robot_msgs::msg::SerialData>::SharedPtr serial_data_pub_;
  rclcpp::CallbackGroup::SharedPtr callback_group_;

  // Serial port and sensor type
  std::string serial_port_name_;
  std::string sensor_type_;

  // Activation state
  bool is_activated_;
  std::atomic_int8_t gripper_init_success_{0};
  int timeout_retries_;

  // Gripper motor states and commands
  std::vector<struct GripperMotorState> gripper_motor_states_;
  std::atomic<double> gripper_main_vol_;
  double gripper_cmd_pos_;
  double gripper_cmd_vel_;
  double gripper_cmd_eff_;
  double gripper_cmd_pos_max_;
  double gripper_cmd_vel_max_;

  // Gripper current thresholds
  double gripper_cur_thr_;
  double gripper_hold_cur_;

  // Suction motor states and commands
  double suction_trigger_;
  double suction_dir_;

  // Tactile sensor states
  std::vector<struct TactileSensorState> sensor_states_;

  // Flag to check if the gripper is connected, rehoming needed, and last heartbeat time
  std::atomic_bool hardware_connected_{false};
  std::atomic_bool need_rehoming_{false};
  rclcpp::Time last_heartbeat_time_, last_set_homing_time_;

  std::shared_ptr<rclcpp::executors::MultiThreadedExecutor> executor_;
  std::thread executor_thread_;
};

}  // namespace x2robot_hardware_interface

#endif
