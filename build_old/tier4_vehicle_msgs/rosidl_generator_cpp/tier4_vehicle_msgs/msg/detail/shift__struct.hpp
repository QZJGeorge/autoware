// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_vehicle_msgs:msg/Shift.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__SHIFT__STRUCT_HPP_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__SHIFT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tier4_vehicle_msgs__msg__Shift __attribute__((deprecated))
#else
# define DEPRECATED__tier4_vehicle_msgs__msg__Shift __declspec(deprecated)
#endif

namespace tier4_vehicle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Shift_
{
  using Type = Shift_<ContainerAllocator>;

  explicit Shift_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0l;
    }
  }

  explicit Shift_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0l;
    }
  }

  // field types and members
  using _data_type =
    int32_t;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const int32_t & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NONE =
    0u;
  static constexpr uint8_t PARKING =
    1u;
  static constexpr uint8_t REVERSE =
    2u;
  static constexpr uint8_t NEUTRAL =
    3u;
  static constexpr uint8_t DRIVE =
    4u;
  static constexpr uint8_t LOW =
    5u;

  // pointer types
  using RawPtr =
    tier4_vehicle_msgs::msg::Shift_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_vehicle_msgs::msg::Shift_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_vehicle_msgs::msg::Shift_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_vehicle_msgs::msg::Shift_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_vehicle_msgs::msg::Shift_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_vehicle_msgs::msg::Shift_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_vehicle_msgs::msg::Shift_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_vehicle_msgs::msg::Shift_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_vehicle_msgs::msg::Shift_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_vehicle_msgs::msg::Shift_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_vehicle_msgs__msg__Shift
    std::shared_ptr<tier4_vehicle_msgs::msg::Shift_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_vehicle_msgs__msg__Shift
    std::shared_ptr<tier4_vehicle_msgs::msg::Shift_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Shift_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Shift_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Shift_

// alias to use template instance with default allocator
using Shift =
  tier4_vehicle_msgs::msg::Shift_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Shift_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Shift_<ContainerAllocator>::PARKING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Shift_<ContainerAllocator>::REVERSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Shift_<ContainerAllocator>::NEUTRAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Shift_<ContainerAllocator>::DRIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Shift_<ContainerAllocator>::LOW;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace tier4_vehicle_msgs

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__SHIFT__STRUCT_HPP_
