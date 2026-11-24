// pose_extrapolator.h
#pragma once
#include <optional>

#include <pinocchio/spatial/se3.hpp>
#include <rclcpp/time.hpp>

namespace x2robot_controllers {

struct PredictDebug {
    enum class Branch : uint8_t { kEmpty, kStale, kZohOneSample, kTwoSample, kBlended };
    Branch branch = Branch::kEmpty;
    bool reversal = false;        // reversal damping applied
    bool vmax_clamped = false;
    double age = 0.0;             // t_now - latest stamp (s)
    double tau = 0.0;             // horizon actually predicted over (s)
    double speed_raw = 0.0;       // |v| before clamp (m/s)
    Eigen::Vector3d v_a = Eigen::Vector3d::Zero();
    Eigen::Vector3d v_b = Eigen::Vector3d::Zero();
};

class PoseExtrapolator {
   public:
    virtual ~PoseExtrapolator() = default;

    // Clear all history (call on activate/deactivate and on jump detection).
    virtual void reset() = 0;

    // Feed one raw delta sample (call from the VR callback).
    virtual void push(const pinocchio::SE3& delta, const rclcpp::Time& stamp) = 0;

    // True once at least one sample has arrived.
    virtual bool hasData() const = 0;

    // Predict the delta at query_time.
    // Returns nullopt when there is no history or the latest sample is older
    // than the stale timeout.
    virtual std::optional<pinocchio::SE3> predict(const rclcpp::Time& query_time,
                                                  PredictDebug* dbg = nullptr) const = 0;
};

}  // namespace x2robot_controllers
