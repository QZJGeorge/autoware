// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_adapi_v1_msgs:msg/CooperationPolicy.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_POLICY__STRUCT_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_POLICY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autoware_adapi_v1_msgs__msg__CooperationPolicy __attribute__((deprecated))
#else
# define DEPRECATED__autoware_adapi_v1_msgs__msg__CooperationPolicy __declspec(deprecated)
#endif

namespace autoware_adapi_v1_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CooperationPolicy_
{
  using Type = CooperationPolicy_<ContainerAllocator>;

  explicit CooperationPolicy_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior = "";
      this->sequence = "";
      this->policy = 0;
    }
  }

  explicit CooperationPolicy_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : behavior(_alloc),
    sequence(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior = "";
      this->sequence = "";
      this->policy = 0;
    }
  }

  // field types and members
  using _behavior_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _behavior_type behavior;
  using _sequence_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sequence_type sequence;
  using _policy_type =
    uint8_t;
  _policy_type policy;

  // setters for named parameter idiom
  Type & set__behavior(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->behavior = _arg;
    return *this;
  }
  Type & set__sequence(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sequence = _arg;
    return *this;
  }
  Type & set__policy(
    const uint8_t & _arg)
  {
    this->policy = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t OPTIONAL =
    1u;
  static constexpr uint8_t REQUIRED =
    2u;

  // pointer types
  using RawPtr =
    autoware_adapi_v1_msgs::msg::CooperationPolicy_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_adapi_v1_msgs::msg::CooperationPolicy_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::msg::CooperationPolicy_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::msg::CooperationPolicy_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::msg::CooperationPolicy_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::msg::CooperationPolicy_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::msg::CooperationPolicy_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::msg::CooperationPolicy_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::msg::CooperationPolicy_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::msg::CooperationPolicy_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_adapi_v1_msgs__msg__CooperationPolicy
    std::shared_ptr<autoware_adapi_v1_msgs::msg::CooperationPolicy_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_adapi_v1_msgs__msg__CooperationPolicy
    std::shared_ptr<autoware_adapi_v1_msgs::msg::CooperationPolicy_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CooperationPolicy_ & other) const
  {
    if (this->behavior != other.behavior) {
      return false;
    }
    if (this->sequence != other.sequence) {
      return false;
    }
    if (this->policy != other.policy) {
      return false;
    }
    return true;
  }
  bool operator!=(const CooperationPolicy_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CooperationPolicy_

// alias to use template instance with default allocator
using CooperationPolicy =
  autoware_adapi_v1_msgs::msg::CooperationPolicy_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CooperationPolicy_<ContainerAllocator>::OPTIONAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CooperationPolicy_<ContainerAllocator>::REQUIRED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_POLICY__STRUCT_HPP_
