#ifndef ENDPOSE_BROADCASTER_H_
#define ENDPOSE_BROADCASTER_H_

#include <string>
#include <vector>

#include <controller_interface/controller_interface.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <realtime_tools/realtime_publisher.hpp>
#include <std_msgs/msg/string.hpp>

#include "pinocchio/algorithm/geometry.hpp"
#include "pinocchio/parsers/urdf.hpp"
#include "rclcpp_lifecycle/state.hpp"
#include "tf2_eigen/tf2_eigen.hpp"

namespace x2robot_controllers {

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
    bool is_activated_;
    std::vector<std::string> joint_names_;
    std::vector<double> base_frame_offset_;
    std::string topic_prefix_, pub_pose_frame_id_, ee_frame_id_, base_frame_id_;

    // For the robot FK model,
    std::shared_ptr<realtime_tools::RealtimePublisher<geometry_msgs::msg::PoseStamped>> endpose_publisher_;

    std::unique_ptr<pinocchio::Model> robot_model_;
    std::unique_ptr<pinocchio::Data> model_data_;
    Eigen::VectorXd current_joint_pose_;
};

}  // namespace x2robot_controllers

#endif  // ENDPOSE_BROADCASTER_H_
