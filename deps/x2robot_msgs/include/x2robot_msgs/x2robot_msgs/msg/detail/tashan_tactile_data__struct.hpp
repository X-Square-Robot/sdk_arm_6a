// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from x2robot_msgs:msg/TashanTactileData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/tashan_tactile_data.hpp"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__TASHAN_TACTILE_DATA__STRUCT_HPP_
#define X2ROBOT_MSGS__MSG__DETAIL__TASHAN_TACTILE_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__x2robot_msgs__msg__TashanTactileData __attribute__((deprecated))
#else
# define DEPRECATED__x2robot_msgs__msg__TashanTactileData __declspec(deprecated)
#endif

namespace x2robot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TashanTactileData_
{
  using Type = TashanTactileData_<ContainerAllocator>;

  explicit TashanTactileData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    (void)_init;
  }

  explicit TashanTactileData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _sensor_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _sensor_names_type sensor_names;
  using _frame_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _frame_ids_type frame_ids;
  using _normal_forces_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _normal_forces_type normal_forces;
  using _tangential_forces_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _tangential_forces_type tangential_forces;
  using _directions_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _directions_type directions;
  using _capacitances_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _capacitances_type capacitances;
  using _error_codes_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _error_codes_type error_codes;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__sensor_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->sensor_names = _arg;
    return *this;
  }
  Type & set__frame_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->frame_ids = _arg;
    return *this;
  }
  Type & set__normal_forces(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->normal_forces = _arg;
    return *this;
  }
  Type & set__tangential_forces(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->tangential_forces = _arg;
    return *this;
  }
  Type & set__directions(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->directions = _arg;
    return *this;
  }
  Type & set__capacitances(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->capacitances = _arg;
    return *this;
  }
  Type & set__error_codes(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->error_codes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    x2robot_msgs::msg::TashanTactileData_<ContainerAllocator> *;
  using ConstRawPtr =
    const x2robot_msgs::msg::TashanTactileData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<x2robot_msgs::msg::TashanTactileData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<x2robot_msgs::msg::TashanTactileData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::msg::TashanTactileData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::msg::TashanTactileData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::msg::TashanTactileData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::msg::TashanTactileData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<x2robot_msgs::msg::TashanTactileData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<x2robot_msgs::msg::TashanTactileData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__x2robot_msgs__msg__TashanTactileData
    std::shared_ptr<x2robot_msgs::msg::TashanTactileData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__x2robot_msgs__msg__TashanTactileData
    std::shared_ptr<x2robot_msgs::msg::TashanTactileData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TashanTactileData_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->sensor_names != other.sensor_names) {
      return false;
    }
    if (this->frame_ids != other.frame_ids) {
      return false;
    }
    if (this->normal_forces != other.normal_forces) {
      return false;
    }
    if (this->tangential_forces != other.tangential_forces) {
      return false;
    }
    if (this->directions != other.directions) {
      return false;
    }
    if (this->capacitances != other.capacitances) {
      return false;
    }
    if (this->error_codes != other.error_codes) {
      return false;
    }
    return true;
  }
  bool operator!=(const TashanTactileData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TashanTactileData_

// alias to use template instance with default allocator
using TashanTactileData =
  x2robot_msgs::msg::TashanTactileData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace x2robot_msgs

#endif  // X2ROBOT_MSGS__MSG__DETAIL__TASHAN_TACTILE_DATA__STRUCT_HPP_
