// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/Lamps.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__LAMPS__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__LAMPS__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__Lamps __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__Lamps __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Lamps_
{
  using Type = Lamps_<ContainerAllocator>;

  explicit Lamps_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->turn_signal = 0;
      this->emergency_signal = 0;
    }
  }

  explicit Lamps_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->turn_signal = 0;
      this->emergency_signal = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _turn_signal_type =
    int8_t;
  _turn_signal_type turn_signal;
  using _emergency_signal_type =
    int8_t;
  _emergency_signal_type emergency_signal;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__turn_signal(
    const int8_t & _arg)
  {
    this->turn_signal = _arg;
    return *this;
  }
  Type & set__emergency_signal(
    const int8_t & _arg)
  {
    this->emergency_signal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::Lamps_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::Lamps_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::Lamps_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::Lamps_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::Lamps_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::Lamps_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::Lamps_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::Lamps_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::Lamps_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::Lamps_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__Lamps
    std::shared_ptr<morai_msgs::msg::Lamps_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__Lamps
    std::shared_ptr<morai_msgs::msg::Lamps_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Lamps_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->turn_signal != other.turn_signal) {
      return false;
    }
    if (this->emergency_signal != other.emergency_signal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Lamps_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Lamps_

// alias to use template instance with default allocator
using Lamps =
  morai_msgs::msg::Lamps_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__LAMPS__STRUCT_HPP_
