#ifndef RM003_TOUCH_SENSOR_H
#define RM003_TOUCH_SENSOR_H

#include <cstdint>
#include <limits>
#include <memory>

#include "rclcpp/logger.hpp"
#include "x2robot_hardware_interface/x2robot_protocol/tridactyl_dexterous_hand/protocol.h"

namespace x2robot_hardware_interface {

class Rm003TouchSensor {
 public:
  explicit Rm003TouchSensor(uint8_t index);
  ~Rm003TouchSensor() = default;

  void update_state(const TorchSensorStatus& status);

  uint8_t get_index() const { return index_; }
  double get_normal_force() const { return normal_force_; }
  double get_tangential_force() const { return tangential_force_; }
  double get_tangential_direction() const { return tangential_direction_; }
  double get_proximity_capacitance() const { return proximity_capacitance_; }

  void reset_state();

 private:
  uint8_t index_;

  double normal_force_ = 0.0;
  double tangential_force_ = 0.0;
  double tangential_direction_ = 0.0;
  double proximity_capacitance_ = 0.0;

  std::unique_ptr<rclcpp::Logger> logger_ptr_;
};

}  // namespace x2robot_hardware_interface

#endif  // RM003_TOUCH_SENSOR_H
