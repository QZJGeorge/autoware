// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_api_msgs:msg/AwapiVehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__AWAPI_VEHICLE_STATUS__STRUCT_HPP_
#define TIER4_API_MSGS__MSG__DETAIL__AWAPI_VEHICLE_STATUS__STRUCT_HPP_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'eulerangle'
#include "tier4_api_msgs/msg/detail/euler__struct.hpp"
// Member 'geo_point'
#include "geographic_msgs/msg/detail/geo_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_api_msgs__msg__AwapiVehicleStatus __attribute__((deprecated))
#else
# define DEPRECATED__tier4_api_msgs__msg__AwapiVehicleStatus __declspec(deprecated)
#endif

namespace tier4_api_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AwapiVehicleStatus_
{
  using Type = AwapiVehicleStatus_<ContainerAllocator>;

  explicit AwapiVehicleStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init),
    eulerangle(_init),
    geo_point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity = 0.0;
      this->acceleration = 0.0;
      this->steering = 0.0;
      this->steering_velocity = 0.0;
      this->angular_velocity = 0.0;
      this->gear = 0l;
      this->energy_level = 0.0f;
      this->turn_signal = 0l;
      this->target_velocity = 0.0;
      this->target_acceleration = 0.0;
      this->target_steering = 0.0;
      this->target_steering_velocity = 0.0;
    }
  }

  explicit AwapiVehicleStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pose(_alloc, _init),
    eulerangle(_alloc, _init),
    geo_point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity = 0.0;
      this->acceleration = 0.0;
      this->steering = 0.0;
      this->steering_velocity = 0.0;
      this->angular_velocity = 0.0;
      this->gear = 0l;
      this->energy_level = 0.0f;
      this->turn_signal = 0l;
      this->target_velocity = 0.0;
      this->target_acceleration = 0.0;
      this->target_steering = 0.0;
      this->target_steering_velocity = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _eulerangle_type =
    tier4_api_msgs::msg::Euler_<ContainerAllocator>;
  _eulerangle_type eulerangle;
  using _geo_point_type =
    geographic_msgs::msg::GeoPoint_<ContainerAllocator>;
  _geo_point_type geo_point;
  using _velocity_type =
    double;
  _velocity_type velocity;
  using _acceleration_type =
    double;
  _acceleration_type acceleration;
  using _steering_type =
    double;
  _steering_type steering;
  using _steering_velocity_type =
    double;
  _steering_velocity_type steering_velocity;
  using _angular_velocity_type =
    double;
  _angular_velocity_type angular_velocity;
  using _gear_type =
    int32_t;
  _gear_type gear;
  using _energy_level_type =
    float;
  _energy_level_type energy_level;
  using _turn_signal_type =
    int32_t;
  _turn_signal_type turn_signal;
  using _target_velocity_type =
    double;
  _target_velocity_type target_velocity;
  using _target_acceleration_type =
    double;
  _target_acceleration_type target_acceleration;
  using _target_steering_type =
    double;
  _target_steering_type target_steering;
  using _target_steering_velocity_type =
    double;
  _target_steering_velocity_type target_steering_velocity;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__eulerangle(
    const tier4_api_msgs::msg::Euler_<ContainerAllocator> & _arg)
  {
    this->eulerangle = _arg;
    return *this;
  }
  Type & set__geo_point(
    const geographic_msgs::msg::GeoPoint_<ContainerAllocator> & _arg)
  {
    this->geo_point = _arg;
    return *this;
  }
  Type & set__velocity(
    const double & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const double & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__steering(
    const double & _arg)
  {
    this->steering = _arg;
    return *this;
  }
  Type & set__steering_velocity(
    const double & _arg)
  {
    this->steering_velocity = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const double & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__gear(
    const int32_t & _arg)
  {
    this->gear = _arg;
    return *this;
  }
  Type & set__energy_level(
    const float & _arg)
  {
    this->energy_level = _arg;
    return *this;
  }
  Type & set__turn_signal(
    const int32_t & _arg)
  {
    this->turn_signal = _arg;
    return *this;
  }
  Type & set__target_velocity(
    const double & _arg)
  {
    this->target_velocity = _arg;
    return *this;
  }
  Type & set__target_acceleration(
    const double & _arg)
  {
    this->target_acceleration = _arg;
    return *this;
  }
  Type & set__target_steering(
    const double & _arg)
  {
    this->target_steering = _arg;
    return *this;
  }
  Type & set__target_steering_velocity(
    const double & _arg)
  {
    this->target_steering_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_api_msgs::msg::AwapiVehicleStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_api_msgs::msg::AwapiVehicleStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_api_msgs::msg::AwapiVehicleStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_api_msgs::msg::AwapiVehicleStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_api_msgs::msg::AwapiVehicleStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_api_msgs::msg::AwapiVehicleStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_api_msgs::msg::AwapiVehicleStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_api_msgs::msg::AwapiVehicleStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_api_msgs::msg::AwapiVehicleStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_api_msgs::msg::AwapiVehicleStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_api_msgs__msg__AwapiVehicleStatus
    std::shared_ptr<tier4_api_msgs::msg::AwapiVehicleStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_api_msgs__msg__AwapiVehicleStatus
    std::shared_ptr<tier4_api_msgs::msg::AwapiVehicleStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AwapiVehicleStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->eulerangle != other.eulerangle) {
      return false;
    }
    if (this->geo_point != other.geo_point) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->steering != other.steering) {
      return false;
    }
    if (this->steering_velocity != other.steering_velocity) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->gear != other.gear) {
      return false;
    }
    if (this->energy_level != other.energy_level) {
      return false;
    }
    if (this->turn_signal != other.turn_signal) {
      return false;
    }
    if (this->target_velocity != other.target_velocity) {
      return false;
    }
    if (this->target_acceleration != other.target_acceleration) {
      return false;
    }
    if (this->target_steering != other.target_steering) {
      return false;
    }
    if (this->target_steering_velocity != other.target_steering_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const AwapiVehicleStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AwapiVehicleStatus_

// alias to use template instance with default allocator
using AwapiVehicleStatus =
  tier4_api_msgs::msg::AwapiVehicleStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_api_msgs

#endif  // TIER4_API_MSGS__MSG__DETAIL__AWAPI_VEHICLE_STATUS__STRUCT_HPP_
