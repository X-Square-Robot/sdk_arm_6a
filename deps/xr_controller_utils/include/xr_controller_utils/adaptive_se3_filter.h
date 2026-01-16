#ifndef ADAPTIVE_SE3_FILTER_H
#define ADAPTIVE_SE3_FILTER_H

#include <pinocchio/spatial/se3.hpp>
#include <pinocchio/spatial/explog.hpp>

/**
 * @brief 自适应SE3滤波器 (基于One-Euro Filter原理)
 * 
 * 用于在SE3流形上对位姿进行自适应低通滤波，能够：
 * - 在静止时抑制抖动（低截止频率）
 * - 在快速运动时减少延迟（高截止频率）
 * - 在SE3流形上进行几何正确的插值
 */
class AdaptiveSE3Filter {
public:
    /**
     * @brief 滤波器参数
     */
    struct Params {
        double min_cutoff;  ///< 最小截止频率 (Hz) -> 处理静止时的抖动，典型值: 0.5-2.0
        double beta;        ///< 速度系数 -> 处理快速运动时的延迟，典型值: 0.001-1.0
        double d_cutoff;    ///< 速度的截止频率 (Hz) -> 对速度本身进行平滑，典型值: 1.0-5.0

        /**
         * @brief 默认参数构造函数
         */
        Params(double min_cutoff_val = 1.0, double beta_val = 0.1, double d_cutoff_val = 1.0)
            : min_cutoff(min_cutoff_val), beta(beta_val), d_cutoff(d_cutoff_val) {}

        /**
         * @brief 验证参数有效性
         * @return true if parameters are valid
         */
        bool isValid() const {
            return min_cutoff > 0.0 && beta >= 0.0 && d_cutoff > 0.0;
        }
    };

    /**
     * @brief 构造函数
     * @param params 滤波器参数
     * @throws std::invalid_argument if parameters are invalid
     */
    explicit AdaptiveSE3Filter(const Params& params);

    /**
     * @brief 核心滤波函数
     * @param pose_raw_curr 当前输入的原始位姿 (T_input)
     * @param dt 时间间隔 (秒)，必须 > 0
     * @return 平滑后的位姿 (T_output)
     */
    pinocchio::SE3 update(const pinocchio::SE3& pose_raw_curr, double dt);

    /**
     * @brief 重置滤波器到指定位姿
     * @param init_pose 初始位姿
     */
    void reset(const pinocchio::SE3& init_pose);

    /**
     * @brief 重置滤波器到单位位姿
     */
    void reset();

    /**
     * @brief 获取当前滤波后的位姿
     * @return 当前滤波位姿
     */
    pinocchio::SE3 getFilteredPose() const { return pose_filt_; }

    /**
     * @brief 获取当前滤波后的速度
     * @return 当前6D速度 (线速度, 角速度)
     */
    pinocchio::Motion getFilteredVelocity() const { return dx_prev_; }

    /**
     * @brief 获取当前参数
     * @return 滤波器参数
     */
    Params getParams() const { return p_; }

    /**
     * @brief 设置新参数
     * @param params 新的滤波器参数
     * @throws std::invalid_argument if parameters are invalid
     */
    void setParams(const Params& params);

    /**
     * @brief 检查滤波器是否已初始化
     * @return true if filter has been initialized with at least one update
     */
    bool isInitialized() const { return !first_run_; }

private:
    Params p_;                          ///< 滤波器参数
    bool first_run_;                    ///< 是否首次运行
    
    pinocchio::SE3 pose_filt_;          ///< 上一次滤波后的输出
    pinocchio::SE3 pose_raw_prev_;      ///< 上一次的原始输入
    pinocchio::Motion dx_prev_;         ///< 滤波后的速度 (6D: 线速度+角速度)

    /**
     * @brief 计算低通滤波器的 alpha 系数
     * @param cutoff 截止频率 (Hz)
     * @param dt 时间间隔 (秒)
     * @return alpha 系数 [0, 1]
     */
    double computeAlpha(double cutoff, double dt) const;
};

#endif  // ADAPTIVE_SE3_FILTER_H
