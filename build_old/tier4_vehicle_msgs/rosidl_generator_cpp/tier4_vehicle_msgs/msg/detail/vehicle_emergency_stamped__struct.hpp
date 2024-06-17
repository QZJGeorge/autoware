// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_vehicle_msgs:msg/VehicleEmergencyStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_EMERGENCY_STAMPED__STRUCT_HPP_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_EMERGENCY_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_vehicle_msgs__msg__VehicleEmergencyStamped __attribute__((deprecated))
#else
# define DEPRECATED__tier4_vehicle_msgs__msg__VehicleEmergencyStamped __declspec(deprecated)
#endif

namespace tier4_vehicle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleEmergencyStamped_
{
  using Type = VehicleEmergencyStamped_<ContainerAllocator>;

  explicit VehicleEmergencyStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->emergency = false;
    }
  }

  explicit VehicleEmergencyStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->emergency = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _emergency_type =
    bool;
  _emergency_type emergency;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__emergency(
    const bool & _arg)
  {
    this->emergency = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_vehicle_msgs::msg::VehicleEmergencyStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_vehicle_msgs::msg::VehicleEmergencyStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_vehicle_msgs::msg::VehicleEmergencyStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_vehicle_msgs::msg::VehicleEmergencyStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_vehicle_msgs::msg::VehicleEmergencyStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_vehicle_msgs::msg::VehicleEmergencyStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_vehicle_msgs::msg::VehicleEmergencyStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_vehicle_msgs::msg::VehicleEmergencyStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_vehicle_msgs::msg::VehicleEmergencyStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_vehicle_msgs::msg::VehicleEmergencyStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_vehicle_msgs__msg__VehicleEmergencyStamped
    std::shared_ptr<tier4_vehicle_msgs::msg::VehicleEmergencyStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_vehicle_msgs__msg__VehicleEmergencyStamped
    std::shared_ptr<tier4_vehicle_msgs::msg::VehicleEmergencyStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleEmergencyStamped_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->emergency != other.emergency) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleEmergencyStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleEmergencyStamped_

// alias to use template instance with default allocator
using VehicleEmergencyStamped =
  tier4_vehicle_msgs::msg::VehicleEmergencyStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_vehicle_msgs

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_EMERGENCY_STAMPED__STRUCT_HPP_
