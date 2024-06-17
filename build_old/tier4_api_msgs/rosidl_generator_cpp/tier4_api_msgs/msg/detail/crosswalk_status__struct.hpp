// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_api_msgs:msg/CrosswalkStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__CROSSWALK_STATUS__STRUCT_HPP_
#define TIER4_API_MSGS__MSG__DETAIL__CROSSWALK_STATUS__STRUCT_HPP_

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
# define DEPRECATED__tier4_api_msgs__msg__CrosswalkStatus __attribute__((deprecated))
#else
# define DEPRECATED__tier4_api_msgs__msg__CrosswalkStatus __declspec(deprecated)
#endif

namespace tier4_api_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CrosswalkStatus_
{
  using Type = CrosswalkStatus_<ContainerAllocator>;

  explicit CrosswalkStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0l;
    }
  }

  explicit CrosswalkStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _status_type =
    int32_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__status(
    const int32_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t STOP =
    0;
  static constexpr int32_t GO =
    1;
  static constexpr int32_t SLOWDOWN =
    2;

  // pointer types
  using RawPtr =
    tier4_api_msgs::msg::CrosswalkStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_api_msgs::msg::CrosswalkStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_api_msgs::msg::CrosswalkStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_api_msgs::msg::CrosswalkStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_api_msgs::msg::CrosswalkStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_api_msgs::msg::CrosswalkStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_api_msgs::msg::CrosswalkStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_api_msgs::msg::CrosswalkStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_api_msgs::msg::CrosswalkStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_api_msgs::msg::CrosswalkStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_api_msgs__msg__CrosswalkStatus
    std::shared_ptr<tier4_api_msgs::msg::CrosswalkStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_api_msgs__msg__CrosswalkStatus
    std::shared_ptr<tier4_api_msgs::msg::CrosswalkStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CrosswalkStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const CrosswalkStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CrosswalkStatus_

// alias to use template instance with default allocator
using CrosswalkStatus =
  tier4_api_msgs::msg::CrosswalkStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t CrosswalkStatus_<ContainerAllocator>::STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t CrosswalkStatus_<ContainerAllocator>::GO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t CrosswalkStatus_<ContainerAllocator>::SLOWDOWN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace tier4_api_msgs

#endif  // TIER4_API_MSGS__MSG__DETAIL__CROSSWALK_STATUS__STRUCT_HPP_
