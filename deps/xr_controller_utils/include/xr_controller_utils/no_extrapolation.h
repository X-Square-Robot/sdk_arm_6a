// no_extrapolation.h
#pragma once
#include <optional>

#include "xr_controller_utils/pose_extrapolator.h"

namespace x2robot_controllers {

class NoExtrapolation : public PoseExtrapolator {
   public:
    void reset() override { latest_.reset(); }

    void push(const pinocchio::SE3& delta, const rclcpp::Time& /*stamp*/) override {
        latest_ = delta;
    }

    bool hasData() const override { return latest_.has_value(); }

    std::optional<pinocchio::SE3> predict(const rclcpp::Time& /*t_now*/,
                                          PredictDebug* dbg = nullptr) const override {
        if (dbg) {
            *dbg = {};
            dbg->branch = latest_ ? PredictDebug::Branch::kZohOneSample
                                  : PredictDebug::Branch::kEmpty;
        }
        return latest_;
    }

   private:
    std::optional<pinocchio::SE3> latest_;
};

}  // namespace x2robot_controllers
