// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/SyncModeCtrlCmd.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SYNC_MODE_CTRL_CMD__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__SYNC_MODE_CTRL_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'command'
#include "morai_msgs/msg/detail/ctrl_cmd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__SyncModeCtrlCmd __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__SyncModeCtrlCmd __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SyncModeCtrlCmd_
{
  using Type = SyncModeCtrlCmd_<ContainerAllocator>;

  explicit SyncModeCtrlCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame = 0ull;
      this->sensor_capture = false;
    }
  }

  explicit SyncModeCtrlCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame = 0ull;
      this->sensor_capture = false;
    }
  }

  // field types and members
  using _frame_type =
    uint64_t;
  _frame_type frame;
  using _command_type =
    morai_msgs::msg::CtrlCmd_<ContainerAllocator>;
  _command_type command;
  using _sensor_capture_type =
    bool;
  _sensor_capture_type sensor_capture;

  // setters for named parameter idiom
  Type & set__frame(
    const uint64_t & _arg)
  {
    this->frame = _arg;
    return *this;
  }
  Type & set__command(
    const morai_msgs::msg::CtrlCmd_<ContainerAllocator> & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__sensor_capture(
    const bool & _arg)
  {
    this->sensor_capture = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::SyncModeCtrlCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::SyncModeCtrlCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::SyncModeCtrlCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::SyncModeCtrlCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::SyncModeCtrlCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::SyncModeCtrlCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::SyncModeCtrlCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::SyncModeCtrlCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::SyncModeCtrlCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::SyncModeCtrlCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__SyncModeCtrlCmd
    std::shared_ptr<morai_msgs::msg::SyncModeCtrlCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__SyncModeCtrlCmd
    std::shared_ptr<morai_msgs::msg::SyncModeCtrlCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SyncModeCtrlCmd_ & other) const
  {
    if (this->frame != other.frame) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    if (this->sensor_capture != other.sensor_capture) {
      return false;
    }
    return true;
  }
  bool operator!=(const SyncModeCtrlCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SyncModeCtrlCmd_

// alias to use template instance with default allocator
using SyncModeCtrlCmd =
  morai_msgs::msg::SyncModeCtrlCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__SYNC_MODE_CTRL_CMD__STRUCT_HPP_
