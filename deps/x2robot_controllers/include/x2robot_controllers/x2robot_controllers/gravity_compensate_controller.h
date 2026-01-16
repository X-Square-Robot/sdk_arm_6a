#ifndef GRAVITY_COMPENSATE_CONTROLLER_H
#define GRAVITY_COMPENSATE_CONTROLLER_H

#include <atomic>
#include <memory>
#include <string>
#include <unordered_map>
#include <vector>

#include <controller_interface/controller_interface.hpp>
#include <std_msgs/msg/float64_multi_array.hpp>
#include <std_msgs/msg/string.hpp>

#include "pinocchio/algorithm/geometry.hpp"
#include "pinocchio/parsers/urdf.hpp"
#include "rclcpp_lifecycle/state.hpp"
#include "utils/joint_limit_protection.h"

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
    std::shared_ptr<rclcpp::Publisher<std_msgs::msg::Float64MultiArray>> torque_publisher_;
    pinocchio::Model robot_model_;
    pinocchio::Data robot_data_;

    double sine_amplitude_;
    double sine_frequency_;

    // 摩擦模型参数: tau_friction = a_1 * tanh(a_2 * q_dot) + a_3 * q_dot + a_4
    std::vector<double> a_1_;
    std::vector<double> a_2_;
    std::vector<double> a_3_;
    std::vector<double> a_4_;

    // 关节限位保护
    std::unique_ptr<JointLimitProtection> joint_limit_protection_;

    bool is_activated_;
};

}  // namespace x2robot_controllers

#endif  // GRAVITY_COMPENSATE_CONTROLLER_H
