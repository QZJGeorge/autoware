// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_system_msgs:msg/OperationModeAvailability.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__OPERATION_MODE_AVAILABILITY__STRUCT_HPP_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__OPERATION_MODE_AVAILABILITY__STRUCT_HPP_

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
# define DEPRECATED__tier4_system_msgs__msg__OperationModeAvailability __attribute__((deprecated))
#else
# define DEPRECATED__tier4_system_msgs__msg__OperationModeAvailability __declspec(deprecated)
#endif

namespace tier4_system_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OperationModeAvailability_
{
  using Type = OperationModeAvailability_<ContainerAllocator>;

  explicit OperationModeAvailability_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stop = false;
      this->autonomous = false;
      this->local = false;
      this->remote = false;
      this->emergency_stop = false;
      this->comfortable_stop = false;
      this->pull_over = false;
    }
  }

  explicit OperationModeAvailability_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stop = false;
      this->autonomous = false;
      this->local = false;
      this->remote = false;
      this->emergency_stop = false;
      this->comfortable_stop = false;
      this->pull_over = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _stop_type =
    bool;
  _stop_type stop;
  using _autonomous_type =
    bool;
  _autonomous_type autonomous;
  using _local_type =
    bool;
  _local_type local;
  using _remote_type =
    bool;
  _remote_type remote;
  using _emergency_stop_type =
    bool;
  _emergency_stop_type emergency_stop;
  using _comfortable_stop_type =
    bool;
  _comfortable_stop_type comfortable_stop;
  using _pull_over_type =
    bool;
  _pull_over_type pull_over;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__stop(
    const bool & _arg)
  {
    this->stop = _arg;
    return *this;
  }
  Type & set__autonomous(
    const bool & _arg)
  {
    this->autonomous = _arg;
    return *this;
  }
  Type & set__local(
    const bool & _arg)
  {
    this->local = _arg;
    return *this;
  }
  Type & set__remote(
    const bool & _arg)
  {
    this->remote = _arg;
    return *this;
  }
  Type & set__emergency_stop(
    const bool & _arg)
  {
    this->emergency_stop = _arg;
    return *this;
  }
  Type & set__comfortable_stop(
    const bool & _arg)
  {
    this->comfortable_stop = _arg;
    return *this;
  }
  Type & set__pull_over(
    const bool & _arg)
  {
    this->pull_over = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_system_msgs::msg::OperationModeAvailability_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_system_msgs::msg::OperationModeAvailability_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_system_msgs::msg::OperationModeAvailability_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_system_msgs::msg::OperationModeAvailability_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_system_msgs::msg::OperationModeAvailability_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_system_msgs::msg::OperationModeAvailability_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_system_msgs::msg::OperationModeAvailability_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_system_msgs::msg::OperationModeAvailability_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_system_msgs::msg::OperationModeAvailability_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_system_msgs::msg::OperationModeAvailability_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_system_msgs__msg__OperationModeAvailability
    std::shared_ptr<tier4_system_msgs::msg::OperationModeAvailability_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_system_msgs__msg__OperationModeAvailability
    std::shared_ptr<tier4_system_msgs::msg::OperationModeAvailability_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OperationModeAvailability_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->stop != other.stop) {
      return false;
    }
    if (this->autonomous != other.autonomous) {
      return false;
    }
    if (this->local != other.local) {
      return false;
    }
    if (this->remote != other.remote) {
      return false;
    }
    if (this->emergency_stop != other.emergency_stop) {
      return false;
    }
    if (this->comfortable_stop != other.comfortable_stop) {
      return false;
    }
    if (this->pull_over != other.pull_over) {
      return false;
    }
    return true;
  }
  bool operator!=(const OperationModeAvailability_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OperationModeAvailability_

// alias to use template instance with default allocator
using OperationModeAvailability =
  tier4_system_msgs::msg::OperationModeAvailability_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_system_msgs

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__OPERATION_MODE_AVAILABILITY__STRUCT_HPP_
