#ifndef MOCK_ROBOT_HARDWARE_INTERFACE_H__
#define MOCK_ROBOT_HARDWARE_INTERFACE_H__

#include <memory>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>

#include "hardware_interface/system_interface.hpp"
#include "hardware_interface/types/hardware_interface_type_values.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_lifecycle/node_interfaces/lifecycle_node_interface.hpp"
#include "rclcpp_lifecycle/state.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include "std_msgs/msg/float64_multi_array.hpp"
#include "rclcpp/executor.hpp"
#include "rclcpp/executors/single_threaded_executor.hpp"

namespace x2robot_hardware_interface {

using CallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;

struct JointInterfaceData {
  // 必须的六个标准接口
  double position_command = 0.0;
  double velocity_command = 0.0;
  double effort_command = 0.0;
  double position_state = 0.0;
  double velocity_state = 0.0;
  double effort_state = 0.0;

  // 自定义接口存储
  std::unordered_map<std::string, double> custom_command_interfaces;
  std::unordered_map<std::string, double> custom_state_interfaces;
};

class MockRobotHardwareInterface : public hardware_interface::SystemInterface {
 public:
  RCLCPP_SHARED_PTR_DEFINITIONS(MockRobotHardwareInterface)

  MockRobotHardwareInterface();
  virtual ~MockRobotHardwareInterface() = default;

  // 硬件接口生命周期方法
  hardware_interface::CallbackReturn on_init(const hardware_interface::HardwareInfo& info) override;
  hardware_interface::CallbackReturn on_activate(const rclcpp_lifecycle::State& previous_state) override;
  hardware_interface::CallbackReturn on_deactivate(const rclcpp_lifecycle::State& previous_state) override;

  // 硬件接口必需的方法
  std::vector<hardware_interface::StateInterface> export_state_interfaces() override;
  std::vector<hardware_interface::CommandInterface> export_command_interfaces() override;
  hardware_interface::return_type read(const rclcpp::Time& time, const rclcpp::Duration& period) override;
  hardware_interface::return_type write(const rclcpp::Time& time, const rclcpp::Duration& period) override;

 private:
  // ROS2 通信
  rclcpp::Node::SharedPtr node_;
  rclcpp::Publisher<sensor_msgs::msg::JointState>::SharedPtr command_publisher_;
  sensor_msgs::msg::JointState command_msg_;
  rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr state_subscriber_;
  rclcpp::CallbackGroup::SharedPtr callback_group_;

  // 参数
  std::string command_topic_;
  std::string state_topic_;

  // 关节数据存储
  std::vector<JointInterfaceData> joints_data_;
  std::vector<std::string> joint_names_;
  size_t num_joints_;

  // 传感器数据存储
  std::vector<std::unordered_map<std::string, double>> sensor_data_;
  std::vector<std::string> sensor_names_;
  size_t num_sensors_;

  // 自定义接口配置跟踪
  std::unordered_map<std::string, std::vector<std::string>> joint_custom_command_interfaces_;
  std::unordered_map<std::string, std::vector<std::string>> joint_custom_state_interfaces_;

  // 状态订阅回调
  void state_callback(const sensor_msgs::msg::JointState::SharedPtr msg);

  // 辅助方法
  void initialize_custom_interfaces(const hardware_interface::ComponentInfo& joint_info);

  std::shared_ptr<rclcpp::executors::MultiThreadedExecutor> executor_;
  std::thread executor_thread_;

  bool is_activated_;
  bool is_sim_bridge_;
};

}  // namespace x2robot_hardware_interface

#endif
