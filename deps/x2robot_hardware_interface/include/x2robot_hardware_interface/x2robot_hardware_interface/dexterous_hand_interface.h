#ifndef DEXTEROUS_HAND_INTERFACE_H__
#define DEXTEROUS_HAND_INTERFACE_H__

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

namespace x2robot_hardware_interface {

using CallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;

class DexterousHandInterface : public hardware_interface::SystemInterface {
 public:
  RCLCPP_SHARED_PTR_DEFINITIONS(DexterousHandInterface)
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
    SetDate = 0xC0,
    // to read tactile sensors, joint encoders, and motor status
    ReadTactileSensors = 0xC1,
    ReadJointEncoders = 0xC2,
    ReadMotorEncoders = 0xC3,
    ReadMotorCurrents = 0xC4,
    ReadMotorInfos = 0xC5,
    // to set motors param
    SetMotorMaxCurrent = 0xC6,
    SetMotorAcceleration = 0xC7,
    SetMotorMaxVelocity = 0xC8,
    // to control motors position
    SetMotorAbsolutePos = 0xC9,
    SetMotorIncrementalPos = 0xCA,
    // to calibrate and clean error for motors
    SetMotorHomeZero = 0xCB,
    ClearMotorFaults = 0xCC,
    SetMotorControllMode = 0xCD,
    SetHandMotorHomePosition = 0xCE
  };

  // Motor state structure
  typedef enum {
    MOTOR_NORMAL = 0,
    MOTOR_OVER_CURRENT = 1,
    MOTOR_STALL = 2,
    MOTOR_PHASE_LOSS = 3,
    MOTOR_OVER_TEMP = 4,
    MOTOR_ENCODER_COMM_FAIL = 5
  } MotorFaultType;

  // Main control state structure
  typedef enum {
    MAIN_NORMAL = 0,
    MAIN_UNDER_VOLTAGE = 1,
    MAIN_OVER_VOLTAGE = 2,
    MAIN_COMM_FAILURE = 3,
    MAIN_FINGER_RESET_ABNORMAL = 4
  } MainControlFaultType;

  // Structure for motor information
  typedef struct {
    float bus_voltage;   // 母线电压（转换为浮点数）
    uint8_t ready_flag;  // bit0：0 关节没有复位 1 关节已经复位 Bit1：0 主控不Ready 1 主控Ready
    bool joint_reset_completed[16];      // 每关节复位状态（bit分解）
    MainControlFaultType main_err_code;  // 主控故障代码
  } MotorInfo;

  rclcpp::Subscription<x2robot_msgs::msg::SerialData>::SharedPtr serial_data_sub_;
  rclcpp::Publisher<x2robot_msgs::msg::SerialData>::SharedPtr serial_data_pub_;
  rclcpp::Node::SharedPtr node_;
  std::string serial_port_name_, pos_state_mode_, sensor_type_;
  uint16_t max_vel_, acc_;
  float max_cur_;

  std::unordered_map<int, std::unique_ptr<std::promise<void>>> update_promise_;

  void send_serial_command(int cmd_id);
  void decode_serial_command(const x2robot_msgs::msg::SerialData::UniquePtr& data_ptr);
  /**
   * @brief append value of template type into payload vector
   * @param  payload          payload vector
   * @param  value            value of template type
   */
  template <typename T>
  void apend_to_payload(std::vector<uint8_t>& payload, T value);

  bool check_motor_error();

  std::atomic_bool is_activated_{false};          // whether the interface is activated
  std::atomic_bool serial_conn_is_ready_{false};  // whether the serial bridge is
  std::atomic_bool need_rehoming_{false};

  std::vector<double> hand_joint_pos_cmd_;  // position commands for each finger joint

  std::vector<double> hand_joint_pos_, hand_joint_vel_, hand_joint_eff_,
      hand_encoder_err_;  // states for joint position, velocity, efforts, and even joint encoder error code

  std::vector<struct TactileSensorState> sensor_states_;  // states for Tashan tactile sensor

  MotorInfo motor_info_;  // information of motors
  std::shared_mutex motor_info_mutex_;

  double main_err_code_;                 // 主控故障
  std::vector<double> motor_err_codes_;  // 电机故障

  std::shared_ptr<rclcpp::executors::MultiThreadedExecutor> executor_;
  std::thread executor_thread_;
  rclcpp::CallbackGroup::SharedPtr callback_group_;
};

}  // namespace x2robot_hardware_interface

#endif
