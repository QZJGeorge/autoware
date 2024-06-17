// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_system_msgs:msg/HazardStatusStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS_STAMPED__STRUCT_HPP_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS_STAMPED__STRUCT_HPP_

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
// Member 'status'
#include "tier4_system_msgs/msg/detail/hazard_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_system_msgs__msg__HazardStatusStamped __attribute__((deprecated))
#else
# define DEPRECATED__tier4_system_msgs__msg__HazardStatusStamped __declspec(deprecated)
#endif

namespace tier4_system_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HazardStatusStamped_
{
  using Type = HazardStatusStamped_<ContainerAllocator>;

  explicit HazardStatusStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    status(_init)
  {
    (void)_init;
  }

  explicit HazardStatusStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _status_type =
    tier4_system_msgs::msg::HazardStatus_<ContainerAllocator>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__status(
    const tier4_system_msgs::msg::HazardStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_system_msgs::msg::HazardStatusStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_system_msgs::msg::HazardStatusStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_system_msgs::msg::HazardStatusStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_system_msgs::msg::HazardStatusStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_system_msgs::msg::HazardStatusStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_system_msgs::msg::HazardStatusStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_system_msgs::msg::HazardStatusStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_system_msgs::msg::HazardStatusStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_system_msgs::msg::HazardStatusStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_system_msgs::msg::HazardStatusStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_system_msgs__msg__HazardStatusStamped
    std::shared_ptr<tier4_system_msgs::msg::HazardStatusStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_system_msgs__msg__HazardStatusStamped
    std::shared_ptr<tier4_system_msgs::msg::HazardStatusStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HazardStatusStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const HazardStatusStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HazardStatusStamped_

// alias to use template instance with default allocator
using HazardStatusStamped =
  tier4_system_msgs::msg::HazardStatusStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_system_msgs

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS_STAMPED__STRUCT_HPP_
