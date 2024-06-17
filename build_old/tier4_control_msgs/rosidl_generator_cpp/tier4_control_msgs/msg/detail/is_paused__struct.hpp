// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_control_msgs:msg/IsPaused.idl
// generated code does not contain a copyright notice

#ifndef TIER4_CONTROL_MSGS__MSG__DETAIL__IS_PAUSED__STRUCT_HPP_
#define TIER4_CONTROL_MSGS__MSG__DETAIL__IS_PAUSED__STRUCT_HPP_

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
# define DEPRECATED__tier4_control_msgs__msg__IsPaused __attribute__((deprecated))
#else
# define DEPRECATED__tier4_control_msgs__msg__IsPaused __declspec(deprecated)
#endif

namespace tier4_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IsPaused_
{
  using Type = IsPaused_<ContainerAllocator>;

  explicit IsPaused_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = false;
    }
  }

  explicit IsPaused_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _data_type =
    bool;
  _data_type data;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__data(
    const bool & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_control_msgs::msg::IsPaused_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_control_msgs::msg::IsPaused_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_control_msgs::msg::IsPaused_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_control_msgs::msg::IsPaused_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_control_msgs::msg::IsPaused_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_control_msgs::msg::IsPaused_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_control_msgs::msg::IsPaused_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_control_msgs::msg::IsPaused_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_control_msgs::msg::IsPaused_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_control_msgs::msg::IsPaused_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_control_msgs__msg__IsPaused
    std::shared_ptr<tier4_control_msgs::msg::IsPaused_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_control_msgs__msg__IsPaused
    std::shared_ptr<tier4_control_msgs::msg::IsPaused_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IsPaused_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const IsPaused_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IsPaused_

// alias to use template instance with default allocator
using IsPaused =
  tier4_control_msgs::msg::IsPaused_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_control_msgs

#endif  // TIER4_CONTROL_MSGS__MSG__DETAIL__IS_PAUSED__STRUCT_HPP_
