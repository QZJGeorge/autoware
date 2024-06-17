// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_rtc_msgs:msg/CooperateCommand.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_COMMAND__STRUCT_HPP_
#define TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'uuid'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'module'
#include "tier4_rtc_msgs/msg/detail/module__struct.hpp"
// Member 'command'
#include "tier4_rtc_msgs/msg/detail/command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_rtc_msgs__msg__CooperateCommand __attribute__((deprecated))
#else
# define DEPRECATED__tier4_rtc_msgs__msg__CooperateCommand __declspec(deprecated)
#endif

namespace tier4_rtc_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CooperateCommand_
{
  using Type = CooperateCommand_<ContainerAllocator>;

  explicit CooperateCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : uuid(_init),
    module(_init),
    command(_init)
  {
    (void)_init;
  }

  explicit CooperateCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : uuid(_alloc, _init),
    module(_alloc, _init),
    command(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _uuid_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _uuid_type uuid;
  using _module_type =
    tier4_rtc_msgs::msg::Module_<ContainerAllocator>;
  _module_type module;
  using _command_type =
    tier4_rtc_msgs::msg::Command_<ContainerAllocator>;
  _command_type command;

  // setters for named parameter idiom
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
  Type & set__command(
    const tier4_rtc_msgs::msg::Command_<ContainerAllocator> & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_rtc_msgs::msg::CooperateCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_rtc_msgs::msg::CooperateCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_rtc_msgs::msg::CooperateCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_rtc_msgs::msg::CooperateCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_rtc_msgs::msg::CooperateCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_rtc_msgs::msg::CooperateCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_rtc_msgs::msg::CooperateCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_rtc_msgs::msg::CooperateCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_rtc_msgs::msg::CooperateCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_rtc_msgs::msg::CooperateCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_rtc_msgs__msg__CooperateCommand
    std::shared_ptr<tier4_rtc_msgs::msg::CooperateCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_rtc_msgs__msg__CooperateCommand
    std::shared_ptr<tier4_rtc_msgs::msg::CooperateCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CooperateCommand_ & other) const
  {
    if (this->uuid != other.uuid) {
      return false;
    }
    if (this->module != other.module) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const CooperateCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CooperateCommand_

// alias to use template instance with default allocator
using CooperateCommand =
  tier4_rtc_msgs::msg::CooperateCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_rtc_msgs

#endif  // TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_COMMAND__STRUCT_HPP_
