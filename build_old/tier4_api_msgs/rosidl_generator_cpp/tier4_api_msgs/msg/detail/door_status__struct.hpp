// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_api_msgs:msg/DoorStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__DOOR_STATUS__STRUCT_HPP_
#define TIER4_API_MSGS__MSG__DETAIL__DOOR_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tier4_api_msgs__msg__DoorStatus __attribute__((deprecated))
#else
# define DEPRECATED__tier4_api_msgs__msg__DoorStatus __declspec(deprecated)
#endif

namespace tier4_api_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DoorStatus_
{
  using Type = DoorStatus_<ContainerAllocator>;

  explicit DoorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0l;
    }
  }

  explicit DoorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0l;
    }
  }

  // field types and members
  using _status_type =
    int32_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const int32_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t UNKNOWN =
    0;
  static constexpr int32_t DOOR_OPENED =
    1;
  static constexpr int32_t DOOR_CLOSED =
    2;
  static constexpr int32_t DOOR_OPENING =
    3;
  static constexpr int32_t DOOR_CLOSING =
    4;
  static constexpr int32_t NOT_APPLICABLE =
    5;

  // pointer types
  using RawPtr =
    tier4_api_msgs::msg::DoorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_api_msgs::msg::DoorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_api_msgs::msg::DoorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_api_msgs::msg::DoorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_api_msgs::msg::DoorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_api_msgs::msg::DoorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_api_msgs::msg::DoorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_api_msgs::msg::DoorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_api_msgs::msg::DoorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_api_msgs::msg::DoorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_api_msgs__msg__DoorStatus
    std::shared_ptr<tier4_api_msgs::msg::DoorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_api_msgs__msg__DoorStatus
    std::shared_ptr<tier4_api_msgs::msg::DoorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DoorStatus_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const DoorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DoorStatus_

// alias to use template instance with default allocator
using DoorStatus =
  tier4_api_msgs::msg::DoorStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DoorStatus_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DoorStatus_<ContainerAllocator>::DOOR_OPENED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DoorStatus_<ContainerAllocator>::DOOR_CLOSED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DoorStatus_<ContainerAllocator>::DOOR_OPENING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DoorStatus_<ContainerAllocator>::DOOR_CLOSING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DoorStatus_<ContainerAllocator>::NOT_APPLICABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace tier4_api_msgs

#endif  // TIER4_API_MSGS__MSG__DETAIL__DOOR_STATUS__STRUCT_HPP_
