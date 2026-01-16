/**
 * @file se3_low_pass_filter.h
 * @author Li Hengjin (lihengin@x2robot.com)
 * @brief SE3 低通滤波器
 * @version 0.1
 * @date 2025-12-05
 *
 * @copyright Copyright (c) 2025
 *
 */

#ifndef SE3_LOW_PASS_FILTER_H
#define SE3_LOW_PASS_FILTER_H

#include <Eigen/Dense>

#include <pinocchio/spatial/se3.hpp>

class SE3LowPassFilter
{
   public:
    /**
     * @brief 构造函数
     * @param alpha 平滑因子 [0, 1]. 0 表示完全保持上一帧，1 表示完全使用当前帧（无滤波）。
     */
    explicit SE3LowPassFilter(double alpha);

    /**
     * @brief 执行滤波
     * @param input_se3 当前输入的测量位姿
     * @return 滤波后的位姿
     */
    const pinocchio::SE3& filter(const pinocchio::SE3& input_se3);

    /**
     * @brief 重置滤波器
     * @param initial_se3 (可选) 重置到的特定位姿。如果不传，下次 update 时会自动初始化。
     */
    void reset(const pinocchio::SE3& initial_se3);

    /**
     * @brief 重置滤波器到未初始化状态
     * 下一次调用 filter 时会直接通过输入值
     */
    void reset();

    // 获取当前的 Alpha 值
    double getAlpha() const;

    // 动态修改 Alpha 值
    void setAlpha(double alpha);

   private:
    double alpha_;
    pinocchio::SE3 output_;
    bool initialized_;
};

/**
 * @brief 多维度向量低通滤波器
 * 支持任意维度的 Eigen 向量滤波
 */
class VectorLowPassFilter
{
   public:
    /**
     * @brief 构造函数
     * @param dim 向量维度
     * @param alpha 平滑因子 [0, 1]. 0 表示完全保持上一帧，1 表示完全使用当前帧（无滤波）。
     */
    VectorLowPassFilter(int dim, double alpha);

    /**
     * @brief 执行滤波
     * @param input 当前输入的测量向量
     * @return 滤波后的向量
     */
    const Eigen::VectorXd& filter(const Eigen::VectorXd& input);

    /**
     * @brief 重置滤波器
     * @param initial_value 重置到的特定向量值
     */
    void reset(const Eigen::VectorXd& initial_value);

    /**
     * @brief 重置滤波器到未初始化状态
     * 下一次调用 filter 时会直接通过输入值
     */
    void reset();

    // 获取当前的 Alpha 值
    double getAlpha() const;

    // 动态修改 Alpha 值
    void setAlpha(double alpha);

    // 获取向量维度
    int getDim() const;

   private:
    int dim_;
    double alpha_;
    Eigen::VectorXd output_;
    bool initialized_;
};

#endif  // SE3_LOW_PASS_FILTER_H