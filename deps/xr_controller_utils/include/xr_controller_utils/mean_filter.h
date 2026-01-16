/**
 * @file mean_filter.h
 * @author Li Hengjin (lihengin@x2robot.com)
 * @brief 多维均值滤波器和四元数均值滤波器
 * @version 0.1
 * @date 2025-06-02
 *
 * @copyright Copyright (c) 2025
 *
 */

#ifndef MEAN_FILTER_H
#define MEAN_FILTER_H

#include <Eigen/Dense>
#include <Eigen/Eigenvalues>
#include <deque>
#include <vector>

/**
 * 多维均值滤波器
 */
class MultiDimMeanFilter {
 public:
  /**
   * 构造函数
   * @param window_sizes 每个维度的窗口大小列表
   */
  explicit MultiDimMeanFilter(const std::vector<int> &window_sizes);

  /**
   * 添加一个多维数据点到滤波器
   * @param data_point 新的多维数据点
   */
  void add_data_point(const std::vector<double> &data_point);

  /**
   * 添加一个多维数据点到滤波器
   * @param data_point 新的多维数据点
   */
  void add_data_point(const Eigen::VectorXd &data_point);

  /**
   * 获取当前窗口的均值向量
   * @return 当前窗口的均值向量
   */
  std::vector<double> get_filtered_value() const;

  /**
   * 获取当前窗口的均值向量
   * @return 当前窗口的均值向量
   */
  Eigen::VectorXd get_filtered_value_eigen() const;

 private:
  std::vector<int> window_sizes_;
  std::vector<std::deque<double>> data_windows_;
};

/**
 * 四元数均值滤波器
 * 四元数顺序为[x, y, z, w]
 */
class QuaternionMeanFilter {
 public:
  /**
   * 构造函数
   * @param window_size 滤波窗口大小
   */
  explicit QuaternionMeanFilter(int window_size);

  /**
   * 添加一个四元数数据点到滤波器
   * @param data_point 新的四元数数据点 [x, y, z, w]
   */
  void add_data_point(const Eigen::Vector4d &data_point);

  /**
   * 获取当前窗口的四元数均值
   * @return 平均四元数 [x, y, z, w]
   */
  Eigen::Vector4d get_filtered_value() const;

 protected:
  const int window_size_;
  std::deque<Eigen::Vector4d> data_windows_;
};

/**
 * 欧拉角均值滤波器
 * 继承自四元数滤波器，内部转换为四元数处理
 */
class EulerMeanFilter : public QuaternionMeanFilter {
 public:
  /**
   * 构造函数
   * @param window_size 滤波窗口大小
   */
  explicit EulerMeanFilter(int window_size);

  /**
   * 添加一个欧拉角数据点到滤波器
   * @param euler_angles 欧拉角 [roll, pitch, yaw] (弧度制)
   */
  void add_data_point(const Eigen::Vector3d &euler_angles);

  /**
   * 获取当前窗口的欧拉角均值
   * @return 平均欧拉角 [roll, pitch, yaw] (弧度制)
   */
  Eigen::Vector3d get_filtered_value() const;

  /**
   * 将欧拉角转换为四元数
   * @param euler_angles 欧拉角 [roll, pitch, yaw]
   * @return 四元数 [x, y, z, w]
   */
  static Eigen::Vector4d euler_to_quaternion(const Eigen::Vector3d &euler_angles);
  static Eigen::Vector4d euler_to_quaternion_eigen(const Eigen::Vector3d &euler_angles);

  /**
   * 将四元数转换为欧拉角
   * @param quaternion 四元数 [x, y, z, w]
   * @return 欧拉角 [roll, pitch, yaw]
   */
  static Eigen::Vector3d quaternion_to_euler(const Eigen::Vector4d &quaternion);
};

#endif  // MEAN_FILTER_H
