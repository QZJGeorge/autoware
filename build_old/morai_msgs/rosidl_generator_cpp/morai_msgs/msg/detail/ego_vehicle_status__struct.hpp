// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/EgoVehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__EGO_VEHICLE_STATUS__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__EGO_VEHICLE_STATUS__STRUCT_HPP_

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
// Member 'acceleration'
// Member 'position'
// Member 'velocity'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__EgoVehicleStatus __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__EgoVehicleStatus __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EgoVehicleStatus_
{
  using Type = EgoVehicleStatus_<ContainerAllocator>;

  explicit EgoVehicleStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    acceleration(_init),
    position(_init),
    velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unique_id = 0l;
      this->heading = 0.0;
      this->accel = 0.0;
      this->brake = 0.0;
      this->wheel_angle = 0.0;
    }
  }

  explicit EgoVehicleStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    acceleration(_alloc, _init),
    position(_alloc, _init),
    velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unique_id = 0l;
      this->heading = 0.0;
      this->accel = 0.0;
      this->brake = 0.0;
      this->wheel_angle = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _unique_id_type =
    int32_t;
  _unique_id_type unique_id;
  using _acceleration_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _acceleration_type acceleration;
  using _position_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _position_type position;
  using _velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _velocity_type velocity;
  using _heading_type =
    double;
  _heading_type heading;
  using _accel_type =
    double;
  _accel_type accel;
  using _brake_type =
    double;
  _brake_type brake;
  using _wheel_angle_type =
    double;
  _wheel_angle_type wheel_angle;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__unique_id(
    const int32_t & _arg)
  {
    this->unique_id = _arg;
    return *this;
  }
  Type & set__acceleration(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__heading(
    const double & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__accel(
    const double & _arg)
  {
    this->accel = _arg;
    return *this;
  }
  Type & set__brake(
    const double & _arg)
  {
    this->brake = _arg;
    return *this;
  }
  Type & set__wheel_angle(
    const double & _arg)
  {
    this->wheel_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::EgoVehicleStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::EgoVehicleStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::EgoVehicleStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::EgoVehicleStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::EgoVehicleStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::EgoVehicleStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::EgoVehicleStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::EgoVehicleStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::EgoVehicleStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::EgoVehicleStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__EgoVehicleStatus
    std::shared_ptr<morai_msgs::msg::EgoVehicleStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__EgoVehicleStatus
    std::shared_ptr<morai_msgs::msg::EgoVehicleStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EgoVehicleStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->unique_id != other.unique_id) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->accel != other.accel) {
      return false;
    }
    if (this->brake != other.brake) {
      return false;
    }
    if (this->wheel_angle != other.wheel_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const EgoVehicleStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EgoVehicleStatus_

// alias to use template instance with default allocator
using EgoVehicleStatus =
  morai_msgs::msg::EgoVehicleStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__EGO_VEHICLE_STATUS__STRUCT_HPP_
