// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_validator:msg/ControlValidatorStatus.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_VALIDATOR__MSG__DETAIL__CONTROL_VALIDATOR_STATUS__STRUCT_HPP_
#define CONTROL_VALIDATOR__MSG__DETAIL__CONTROL_VALIDATOR_STATUS__STRUCT_HPP_

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
# define DEPRECATED__control_validator__msg__ControlValidatorStatus __attribute__((deprecated))
#else
# define DEPRECATED__control_validator__msg__ControlValidatorStatus __declspec(deprecated)
#endif

namespace control_validator
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlValidatorStatus_
{
  using Type = ControlValidatorStatus_<ContainerAllocator>;

  explicit ControlValidatorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_valid_max_distance_deviation = false;
      this->max_distance_deviation = 0.0;
      this->invalid_count = 0ll;
    }
  }

  explicit ControlValidatorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_valid_max_distance_deviation = false;
      this->max_distance_deviation = 0.0;
      this->invalid_count = 0ll;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _is_valid_max_distance_deviation_type =
    bool;
  _is_valid_max_distance_deviation_type is_valid_max_distance_deviation;
  using _max_distance_deviation_type =
    double;
  _max_distance_deviation_type max_distance_deviation;
  using _invalid_count_type =
    int64_t;
  _invalid_count_type invalid_count;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__is_valid_max_distance_deviation(
    const bool & _arg)
  {
    this->is_valid_max_distance_deviation = _arg;
    return *this;
  }
  Type & set__max_distance_deviation(
    const double & _arg)
  {
    this->max_distance_deviation = _arg;
    return *this;
  }
  Type & set__invalid_count(
    const int64_t & _arg)
  {
    this->invalid_count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_validator::msg::ControlValidatorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_validator::msg::ControlValidatorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_validator::msg::ControlValidatorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_validator::msg::ControlValidatorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_validator::msg::ControlValidatorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_validator::msg::ControlValidatorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_validator::msg::ControlValidatorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_validator::msg::ControlValidatorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_validator::msg::ControlValidatorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_validator::msg::ControlValidatorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_validator__msg__ControlValidatorStatus
    std::shared_ptr<control_validator::msg::ControlValidatorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_validator__msg__ControlValidatorStatus
    std::shared_ptr<control_validator::msg::ControlValidatorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlValidatorStatus_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->is_valid_max_distance_deviation != other.is_valid_max_distance_deviation) {
      return false;
    }
    if (this->max_distance_deviation != other.max_distance_deviation) {
      return false;
    }
    if (this->invalid_count != other.invalid_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlValidatorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlValidatorStatus_

// alias to use template instance with default allocator
using ControlValidatorStatus =
  control_validator::msg::ControlValidatorStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace control_validator

#endif  // CONTROL_VALIDATOR__MSG__DETAIL__CONTROL_VALIDATOR_STATUS__STRUCT_HPP_
