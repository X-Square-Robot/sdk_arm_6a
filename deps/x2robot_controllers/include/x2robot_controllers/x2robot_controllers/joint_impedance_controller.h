#ifndef JOINT_IMPEDANCE_CONTROL_H
#define JOINT_IMPEDANCE_CONTROL_H

#include <atomic>
#include <eigen3/Eigen/Core>
#include <memory>
#include <string>
#include <unordered_map>
#include <vector>

#include <controller_interface/controller_interface.hpp>
#include <sensor_msgs/msg/joint_state.hpp>
#include <std_msgs/msg/float64_multi_array.hpp>
#include <std_msgs/msg/string.hpp>

#include "pinocchio/algorithm/geometry.hpp"
#include "pinocchio/parsers/urdf.hpp"
#include "rclcpp_lifecycle/state.hpp"
#include "utils/input_shaper.h"
#include "utils/mean_filter.h"

namespace x2robot_controllers {

class JointImpedanceController : public controller_interface::ControllerInterface
{
   public:
    JointImpedanceController();

    ~JointImpedanceController() = default;

    controller_interface::InterfaceConfiguration command_interface_configuration() const override;

    controller_interface::InterfaceConfiguration state_interface_configuration() const override;

    controller_interface::CallbackReturn on_init() override;

    controller_interface::CallbackReturn on_configure(const rclcpp_lifecycle::State& previous_state) override;

    controller_interface::CallbackReturn on_activate(const rclcpp_lifecycle::State& previous_state) override;

    controller_interface::CallbackReturn on_deactivate(const rclcpp_lifecycle::State& previous_state) override;

    controller_interface::return_type update(const rclcpp::Time& time, const rclcpp::Duration& period) override;

   protected:
    const int POSITION_STATE_INDEX = 0, VELOCITY_STATE_INDEX = 1, TORQUE_STATE_INDEX = 2, JOINT_STATE_INDEX = 3;
    const int MASTER_POS_STATE_INDEX = 0, MASTER_VEL_STATE_INDEX = 1, MASTER_JOINT_STATE_INDEX = 2;
    const int POSITION_CMD_INDEX = 0, VELOCITY_CMD_INDEX = 1, TORQUE_CMD_INDEX = 2, KP_CMD_INDEX = 3, KD_CMD_INDEX = 4,
              CTRL_MODE_INDEX = 5, JOINT_CMD_INDEX = 6;

    std::vector<std::string> joint_names_, master_joint_names_;
    std::shared_ptr<rclcpp::Subscription<std_msgs::msg::Float64MultiArray>> joint_command_subscription_;
    std::shared_ptr<rclcpp::Publisher<std_msgs::msg::Float64MultiArray>> torque_error_publisher_;
    std::shared_ptr<MultiDimMeanFilter> joint_position_mean_filter_;
    std::shared_ptr<MultiDimMeanFilter> joint_velocity_mean_filter_;
    std::vector<std::shared_ptr<InputShaper>> joint_position_input_shaper_sptr_;
    std::unique_ptr<pinocchio::Model> robot_model_;
    std::unique_ptr<pinocchio::Data> robot_data_;
    bool mit_mode_;

    std::vector<double> joint_damping_;
    std::vector<double> joint_stiffness_;
    Eigen::MatrixXd joint_damping_matrix_;
    Eigen::MatrixXd joint_stiffness_matrix_;
    Eigen::VectorXd joint_value_desired_;
    Eigen::VectorXd joint_vel_desired_;
    bool is_activated_;

    void joint_command_callback(const std_msgs::msg::Float64MultiArray::SharedPtr msg);
};

}  // namespace x2robot_controllers

#endif  // JOINT_IMPEDANCE_CONTROL_H
