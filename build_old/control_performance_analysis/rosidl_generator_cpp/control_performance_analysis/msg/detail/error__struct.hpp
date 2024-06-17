// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_performance_analysis:msg/Error.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__ERROR__STRUCT_HPP_
#define CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__ERROR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__control_performance_analysis__msg__Error __attribute__((deprecated))
#else
# define DEPRECATED__control_performance_analysis__msg__Error __declspec(deprecated)
#endif

namespace control_performance_analysis
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Error_
{
  using Type = Error_<ContainerAllocator>;

  explicit Error_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lateral_error = 0.0;
      this->lateral_error_velocity = 0.0;
      this->lateral_error_acceleration = 0.0;
      this->longitudinal_error = 0.0;
      this->longitudinal_error_velocity = 0.0;
      this->longitudinal_error_acceleration = 0.0;
      this->heading_error = 0.0;
      this->heading_error_velocity = 0.0;
      this->control_effort_energy = 0.0;
      this->error_energy = 0.0;
      this->value_approximation = 0.0;
      this->curvature_estimate = 0.0;
      this->curvature_estimate_pp = 0.0;
      this->vehicle_velocity_error = 0.0;
      this->tracking_curvature_discontinuity_ability = 0.0;
    }
  }

  explicit Error_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lateral_error = 0.0;
      this->lateral_error_velocity = 0.0;
      this->lateral_error_acceleration = 0.0;
      this->longitudinal_error = 0.0;
      this->longitudinal_error_velocity = 0.0;
      this->longitudinal_error_acceleration = 0.0;
      this->heading_error = 0.0;
      this->heading_error_velocity = 0.0;
      this->control_effort_energy = 0.0;
      this->error_energy = 0.0;
      this->value_approximation = 0.0;
      this->curvature_estimate = 0.0;
      this->curvature_estimate_pp = 0.0;
      this->vehicle_velocity_error = 0.0;
      this->tracking_curvature_discontinuity_ability = 0.0;
    }
  }

  // field types and members
  using _lateral_error_type =
    double;
  _lateral_error_type lateral_error;
  using _lateral_error_velocity_type =
    double;
  _lateral_error_velocity_type lateral_error_velocity;
  using _lateral_error_acceleration_type =
    double;
  _lateral_error_acceleration_type lateral_error_acceleration;
  using _longitudinal_error_type =
    double;
  _longitudinal_error_type longitudinal_error;
  using _longitudinal_error_velocity_type =
    double;
  _longitudinal_error_velocity_type longitudinal_error_velocity;
  using _longitudinal_error_acceleration_type =
    double;
  _longitudinal_error_acceleration_type longitudinal_error_acceleration;
  using _heading_error_type =
    double;
  _heading_error_type heading_error;
  using _heading_error_velocity_type =
    double;
  _heading_error_velocity_type heading_error_velocity;
  using _control_effort_energy_type =
    double;
  _control_effort_energy_type control_effort_energy;
  using _error_energy_type =
    double;
  _error_energy_type error_energy;
  using _value_approximation_type =
    double;
  _value_approximation_type value_approximation;
  using _curvature_estimate_type =
    double;
  _curvature_estimate_type curvature_estimate;
  using _curvature_estimate_pp_type =
    double;
  _curvature_estimate_pp_type curvature_estimate_pp;
  using _vehicle_velocity_error_type =
    double;
  _vehicle_velocity_error_type vehicle_velocity_error;
  using _tracking_curvature_discontinuity_ability_type =
    double;
  _tracking_curvature_discontinuity_ability_type tracking_curvature_discontinuity_ability;

  // setters for named parameter idiom
  Type & set__lateral_error(
    const double & _arg)
  {
    this->lateral_error = _arg;
    return *this;
  }
  Type & set__lateral_error_velocity(
    const double & _arg)
  {
    this->lateral_error_velocity = _arg;
    return *this;
  }
  Type & set__lateral_error_acceleration(
    const double & _arg)
  {
    this->lateral_error_acceleration = _arg;
    return *this;
  }
  Type & set__longitudinal_error(
    const double & _arg)
  {
    this->longitudinal_error = _arg;
    return *this;
  }
  Type & set__longitudinal_error_velocity(
    const double & _arg)
  {
    this->longitudinal_error_velocity = _arg;
    return *this;
  }
  Type & set__longitudinal_error_acceleration(
    const double & _arg)
  {
    this->longitudinal_error_acceleration = _arg;
    return *this;
  }
  Type & set__heading_error(
    const double & _arg)
  {
    this->heading_error = _arg;
    return *this;
  }
  Type & set__heading_error_velocity(
    const double & _arg)
  {
    this->heading_error_velocity = _arg;
    return *this;
  }
  Type & set__control_effort_energy(
    const double & _arg)
  {
    this->control_effort_energy = _arg;
    return *this;
  }
  Type & set__error_energy(
    const double & _arg)
  {
    this->error_energy = _arg;
    return *this;
  }
  Type & set__value_approximation(
    const double & _arg)
  {
    this->value_approximation = _arg;
    return *this;
  }
  Type & set__curvature_estimate(
    const double & _arg)
  {
    this->curvature_estimate = _arg;
    return *this;
  }
  Type & set__curvature_estimate_pp(
    const double & _arg)
  {
    this->curvature_estimate_pp = _arg;
    return *this;
  }
  Type & set__vehicle_velocity_error(
    const double & _arg)
  {
    this->vehicle_velocity_error = _arg;
    return *this;
  }
  Type & set__tracking_curvature_discontinuity_ability(
    const double & _arg)
  {
    this->tracking_curvature_discontinuity_ability = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_performance_analysis::msg::Error_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_performance_analysis::msg::Error_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_performance_analysis::msg::Error_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_performance_analysis::msg::Error_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_performance_analysis::msg::Error_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_performance_analysis::msg::Error_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_performance_analysis::msg::Error_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_performance_analysis::msg::Error_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_performance_analysis::msg::Error_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_performance_analysis::msg::Error_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_performance_analysis__msg__Error
    std::shared_ptr<control_performance_analysis::msg::Error_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_performance_analysis__msg__Error
    std::shared_ptr<control_performance_analysis::msg::Error_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Error_ & other) const
  {
    if (this->lateral_error != other.lateral_error) {
      return false;
    }
    if (this->lateral_error_velocity != other.lateral_error_velocity) {
      return false;
    }
    if (this->lateral_error_acceleration != other.lateral_error_acceleration) {
      return false;
    }
    if (this->longitudinal_error != other.longitudinal_error) {
      return false;
    }
    if (this->longitudinal_error_velocity != other.longitudinal_error_velocity) {
      return false;
    }
    if (this->longitudinal_error_acceleration != other.longitudinal_error_acceleration) {
      return false;
    }
    if (this->heading_error != other.heading_error) {
      return false;
    }
    if (this->heading_error_velocity != other.heading_error_velocity) {
      return false;
    }
    if (this->control_effort_energy != other.control_effort_energy) {
      return false;
    }
    if (this->error_energy != other.error_energy) {
      return false;
    }
    if (this->value_approximation != other.value_approximation) {
      return false;
    }
    if (this->curvature_estimate != other.curvature_estimate) {
      return false;
    }
    if (this->curvature_estimate_pp != other.curvature_estimate_pp) {
      return false;
    }
    if (this->vehicle_velocity_error != other.vehicle_velocity_error) {
      return false;
    }
    if (this->tracking_curvature_discontinuity_ability != other.tracking_curvature_discontinuity_ability) {
      return false;
    }
    return true;
  }
  bool operator!=(const Error_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Error_

// alias to use template instance with default allocator
using Error =
  control_performance_analysis::msg::Error_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace control_performance_analysis

#endif  // CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__ERROR__STRUCT_HPP_
