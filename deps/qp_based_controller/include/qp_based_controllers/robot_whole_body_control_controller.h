#ifndef ROBOT_WHOLE_BODY_CONTROL_CONTROLLER_H
#define ROBOT_WHOLE_BODY_CONTROL_CONTROLLER_H

// STL
#include <deque>
#include <memory>
#include <mutex>
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

class RobotWholeBodyControlController : public controller_interface::ControllerInterface
{
   public:
    RobotWholeBodyControlController();

    ~RobotWholeBodyControlController() = default;

    controller_interface::InterfaceConfiguration command_interface_configuration() const override;

    controller_interface::InterfaceConfiguration state_interface_configuration() const override;

    controller_interface::CallbackReturn on_init() override;

    controller_interface::CallbackReturn on_configure(const rclcpp_lifecycle::State& previous_state) override;

    controller_interface::CallbackReturn on_activate(const rclcpp_lifecycle::State& previous_state) override;

    controller_interface::CallbackReturn on_deactivate(const rclcpp_lifecycle::State& previous_state) override;

    controller_interface::return_type update(const rclcpp::Time& time, const rclcpp::Duration& period) override;

    pinocchio::SE3 calculate_absolute_target_pose(const pinocchio::SE3& delta_target_pose,
                                                  const pinocchio::SE3& source_pose);

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

    // Frame IDs
    std::string left_ee_frame_id_;
    std::string right_ee_frame_id_;
    std::string base_frame_id_;

    // VR command topics
    std::string left_vr_cmd_topic_;
    std::string right_vr_cmd_topic_;

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
    bool is_use_relative_pose_command_;

    // ================================================
    // ROS 2 Publishers and Subscribers
    // ================================================
    std::shared_ptr<realtime_tools::RealtimePublisher<sensor_msgs::msg::JointState>> debug_cmd_output_;
    sensor_msgs::msg::JointState debug_cmd_msg_;

    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr left_ee_pos_target_sub_;
    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr right_ee_pos_target_sub_;
    rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_state_sub_;
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr robot_description_subscription_;

    // ================================================
    // Target pose management
    // ================================================
    std::mutex target_mutex_;
    std::optional<pinocchio::SE3> left_detlta_target_pose_;
    std::optional<pinocchio::SE3> right_detlta_target_pose_;
    pinocchio::SE3 left_initial_pose_;
    pinocchio::SE3 right_initial_pose_;

    // ================================================
    // QP solver related
    // ================================================
    std::shared_ptr<robot_qp_solver::Configuration> configuration_sptr_;
    std::vector<std::shared_ptr<robot_qp_solver::tasks::Task>> tasks_sptr_;
    std::vector<std::shared_ptr<robot_qp_solver::limits::Limit>> limits_sptr_;
    std::vector<std::shared_ptr<robot_qp_solver::barriers::Barrier>> barriers_sptr_;

    std::shared_ptr<robot_qp_solver::tasks::FrameTask> right_arm_frame_task_;
    std::shared_ptr<robot_qp_solver::tasks::FrameTask> left_arm_frame_task_;

    // ================================================
    // QP solver cost parameters
    // ================================================
    Eigen::Vector3d position_cost_;
    Eigen::Vector3d orientation_cost_;
    double lm_damping_;
    double damping_cost_;
    double posture_cost_;
    double kinetic_energy_regularization_cost_;
    double config_limit_gain_;
    double joint_limit_scale_;
    double velocity_limit_scale_factor_;

    // Collision parameters
    double collision_gain_;
    double safe_displacement_gain_;
    double d_min_;

    // SRDF parameters
    bool is_use_srdf_;
    std::string srdf_path_;
    std::string mesh_path_;

    // ================================================
    // InputShaper related
    // ================================================
    bool enable_input_shaper_;
    std::vector<std::shared_ptr<InputShaper>> joint_position_input_shaper_sptr_;

    // ================================================
    // SE3 Low Pass Filter related
    // ================================================
    double se3_filter_alpha_;
    std::unique_ptr<SE3LowPassFilter> left_ee_pose_filter_;
    std::unique_ptr<SE3LowPassFilter> right_ee_pose_filter_;

    // ================================================
    // Waist Joint Low Pass Filter related
    // ================================================
    double waist_filter_alpha_;
    std::unique_ptr<VectorLowPassFilter> waist_joint_filter_;

    // ================================================
    // Jump detection related
    // ================================================
    std::deque<geometry_msgs::msg::PoseStamped> left_pose_history_;
    std::deque<geometry_msgs::msg::PoseStamped> right_pose_history_;
    double jump_time_threshold_;
    double jump_position_threshold_;
    double jump_rotation_threshold_;
    size_t jump_history_size_;
    double jump_recovery_rate_;
    double current_left_alpha_;
    double current_right_alpha_;

    // ================================================
    // Helper functions
    // ================================================
    bool detectJump(const std::deque<geometry_msgs::msg::PoseStamped>& pose_history,
                    const geometry_msgs::msg::PoseStamped& new_pose);
    void updateHistory(std::deque<geometry_msgs::msg::PoseStamped>& history,
                       const geometry_msgs::msg::PoseStamped& new_data);
    double smoothParameter(double current_value, double target_value, double recovery_rate);

    // VR callback functions
    void leftVRCallback(const geometry_msgs::msg::PoseStamped& detlta_target_pose);
    void rightVRCallback(const geometry_msgs::msg::PoseStamped& detlta_target_pose);
};

}  // namespace x2robot_controllers

#endif  // ROBOT_WHOLE_BODY_CONTROL_CONTROLLER_H
