#ifndef ROBOT_TYPE_UTILS_H
#define ROBOT_TYPE_UTILS_H

#include <rclcpp/rclcpp.hpp>
#include <string>
#include <unordered_map>

namespace x2robot_controllers {

// 机器人类型枚举
enum class RobotType { ARX, TIANJI, UNKNOWN };

// 机器人类型工具类
class RobotTypeUtils {
 public:
  // 字符串到枚举的转换
  static RobotType string_to_robot_type(const std::string& type_str);

  // 枚举到字符串的转换
  static std::string robot_type_to_string(RobotType type);

  // 验证机器人类型是否支持
  static bool is_robot_type_supported(RobotType type);

  // 记录机器人类型信息
  static void log_robot_type_info(RobotType type, rclcpp::Logger logger);

 private:
  // 静态映射表
  static const std::unordered_map<std::string, RobotType> string_to_type_map_;
  static const std::unordered_map<RobotType, std::string> type_to_string_map_;
};

}  // namespace x2robot_controllers

#endif  // ROBOT_TYPE_UTILS_H