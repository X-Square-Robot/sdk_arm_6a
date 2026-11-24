// linear_pose_extrapolator.h
#pragma once
#include <algorithm>
#include <deque>
#include <optional>

#include "xr_controller_utils/pose_extrapolator.h"

namespace x2robot_controllers {

struct LinearExtrapolatorConfig {
    double weight        = 0.6;   // w: weight on the most recent velocity section
    double vmax          = 1.2;   // m/s magnitude clamp (operator-habit tuning knob)
    double stale_timeout = 0.017;   // s: beyond this, predict() reports nullopt.
    double min_dt        = 4e-3;  // s: reject samples closer than this to the previous
                                  // one (burst guard).
    bool   reversal_detection = true;
};

class LinearVelocityExtrapolator : public PoseExtrapolator {
   public:
    explicit LinearVelocityExtrapolator(LinearExtrapolatorConfig cfg = {}) : cfg_(cfg) {}

    void reset() override { hist_.clear(); }

    void push(const pinocchio::SE3& delta, const rclcpp::Time& stamp) override {
        if (!hist_.empty()) {
            const double dt = (stamp - hist_.back().stamp).seconds();
            if (dt < cfg_.min_dt) { // Also swallows dt < 0 (backwards clock jump)
                // TODO: decide whether backwards jumps can occur in our setup
                // (sim reset, time source change). If they can, options: clear the history, or report an error.
                return;
            }
        }
        hist_.push_back({delta, stamp});  // Any two stored samples are >= min_dt apart,
        while (hist_.size() > kCap) hist_.pop_front();
    }

    bool hasData() const override { return !hist_.empty(); }

    std::optional<pinocchio::SE3> predict(const rclcpp::Time& t_now,
                                      PredictDebug* dbg = nullptr) const override {
        PredictDebug local;  // always fill this, copy out at the end
        using Branch = PredictDebug::Branch;

        // Single exit helper so no path can forget to copy out.
        const auto finish = [&](std::optional<pinocchio::SE3> result) {
            if (dbg) *dbg = local;
            return result;
        };

        if (hist_.empty()) {
            local.branch = Branch::kEmpty;
            return finish(std::nullopt);
        }
        const auto& P2 = hist_.back();
        local.age = (t_now - P2.stamp).seconds();

        // Stale input -> return error.
        if (local.age >= cfg_.stale_timeout) {
            local.branch = Branch::kStale;
            return finish(std::nullopt);
        }

        // One sample: no velocity estimate possible, zero-order hold.
        if (hist_.size() < 2) {
            local.branch = Branch::kZohOneSample;
            return finish(P2.pose);
        }

        // Two or more samples: estimate a translational velocity.
        const auto& P1 = *(hist_.end() - 2);
        Eigen::Vector3d v;
        if (hist_.size() >= 3) {
            // Three samples: blend recent section P1->P2 with older section P0->P1.
            const auto& P0 = *(hist_.end() - 3);
            const Eigen::Vector3d v_b = (P2.pose.translation() - P1.pose.translation()) /
                                        (P2.stamp - P1.stamp).seconds();
            const Eigen::Vector3d v_a = (P1.pose.translation() - P0.pose.translation()) /
                                        (P1.stamp - P0.stamp).seconds();
            const double w = cfg_.weight;
            local.branch = Branch::kBlended;
            local.v_a = v_a;
            local.v_b = v_b;
            local.reversal = cfg_.reversal_detection && v_a.dot(v_b) < 0.0;
            v = local.reversal ? Eigen::Vector3d(w * v_b)  // reversal: trust only the recent section
                               : Eigen::Vector3d(w * v_b + (1.0 - w) * v_a);
        } else {
            // Exactly two samples: single-section velocity, no blend.
            local.branch = Branch::kTwoSample;
            v = (P2.pose.translation() - P1.pose.translation()) /
                (P2.stamp - P1.stamp).seconds();
            local.v_b = v;
        }

        local.speed_raw = v.norm();
        if (cfg_.vmax > 0.0 && local.speed_raw > cfg_.vmax) {
            v *= (cfg_.vmax / local.speed_raw);
            local.vmax_clamped = true;
        }

        local.tau = std::max(0.0, local.age);
        return finish(pinocchio::SE3(P2.pose.rotation(),
                                 Eigen::Vector3d(P2.pose.translation() + v * local.tau)));
    }

   private:
    struct Sample {
        pinocchio::SE3 pose;
        rclcpp::Time stamp;
    };
    static constexpr size_t kCap = 3;  // Max amount of the stored samples
    LinearExtrapolatorConfig cfg_;
    std::deque<Sample> hist_;
};

}  // namespace x2robot_controllers
