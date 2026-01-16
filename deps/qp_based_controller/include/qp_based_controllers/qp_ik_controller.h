#ifndef QP_IK_CONTROLLER_H
#define QP_IK_CONTROLLER_H

#include <memory>
#include <optional>
#include <string>
#include <vector>

#include <Eigen/src/Geometry/Transform.h>
#include <controller_interface/controller_interface.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <pinocchio/spatial/fwd.hpp>
#include <realtime_tools/realtime_publisher.hpp>
#include <robot_qp_solver/barriers/self_collision_barrier.h>
#include <robot_qp_solver/configuration.h>
#include <robot_qp_solver/limits/configuration_limit.h>
#include <robot_qp_solver/limits/velocity_limit.h>
#include <robot_qp_solver/solver.h>
#include <robot_qp_solver/tasks/damping_task.h>
#include <robot_qp_solver/tasks/frame_task.h>
#include <robot_qp_solver/tasks/posture_task.h>
#include <sensor_msgs/msg/joint_state.hpp>
#include <std_msgs/msg/float64_multi_array.hpp>
#include <std_msgs/msg/string.hpp>

#include "pinocchio/algorithm/geometry.hpp"
#include "pinocchio/parsers/urdf.hpp"
#include "rclcpp_lifecycle/state.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include "xr_controller_utils/input_shaper.h"

namespace x2robot_controllers {

class QPIKController : public controller_interface::ControllerInterface
{
   public:
    QPIKController();

    ~QPIKController() = default;

    controller_interface::InterfaceConfiguration command_interface_configuration() const override;

    controller_interface::InterfaceConfiguration state_interface_configuration() const override;

    controller_interface::CallbackReturn on_init() override;

    controller_interface::CallbackReturn on_configure(const rclcpp_lifecycle::State& previous_state) override;

    controller_interface::CallbackReturn on_activate(const rclcpp_lifecycle::State& previous_state) override;

    controller_interface::CallbackReturn on_deactivate(const rclcpp_lifecycle::State& previous_state) override;

    controller_interface::return_type update(const rclcpp::Time& time, const rclcpp::Duration& period) override;

    pinocchio::SE3 calculate_absolute_target_pose(const Eigen::Isometry3d& delta_target_pose,
                                                  const Eigen::Vector3d& source_position);

   protected:
    const int POSITION_STATE_INDEX = 0, VELOCITY_STATE_INDEX = 1, TORQUE_STATE_INDEX = 2, JOINT_STATE_INDEX = 3;
    const int POSITION_CMD_INDEX = 0, VELOCITY_CMD_INDEX = 1, TORQUE_CMD_INDEX = 2, KP_CMD_INDEX = 3, KD_CMD_INDEX = 4,
              CTRL_MODE_INDEX = 5, JOINT_CMD_INDEX = 6;

    // controller parameter
    size_t robot_dof_;
    std::vector<std::string> joint_names_;
    std::vector<double> joint_damping_;
    std::vector<double> joint_stiffness_;

    double dt_;
    std::string pub_pose_frame_name_, arm_ee_frame_name_;

    realtime_tools::RealtimePublisherSharedPtr<std_msgs::msg::Float64MultiArray> debug_cmd_output_;
    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr arm_ee_pos_target_sub_;
    rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_state_sub_;

    pinocchio::Model robot_model_;
    pinocchio::Data robot_data_;

    bool is_activated_;

    std::mutex target_mutex_;
    std::optional<pinocchio::SE3> arm_target_pose_;
    pinocchio::SE3 O_T_E_;

    std::shared_ptr<robot_qp_solver::Configuration> configuration_sptr_;
    std::vector<std::shared_ptr<robot_qp_solver::tasks::Task>> tasks_sptr_;
    std::vector<std::shared_ptr<robot_qp_solver::limits::Limit>> limits_sptr_;

    std::shared_ptr<robot_qp_solver::tasks::FrameTask> arm_frame_task_;

    Eigen::Vector3d position_cost_;              // Position cost weights
    Eigen::Vector3d orientation_cost_;           // Orientation cost weights
    double damping_;                             // Damping factor
    double lm_damping_;                          // frame task damping factor
    double posture_cost_;                        // [cost] / [rad]
    double kinetic_energy_regularization_cost_;  // [cost] * [s^2] / [kg*m^2]
    double config_limit_gain_;                   // configuration limit gain
    double joint_limit_scale_;                   // joint limit scale

    // InputShaper related
    bool enable_input_shaper_;
    std::vector<std::shared_ptr<InputShaper>> joint_position_input_shaper_sptr_;
};

}  // namespace x2robot_controllers

#endif  // QP_IK_CONTROLLER_H
