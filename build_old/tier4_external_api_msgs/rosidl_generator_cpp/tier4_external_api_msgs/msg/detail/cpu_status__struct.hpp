// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_external_api_msgs:msg/CpuStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CPU_STATUS__STRUCT_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CPU_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tier4_external_api_msgs__msg__CpuStatus __attribute__((deprecated))
#else
# define DEPRECATED__tier4_external_api_msgs__msg__CpuStatus __declspec(deprecated)
#endif

namespace tier4_external_api_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CpuStatus_
{
  using Type = CpuStatus_<ContainerAllocator>;

  explicit CpuStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->total = 0.0f;
      this->usr = 0.0f;
      this->nice = 0.0f;
      this->sys = 0.0f;
      this->idle = 0.0f;
    }
  }

  explicit CpuStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->total = 0.0f;
      this->usr = 0.0f;
      this->nice = 0.0f;
      this->sys = 0.0f;
      this->idle = 0.0f;
    }
  }

  // field types and members
  using _status_type =
    uint8_t;
  _status_type status;
  using _total_type =
    float;
  _total_type total;
  using _usr_type =
    float;
  _usr_type usr;
  using _nice_type =
    float;
  _nice_type nice;
  using _sys_type =
    float;
  _sys_type sys;
  using _idle_type =
    float;
  _idle_type idle;

  // setters for named parameter idiom
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__total(
    const float & _arg)
  {
    this->total = _arg;
    return *this;
  }
  Type & set__usr(
    const float & _arg)
  {
    this->usr = _arg;
    return *this;
  }
  Type & set__nice(
    const float & _arg)
  {
    this->nice = _arg;
    return *this;
  }
  Type & set__sys(
    const float & _arg)
  {
    this->sys = _arg;
    return *this;
  }
  Type & set__idle(
    const float & _arg)
  {
    this->idle = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t OK =
    0u;
  static constexpr uint8_t HIGH_LOAD =
    1u;
  static constexpr uint8_t VERY_HIGH_LOAD =
    2u;
  static constexpr uint8_t STALE =
    3u;

  // pointer types
  using RawPtr =
    tier4_external_api_msgs::msg::CpuStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_external_api_msgs::msg::CpuStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_external_api_msgs::msg::CpuStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_external_api_msgs::msg::CpuStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::msg::CpuStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::msg::CpuStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::msg::CpuStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::msg::CpuStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_external_api_msgs::msg::CpuStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_external_api_msgs::msg::CpuStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_external_api_msgs__msg__CpuStatus
    std::shared_ptr<tier4_external_api_msgs::msg::CpuStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_external_api_msgs__msg__CpuStatus
    std::shared_ptr<tier4_external_api_msgs::msg::CpuStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CpuStatus_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->total != other.total) {
      return false;
    }
    if (this->usr != other.usr) {
      return false;
    }
    if (this->nice != other.nice) {
      return false;
    }
    if (this->sys != other.sys) {
      return false;
    }
    if (this->idle != other.idle) {
      return false;
    }
    return true;
  }
  bool operator!=(const CpuStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CpuStatus_

// alias to use template instance with default allocator
using CpuStatus =
  tier4_external_api_msgs::msg::CpuStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CpuStatus_<ContainerAllocator>::OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CpuStatus_<ContainerAllocator>::HIGH_LOAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CpuStatus_<ContainerAllocator>::VERY_HIGH_LOAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CpuStatus_<ContainerAllocator>::STALE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CPU_STATUS__STRUCT_HPP_
