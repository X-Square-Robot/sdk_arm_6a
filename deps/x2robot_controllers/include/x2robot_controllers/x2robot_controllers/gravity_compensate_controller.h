#ifndef GRAVITY_COMPENSATE_CONTROLLER_H
#define GRAVITY_COMPENSATE_CONTROLLER_H

#include <Eigen/Dense>
#include <atomic>
#include <memory>
#include <mutex>
#include <string>
#include <unordered_map>
#include <vector>

#include <controller_interface/controller_interface.hpp>
#include <std_msgs/msg/bool.hpp>
#include <std_msgs/msg/float64_multi_array.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_srvs/srv/set_bool.hpp>

#include "pinocchio/algorithm/geometry.hpp"
#include "pinocchio/parsers/urdf.hpp"
#include "rclcpp_lifecycle/state.hpp"
#include "xr_controller_utils/joint_limit_protection.h"

namespace x2robot_controllers {

class GravityCompensateController : public controller_interface::ControllerInterface
{
   public:
    GravityCompensateController();

    ~GravityCompensateController() = default;

    controller_interface::InterfaceConfiguration command_interface_configuration() const override;

    controller_interface::InterfaceConfiguration state_interface_configuration() const override;

    controller_interface::CallbackReturn on_init() override;

    controller_interface::CallbackReturn on_configure(const rclcpp_lifecycle::State& previous_state) override;

    controller_interface::CallbackReturn on_activate(const rclcpp_lifecycle::State& previous_state) override;

    controller_interface::CallbackReturn on_deactivate(const rclcpp_lifecycle::State& previous_state) override;

    controller_interface::return_type update(const rclcpp::Time& time, const rclcpp::Duration& period) override;

   protected:
    const int POSITION_STATE_INDEX = 0, VELOCITY_STATE_INDEX = 1, TORQUE_STATE_INDEX = 2, JOINT_STATE_INDEX = 3;
    const int TORQUE_CMD_INDEX = 0, CTRL_MODE_INDEX = 1, JOINT_CMD_INDEX = 2;
    std::vector<std::string> joint_names_;
    std::shared_ptr<rclcpp::Subscription<std_msgs::msg::Float64MultiArray>> slave_torque_error_subscription_;
    std::shared_ptr<rclcpp::Publisher<std_msgs::msg::Float64MultiArray>> torque_publisher_;
    std::shared_ptr<rclcpp::Publisher<std_msgs::msg::Bool>> force_feedback_status_publisher_;
    rclcpp::Service<std_srvs::srv::SetBool>::SharedPtr force_feedback_service_;

    pinocchio::Model robot_model_;
    pinocchio::Data robot_data_;

    std::vector<double> slave_torque_error_;
    // 使用 mutex 保护 slave_torque_error_（订阅回调线程、服务回调线程和实时控制线程）
    mutable std::mutex slave_torque_error_mutex_;

    // 使用 atomic 保证线程安全（服务回调线程和实时控制线程）
    std::atomic<bool> enable_joint_torque_feedback_;
    std::vector<double> joint_torque_feedback_gain_;
    std::vector<double> joint_torque_feedback_damping_;
    std::vector<double> torque_error_threshold_;

    // 摩擦力补偿参数: tau_friction = a_1 * tanh(a_2 * q_dot) + a_3 * q_dot + a_4
    std::vector<double> a_1_;
    std::vector<double> a_2_;
    std::vector<double> a_3_;
    std::vector<double> a_4_;

    // 关节限位保护
    std::unique_ptr<JointLimitProtection> joint_limit_protection_;

    // 使用 atomic 保证线程安全（生命周期管理线程和实时控制线程）
    std::atomic<bool> is_activated_;

   private:
    Eigen::VectorXd compute_gravity_compensation_torque(const Eigen::VectorXd& q, const Eigen::VectorXd& dq);
    Eigen::VectorXd compute_joint_torque_feedback_torque(const Eigen::VectorXd& dq);
    Eigen::VectorXd compute_friction_compensation_torque(const Eigen::VectorXd& dq);

    // 力反馈服务回调
    void handle_force_feedback_service(const std::shared_ptr<std_srvs::srv::SetBool::Request> request,
                                       std::shared_ptr<std_srvs::srv::SetBool::Response> response);

    std::string cmd_interface_prefix_;
};

}  // namespace x2robot_controllers

#endif  // GRAVITY_COMPENSATE_CONTROLLER_H
