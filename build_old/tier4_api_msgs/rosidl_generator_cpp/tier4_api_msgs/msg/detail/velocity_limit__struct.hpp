// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_api_msgs:msg/VelocityLimit.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__VELOCITY_LIMIT__STRUCT_HPP_
#define TIER4_API_MSGS__MSG__DETAIL__VELOCITY_LIMIT__STRUCT_HPP_

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
# define DEPRECATED__tier4_api_msgs__msg__VelocityLimit __attribute__((deprecated))
#else
# define DEPRECATED__tier4_api_msgs__msg__VelocityLimit __declspec(deprecated)
#endif

namespace tier4_api_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VelocityLimit_
{
  using Type = VelocityLimit_<ContainerAllocator>;

  explicit VelocityLimit_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_velocity = 0.0f;
    }
  }

  explicit VelocityLimit_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_velocity = 0.0f;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _max_velocity_type =
    float;
  _max_velocity_type max_velocity;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__max_velocity(
    const float & _arg)
  {
    this->max_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_api_msgs::msg::VelocityLimit_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_api_msgs::msg::VelocityLimit_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_api_msgs::msg::VelocityLimit_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_api_msgs::msg::VelocityLimit_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_api_msgs::msg::VelocityLimit_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_api_msgs::msg::VelocityLimit_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_api_msgs::msg::VelocityLimit_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_api_msgs::msg::VelocityLimit_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_api_msgs::msg::VelocityLimit_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_api_msgs::msg::VelocityLimit_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_api_msgs__msg__VelocityLimit
    std::shared_ptr<tier4_api_msgs::msg::VelocityLimit_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_api_msgs__msg__VelocityLimit
    std::shared_ptr<tier4_api_msgs::msg::VelocityLimit_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VelocityLimit_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->max_velocity != other.max_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const VelocityLimit_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VelocityLimit_

// alias to use template instance with default allocator
using VelocityLimit =
  tier4_api_msgs::msg::VelocityLimit_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_api_msgs

#endif  // TIER4_API_MSGS__MSG__DETAIL__VELOCITY_LIMIT__STRUCT_HPP_
