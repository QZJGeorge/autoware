// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from operation_mode_transition_manager:msg/OperationModeTransitionManagerDebug.idl
// generated code does not contain a copyright notice

#ifndef OPERATION_MODE_TRANSITION_MANAGER__MSG__DETAIL__OPERATION_MODE_TRANSITION_MANAGER_DEBUG__STRUCT_HPP_
#define OPERATION_MODE_TRANSITION_MANAGER__MSG__DETAIL__OPERATION_MODE_TRANSITION_MANAGER_DEBUG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug __attribute__((deprecated))
#else
# define DEPRECATED__operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug __declspec(deprecated)
#endif

namespace operation_mode_transition_manager
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OperationModeTransitionManagerDebug_
{
  using Type = OperationModeTransitionManagerDebug_<ContainerAllocator>;

  explicit OperationModeTransitionManagerDebug_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
      this->in_autoware_control = false;
      this->in_transition = false;
      this->is_all_ok = false;
      this->engage_allowed_for_stopped_vehicle = false;
      this->trajectory_available_ok = false;
      this->lateral_deviation_ok = false;
      this->yaw_deviation_ok = false;
      this->speed_upper_deviation_ok = false;
      this->speed_lower_deviation_ok = false;
      this->stop_ok = false;
      this->large_acceleration_ok = false;
      this->large_lateral_acceleration_ok = false;
      this->large_lateral_acceleration_diff_ok = false;
      this->current_speed = 0.0;
      this->target_control_speed = 0.0;
      this->target_planning_speed = 0.0;
      this->target_control_acceleration = 0.0;
      this->lateral_acceleration = 0.0;
      this->lateral_acceleration_deviation = 0.0;
      this->lateral_deviation = 0.0;
      this->yaw_deviation = 0.0;
      this->speed_deviation = 0.0;
    }
  }

  explicit OperationModeTransitionManagerDebug_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
      this->in_autoware_control = false;
      this->in_transition = false;
      this->is_all_ok = false;
      this->engage_allowed_for_stopped_vehicle = false;
      this->trajectory_available_ok = false;
      this->lateral_deviation_ok = false;
      this->yaw_deviation_ok = false;
      this->speed_upper_deviation_ok = false;
      this->speed_lower_deviation_ok = false;
      this->stop_ok = false;
      this->large_acceleration_ok = false;
      this->large_lateral_acceleration_ok = false;
      this->large_lateral_acceleration_diff_ok = false;
      this->current_speed = 0.0;
      this->target_control_speed = 0.0;
      this->target_planning_speed = 0.0;
      this->target_control_acceleration = 0.0;
      this->lateral_acceleration = 0.0;
      this->lateral_acceleration_deviation = 0.0;
      this->lateral_deviation = 0.0;
      this->yaw_deviation = 0.0;
      this->speed_deviation = 0.0;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;
  using _in_autoware_control_type =
    bool;
  _in_autoware_control_type in_autoware_control;
  using _in_transition_type =
    bool;
  _in_transition_type in_transition;
  using _is_all_ok_type =
    bool;
  _is_all_ok_type is_all_ok;
  using _engage_allowed_for_stopped_vehicle_type =
    bool;
  _engage_allowed_for_stopped_vehicle_type engage_allowed_for_stopped_vehicle;
  using _trajectory_available_ok_type =
    bool;
  _trajectory_available_ok_type trajectory_available_ok;
  using _lateral_deviation_ok_type =
    bool;
  _lateral_deviation_ok_type lateral_deviation_ok;
  using _yaw_deviation_ok_type =
    bool;
  _yaw_deviation_ok_type yaw_deviation_ok;
  using _speed_upper_deviation_ok_type =
    bool;
  _speed_upper_deviation_ok_type speed_upper_deviation_ok;
  using _speed_lower_deviation_ok_type =
    bool;
  _speed_lower_deviation_ok_type speed_lower_deviation_ok;
  using _stop_ok_type =
    bool;
  _stop_ok_type stop_ok;
  using _large_acceleration_ok_type =
    bool;
  _large_acceleration_ok_type large_acceleration_ok;
  using _large_lateral_acceleration_ok_type =
    bool;
  _large_lateral_acceleration_ok_type large_lateral_acceleration_ok;
  using _large_lateral_acceleration_diff_ok_type =
    bool;
  _large_lateral_acceleration_diff_ok_type large_lateral_acceleration_diff_ok;
  using _current_speed_type =
    double;
  _current_speed_type current_speed;
  using _target_control_speed_type =
    double;
  _target_control_speed_type target_control_speed;
  using _target_planning_speed_type =
    double;
  _target_planning_speed_type target_planning_speed;
  using _target_control_acceleration_type =
    double;
  _target_control_acceleration_type target_control_acceleration;
  using _lateral_acceleration_type =
    double;
  _lateral_acceleration_type lateral_acceleration;
  using _lateral_acceleration_deviation_type =
    double;
  _lateral_acceleration_deviation_type lateral_acceleration_deviation;
  using _lateral_deviation_type =
    double;
  _lateral_deviation_type lateral_deviation;
  using _yaw_deviation_type =
    double;
  _yaw_deviation_type yaw_deviation;
  using _speed_deviation_type =
    double;
  _speed_deviation_type speed_deviation;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__in_autoware_control(
    const bool & _arg)
  {
    this->in_autoware_control = _arg;
    return *this;
  }
  Type & set__in_transition(
    const bool & _arg)
  {
    this->in_transition = _arg;
    return *this;
  }
  Type & set__is_all_ok(
    const bool & _arg)
  {
    this->is_all_ok = _arg;
    return *this;
  }
  Type & set__engage_allowed_for_stopped_vehicle(
    const bool & _arg)
  {
    this->engage_allowed_for_stopped_vehicle = _arg;
    return *this;
  }
  Type & set__trajectory_available_ok(
    const bool & _arg)
  {
    this->trajectory_available_ok = _arg;
    return *this;
  }
  Type & set__lateral_deviation_ok(
    const bool & _arg)
  {
    this->lateral_deviation_ok = _arg;
    return *this;
  }
  Type & set__yaw_deviation_ok(
    const bool & _arg)
  {
    this->yaw_deviation_ok = _arg;
    return *this;
  }
  Type & set__speed_upper_deviation_ok(
    const bool & _arg)
  {
    this->speed_upper_deviation_ok = _arg;
    return *this;
  }
  Type & set__speed_lower_deviation_ok(
    const bool & _arg)
  {
    this->speed_lower_deviation_ok = _arg;
    return *this;
  }
  Type & set__stop_ok(
    const bool & _arg)
  {
    this->stop_ok = _arg;
    return *this;
  }
  Type & set__large_acceleration_ok(
    const bool & _arg)
  {
    this->large_acceleration_ok = _arg;
    return *this;
  }
  Type & set__large_lateral_acceleration_ok(
    const bool & _arg)
  {
    this->large_lateral_acceleration_ok = _arg;
    return *this;
  }
  Type & set__large_lateral_acceleration_diff_ok(
    const bool & _arg)
  {
    this->large_lateral_acceleration_diff_ok = _arg;
    return *this;
  }
  Type & set__current_speed(
    const double & _arg)
  {
    this->current_speed = _arg;
    return *this;
  }
  Type & set__target_control_speed(
    const double & _arg)
  {
    this->target_control_speed = _arg;
    return *this;
  }
  Type & set__target_planning_speed(
    const double & _arg)
  {
    this->target_planning_speed = _arg;
    return *this;
  }
  Type & set__target_control_acceleration(
    const double & _arg)
  {
    this->target_control_acceleration = _arg;
    return *this;
  }
  Type & set__lateral_acceleration(
    const double & _arg)
  {
    this->lateral_acceleration = _arg;
    return *this;
  }
  Type & set__lateral_acceleration_deviation(
    const double & _arg)
  {
    this->lateral_acceleration_deviation = _arg;
    return *this;
  }
  Type & set__lateral_deviation(
    const double & _arg)
  {
    this->lateral_deviation = _arg;
    return *this;
  }
  Type & set__yaw_deviation(
    const double & _arg)
  {
    this->yaw_deviation = _arg;
    return *this;
  }
  Type & set__speed_deviation(
    const double & _arg)
  {
    this->speed_deviation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug_<ContainerAllocator> *;
  using ConstRawPtr =
    const operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug
    std::shared_ptr<operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug
    std::shared_ptr<operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OperationModeTransitionManagerDebug_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->in_autoware_control != other.in_autoware_control) {
      return false;
    }
    if (this->in_transition != other.in_transition) {
      return false;
    }
    if (this->is_all_ok != other.is_all_ok) {
      return false;
    }
    if (this->engage_allowed_for_stopped_vehicle != other.engage_allowed_for_stopped_vehicle) {
      return false;
    }
    if (this->trajectory_available_ok != other.trajectory_available_ok) {
      return false;
    }
    if (this->lateral_deviation_ok != other.lateral_deviation_ok) {
      return false;
    }
    if (this->yaw_deviation_ok != other.yaw_deviation_ok) {
      return false;
    }
    if (this->speed_upper_deviation_ok != other.speed_upper_deviation_ok) {
      return false;
    }
    if (this->speed_lower_deviation_ok != other.speed_lower_deviation_ok) {
      return false;
    }
    if (this->stop_ok != other.stop_ok) {
      return false;
    }
    if (this->large_acceleration_ok != other.large_acceleration_ok) {
      return false;
    }
    if (this->large_lateral_acceleration_ok != other.large_lateral_acceleration_ok) {
      return false;
    }
    if (this->large_lateral_acceleration_diff_ok != other.large_lateral_acceleration_diff_ok) {
      return false;
    }
    if (this->current_speed != other.current_speed) {
      return false;
    }
    if (this->target_control_speed != other.target_control_speed) {
      return false;
    }
    if (this->target_planning_speed != other.target_planning_speed) {
      return false;
    }
    if (this->target_control_acceleration != other.target_control_acceleration) {
      return false;
    }
    if (this->lateral_acceleration != other.lateral_acceleration) {
      return false;
    }
    if (this->lateral_acceleration_deviation != other.lateral_acceleration_deviation) {
      return false;
    }
    if (this->lateral_deviation != other.lateral_deviation) {
      return false;
    }
    if (this->yaw_deviation != other.yaw_deviation) {
      return false;
    }
    if (this->speed_deviation != other.speed_deviation) {
      return false;
    }
    return true;
  }
  bool operator!=(const OperationModeTransitionManagerDebug_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OperationModeTransitionManagerDebug_

// alias to use template instance with default allocator
using OperationModeTransitionManagerDebug =
  operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace operation_mode_transition_manager

#endif  // OPERATION_MODE_TRANSITION_MANAGER__MSG__DETAIL__OPERATION_MODE_TRANSITION_MANAGER_DEBUG__STRUCT_HPP_
