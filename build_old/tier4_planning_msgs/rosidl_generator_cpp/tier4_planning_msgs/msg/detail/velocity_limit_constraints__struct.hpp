// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_planning_msgs:msg/VelocityLimitConstraints.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CONSTRAINTS__STRUCT_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CONSTRAINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tier4_planning_msgs__msg__VelocityLimitConstraints __attribute__((deprecated))
#else
# define DEPRECATED__tier4_planning_msgs__msg__VelocityLimitConstraints __declspec(deprecated)
#endif

namespace tier4_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VelocityLimitConstraints_
{
  using Type = VelocityLimitConstraints_<ContainerAllocator>;

  explicit VelocityLimitConstraints_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_acceleration = 0.0f;
      this->max_jerk = 0.0f;
      this->min_jerk = 0.0f;
    }
  }

  explicit VelocityLimitConstraints_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_acceleration = 0.0f;
      this->max_jerk = 0.0f;
      this->min_jerk = 0.0f;
    }
  }

  // field types and members
  using _min_acceleration_type =
    float;
  _min_acceleration_type min_acceleration;
  using _max_jerk_type =
    float;
  _max_jerk_type max_jerk;
  using _min_jerk_type =
    float;
  _min_jerk_type min_jerk;

  // setters for named parameter idiom
  Type & set__min_acceleration(
    const float & _arg)
  {
    this->min_acceleration = _arg;
    return *this;
  }
  Type & set__max_jerk(
    const float & _arg)
  {
    this->max_jerk = _arg;
    return *this;
  }
  Type & set__min_jerk(
    const float & _arg)
  {
    this->min_jerk = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_planning_msgs::msg::VelocityLimitConstraints_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_planning_msgs::msg::VelocityLimitConstraints_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_planning_msgs::msg::VelocityLimitConstraints_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_planning_msgs::msg::VelocityLimitConstraints_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_planning_msgs::msg::VelocityLimitConstraints_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_planning_msgs::msg::VelocityLimitConstraints_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_planning_msgs::msg::VelocityLimitConstraints_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_planning_msgs::msg::VelocityLimitConstraints_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_planning_msgs::msg::VelocityLimitConstraints_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_planning_msgs::msg::VelocityLimitConstraints_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_planning_msgs__msg__VelocityLimitConstraints
    std::shared_ptr<tier4_planning_msgs::msg::VelocityLimitConstraints_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_planning_msgs__msg__VelocityLimitConstraints
    std::shared_ptr<tier4_planning_msgs::msg::VelocityLimitConstraints_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VelocityLimitConstraints_ & other) const
  {
    if (this->min_acceleration != other.min_acceleration) {
      return false;
    }
    if (this->max_jerk != other.max_jerk) {
      return false;
    }
    if (this->min_jerk != other.min_jerk) {
      return false;
    }
    return true;
  }
  bool operator!=(const VelocityLimitConstraints_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VelocityLimitConstraints_

// alias to use template instance with default allocator
using VelocityLimitConstraints =
  tier4_planning_msgs::msg::VelocityLimitConstraints_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CONSTRAINTS__STRUCT_HPP_
