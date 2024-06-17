// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_vehicle_msgs:msg/ActuationCommandStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_COMMAND_STAMPED__STRUCT_HPP_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_COMMAND_STAMPED__STRUCT_HPP_

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
// Member 'actuation'
#include "tier4_vehicle_msgs/msg/detail/actuation_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_vehicle_msgs__msg__ActuationCommandStamped __attribute__((deprecated))
#else
# define DEPRECATED__tier4_vehicle_msgs__msg__ActuationCommandStamped __declspec(deprecated)
#endif

namespace tier4_vehicle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActuationCommandStamped_
{
  using Type = ActuationCommandStamped_<ContainerAllocator>;

  explicit ActuationCommandStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    actuation(_init)
  {
    (void)_init;
  }

  explicit ActuationCommandStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    actuation(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _actuation_type =
    tier4_vehicle_msgs::msg::ActuationCommand_<ContainerAllocator>;
  _actuation_type actuation;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__actuation(
    const tier4_vehicle_msgs::msg::ActuationCommand_<ContainerAllocator> & _arg)
  {
    this->actuation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_vehicle_msgs::msg::ActuationCommandStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_vehicle_msgs::msg::ActuationCommandStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_vehicle_msgs::msg::ActuationCommandStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_vehicle_msgs::msg::ActuationCommandStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_vehicle_msgs::msg::ActuationCommandStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_vehicle_msgs::msg::ActuationCommandStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_vehicle_msgs::msg::ActuationCommandStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_vehicle_msgs::msg::ActuationCommandStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_vehicle_msgs::msg::ActuationCommandStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_vehicle_msgs::msg::ActuationCommandStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_vehicle_msgs__msg__ActuationCommandStamped
    std::shared_ptr<tier4_vehicle_msgs::msg::ActuationCommandStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_vehicle_msgs__msg__ActuationCommandStamped
    std::shared_ptr<tier4_vehicle_msgs::msg::ActuationCommandStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuationCommandStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->actuation != other.actuation) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuationCommandStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuationCommandStamped_

// alias to use template instance with default allocator
using ActuationCommandStamped =
  tier4_vehicle_msgs::msg::ActuationCommandStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_vehicle_msgs

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_COMMAND_STAMPED__STRUCT_HPP_
