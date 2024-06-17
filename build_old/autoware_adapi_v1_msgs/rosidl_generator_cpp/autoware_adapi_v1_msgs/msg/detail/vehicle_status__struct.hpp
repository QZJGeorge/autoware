// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_adapi_v1_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_HPP_

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
// Member 'gear'
#include "autoware_adapi_v1_msgs/msg/detail/gear__struct.hpp"
// Member 'turn_indicators'
#include "autoware_adapi_v1_msgs/msg/detail/turn_indicators__struct.hpp"
// Member 'hazard_lights'
#include "autoware_adapi_v1_msgs/msg/detail/hazard_lights__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_adapi_v1_msgs__msg__VehicleStatus __attribute__((deprecated))
#else
# define DEPRECATED__autoware_adapi_v1_msgs__msg__VehicleStatus __declspec(deprecated)
#endif

namespace autoware_adapi_v1_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleStatus_
{
  using Type = VehicleStatus_<ContainerAllocator>;

  explicit VehicleStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    gear(_init),
    turn_indicators(_init),
    hazard_lights(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->steering_tire_angle = 0.0;
      this->energy_percentage = 0.0f;
    }
  }

  explicit VehicleStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    gear(_alloc, _init),
    turn_indicators(_alloc, _init),
    hazard_lights(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->steering_tire_angle = 0.0;
      this->energy_percentage = 0.0f;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _gear_type =
    autoware_adapi_v1_msgs::msg::Gear_<ContainerAllocator>;
  _gear_type gear;
  using _turn_indicators_type =
    autoware_adapi_v1_msgs::msg::TurnIndicators_<ContainerAllocator>;
  _turn_indicators_type turn_indicators;
  using _hazard_lights_type =
    autoware_adapi_v1_msgs::msg::HazardLights_<ContainerAllocator>;
  _hazard_lights_type hazard_lights;
  using _steering_tire_angle_type =
    double;
  _steering_tire_angle_type steering_tire_angle;
  using _energy_percentage_type =
    float;
  _energy_percentage_type energy_percentage;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__gear(
    const autoware_adapi_v1_msgs::msg::Gear_<ContainerAllocator> & _arg)
  {
    this->gear = _arg;
    return *this;
  }
  Type & set__turn_indicators(
    const autoware_adapi_v1_msgs::msg::TurnIndicators_<ContainerAllocator> & _arg)
  {
    this->turn_indicators = _arg;
    return *this;
  }
  Type & set__hazard_lights(
    const autoware_adapi_v1_msgs::msg::HazardLights_<ContainerAllocator> & _arg)
  {
    this->hazard_lights = _arg;
    return *this;
  }
  Type & set__steering_tire_angle(
    const double & _arg)
  {
    this->steering_tire_angle = _arg;
    return *this;
  }
  Type & set__energy_percentage(
    const float & _arg)
  {
    this->energy_percentage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_adapi_v1_msgs::msg::VehicleStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_adapi_v1_msgs::msg::VehicleStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::msg::VehicleStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::msg::VehicleStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::msg::VehicleStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::msg::VehicleStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::msg::VehicleStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::msg::VehicleStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::msg::VehicleStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::msg::VehicleStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_adapi_v1_msgs__msg__VehicleStatus
    std::shared_ptr<autoware_adapi_v1_msgs::msg::VehicleStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_adapi_v1_msgs__msg__VehicleStatus
    std::shared_ptr<autoware_adapi_v1_msgs::msg::VehicleStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleStatus_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->gear != other.gear) {
      return false;
    }
    if (this->turn_indicators != other.turn_indicators) {
      return false;
    }
    if (this->hazard_lights != other.hazard_lights) {
      return false;
    }
    if (this->steering_tire_angle != other.steering_tire_angle) {
      return false;
    }
    if (this->energy_percentage != other.energy_percentage) {
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
  autoware_adapi_v1_msgs::msg::VehicleStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_HPP_
