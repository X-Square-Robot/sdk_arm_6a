// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from x2robot_msgs:srv/TrajectoryPlanRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/srv/trajectory_plan_request.hpp"


#ifndef X2ROBOT_MSGS__SRV__DETAIL__TRAJECTORY_PLAN_REQUEST__STRUCT_HPP_
#define X2ROBOT_MSGS__SRV__DETAIL__TRAJECTORY_PLAN_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__x2robot_msgs__srv__TrajectoryPlanRequest_Request __attribute__((deprecated))
#else
# define DEPRECATED__x2robot_msgs__srv__TrajectoryPlanRequest_Request __declspec(deprecated)
#endif

namespace x2robot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TrajectoryPlanRequest_Request_
{
  using Type = TrajectoryPlanRequest_Request_<ContainerAllocator>;

  explicit TrajectoryPlanRequest_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->num_planning_attempts = 1;
      this->allowed_planning_time = 1.0;
      this->max_velocity_scaling_factor = 0.1;
      this->max_acceleration_scaling_factor = 0.2;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->group_name = "";
      this->num_planning_attempts = 0;
      this->allowed_planning_time = 0.0;
      this->max_velocity_scaling_factor = 0.0;
      this->max_acceleration_scaling_factor = 0.0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_name = "";
    }
  }

  explicit TrajectoryPlanRequest_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : group_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->num_planning_attempts = 1;
      this->allowed_planning_time = 1.0;
      this->max_velocity_scaling_factor = 0.1;
      this->max_acceleration_scaling_factor = 0.2;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->group_name = "";
      this->num_planning_attempts = 0;
      this->allowed_planning_time = 0.0;
      this->max_velocity_scaling_factor = 0.0;
      this->max_acceleration_scaling_factor = 0.0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_name = "";
    }
  }

  // field types and members
  using _group_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _group_name_type group_name;
  using _start_state_joint_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _start_state_joint_names_type start_state_joint_names;
  using _start_states_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _start_states_type start_states;
  using _goal_state_joint_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _goal_state_joint_names_type goal_state_joint_names;
  using _goal_states_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _goal_states_type goal_states;
  using _tolerance_above_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _tolerance_above_type tolerance_above;
  using _tolerance_below_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _tolerance_below_type tolerance_below;
  using _num_planning_attempts_type =
    uint8_t;
  _num_planning_attempts_type num_planning_attempts;
  using _allowed_planning_time_type =
    double;
  _allowed_planning_time_type allowed_planning_time;
  using _max_velocity_scaling_factor_type =
    double;
  _max_velocity_scaling_factor_type max_velocity_scaling_factor;
  using _max_acceleration_scaling_factor_type =
    double;
  _max_acceleration_scaling_factor_type max_acceleration_scaling_factor;

  // setters for named parameter idiom
  Type & set__group_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->group_name = _arg;
    return *this;
  }
  Type & set__start_state_joint_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->start_state_joint_names = _arg;
    return *this;
  }
  Type & set__start_states(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->start_states = _arg;
    return *this;
  }
  Type & set__goal_state_joint_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->goal_state_joint_names = _arg;
    return *this;
  }
  Type & set__goal_states(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->goal_states = _arg;
    return *this;
  }
  Type & set__tolerance_above(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->tolerance_above = _arg;
    return *this;
  }
  Type & set__tolerance_below(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->tolerance_below = _arg;
    return *this;
  }
  Type & set__num_planning_attempts(
    const uint8_t & _arg)
  {
    this->num_planning_attempts = _arg;
    return *this;
  }
  Type & set__allowed_planning_time(
    const double & _arg)
  {
    this->allowed_planning_time = _arg;
    return *this;
  }
  Type & set__max_velocity_scaling_factor(
    const double & _arg)
  {
    this->max_velocity_scaling_factor = _arg;
    return *this;
  }
  Type & set__max_acceleration_scaling_factor(
    const double & _arg)
  {
    this->max_acceleration_scaling_factor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    x2robot_msgs::srv::TrajectoryPlanRequest_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const x2robot_msgs::srv::TrajectoryPlanRequest_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<x2robot_msgs::srv::TrajectoryPlanRequest_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<x2robot_msgs::srv::TrajectoryPlanRequest_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::srv::TrajectoryPlanRequest_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::srv::TrajectoryPlanRequest_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::srv::TrajectoryPlanRequest_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::srv::TrajectoryPlanRequest_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<x2robot_msgs::srv::TrajectoryPlanRequest_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<x2robot_msgs::srv::TrajectoryPlanRequest_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__x2robot_msgs__srv__TrajectoryPlanRequest_Request
    std::shared_ptr<x2robot_msgs::srv::TrajectoryPlanRequest_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__x2robot_msgs__srv__TrajectoryPlanRequest_Request
    std::shared_ptr<x2robot_msgs::srv::TrajectoryPlanRequest_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryPlanRequest_Request_ & other) const
  {
    if (this->group_name != other.group_name) {
      return false;
    }
    if (this->start_state_joint_names != other.start_state_joint_names) {
      return false;
    }
    if (this->start_states != other.start_states) {
      return false;
    }
    if (this->goal_state_joint_names != other.goal_state_joint_names) {
      return false;
    }
    if (this->goal_states != other.goal_states) {
      return false;
    }
    if (this->tolerance_above != other.tolerance_above) {
      return false;
    }
    if (this->tolerance_below != other.tolerance_below) {
      return false;
    }
    if (this->num_planning_attempts != other.num_planning_attempts) {
      return false;
    }
    if (this->allowed_planning_time != other.allowed_planning_time) {
      return false;
    }
    if (this->max_velocity_scaling_factor != other.max_velocity_scaling_factor) {
      return false;
    }
    if (this->max_acceleration_scaling_factor != other.max_acceleration_scaling_factor) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryPlanRequest_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryPlanRequest_Request_

// alias to use template instance with default allocator
using TrajectoryPlanRequest_Request =
  x2robot_msgs::srv::TrajectoryPlanRequest_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace x2robot_msgs


// Include directives for member types
// Member 'trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__x2robot_msgs__srv__TrajectoryPlanRequest_Response __attribute__((deprecated))
#else
# define DEPRECATED__x2robot_msgs__srv__TrajectoryPlanRequest_Response __declspec(deprecated)
#endif

namespace x2robot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TrajectoryPlanRequest_Response_
{
  using Type = TrajectoryPlanRequest_Response_<ContainerAllocator>;

  explicit TrajectoryPlanRequest_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0l;
    }
  }

  explicit TrajectoryPlanRequest_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0l;
    }
  }

  // field types and members
  using _error_code_type =
    int32_t;
  _error_code_type error_code;
  using _trajectory_type =
    trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>;
  _trajectory_type trajectory;

  // setters for named parameter idiom
  Type & set__error_code(
    const int32_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__trajectory(
    const trajectory_msgs::msg::JointTrajectory_<ContainerAllocator> & _arg)
  {
    this->trajectory = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    x2robot_msgs::srv::TrajectoryPlanRequest_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const x2robot_msgs::srv::TrajectoryPlanRequest_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<x2robot_msgs::srv::TrajectoryPlanRequest_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<x2robot_msgs::srv::TrajectoryPlanRequest_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::srv::TrajectoryPlanRequest_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::srv::TrajectoryPlanRequest_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::srv::TrajectoryPlanRequest_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::srv::TrajectoryPlanRequest_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<x2robot_msgs::srv::TrajectoryPlanRequest_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<x2robot_msgs::srv::TrajectoryPlanRequest_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__x2robot_msgs__srv__TrajectoryPlanRequest_Response
    std::shared_ptr<x2robot_msgs::srv::TrajectoryPlanRequest_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__x2robot_msgs__srv__TrajectoryPlanRequest_Response
    std::shared_ptr<x2robot_msgs::srv::TrajectoryPlanRequest_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryPlanRequest_Response_ & other) const
  {
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->trajectory != other.trajectory) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryPlanRequest_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryPlanRequest_Response_

// alias to use template instance with default allocator
using TrajectoryPlanRequest_Response =
  x2robot_msgs::srv::TrajectoryPlanRequest_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace x2robot_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__x2robot_msgs__srv__TrajectoryPlanRequest_Event __attribute__((deprecated))
#else
# define DEPRECATED__x2robot_msgs__srv__TrajectoryPlanRequest_Event __declspec(deprecated)
#endif

namespace x2robot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TrajectoryPlanRequest_Event_
{
  using Type = TrajectoryPlanRequest_Event_<ContainerAllocator>;

  explicit TrajectoryPlanRequest_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit TrajectoryPlanRequest_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<x2robot_msgs::srv::TrajectoryPlanRequest_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<x2robot_msgs::srv::TrajectoryPlanRequest_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<x2robot_msgs::srv::TrajectoryPlanRequest_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<x2robot_msgs::srv::TrajectoryPlanRequest_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<x2robot_msgs::srv::TrajectoryPlanRequest_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<x2robot_msgs::srv::TrajectoryPlanRequest_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<x2robot_msgs::srv::TrajectoryPlanRequest_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<x2robot_msgs::srv::TrajectoryPlanRequest_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    x2robot_msgs::srv::TrajectoryPlanRequest_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const x2robot_msgs::srv::TrajectoryPlanRequest_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<x2robot_msgs::srv::TrajectoryPlanRequest_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<x2robot_msgs::srv::TrajectoryPlanRequest_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::srv::TrajectoryPlanRequest_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::srv::TrajectoryPlanRequest_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::srv::TrajectoryPlanRequest_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::srv::TrajectoryPlanRequest_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<x2robot_msgs::srv::TrajectoryPlanRequest_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<x2robot_msgs::srv::TrajectoryPlanRequest_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__x2robot_msgs__srv__TrajectoryPlanRequest_Event
    std::shared_ptr<x2robot_msgs::srv::TrajectoryPlanRequest_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__x2robot_msgs__srv__TrajectoryPlanRequest_Event
    std::shared_ptr<x2robot_msgs::srv::TrajectoryPlanRequest_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryPlanRequest_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryPlanRequest_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryPlanRequest_Event_

// alias to use template instance with default allocator
using TrajectoryPlanRequest_Event =
  x2robot_msgs::srv::TrajectoryPlanRequest_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace x2robot_msgs

namespace x2robot_msgs
{

namespace srv
{

struct TrajectoryPlanRequest
{
  using Request = x2robot_msgs::srv::TrajectoryPlanRequest_Request;
  using Response = x2robot_msgs::srv::TrajectoryPlanRequest_Response;
  using Event = x2robot_msgs::srv::TrajectoryPlanRequest_Event;
};

}  // namespace srv

}  // namespace x2robot_msgs

#endif  // X2ROBOT_MSGS__SRV__DETAIL__TRAJECTORY_PLAN_REQUEST__STRUCT_HPP_
