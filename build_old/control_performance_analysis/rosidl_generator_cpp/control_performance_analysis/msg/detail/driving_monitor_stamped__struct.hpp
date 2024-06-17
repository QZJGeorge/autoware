// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_performance_analysis:msg/DrivingMonitorStamped.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__DRIVING_MONITOR_STAMPED__STRUCT_HPP_
#define CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__DRIVING_MONITOR_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'longitudinal_acceleration'
// Member 'longitudinal_jerk'
// Member 'lateral_acceleration'
// Member 'lateral_jerk'
// Member 'desired_steering_angle'
// Member 'controller_processing_time'
#include "control_performance_analysis/msg/detail/float_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_performance_analysis__msg__DrivingMonitorStamped __attribute__((deprecated))
#else
# define DEPRECATED__control_performance_analysis__msg__DrivingMonitorStamped __declspec(deprecated)
#endif

namespace control_performance_analysis
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DrivingMonitorStamped_
{
  using Type = DrivingMonitorStamped_<ContainerAllocator>;

  explicit DrivingMonitorStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : longitudinal_acceleration(_init),
    longitudinal_jerk(_init),
    lateral_acceleration(_init),
    lateral_jerk(_init),
    desired_steering_angle(_init),
    controller_processing_time(_init)
  {
    (void)_init;
  }

  explicit DrivingMonitorStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : longitudinal_acceleration(_alloc, _init),
    longitudinal_jerk(_alloc, _init),
    lateral_acceleration(_alloc, _init),
    lateral_jerk(_alloc, _init),
    desired_steering_angle(_alloc, _init),
    controller_processing_time(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _longitudinal_acceleration_type =
    control_performance_analysis::msg::FloatStamped_<ContainerAllocator>;
  _longitudinal_acceleration_type longitudinal_acceleration;
  using _longitudinal_jerk_type =
    control_performance_analysis::msg::FloatStamped_<ContainerAllocator>;
  _longitudinal_jerk_type longitudinal_jerk;
  using _lateral_acceleration_type =
    control_performance_analysis::msg::FloatStamped_<ContainerAllocator>;
  _lateral_acceleration_type lateral_acceleration;
  using _lateral_jerk_type =
    control_performance_analysis::msg::FloatStamped_<ContainerAllocator>;
  _lateral_jerk_type lateral_jerk;
  using _desired_steering_angle_type =
    control_performance_analysis::msg::FloatStamped_<ContainerAllocator>;
  _desired_steering_angle_type desired_steering_angle;
  using _controller_processing_time_type =
    control_performance_analysis::msg::FloatStamped_<ContainerAllocator>;
  _controller_processing_time_type controller_processing_time;

  // setters for named parameter idiom
  Type & set__longitudinal_acceleration(
    const control_performance_analysis::msg::FloatStamped_<ContainerAllocator> & _arg)
  {
    this->longitudinal_acceleration = _arg;
    return *this;
  }
  Type & set__longitudinal_jerk(
    const control_performance_analysis::msg::FloatStamped_<ContainerAllocator> & _arg)
  {
    this->longitudinal_jerk = _arg;
    return *this;
  }
  Type & set__lateral_acceleration(
    const control_performance_analysis::msg::FloatStamped_<ContainerAllocator> & _arg)
  {
    this->lateral_acceleration = _arg;
    return *this;
  }
  Type & set__lateral_jerk(
    const control_performance_analysis::msg::FloatStamped_<ContainerAllocator> & _arg)
  {
    this->lateral_jerk = _arg;
    return *this;
  }
  Type & set__desired_steering_angle(
    const control_performance_analysis::msg::FloatStamped_<ContainerAllocator> & _arg)
  {
    this->desired_steering_angle = _arg;
    return *this;
  }
  Type & set__controller_processing_time(
    const control_performance_analysis::msg::FloatStamped_<ContainerAllocator> & _arg)
  {
    this->controller_processing_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_performance_analysis::msg::DrivingMonitorStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_performance_analysis::msg::DrivingMonitorStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_performance_analysis::msg::DrivingMonitorStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_performance_analysis::msg::DrivingMonitorStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_performance_analysis::msg::DrivingMonitorStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_performance_analysis::msg::DrivingMonitorStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_performance_analysis::msg::DrivingMonitorStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_performance_analysis::msg::DrivingMonitorStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_performance_analysis::msg::DrivingMonitorStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_performance_analysis::msg::DrivingMonitorStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_performance_analysis__msg__DrivingMonitorStamped
    std::shared_ptr<control_performance_analysis::msg::DrivingMonitorStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_performance_analysis__msg__DrivingMonitorStamped
    std::shared_ptr<control_performance_analysis::msg::DrivingMonitorStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrivingMonitorStamped_ & other) const
  {
    if (this->longitudinal_acceleration != other.longitudinal_acceleration) {
      return false;
    }
    if (this->longitudinal_jerk != other.longitudinal_jerk) {
      return false;
    }
    if (this->lateral_acceleration != other.lateral_acceleration) {
      return false;
    }
    if (this->lateral_jerk != other.lateral_jerk) {
      return false;
    }
    if (this->desired_steering_angle != other.desired_steering_angle) {
      return false;
    }
    if (this->controller_processing_time != other.controller_processing_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrivingMonitorStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrivingMonitorStamped_

// alias to use template instance with default allocator
using DrivingMonitorStamped =
  control_performance_analysis::msg::DrivingMonitorStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace control_performance_analysis

#endif  // CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__DRIVING_MONITOR_STAMPED__STRUCT_HPP_
