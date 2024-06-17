// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_external_api_msgs:msg/TurnSignalStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__TURN_SIGNAL_STAMPED__STRUCT_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__TURN_SIGNAL_STAMPED__STRUCT_HPP_

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
// Member 'turn_signal'
#include "tier4_external_api_msgs/msg/detail/turn_signal__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_external_api_msgs__msg__TurnSignalStamped __attribute__((deprecated))
#else
# define DEPRECATED__tier4_external_api_msgs__msg__TurnSignalStamped __declspec(deprecated)
#endif

namespace tier4_external_api_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TurnSignalStamped_
{
  using Type = TurnSignalStamped_<ContainerAllocator>;

  explicit TurnSignalStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    turn_signal(_init)
  {
    (void)_init;
  }

  explicit TurnSignalStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    turn_signal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _turn_signal_type =
    tier4_external_api_msgs::msg::TurnSignal_<ContainerAllocator>;
  _turn_signal_type turn_signal;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__turn_signal(
    const tier4_external_api_msgs::msg::TurnSignal_<ContainerAllocator> & _arg)
  {
    this->turn_signal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_external_api_msgs::msg::TurnSignalStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_external_api_msgs::msg::TurnSignalStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_external_api_msgs::msg::TurnSignalStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_external_api_msgs::msg::TurnSignalStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::msg::TurnSignalStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::msg::TurnSignalStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::msg::TurnSignalStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::msg::TurnSignalStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_external_api_msgs::msg::TurnSignalStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_external_api_msgs::msg::TurnSignalStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_external_api_msgs__msg__TurnSignalStamped
    std::shared_ptr<tier4_external_api_msgs::msg::TurnSignalStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_external_api_msgs__msg__TurnSignalStamped
    std::shared_ptr<tier4_external_api_msgs::msg::TurnSignalStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurnSignalStamped_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->turn_signal != other.turn_signal) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurnSignalStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurnSignalStamped_

// alias to use template instance with default allocator
using TurnSignalStamped =
  tier4_external_api_msgs::msg::TurnSignalStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__TURN_SIGNAL_STAMPED__STRUCT_HPP_
