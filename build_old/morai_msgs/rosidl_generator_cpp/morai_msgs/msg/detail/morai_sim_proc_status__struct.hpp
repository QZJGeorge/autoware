// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/MoraiSimProcStatus.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MORAI_SIM_PROC_STATUS__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__MORAI_SIM_PROC_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'latest_command_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__MoraiSimProcStatus __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__MoraiSimProcStatus __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MoraiSimProcStatus_
{
  using Type = MoraiSimProcStatus_<ContainerAllocator>;

  explicit MoraiSimProcStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    latest_command_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_result = 0;
      this->current_mode = 0;
      this->current_status = 0;
    }
  }

  explicit MoraiSimProcStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    latest_command_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_result = 0;
      this->current_mode = 0;
      this->current_status = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _latest_command_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _latest_command_time_type latest_command_time;
  using _command_result_type =
    uint8_t;
  _command_result_type command_result;
  using _current_mode_type =
    uint8_t;
  _current_mode_type current_mode;
  using _current_status_type =
    uint8_t;
  _current_status_type current_status;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__latest_command_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->latest_command_time = _arg;
    return *this;
  }
  Type & set__command_result(
    const uint8_t & _arg)
  {
    this->command_result = _arg;
    return *this;
  }
  Type & set__current_mode(
    const uint8_t & _arg)
  {
    this->current_mode = _arg;
    return *this;
  }
  Type & set__current_status(
    const uint8_t & _arg)
  {
    this->current_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::MoraiSimProcStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::MoraiSimProcStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::MoraiSimProcStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::MoraiSimProcStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::MoraiSimProcStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::MoraiSimProcStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::MoraiSimProcStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::MoraiSimProcStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::MoraiSimProcStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::MoraiSimProcStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__MoraiSimProcStatus
    std::shared_ptr<morai_msgs::msg::MoraiSimProcStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__MoraiSimProcStatus
    std::shared_ptr<morai_msgs::msg::MoraiSimProcStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoraiSimProcStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->latest_command_time != other.latest_command_time) {
      return false;
    }
    if (this->command_result != other.command_result) {
      return false;
    }
    if (this->current_mode != other.current_mode) {
      return false;
    }
    if (this->current_status != other.current_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoraiSimProcStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoraiSimProcStatus_

// alias to use template instance with default allocator
using MoraiSimProcStatus =
  morai_msgs::msg::MoraiSimProcStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__MORAI_SIM_PROC_STATUS__STRUCT_HPP_
