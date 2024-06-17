// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from planning_validator:msg/PlanningValidatorStatus.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_VALIDATOR__MSG__DETAIL__PLANNING_VALIDATOR_STATUS__STRUCT_HPP_
#define PLANNING_VALIDATOR__MSG__DETAIL__PLANNING_VALIDATOR_STATUS__STRUCT_HPP_

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
# define DEPRECATED__planning_validator__msg__PlanningValidatorStatus __attribute__((deprecated))
#else
# define DEPRECATED__planning_validator__msg__PlanningValidatorStatus __declspec(deprecated)
#endif

namespace planning_validator
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanningValidatorStatus_
{
  using Type = PlanningValidatorStatus_<ContainerAllocator>;

  explicit PlanningValidatorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_valid_finite_value = false;
      this->is_valid_interval = false;
      this->is_valid_relative_angle = false;
      this->is_valid_curvature = false;
      this->is_valid_lateral_acc = false;
      this->is_valid_longitudinal_max_acc = false;
      this->is_valid_longitudinal_min_acc = false;
      this->is_valid_steering = false;
      this->is_valid_steering_rate = false;
      this->is_valid_velocity_deviation = false;
      this->is_valid_distance_deviation = false;
      this->max_interval_distance = 0.0;
      this->max_relative_angle = 0.0;
      this->max_curvature = 0.0;
      this->max_lateral_acc = 0.0;
      this->max_longitudinal_acc = 0.0;
      this->min_longitudinal_acc = 0.0;
      this->max_steering = 0.0;
      this->max_steering_rate = 0.0;
      this->velocity_deviation = 0.0;
      this->distance_deviation = 0.0;
      this->invalid_count = 0ll;
    }
  }

  explicit PlanningValidatorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_valid_finite_value = false;
      this->is_valid_interval = false;
      this->is_valid_relative_angle = false;
      this->is_valid_curvature = false;
      this->is_valid_lateral_acc = false;
      this->is_valid_longitudinal_max_acc = false;
      this->is_valid_longitudinal_min_acc = false;
      this->is_valid_steering = false;
      this->is_valid_steering_rate = false;
      this->is_valid_velocity_deviation = false;
      this->is_valid_distance_deviation = false;
      this->max_interval_distance = 0.0;
      this->max_relative_angle = 0.0;
      this->max_curvature = 0.0;
      this->max_lateral_acc = 0.0;
      this->max_longitudinal_acc = 0.0;
      this->min_longitudinal_acc = 0.0;
      this->max_steering = 0.0;
      this->max_steering_rate = 0.0;
      this->velocity_deviation = 0.0;
      this->distance_deviation = 0.0;
      this->invalid_count = 0ll;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _is_valid_finite_value_type =
    bool;
  _is_valid_finite_value_type is_valid_finite_value;
  using _is_valid_interval_type =
    bool;
  _is_valid_interval_type is_valid_interval;
  using _is_valid_relative_angle_type =
    bool;
  _is_valid_relative_angle_type is_valid_relative_angle;
  using _is_valid_curvature_type =
    bool;
  _is_valid_curvature_type is_valid_curvature;
  using _is_valid_lateral_acc_type =
    bool;
  _is_valid_lateral_acc_type is_valid_lateral_acc;
  using _is_valid_longitudinal_max_acc_type =
    bool;
  _is_valid_longitudinal_max_acc_type is_valid_longitudinal_max_acc;
  using _is_valid_longitudinal_min_acc_type =
    bool;
  _is_valid_longitudinal_min_acc_type is_valid_longitudinal_min_acc;
  using _is_valid_steering_type =
    bool;
  _is_valid_steering_type is_valid_steering;
  using _is_valid_steering_rate_type =
    bool;
  _is_valid_steering_rate_type is_valid_steering_rate;
  using _is_valid_velocity_deviation_type =
    bool;
  _is_valid_velocity_deviation_type is_valid_velocity_deviation;
  using _is_valid_distance_deviation_type =
    bool;
  _is_valid_distance_deviation_type is_valid_distance_deviation;
  using _max_interval_distance_type =
    double;
  _max_interval_distance_type max_interval_distance;
  using _max_relative_angle_type =
    double;
  _max_relative_angle_type max_relative_angle;
  using _max_curvature_type =
    double;
  _max_curvature_type max_curvature;
  using _max_lateral_acc_type =
    double;
  _max_lateral_acc_type max_lateral_acc;
  using _max_longitudinal_acc_type =
    double;
  _max_longitudinal_acc_type max_longitudinal_acc;
  using _min_longitudinal_acc_type =
    double;
  _min_longitudinal_acc_type min_longitudinal_acc;
  using _max_steering_type =
    double;
  _max_steering_type max_steering;
  using _max_steering_rate_type =
    double;
  _max_steering_rate_type max_steering_rate;
  using _velocity_deviation_type =
    double;
  _velocity_deviation_type velocity_deviation;
  using _distance_deviation_type =
    double;
  _distance_deviation_type distance_deviation;
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
  Type & set__is_valid_finite_value(
    const bool & _arg)
  {
    this->is_valid_finite_value = _arg;
    return *this;
  }
  Type & set__is_valid_interval(
    const bool & _arg)
  {
    this->is_valid_interval = _arg;
    return *this;
  }
  Type & set__is_valid_relative_angle(
    const bool & _arg)
  {
    this->is_valid_relative_angle = _arg;
    return *this;
  }
  Type & set__is_valid_curvature(
    const bool & _arg)
  {
    this->is_valid_curvature = _arg;
    return *this;
  }
  Type & set__is_valid_lateral_acc(
    const bool & _arg)
  {
    this->is_valid_lateral_acc = _arg;
    return *this;
  }
  Type & set__is_valid_longitudinal_max_acc(
    const bool & _arg)
  {
    this->is_valid_longitudinal_max_acc = _arg;
    return *this;
  }
  Type & set__is_valid_longitudinal_min_acc(
    const bool & _arg)
  {
    this->is_valid_longitudinal_min_acc = _arg;
    return *this;
  }
  Type & set__is_valid_steering(
    const bool & _arg)
  {
    this->is_valid_steering = _arg;
    return *this;
  }
  Type & set__is_valid_steering_rate(
    const bool & _arg)
  {
    this->is_valid_steering_rate = _arg;
    return *this;
  }
  Type & set__is_valid_velocity_deviation(
    const bool & _arg)
  {
    this->is_valid_velocity_deviation = _arg;
    return *this;
  }
  Type & set__is_valid_distance_deviation(
    const bool & _arg)
  {
    this->is_valid_distance_deviation = _arg;
    return *this;
  }
  Type & set__max_interval_distance(
    const double & _arg)
  {
    this->max_interval_distance = _arg;
    return *this;
  }
  Type & set__max_relative_angle(
    const double & _arg)
  {
    this->max_relative_angle = _arg;
    return *this;
  }
  Type & set__max_curvature(
    const double & _arg)
  {
    this->max_curvature = _arg;
    return *this;
  }
  Type & set__max_lateral_acc(
    const double & _arg)
  {
    this->max_lateral_acc = _arg;
    return *this;
  }
  Type & set__max_longitudinal_acc(
    const double & _arg)
  {
    this->max_longitudinal_acc = _arg;
    return *this;
  }
  Type & set__min_longitudinal_acc(
    const double & _arg)
  {
    this->min_longitudinal_acc = _arg;
    return *this;
  }
  Type & set__max_steering(
    const double & _arg)
  {
    this->max_steering = _arg;
    return *this;
  }
  Type & set__max_steering_rate(
    const double & _arg)
  {
    this->max_steering_rate = _arg;
    return *this;
  }
  Type & set__velocity_deviation(
    const double & _arg)
  {
    this->velocity_deviation = _arg;
    return *this;
  }
  Type & set__distance_deviation(
    const double & _arg)
  {
    this->distance_deviation = _arg;
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
    planning_validator::msg::PlanningValidatorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const planning_validator::msg::PlanningValidatorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<planning_validator::msg::PlanningValidatorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<planning_validator::msg::PlanningValidatorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      planning_validator::msg::PlanningValidatorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<planning_validator::msg::PlanningValidatorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      planning_validator::msg::PlanningValidatorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<planning_validator::msg::PlanningValidatorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<planning_validator::msg::PlanningValidatorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<planning_validator::msg::PlanningValidatorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__planning_validator__msg__PlanningValidatorStatus
    std::shared_ptr<planning_validator::msg::PlanningValidatorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__planning_validator__msg__PlanningValidatorStatus
    std::shared_ptr<planning_validator::msg::PlanningValidatorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanningValidatorStatus_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->is_valid_finite_value != other.is_valid_finite_value) {
      return false;
    }
    if (this->is_valid_interval != other.is_valid_interval) {
      return false;
    }
    if (this->is_valid_relative_angle != other.is_valid_relative_angle) {
      return false;
    }
    if (this->is_valid_curvature != other.is_valid_curvature) {
      return false;
    }
    if (this->is_valid_lateral_acc != other.is_valid_lateral_acc) {
      return false;
    }
    if (this->is_valid_longitudinal_max_acc != other.is_valid_longitudinal_max_acc) {
      return false;
    }
    if (this->is_valid_longitudinal_min_acc != other.is_valid_longitudinal_min_acc) {
      return false;
    }
    if (this->is_valid_steering != other.is_valid_steering) {
      return false;
    }
    if (this->is_valid_steering_rate != other.is_valid_steering_rate) {
      return false;
    }
    if (this->is_valid_velocity_deviation != other.is_valid_velocity_deviation) {
      return false;
    }
    if (this->is_valid_distance_deviation != other.is_valid_distance_deviation) {
      return false;
    }
    if (this->max_interval_distance != other.max_interval_distance) {
      return false;
    }
    if (this->max_relative_angle != other.max_relative_angle) {
      return false;
    }
    if (this->max_curvature != other.max_curvature) {
      return false;
    }
    if (this->max_lateral_acc != other.max_lateral_acc) {
      return false;
    }
    if (this->max_longitudinal_acc != other.max_longitudinal_acc) {
      return false;
    }
    if (this->min_longitudinal_acc != other.min_longitudinal_acc) {
      return false;
    }
    if (this->max_steering != other.max_steering) {
      return false;
    }
    if (this->max_steering_rate != other.max_steering_rate) {
      return false;
    }
    if (this->velocity_deviation != other.velocity_deviation) {
      return false;
    }
    if (this->distance_deviation != other.distance_deviation) {
      return false;
    }
    if (this->invalid_count != other.invalid_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanningValidatorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanningValidatorStatus_

// alias to use template instance with default allocator
using PlanningValidatorStatus =
  planning_validator::msg::PlanningValidatorStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace planning_validator

#endif  // PLANNING_VALIDATOR__MSG__DETAIL__PLANNING_VALIDATOR_STATUS__STRUCT_HPP_
