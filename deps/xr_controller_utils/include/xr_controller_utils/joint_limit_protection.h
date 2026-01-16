/**
 * @file joint_limit_protection.h
 * @author Li Hengjin (lihengin@x2robot.com)
 * @brief 关节限位保护
 * @version 0.1
 * @date 2025-11-26
 *
 * @copyright Copyright (c) 2025
 *
 */
#ifndef JOINT_LIMIT_PROTECTION_H
#define JOINT_LIMIT_PROTECTION_H

#include <Eigen/Dense>
#include <vector>

/**
 * @brief 关节限位保护类
 *
 * 该类实现了基于虚拟弹簧-阻尼模型的关节限位保护功能。
 * 当关节接近限位时，会产生一个反向力矩来防止关节超限。
 * 使用缓冲区域的概念，在关节到达硬限位之前提前施加保护力矩。
 */
class JointLimitProtection
{
   public:
    /**
     * @brief 关节限位保护参数结构体
     */
    struct Params
    {
        double buffer_zone_ratio = 0.9;  ///< 缓冲区域比例，范围 [0, 1]，如 0.9 表示上下限都乘以 0.9 作为触发点
        double kp = 50.0;                ///< 虚拟弹簧刚度系数，单位：Nm/rad
        double kd = 5.0;                 ///< 虚拟阻尼系数，防止震荡，单位：Nm·s/rad
        double max_torque = 1.0;         ///< 限位保护力矩上限，防止输出力矩过大，单位：Nm
        double transition_width = 0.05;  ///< 过渡宽度，用于 tanh 平滑激活，单位：rad（约3度）
    };

    /**
     * @brief 构造函数
     * @param dof 关节自由度数量
     * @param q_min 各关节的最小位置限制，单位：rad
     * @param q_max 各关节的最大位置限制，单位：rad
     */
    JointLimitProtection(int dof, const Eigen::VectorXd& q_min, const Eigen::VectorXd& q_max);

    /**
     * @brief 析构函数
     */
    ~JointLimitProtection() = default;

    /**
     * @brief 计算关节限位保护力矩
     *
     * 根据当前关节位置和速度，计算需要叠加的限位保护力矩。
     * 使用平滑过渡的弹簧-阻尼模型，通过 tanh 函数实现平滑激活。
     *
     * 缓冲区域计算：
     * - upper_trigger = q_max * buffer_zone_ratio
     * - lower_trigger = q_min * buffer_zone_ratio
     *
     * 平滑过渡：
     * - 使用 tanh(depth / transition_width) 计算激活系数 alpha
     * - 力矩 = alpha * (spring_force + damping_force)
     * - 阻尼力只在推入限位时施加（dq 与深度方向一致时）
     *
     * 例如：q_min = -3.14, q_max = 3.14, buffer_zone_ratio = 0.9
     * - upper_trigger = 3.14 * 0.9 = 2.826
     * - lower_trigger = -3.14 * 0.9 = -2.826
     * - 安全范围：[-2.826, 2.826]
     *
     * @param q 当前关节位置，单位：rad
     * @param dq 当前关节速度，单位：rad/s
     * @return 限位保护力矩向量，单位：Nm
     */
    Eigen::VectorXd computeLimitTorque(const Eigen::VectorXd& q, const Eigen::VectorXd& dq);

    /**
     * @brief 设置指定关节的保护参数
     * @param joint_idx 关节索引（从0开始）
     * @param p 参数结构体
     */
    void setJointParams(int joint_idx, const Params& p);

   private:
    int dof_;                     ///< 关节自由度数量
    Eigen::VectorXd q_min_;       ///< 各关节最小位置限制，单位：rad
    Eigen::VectorXd q_max_;       ///< 各关节最大位置限制，单位：rad
    std::vector<Params> params_;  ///< 各关节的保护参数
};

#endif  // JOINT_LIMIT_PROTECTION_H
