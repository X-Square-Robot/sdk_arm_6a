#ifndef GENERALIZED_MOMENTUM_OBSERVER_H
#define GENERALIZED_MOMENTUM_OBSERVER_H

#include <Eigen/Dense>

#include <pinocchio/algorithm/crba.hpp>
#include <pinocchio/algorithm/rnea.hpp>
#include <pinocchio/multibody/data.hpp>
#include <pinocchio/multibody/model.hpp>

/**
 * @brief 基于广义动量 (GMO) 的观测器，用于估计外部力矩。
 *
 * 该实现基于 De Luca 等人的经典动量观测器，并使用梯形积分法
 * 以提高数值稳定性。
 *
 * 参考文献:
 * De Luca, A., Albu-Schaffer, A., Haddadin, S., & Hirzinger, G. (2006).
 * "Collision detection and safe reaction with the DLR-III lightweight manipulator arm."
 */
class GeneralizedMomentumObserver
{
   public:
    /**
     * @brief 构造函数，初始化观测器。
     *
     * @param model Pinocchio 模型
     * @param data Pinocchio 数据
     * @param dt 控制周期的时间步长 (秒)
     * @param k_gain 观测器增益 (标量)。默认为30。
     */
    GeneralizedMomentumObserver(const pinocchio::Model& model,
                                pinocchio::Data& data,
                                double dt = 0.002,
                                double k_gain = 30.0);

    /**
     * @brief 在每个控制周期调用此函数，以更新估计值。
     *
     * @param q 当前的关节位置向量
     * @param v 当前的关节速度向量
     * @param torque 施加到关节的净力矩 (理想情况下: tau_sensor; 次优: tau_command - tau_friction)
     * @return 当前估计的外部力矩向量 (hat_tau_ext)
     */
    Eigen::VectorXd update(const Eigen::VectorXd& q, const Eigen::VectorXd& v, const Eigen::VectorXd& torque);

    /**
     * @brief 设置或更新观测器增益 K (标量形式)。
     *
     * @param k_gain 观测器增益 (标量，所有关节使用相同增益)
     */
    void setKGain(double k_gain);

    /**
     * @brief 设置或更新观测器增益 K (向量形式)。
     *
     * @param k_gain 观测器增益向量 (为每个关节单独设置增益)
     */
    void setKGain(const Eigen::VectorXd& k_gain);

    /**
     * @brief 设置或更新观测器增益 K (矩阵形式)。
     *
     * @param k_gain 观测器增益矩阵 (nv x nv)
     */
    void setKGain(const Eigen::MatrixXd& k_gain);

    /**
     * @brief 重置观测器的内部状态。
     */
    void reset();

    /**
     * @brief 获取当前估计的外部力矩。
     *
     * @return 估计的外部力矩向量
     */
    const Eigen::VectorXd& getEstimatedExternalTorque() const { return hat_tau_; }

    /**
     * @brief 获取观测器动量估计值。
     *
     * @return 观测器动量向量
     */
    const Eigen::VectorXd& getObserverMomentum() const { return hat_p_; }

   private:
    // Pinocchio 模型和数据的引用
    const pinocchio::Model& model_;
    pinocchio::Data& data_;

    // 控制周期时间步长
    double dt_;

    // 关节自由度数量
    int nv_;

    // --- 内部状态变量 ---
    // 观测器动量 (hat_p)，即动量的估计值
    Eigen::VectorXd hat_p_;

    // 估计的外部力矩 (hat_tau_ext)
    Eigen::VectorXd hat_tau_;

    // 上一时刻的观测器动量导数 (hat_p_dot_prev)
    Eigen::VectorXd hat_p_dot_prev_;

    // 增益矩阵 K
    Eigen::MatrixXd k_gain_;

    // 标志位，用于处理第一次运行时的初始化
    bool is_first_run_;
};

#endif  // GENERALIZED_MOMENTUM_OBSERVER_H
