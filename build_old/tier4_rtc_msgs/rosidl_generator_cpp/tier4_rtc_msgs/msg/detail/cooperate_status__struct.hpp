// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_rtc_msgs:msg/CooperateStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_STATUS__STRUCT_HPP_
#define TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_STATUS__STRUCT_HPP_

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
// Member 'uuid'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'module'
#include "tier4_rtc_msgs/msg/detail/module__struct.hpp"
// Member 'command_status'
#include "tier4_rtc_msgs/msg/detail/command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_rtc_msgs__msg__CooperateStatus __attribute__((deprecated))
#else
# define DEPRECATED__tier4_rtc_msgs__msg__CooperateStatus __declspec(deprecated)
#endif

namespace tier4_rtc_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CooperateStatus_
{
  using Type = CooperateStatus_<ContainerAllocator>;

  explicit CooperateStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    uuid(_init),
    module(_init),
    command_status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->safe = false;
      this->auto_mode = false;
      this->start_distance = 0.0f;
      this->finish_distance = 0.0f;
    }
  }

  explicit CooperateStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    uuid(_alloc, _init),
    module(_alloc, _init),
    command_status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->safe = false;
      this->auto_mode = false;
      this->start_distance = 0.0f;
      this->finish_distance = 0.0f;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _uuid_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _uuid_type uuid;
  using _module_type =
    tier4_rtc_msgs::msg::Module_<ContainerAllocator>;
  _module_type module;
  using _safe_type =
    bool;
  _safe_type safe;
  using _command_status_type =
    tier4_rtc_msgs::msg::Command_<ContainerAllocator>;
  _command_status_type command_status;
  using _auto_mode_type =
    bool;
  _auto_mode_type auto_mode;
  using _start_distance_type =
    float;
  _start_distance_type start_distance;
  using _finish_distance_type =
    float;
  _finish_distance_type finish_distance;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__uuid(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->uuid = _arg;
    return *this;
  }
  Type & set__module(
    const tier4_rtc_msgs::msg::Module_<ContainerAllocator> & _arg)
  {
    this->module = _arg;
    return *this;
  }
  Type & set__safe(
    const bool & _arg)
  {
    this->safe = _arg;
    return *this;
  }
  Type & set__command_status(
    const tier4_rtc_msgs::msg::Command_<ContainerAllocator> & _arg)
  {
    this->command_status = _arg;
    return *this;
  }
  Type & set__auto_mode(
    const bool & _arg)
  {
    this->auto_mode = _arg;
    return *this;
  }
  Type & set__start_distance(
    const float & _arg)
  {
    this->start_distance = _arg;
    return *this;
  }
  Type & set__finish_distance(
    const float & _arg)
  {
    this->finish_distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_rtc_msgs::msg::CooperateStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_rtc_msgs::msg::CooperateStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_rtc_msgs::msg::CooperateStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_rtc_msgs::msg::CooperateStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_rtc_msgs::msg::CooperateStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_rtc_msgs::msg::CooperateStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_rtc_msgs::msg::CooperateStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_rtc_msgs::msg::CooperateStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_rtc_msgs::msg::CooperateStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_rtc_msgs::msg::CooperateStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_rtc_msgs__msg__CooperateStatus
    std::shared_ptr<tier4_rtc_msgs::msg::CooperateStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_rtc_msgs__msg__CooperateStatus
    std::shared_ptr<tier4_rtc_msgs::msg::CooperateStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CooperateStatus_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->uuid != other.uuid) {
      return false;
    }
    if (this->module != other.module) {
      return false;
    }
    if (this->safe != other.safe) {
      return false;
    }
    if (this->command_status != other.command_status) {
      return false;
    }
    if (this->auto_mode != other.auto_mode) {
      return false;
    }
    if (this->start_distance != other.start_distance) {
      return false;
    }
    if (this->finish_distance != other.finish_distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const CooperateStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CooperateStatus_

// alias to use template instance with default allocator
using CooperateStatus =
  tier4_rtc_msgs::msg::CooperateStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_rtc_msgs

#endif  // TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_STATUS__STRUCT_HPP_
