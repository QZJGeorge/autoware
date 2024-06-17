// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vehicle_cmd_gate:msg/IsFilterActivated.idl
// generated code does not contain a copyright notice

#ifndef VEHICLE_CMD_GATE__MSG__DETAIL__IS_FILTER_ACTIVATED__STRUCT_HPP_
#define VEHICLE_CMD_GATE__MSG__DETAIL__IS_FILTER_ACTIVATED__STRUCT_HPP_

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
# define DEPRECATED__vehicle_cmd_gate__msg__IsFilterActivated __attribute__((deprecated))
#else
# define DEPRECATED__vehicle_cmd_gate__msg__IsFilterActivated __declspec(deprecated)
#endif

namespace vehicle_cmd_gate
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IsFilterActivated_
{
  using Type = IsFilterActivated_<ContainerAllocator>;

  explicit IsFilterActivated_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_activated = false;
      this->is_activated_on_steering = false;
      this->is_activated_on_steering_rate = false;
      this->is_activated_on_speed = false;
      this->is_activated_on_acceleration = false;
      this->is_activated_on_jerk = false;
    }
  }

  explicit IsFilterActivated_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_activated = false;
      this->is_activated_on_steering = false;
      this->is_activated_on_steering_rate = false;
      this->is_activated_on_speed = false;
      this->is_activated_on_acceleration = false;
      this->is_activated_on_jerk = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _is_activated_type =
    bool;
  _is_activated_type is_activated;
  using _is_activated_on_steering_type =
    bool;
  _is_activated_on_steering_type is_activated_on_steering;
  using _is_activated_on_steering_rate_type =
    bool;
  _is_activated_on_steering_rate_type is_activated_on_steering_rate;
  using _is_activated_on_speed_type =
    bool;
  _is_activated_on_speed_type is_activated_on_speed;
  using _is_activated_on_acceleration_type =
    bool;
  _is_activated_on_acceleration_type is_activated_on_acceleration;
  using _is_activated_on_jerk_type =
    bool;
  _is_activated_on_jerk_type is_activated_on_jerk;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__is_activated(
    const bool & _arg)
  {
    this->is_activated = _arg;
    return *this;
  }
  Type & set__is_activated_on_steering(
    const bool & _arg)
  {
    this->is_activated_on_steering = _arg;
    return *this;
  }
  Type & set__is_activated_on_steering_rate(
    const bool & _arg)
  {
    this->is_activated_on_steering_rate = _arg;
    return *this;
  }
  Type & set__is_activated_on_speed(
    const bool & _arg)
  {
    this->is_activated_on_speed = _arg;
    return *this;
  }
  Type & set__is_activated_on_acceleration(
    const bool & _arg)
  {
    this->is_activated_on_acceleration = _arg;
    return *this;
  }
  Type & set__is_activated_on_jerk(
    const bool & _arg)
  {
    this->is_activated_on_jerk = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vehicle_cmd_gate::msg::IsFilterActivated_<ContainerAllocator> *;
  using ConstRawPtr =
    const vehicle_cmd_gate::msg::IsFilterActivated_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vehicle_cmd_gate::msg::IsFilterActivated_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vehicle_cmd_gate::msg::IsFilterActivated_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vehicle_cmd_gate::msg::IsFilterActivated_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vehicle_cmd_gate::msg::IsFilterActivated_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vehicle_cmd_gate::msg::IsFilterActivated_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vehicle_cmd_gate::msg::IsFilterActivated_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vehicle_cmd_gate::msg::IsFilterActivated_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vehicle_cmd_gate::msg::IsFilterActivated_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vehicle_cmd_gate__msg__IsFilterActivated
    std::shared_ptr<vehicle_cmd_gate::msg::IsFilterActivated_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vehicle_cmd_gate__msg__IsFilterActivated
    std::shared_ptr<vehicle_cmd_gate::msg::IsFilterActivated_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IsFilterActivated_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->is_activated != other.is_activated) {
      return false;
    }
    if (this->is_activated_on_steering != other.is_activated_on_steering) {
      return false;
    }
    if (this->is_activated_on_steering_rate != other.is_activated_on_steering_rate) {
      return false;
    }
    if (this->is_activated_on_speed != other.is_activated_on_speed) {
      return false;
    }
    if (this->is_activated_on_acceleration != other.is_activated_on_acceleration) {
      return false;
    }
    if (this->is_activated_on_jerk != other.is_activated_on_jerk) {
      return false;
    }
    return true;
  }
  bool operator!=(const IsFilterActivated_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IsFilterActivated_

// alias to use template instance with default allocator
using IsFilterActivated =
  vehicle_cmd_gate::msg::IsFilterActivated_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vehicle_cmd_gate

#endif  // VEHICLE_CMD_GATE__MSG__DETAIL__IS_FILTER_ACTIVATED__STRUCT_HPP_
