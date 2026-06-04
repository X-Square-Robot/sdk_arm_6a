#ifndef ENDPOSE_BROADCASTER_H_
#define ENDPOSE_BROADCASTER_H_

#include <Eigen/Cholesky>
#include <Eigen/Core>
#include <algorithm>
#include <stdexcept>
#include <string>
#include <vector>

#include <controller_interface/controller_interface.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <geometry_msgs/msg/wrench_stamped.hpp>
#include <realtime_tools/realtime_publisher.hpp>
#include <std_msgs/msg/float64_multi_array.hpp>
#include <std_msgs/msg/string.hpp>

#include "pinocchio/algorithm/geometry.hpp"
#include "pinocchio/parsers/urdf.hpp"
#include "rclcpp_lifecycle/state.hpp"
#include "tf2_eigen/tf2_eigen.hpp"
#include "xr_controller_utils/generalized_momentum_observer.h"

namespace x2robot_controllers {

// Solve external wrench from external joint torques using damped least squares (DLS).
//
// Model:
//   tau_ext ≈ J^T * wrench_ext
//
// DLS solution:
//   wrench_ext = (J*J^T + lambda^2 I)^-1 * (J * tau_ext)
inline Eigen::Matrix<double, 6, 1> wrenchFromTauDls(const Eigen::Ref<const Eigen::MatrixXd>& J,
                                                    const Eigen::Ref<const Eigen::VectorXd>& tau_ext,
                                                    double damping_lambda)
{
    if (J.rows() != 6)
    {
        throw std::invalid_argument("wrenchFromTauDls: J must have 6 rows.");
    }
    if (J.cols() != tau_ext.size())
    {
        throw std::invalid_argument("wrenchFromTauDls: J.cols() must equal tau_ext.size().");
    }

    const double lambda = std::max(damping_lambda, 0.0);
    const Eigen::Matrix<double, 6, 6> I6 = Eigen::Matrix<double, 6, 6>::Identity();
    const Eigen::Matrix<double, 6, 6> A = (J * J.transpose()) + (lambda * lambda) * I6;
    const Eigen::Matrix<double, 6, 1> b = J * tau_ext;
    return A.ldlt().solve(b);
}

class EndposeBroadcaster : public controller_interface::ControllerInterface
{
   public:
    EndposeBroadcaster();

    controller_interface::InterfaceConfiguration command_interface_configuration() const override;

    controller_interface::InterfaceConfiguration state_interface_configuration() const override;

    controller_interface::return_type update(const rclcpp::Time& time, const rclcpp::Duration& period) override;

    controller_interface::CallbackReturn on_init() override;

    controller_interface::CallbackReturn on_configure(const rclcpp_lifecycle::State& previous_state) override;

    controller_interface::CallbackReturn on_activate(const rclcpp_lifecycle::State& previous_state) override;

    controller_interface::CallbackReturn on_deactivate(const rclcpp_lifecycle::State& previous_state) override;

   protected:
    const int POSITION_STATE_INDEX = 0, VELOCITY_STATE_INDEX = 1, EFFORT_STATE_INDEX = 2, JOINT_STATE_INDEX = 3;

    bool is_activated_;
    std::vector<std::string> joint_names_;
    std::string topic_prefix_, pub_pose_frame_id_, ee_frame_id_, base_frame_id_;

    // Neutral configuration transforms (zero position)
    pinocchio::SE3 neutral_ee_transform_;
    bool relative_to_neutral_;

    // For the robot FK model,
    std::shared_ptr<realtime_tools::RealtimePublisher<geometry_msgs::msg::PoseStamped>> endpose_publisher_;

    std::unique_ptr<pinocchio::Model> robot_model_;
    std::unique_ptr<pinocchio::Data> model_data_;
    Eigen::VectorXd current_joint_pose_;
    Eigen::VectorXd current_joint_torque_;
    Eigen::VectorXd current_joint_velocity_;

    pinocchio::FrameIndex ee_frame_index_;
    pinocchio::FrameIndex base_frame_index_;

    // Generalized Momentum Observer
    std::unique_ptr<GeneralizedMomentumObserver> generalized_momentum_observer_;
    double generalized_momentum_observer_k_gain_;
    double generalized_momentum_observer_dt_;

    // Publisher for external torques
    std::shared_ptr<realtime_tools::RealtimePublisher<geometry_msgs::msg::WrenchStamped>> wrench_ext_local_publisher_;
    std::shared_ptr<realtime_tools::RealtimePublisher<geometry_msgs::msg::WrenchStamped>> wrench_ext_world_publisher_;
    std::shared_ptr<realtime_tools::RealtimePublisher<std_msgs::msg::Float64MultiArray>> tau_ext_publisher_;

    // Damped least squares (DLS) for wrench estimation from joint torques:
    //   tau_ext ~= J^T * wrench_ext
    //   wrench_ext = (J*J^T + lambda^2 I)^-1 * (J * tau_ext)
    double wrench_dls_damping_;
};

}  // namespace x2robot_controllers

#endif  // ENDPOSE_BROADCASTER_H_
