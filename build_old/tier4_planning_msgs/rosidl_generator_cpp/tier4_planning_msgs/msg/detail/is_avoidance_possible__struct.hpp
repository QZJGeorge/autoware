// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_planning_msgs:msg/IsAvoidancePossible.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__IS_AVOIDANCE_POSSIBLE__STRUCT_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__IS_AVOIDANCE_POSSIBLE__STRUCT_HPP_

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
# define DEPRECATED__tier4_planning_msgs__msg__IsAvoidancePossible __attribute__((deprecated))
#else
# define DEPRECATED__tier4_planning_msgs__msg__IsAvoidancePossible __declspec(deprecated)
#endif

namespace tier4_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IsAvoidancePossible_
{
  using Type = IsAvoidancePossible_<ContainerAllocator>;

  explicit IsAvoidancePossible_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_avoidance_possible = false;
    }
  }

  explicit IsAvoidancePossible_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_avoidance_possible = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _is_avoidance_possible_type =
    bool;
  _is_avoidance_possible_type is_avoidance_possible;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__is_avoidance_possible(
    const bool & _arg)
  {
    this->is_avoidance_possible = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_planning_msgs::msg::IsAvoidancePossible_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_planning_msgs::msg::IsAvoidancePossible_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_planning_msgs::msg::IsAvoidancePossible_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_planning_msgs::msg::IsAvoidancePossible_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_planning_msgs::msg::IsAvoidancePossible_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_planning_msgs::msg::IsAvoidancePossible_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_planning_msgs::msg::IsAvoidancePossible_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_planning_msgs::msg::IsAvoidancePossible_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_planning_msgs::msg::IsAvoidancePossible_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_planning_msgs::msg::IsAvoidancePossible_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_planning_msgs__msg__IsAvoidancePossible
    std::shared_ptr<tier4_planning_msgs::msg::IsAvoidancePossible_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_planning_msgs__msg__IsAvoidancePossible
    std::shared_ptr<tier4_planning_msgs::msg::IsAvoidancePossible_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IsAvoidancePossible_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->is_avoidance_possible != other.is_avoidance_possible) {
      return false;
    }
    return true;
  }
  bool operator!=(const IsAvoidancePossible_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IsAvoidancePossible_

// alias to use template instance with default allocator
using IsAvoidancePossible =
  tier4_planning_msgs::msg::IsAvoidancePossible_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__IS_AVOIDANCE_POSSIBLE__STRUCT_HPP_
