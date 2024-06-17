// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from eagleye_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_
#define EAGLEYE_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__eagleye_msgs__msg__Status __attribute__((deprecated))
#else
# define DEPRECATED__eagleye_msgs__msg__Status __declspec(deprecated)
#endif

namespace eagleye_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Status_
{
  using Type = Status_<ContainerAllocator>;

  explicit Status_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enabled_status = false;
      this->estimate_status = false;
      this->is_abnormal = false;
      this->error_code = 0;
    }
  }

  explicit Status_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enabled_status = false;
      this->estimate_status = false;
      this->is_abnormal = false;
      this->error_code = 0;
    }
  }

  // field types and members
  using _enabled_status_type =
    bool;
  _enabled_status_type enabled_status;
  using _estimate_status_type =
    bool;
  _estimate_status_type estimate_status;
  using _is_abnormal_type =
    bool;
  _is_abnormal_type is_abnormal;
  using _error_code_type =
    uint8_t;
  _error_code_type error_code;

  // setters for named parameter idiom
  Type & set__enabled_status(
    const bool & _arg)
  {
    this->enabled_status = _arg;
    return *this;
  }
  Type & set__estimate_status(
    const bool & _arg)
  {
    this->estimate_status = _arg;
    return *this;
  }
  Type & set__is_abnormal(
    const bool & _arg)
  {
    this->is_abnormal = _arg;
    return *this;
  }
  Type & set__error_code(
    const uint8_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NAN_OR_INFINITE =
    0u;
  static constexpr uint8_t TOO_LARGE_OR_SMALL =
    1u;

  // pointer types
  using RawPtr =
    eagleye_msgs::msg::Status_<ContainerAllocator> *;
  using ConstRawPtr =
    const eagleye_msgs::msg::Status_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eagleye_msgs::msg::Status_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eagleye_msgs::msg::Status_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eagleye_msgs::msg::Status_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eagleye_msgs::msg::Status_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eagleye_msgs::msg::Status_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eagleye_msgs::msg::Status_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eagleye_msgs::msg::Status_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eagleye_msgs::msg::Status_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eagleye_msgs__msg__Status
    std::shared_ptr<eagleye_msgs::msg::Status_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eagleye_msgs__msg__Status
    std::shared_ptr<eagleye_msgs::msg::Status_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Status_ & other) const
  {
    if (this->enabled_status != other.enabled_status) {
      return false;
    }
    if (this->estimate_status != other.estimate_status) {
      return false;
    }
    if (this->is_abnormal != other.is_abnormal) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const Status_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Status_

// alias to use template instance with default allocator
using Status =
  eagleye_msgs::msg::Status_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Status_<ContainerAllocator>::NAN_OR_INFINITE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Status_<ContainerAllocator>::TOO_LARGE_OR_SMALL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace eagleye_msgs

#endif  // EAGLEYE_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_
