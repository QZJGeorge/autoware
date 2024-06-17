// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_system_msgs:msg/DiagnosticNode.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_NODE__STRUCT_HPP_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_NODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'status'
#include "diagnostic_msgs/msg/detail/diagnostic_status__struct.hpp"
// Member 'links'
#include "tier4_system_msgs/msg/detail/diagnostic_link__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_system_msgs__msg__DiagnosticNode __attribute__((deprecated))
#else
# define DEPRECATED__tier4_system_msgs__msg__DiagnosticNode __declspec(deprecated)
#endif

namespace tier4_system_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DiagnosticNode_
{
  using Type = DiagnosticNode_<ContainerAllocator>;

  explicit DiagnosticNode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init)
  {
    (void)_init;
  }

  explicit DiagnosticNode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _status_type =
    diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>;
  _status_type status;
  using _links_type =
    std::vector<tier4_system_msgs::msg::DiagnosticLink_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_system_msgs::msg::DiagnosticLink_<ContainerAllocator>>>;
  _links_type links;

  // setters for named parameter idiom
  Type & set__status(
    const diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__links(
    const std::vector<tier4_system_msgs::msg::DiagnosticLink_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_system_msgs::msg::DiagnosticLink_<ContainerAllocator>>> & _arg)
  {
    this->links = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_system_msgs::msg::DiagnosticNode_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_system_msgs::msg::DiagnosticNode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_system_msgs::msg::DiagnosticNode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_system_msgs::msg::DiagnosticNode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_system_msgs::msg::DiagnosticNode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_system_msgs::msg::DiagnosticNode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_system_msgs::msg::DiagnosticNode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_system_msgs::msg::DiagnosticNode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_system_msgs::msg::DiagnosticNode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_system_msgs::msg::DiagnosticNode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_system_msgs__msg__DiagnosticNode
    std::shared_ptr<tier4_system_msgs::msg::DiagnosticNode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_system_msgs__msg__DiagnosticNode
    std::shared_ptr<tier4_system_msgs::msg::DiagnosticNode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DiagnosticNode_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->links != other.links) {
      return false;
    }
    return true;
  }
  bool operator!=(const DiagnosticNode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DiagnosticNode_

// alias to use template instance with default allocator
using DiagnosticNode =
  tier4_system_msgs::msg::DiagnosticNode_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_system_msgs

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_NODE__STRUCT_HPP_
