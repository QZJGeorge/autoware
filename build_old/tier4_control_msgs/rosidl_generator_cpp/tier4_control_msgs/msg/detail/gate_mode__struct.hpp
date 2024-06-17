// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_control_msgs:msg/GateMode.idl
// generated code does not contain a copyright notice

#ifndef TIER4_CONTROL_MSGS__MSG__DETAIL__GATE_MODE__STRUCT_HPP_
#define TIER4_CONTROL_MSGS__MSG__DETAIL__GATE_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tier4_control_msgs__msg__GateMode __attribute__((deprecated))
#else
# define DEPRECATED__tier4_control_msgs__msg__GateMode __declspec(deprecated)
#endif

namespace tier4_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GateMode_
{
  using Type = GateMode_<ContainerAllocator>;

  explicit GateMode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0;
    }
  }

  explicit GateMode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0;
    }
  }

  // field types and members
  using _data_type =
    uint8_t;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const uint8_t & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t AUTO =
    0u;
  static constexpr uint8_t EXTERNAL =
    1u;

  // pointer types
  using RawPtr =
    tier4_control_msgs::msg::GateMode_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_control_msgs::msg::GateMode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_control_msgs::msg::GateMode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_control_msgs::msg::GateMode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_control_msgs::msg::GateMode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_control_msgs::msg::GateMode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_control_msgs::msg::GateMode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_control_msgs::msg::GateMode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_control_msgs::msg::GateMode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_control_msgs::msg::GateMode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_control_msgs__msg__GateMode
    std::shared_ptr<tier4_control_msgs::msg::GateMode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_control_msgs__msg__GateMode
    std::shared_ptr<tier4_control_msgs::msg::GateMode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GateMode_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const GateMode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GateMode_

// alias to use template instance with default allocator
using GateMode =
  tier4_control_msgs::msg::GateMode_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GateMode_<ContainerAllocator>::AUTO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GateMode_<ContainerAllocator>::EXTERNAL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace tier4_control_msgs

#endif  // TIER4_CONTROL_MSGS__MSG__DETAIL__GATE_MODE__STRUCT_HPP_
