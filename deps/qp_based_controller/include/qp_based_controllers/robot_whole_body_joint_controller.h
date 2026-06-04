#ifndef ROBOT_WHOLE_BODY_JOINT_CONTROLLER_H
#define ROBOT_WHOLE_BODY_JOINT_CONTROLLER_H

// STL
#include <memory>
#include <optional>
#include <string>
#include <vector>

// Eigen
#include <Eigen/Geometry>

// ROS 2
#include <controller_interface/controller_interface.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <rclcpp_lifecycle/state.hpp>
#include <realtime_tools/realtime_publisher.hpp>
#include <sensor_msgs/msg/joint_state.hpp>
#include <std_msgs/msg/string.hpp>

// Pinocchio
#include <pinocchio/spatial/fwd.hpp>

// robot_qp_solver
#include <robot_qp_solver/barriers/self_collision_barrier.h>
#include <robot_qp_solver/configuration.h>
#include <robot_qp_solver/limits/configuration_limit.h>
#include <robot_qp_solver/limits/velocity_limit.h>
#include <robot_qp_solver/solver.h>
#include <robot_qp_solver/tasks/damping_task.h>
#include <robot_qp_solver/tasks/frame_task.h>
#include <robot_qp_solver/tasks/posture_task.h>

// utilities
#include "xr_controller_utils/input_shaper.h"
#include "xr_controller_utils/se3_low_pass_filter.h"

namespace x2robot_controllers {

class RobotWholeBodyJointController : public controller_interface::ControllerInterface
{
   public:
    RobotWholeBodyJointController();

    ~RobotWholeBodyJointController() = default;

    controller_interface::InterfaceConfiguration command_interface_configuration() const override;

    controller_interface::InterfaceConfiguration state_interface_configuration() const override;

    controller_interface::CallbackReturn on_init() override;

    controller_interface::CallbackReturn on_configure(const rclcpp_lifecycle::State& previous_state) override;

    controller_interface::CallbackReturn on_activate(const rclcpp_lifecycle::State& previous_state) override;

    controller_interface::CallbackReturn on_deactivate(const rclcpp_lifecycle::State& previous_state) override;

    controller_interface::return_type update(const rclcpp::Time& time, const rclcpp::Duration& period) override;

   protected:
    // ================================================
    // Interface indices
    // ================================================
    const int POSITION_STATE_INDEX = 0, VELOCITY_STATE_INDEX = 1, TORQUE_STATE_INDEX = 2, JOINT_STATE_INDEX = 3;
    const int POSITION_CMD_INDEX = 0, VELOCITY_CMD_INDEX = 1, TORQUE_CMD_INDEX = 2, JOINT_CMD_INDEX = 3,
              KP_CMD_INDEX = 0, KD_CMD_INDEX = 1, CTRL_MODE_INDEX = 2;

    // ================================================
    // Basic controller parameters
    // ================================================
    // Robot configuration
    std::string cmd_interface_prefix_;
    size_t robot_dof_;
    std::vector<std::string> waist_joint_names_;
    std::vector<std::string> arm_joint_names_;
    std::vector<double> joint_damping_;
    std::vector<double> joint_stiffness_;
    double dt_;

    // Robot model and data
    std::string robot_urdf_;
    pinocchio::Model robot_model_;
    pinocchio::Data robot_data_;
    std::shared_ptr<pinocchio::GeometryModel> geom_model_sptr_;
    std::shared_ptr<pinocchio::GeometryData> geom_data_sptr_;
    Eigen::VectorXd robot_joint_position_;

    // Control state
    bool is_debug_;
    bool is_activated_;

    // ================================================
    // ROS 2 Publishers and Subscribers
    // ================================================
    std::shared_ptr<realtime_tools::RealtimePublisher<sensor_msgs::msg::JointState>> debug_cmd_output_;
    sensor_msgs::msg::JointState debug_cmd_msg_;

    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr robot_description_subscription_;

    // ================================================
    // Homing configuration
    // ================================================
    Eigen::VectorXd homing_target_positions_;              // 最终回零位置
    std::optional<Eigen::VectorXd> target_joint_posture_;  // 当前目标位置（可能是过渡点或回零位置）

    // 过渡点相关
    bool use_transition_point_;              // 是否使用过渡点
    Eigen::VectorXd transition_positions_;   // 过渡点位置
    Eigen::VectorXd transition_thresholds_;  // 过渡判断阈值
    bool is_at_transition_;                  // 当前是否在前往过渡点
    bool reached_transition_;                // 是否已到达过渡点

    // ================================================
    // QP solver related
    // ================================================
    std::shared_ptr<robot_qp_solver::Configuration> configuration_sptr_;
    std::vector<std::shared_ptr<robot_qp_solver::tasks::Task>> tasks_sptr_;
    std::vector<std::shared_ptr<robot_qp_solver::limits::Limit>> limits_sptr_;
    std::vector<std::shared_ptr<robot_qp_solver::barriers::Barrier>> barriers_sptr_;

    std::shared_ptr<robot_qp_solver::tasks::PostureTask> posture_task_;

    // ================================================
    // QP solver cost parameters
    // ================================================
    double damping_cost_;
    double posture_cost_;
    double kinetic_energy_regularization_cost_;
    double config_limit_gain_;
    double velocity_limit_scale_factor_;

    // SRDF parameters (kept for potential future use)
    bool is_use_srdf_;
    std::string srdf_path_;
    std::string mesh_path_;
    double collision_gain_;
    double safe_displacement_gain_;
    double d_min_;

    // ================================================
    // InputShaper related
    // ================================================
    bool enable_input_shaper_;
    std::vector<std::shared_ptr<InputShaper>> joint_position_input_shaper_sptr_;

    // ================================================
    // Waist Joint Low Pass Filter related
    // ================================================
    double waist_filter_alpha_;
    std::unique_ptr<VectorLowPassFilter> waist_joint_filter_;

    // ================================================
    // Helper functions
    // ================================================
    // 注意：此控制器用于回零，不需要回调函数
    // 回零目标在配置时设定
};

}  // namespace x2robot_controllers

#endif  // ROBOT_WHOLE_BODY_JOINT_CONTROLLER_H
