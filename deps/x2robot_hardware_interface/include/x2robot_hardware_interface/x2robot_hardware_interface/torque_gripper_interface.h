#ifndef TORQUE_GRIPPER_INTERFACE_HARDWARE_INTERFACE_H__
#define TORQUE_GRIPPER_INTERFACE_HARDWARE_INTERFACE_H__

#include <hardware_interface/handle.hpp>
#include <hardware_interface/hardware_info.hpp>
#include <hardware_interface/system_interface.hpp>
#include <hardware_interface/types/hardware_interface_return_values.hpp>

#include <rclcpp/node.hpp>
#include <rclcpp/publisher.hpp>
#include <rclcpp/subscription.hpp>

#include <rclcpp/executors/multi_threaded_executor.hpp>

#include <atomic>
#include <memory>
#include <string>
#include <thread>
#include <vector>

#include <x2robot_msgs/msg/serial_data.hpp>

#include "rclcpp/executor.hpp"

#include <rclcpp_lifecycle/state.hpp>

namespace x2robot_hardware_interface {

using CallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;

struct GripperMotorState {
  GripperMotorState(double _eff = 0.0, double _vel = 0.0, double _pos = 0.0, double _err = 0.0,
                     double _temp = 0.0, uint32_t _version = 0)
      : eff(_eff), vel(_vel), pos(_pos), err(_err), temp(_temp), version(_version) {}

  // err: -1 掉线 0：正常 1：过压 2：欠压 3：过流 4：MOS过温 5：电机线圈过热 6：通讯丢失 7：过载 8：缺相 9：电机短路
  // 10：电机堵转 11：复位故障
  double eff;
  double vel;
  double pos;
  double err;
  double temp;
  uint32_t version;  // firmware version
};

class TorqueGripperInterface : public hardware_interface::SystemInterface {
 public:
  RCLCPP_SHARED_PTR_DEFINITIONS(TorqueGripperInterface)

  CallbackReturn on_init(const hardware_interface::HardwareInfo& info) override;

  std::vector<hardware_interface::StateInterface> export_state_interfaces() override;

  std::vector<hardware_interface::CommandInterface> export_command_interfaces() override;

  hardware_interface::CallbackReturn on_activate(const rclcpp_lifecycle::State& previous_state) override;

  hardware_interface::CallbackReturn on_deactivate(const rclcpp_lifecycle::State& previous_state) override;

  hardware_interface::return_type read(const rclcpp::Time& time, const rclcpp::Duration& period) override;

  hardware_interface::return_type write(const rclcpp::Time& time, const rclcpp::Duration& period) override;

 private:
  enum class Command {
    ReadGripperMotorInfo = 0xA2,
    SetGripperMotorAbsPosTor = 0xA3,
    ClearGripperMotorFault = 0xA4,
    SetGripperMotorHomePosition = 0xA5,
    SetGripperMotorEstop = 0xA6,
    ReadBoardSN = 0xBC
  };

  bool SendSerialCommand(const Command& cmd);

  void DecodeSerialCommand(const x2robot_msgs::msg::SerialData::UniquePtr& data_ptr);

  void RequestAndSaveBoardSN();

  template <typename T>
  void AppendToPayload(std::vector<uint8_t>& payload, T value);

  bool check_hardware_timeout(const rclcpp::Time& time, const int timeout_sec);

  // ROS node and communication
  rclcpp::Node::SharedPtr node_;
  rclcpp::Subscription<x2robot_msgs::msg::SerialData>::SharedPtr serial_data_sub_;
  rclcpp::Publisher<x2robot_msgs::msg::SerialData>::SharedPtr serial_data_pub_;
  rclcpp::CallbackGroup::SharedPtr callback_group_;

  // Serial port settings
  std::string serial_port_name_;
  double gripper_cmd_vel_max_{0.0};
  int timeout_retries_{0};

  std::atomic_int8_t gripper_init_success_{0};
  std::atomic_bool hardware_connected_{false};
  std::atomic_bool sn_received_{false};
  std::string board_sn_;
  bool is_activated_{false};
  rclcpp::Time last_heartbeat_time_, last_set_homing_time_;

  std::vector<GripperMotorState> gripper_motor_states_;

  // Controller command interfaces (position/velocity/effort + extra MIT fields)
  double gripper_cmd_pos_{0.0};
  double gripper_cmd_vel_{0.0};
  double gripper_cmd_eff_{0.0};

  // These are required by `GripperImpedanceController` interface configuration.
  // For the torque gripper protocol implemented here, they are currently ignored.
  double gripper_cmd_mit_kp_{0.0};
  double gripper_cmd_mit_kd_{0.0};
  double gripper_cmd_ctrl_mode_{0.0};

  std::shared_ptr<rclcpp::executors::MultiThreadedExecutor> executor_;
  std::thread executor_thread_;
};

}  // namespace x2robot_hardware_interface

#endif

