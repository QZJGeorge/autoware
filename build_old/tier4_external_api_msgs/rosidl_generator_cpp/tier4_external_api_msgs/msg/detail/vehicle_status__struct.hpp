// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_external_api_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'steering'
#include "tier4_external_api_msgs/msg/detail/steering__struct.hpp"
// Member 'turn_signal'
#include "tier4_external_api_msgs/msg/detail/turn_signal__struct.hpp"
// Member 'gear_shift'
#include "tier4_external_api_msgs/msg/detail/gear_shift__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_external_api_msgs__msg__VehicleStatus __attribute__((deprecated))
#else
# define DEPRECATED__tier4_external_api_msgs__msg__VehicleStatus __declspec(deprecated)
#endif

namespace tier4_external_api_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleStatus_
{
  using Type = VehicleStatus_<ContainerAllocator>;

  explicit VehicleStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : twist(_init),
    steering(_init),
    turn_signal(_init),
    gear_shift(_init)
  {
    (void)_init;
  }

  explicit VehicleStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : twist(_alloc, _init),
    steering(_alloc, _init),
    turn_signal(_alloc, _init),
    gear_shift(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _twist_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_type twist;
  using _steering_type =
    tier4_external_api_msgs::msg::Steering_<ContainerAllocator>;
  _steering_type steering;
  using _turn_signal_type =
    tier4_external_api_msgs::msg::TurnSignal_<ContainerAllocator>;
  _turn_signal_type turn_signal;
  using _gear_shift_type =
    tier4_external_api_msgs::msg::GearShift_<ContainerAllocator>;
  _gear_shift_type gear_shift;

  // setters for named parameter idiom
  Type & set__twist(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }
  Type & set__steering(
    const tier4_external_api_msgs::msg::Steering_<ContainerAllocator> & _arg)
  {
    this->steering = _arg;
    return *this;
  }
  Type & set__turn_signal(
    const tier4_external_api_msgs::msg::TurnSignal_<ContainerAllocator> & _arg)
  {
    this->turn_signal = _arg;
    return *this;
  }
  Type & set__gear_shift(
    const tier4_external_api_msgs::msg::GearShift_<ContainerAllocator> & _arg)
  {
    this->gear_shift = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_external_api_msgs::msg::VehicleStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_external_api_msgs::msg::VehicleStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_external_api_msgs::msg::VehicleStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_external_api_msgs::msg::VehicleStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::msg::VehicleStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::msg::VehicleStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::msg::VehicleStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::msg::VehicleStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_external_api_msgs::msg::VehicleStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_external_api_msgs::msg::VehicleStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_external_api_msgs__msg__VehicleStatus
    std::shared_ptr<tier4_external_api_msgs::msg::VehicleStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_external_api_msgs__msg__VehicleStatus
    std::shared_ptr<tier4_external_api_msgs::msg::VehicleStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleStatus_ & other) const
  {
    if (this->twist != other.twist) {
      return false;
    }
    if (this->steering != other.steering) {
      return false;
    }
    if (this->turn_signal != other.turn_signal) {
      return false;
    }
    if (this->gear_shift != other.gear_shift) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleStatus_

// alias to use template instance with default allocator
using VehicleStatus =
  tier4_external_api_msgs::msg::VehicleStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_HPP_
