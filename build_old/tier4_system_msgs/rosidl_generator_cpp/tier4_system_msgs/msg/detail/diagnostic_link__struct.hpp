// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_system_msgs:msg/DiagnosticLink.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_LINK__STRUCT_HPP_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_LINK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tier4_system_msgs__msg__DiagnosticLink __attribute__((deprecated))
#else
# define DEPRECATED__tier4_system_msgs__msg__DiagnosticLink __declspec(deprecated)
#endif

namespace tier4_system_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DiagnosticLink_
{
  using Type = DiagnosticLink_<ContainerAllocator>;

  explicit DiagnosticLink_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0ul;
      this->used = false;
    }
  }

  explicit DiagnosticLink_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0ul;
      this->used = false;
    }
  }

  // field types and members
  using _index_type =
    uint32_t;
  _index_type index;
  using _used_type =
    bool;
  _used_type used;

  // setters for named parameter idiom
  Type & set__index(
    const uint32_t & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__used(
    const bool & _arg)
  {
    this->used = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_system_msgs::msg::DiagnosticLink_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_system_msgs::msg::DiagnosticLink_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_system_msgs::msg::DiagnosticLink_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_system_msgs::msg::DiagnosticLink_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_system_msgs::msg::DiagnosticLink_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_system_msgs::msg::DiagnosticLink_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_system_msgs::msg::DiagnosticLink_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_system_msgs::msg::DiagnosticLink_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_system_msgs::msg::DiagnosticLink_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_system_msgs::msg::DiagnosticLink_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_system_msgs__msg__DiagnosticLink
    std::shared_ptr<tier4_system_msgs::msg::DiagnosticLink_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_system_msgs__msg__DiagnosticLink
    std::shared_ptr<tier4_system_msgs::msg::DiagnosticLink_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DiagnosticLink_ & other) const
  {
    if (this->index != other.index) {
      return false;
    }
    if (this->used != other.used) {
      return false;
    }
    return true;
  }
  bool operator!=(const DiagnosticLink_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DiagnosticLink_

// alias to use template instance with default allocator
using DiagnosticLink =
  tier4_system_msgs::msg::DiagnosticLink_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_system_msgs

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_LINK__STRUCT_HPP_
