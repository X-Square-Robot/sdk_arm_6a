#ifndef MECANUM_BASE_SYSTEM_INTERFACE_H__
#define MECANUM_BASE_SYSTEM_INTERFACE_H__

#include <atomic>
#include <condition_variable>
#include <hardware_interface/handle.hpp>
#include <hardware_interface/hardware_info.hpp>
#include <hardware_interface/system_interface.hpp>
#include <hardware_interface/types/hardware_interface_return_values.hpp>
#include <hardware_interface/types/hardware_interface_type_values.hpp>
#include <memory>
#include <mutex>
#include <rclcpp/node.hpp>
#include <rclcpp/publisher.hpp>
#include <rclcpp/subscription.hpp>
#include <string>
#include <x2robot_msgs/msg/serial_data.hpp>
#include <x2robot_msgs/srv/homing_request.hpp>

namespace x2robot_hardware_interface {
#pragma pack(push, 1)

union MecanumChassisControlData {
  struct Data {
    int16_t left_front_wheel_rpm;
    int16_t right_front_wheel_rpm;
    int16_t left_rear_wheel_rpm;
    int16_t right_rear_wheel_rpm;
  } data;
  uint8_t raw[8];
};

union OrthoEncoderData {
  struct Data {
    uint16_t x_encoder_value;
    uint16_t y_encoder_value;
    int16_t x_rotate_counter;
    int16_t y_rotate_counter;
  } data;
  uint8_t raw[8];
};

struct ImuAngle {
  int16_t roll;
  int16_t pitch;
  int16_t yaw;
};

struct ImuAcc {
  int16_t x;
  int16_t y;
  int16_t z;
};

struct ImuGyro {
  int16_t x;
  int16_t y;
  int16_t z;
};

struct ImuMag {
  int16_t x;
  int16_t y;
  int16_t z;
};

union ImuData {
  struct Data {
    struct ImuAngle angle;
    struct ImuAcc acc;
    struct ImuGyro gyro;
    struct ImuMag mag;
    uint64_t timestamp;
  } data;
  uint8_t raw[32];
};

union LiftMotorStatus {
  struct Data {
    int actual_position;
    // status, 0x01:moving 0x02:done 0x03:timeout
    uint8_t action_status;
    uint8_t reserved[3];
  } data;
  uint8_t raw[8];
};

#pragma pack(pop)

using CallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;

// for mecanum 4-wheel mobile base, we have 4 continuous joints and 1 prismatic lift joint
// 9 axis imu
class MecanumBaseSystemInterface : public hardware_interface::SystemInterface {
 public:
  using MoveState = enum X2robotMoveState { Moving = 0x01, MoveComplete = 0x02, MoveTimeout = 0x03 };

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
  rclcpp::Service<x2robot_msgs::srv::HomingRequest>::SharedPtr homing_req_server_;
  rclcpp::Node::SharedPtr node_;
  std::string serial_port_name_;
  double expected_update_period_;
  double read_update_duration_;
  double write_update_duration_;
  MoveState lift_move_state_;

  bool lift_overide_control_;
  std::mutex promise_mutex_;
  std::unordered_map<int, std::unique_ptr<std::promise<void>>> update_promise_;
  void SendSerialCommand(int cmd_id);
  void DecodeSerialCommand(const std::unique_ptr<x2robot_msgs::msg::SerialData>& data_ptr);
  bool WaitAck(int cmd_id);
  bool is_activated_;

  void parseIMUData(const std::unique_ptr<x2robot_msgs::msg::SerialData>& data_ptr);
  void parseLiftStatus(const std::unique_ptr<x2robot_msgs::msg::SerialData>& data_ptr);
  void parseOrthoEncoderData(const std::unique_ptr<x2robot_msgs::msg::SerialData>& data_ptr);
  using Quaternion = struct {
    double w, x, y, z;
  };

  // only for "sxyz" euler angle
  static Quaternion EulerAngleToQuat(double ai, double aj, double ak) {
    Quaternion quaternion;
    ai /= 2.0;
    aj /= 2.0;
    ak /= 2.0;
    const double ci = cos(ai), si = sin(ai), cj = cos(aj), sj = sin(aj), ck = cos(ak), sk = sin(ak), cc = ci * ck,
                 cs = ci * sk, sc = si * ck, ss = si * sk;
    quaternion.x = cj * sc - sj * cs;
    quaternion.y = cj * ss + sj * cc;
    quaternion.z = cj * cs - sj * sc;
    quaternion.w = cj * cc + sj * ss;
    return quaternion;
  }

  std::vector<double> joint_commands_;
  std::vector<double> joint_states_;
  std::vector<double> sensor_states_;
  double fake_state_ = 0;
  const int SENSOR_SEPARATOR = 2;
  const int MOTOR_SEPARATOR = 1;
  // first 2 double is for ortho-encoder, 9 axis imu 10 double
  // angle_quat_w, angle_quat_x, angle_quat_y, angle_quat_z, acc_x, acc_y, acc_z, gyro_x, gyro_y, gyro_x)
};

}  // namespace x2robot_hardware_interface

#endif  // MECANUM_BASE_SYSTEM_INTERFACE_H
