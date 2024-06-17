// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_rtc_msgs:msg/AutoModeStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__MSG__DETAIL__AUTO_MODE_STATUS__STRUCT_HPP_
#define TIER4_RTC_MSGS__MSG__DETAIL__AUTO_MODE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'module'
#include "tier4_rtc_msgs/msg/detail/module__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_rtc_msgs__msg__AutoModeStatus __attribute__((deprecated))
#else
# define DEPRECATED__tier4_rtc_msgs__msg__AutoModeStatus __declspec(deprecated)
#endif

namespace tier4_rtc_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AutoModeStatus_
{
  using Type = AutoModeStatus_<ContainerAllocator>;

  explicit AutoModeStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : module(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_auto_mode = false;
    }
  }

  explicit AutoModeStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : module(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_auto_mode = false;
    }
  }

  // field types and members
  using _module_type =
    tier4_rtc_msgs::msg::Module_<ContainerAllocator>;
  _module_type module;
  using _is_auto_mode_type =
    bool;
  _is_auto_mode_type is_auto_mode;

  // setters for named parameter idiom
  Type & set__module(
    const tier4_rtc_msgs::msg::Module_<ContainerAllocator> & _arg)
  {
    this->module = _arg;
    return *this;
  }
  Type & set__is_auto_mode(
    const bool & _arg)
  {
    this->is_auto_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_rtc_msgs::msg::AutoModeStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_rtc_msgs::msg::AutoModeStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_rtc_msgs::msg::AutoModeStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_rtc_msgs::msg::AutoModeStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_rtc_msgs::msg::AutoModeStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_rtc_msgs::msg::AutoModeStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_rtc_msgs::msg::AutoModeStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_rtc_msgs::msg::AutoModeStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_rtc_msgs::msg::AutoModeStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_rtc_msgs::msg::AutoModeStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_rtc_msgs__msg__AutoModeStatus
    std::shared_ptr<tier4_rtc_msgs::msg::AutoModeStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_rtc_msgs__msg__AutoModeStatus
    std::shared_ptr<tier4_rtc_msgs::msg::AutoModeStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutoModeStatus_ & other) const
  {
    if (this->module != other.module) {
      return false;
    }
    if (this->is_auto_mode != other.is_auto_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutoModeStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutoModeStatus_

// alias to use template instance with default allocator
using AutoModeStatus =
  tier4_rtc_msgs::msg::AutoModeStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_rtc_msgs

#endif  // TIER4_RTC_MSGS__MSG__DETAIL__AUTO_MODE_STATUS__STRUCT_HPP_
