// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mcity_msgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef MCITY_MSGS__MSG__DETAIL__CONTROL__STRUCT_HPP_
#define MCITY_MSGS__MSG__DETAIL__CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mcity_msgs__msg__Control __attribute__((deprecated))
#else
# define DEPRECATED__mcity_msgs__msg__Control __declspec(deprecated)
#endif

namespace mcity_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Control_
{
  using Type = Control_<ContainerAllocator>;

  explicit Control_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->count = 0l;
      this->brake_cmd = 0.0;
      this->throttle_cmd = 0.0;
      this->steering_cmd = 0.0;
      this->gear_cmd = 0;
      this->turn_signal_cmd = 0;
    }
  }

  explicit Control_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->count = 0l;
      this->brake_cmd = 0.0;
      this->throttle_cmd = 0.0;
      this->steering_cmd = 0.0;
      this->gear_cmd = 0;
      this->turn_signal_cmd = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    double;
  _timestamp_type timestamp;
  using _count_type =
    int32_t;
  _count_type count;
  using _brake_cmd_type =
    double;
  _brake_cmd_type brake_cmd;
  using _throttle_cmd_type =
    double;
  _throttle_cmd_type throttle_cmd;
  using _steering_cmd_type =
    double;
  _steering_cmd_type steering_cmd;
  using _gear_cmd_type =
    int16_t;
  _gear_cmd_type gear_cmd;
  using _turn_signal_cmd_type =
    int16_t;
  _turn_signal_cmd_type turn_signal_cmd;

  // setters for named parameter idiom
  Type & set__timestamp(
    const double & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__count(
    const int32_t & _arg)
  {
    this->count = _arg;
    return *this;
  }
  Type & set__brake_cmd(
    const double & _arg)
  {
    this->brake_cmd = _arg;
    return *this;
  }
  Type & set__throttle_cmd(
    const double & _arg)
  {
    this->throttle_cmd = _arg;
    return *this;
  }
  Type & set__steering_cmd(
    const double & _arg)
  {
    this->steering_cmd = _arg;
    return *this;
  }
  Type & set__gear_cmd(
    const int16_t & _arg)
  {
    this->gear_cmd = _arg;
    return *this;
  }
  Type & set__turn_signal_cmd(
    const int16_t & _arg)
  {
    this->turn_signal_cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mcity_msgs::msg::Control_<ContainerAllocator> *;
  using ConstRawPtr =
    const mcity_msgs::msg::Control_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mcity_msgs::msg::Control_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mcity_msgs::msg::Control_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mcity_msgs::msg::Control_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mcity_msgs::msg::Control_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mcity_msgs::msg::Control_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mcity_msgs::msg::Control_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mcity_msgs::msg::Control_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mcity_msgs::msg::Control_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mcity_msgs__msg__Control
    std::shared_ptr<mcity_msgs::msg::Control_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mcity_msgs__msg__Control
    std::shared_ptr<mcity_msgs::msg::Control_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Control_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->count != other.count) {
      return false;
    }
    if (this->brake_cmd != other.brake_cmd) {
      return false;
    }
    if (this->throttle_cmd != other.throttle_cmd) {
      return false;
    }
    if (this->steering_cmd != other.steering_cmd) {
      return false;
    }
    if (this->gear_cmd != other.gear_cmd) {
      return false;
    }
    if (this->turn_signal_cmd != other.turn_signal_cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const Control_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Control_

// alias to use template instance with default allocator
using Control =
  mcity_msgs::msg::Control_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mcity_msgs

#endif  // MCITY_MSGS__MSG__DETAIL__CONTROL__STRUCT_HPP_
