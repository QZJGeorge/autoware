// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/VehicleSpec.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__VEHICLE_SPEC__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__VEHICLE_SPEC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__VehicleSpec __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__VehicleSpec __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleSpec_
{
  using Type = VehicleSpec_<ContainerAllocator>;

  explicit VehicleSpec_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : size(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wheel_base = 0.0f;
      this->max_steering = 0.0;
      this->overhang = 0.0f;
      this->rear_overhang = 0.0f;
    }
  }

  explicit VehicleSpec_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : size(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wheel_base = 0.0f;
      this->max_steering = 0.0;
      this->overhang = 0.0f;
      this->rear_overhang = 0.0f;
    }
  }

  // field types and members
  using _size_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _size_type size;
  using _wheel_base_type =
    float;
  _wheel_base_type wheel_base;
  using _max_steering_type =
    double;
  _max_steering_type max_steering;
  using _overhang_type =
    float;
  _overhang_type overhang;
  using _rear_overhang_type =
    float;
  _rear_overhang_type rear_overhang;

  // setters for named parameter idiom
  Type & set__size(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->size = _arg;
    return *this;
  }
  Type & set__wheel_base(
    const float & _arg)
  {
    this->wheel_base = _arg;
    return *this;
  }
  Type & set__max_steering(
    const double & _arg)
  {
    this->max_steering = _arg;
    return *this;
  }
  Type & set__overhang(
    const float & _arg)
  {
    this->overhang = _arg;
    return *this;
  }
  Type & set__rear_overhang(
    const float & _arg)
  {
    this->rear_overhang = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::VehicleSpec_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::VehicleSpec_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::VehicleSpec_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::VehicleSpec_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::VehicleSpec_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::VehicleSpec_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::VehicleSpec_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::VehicleSpec_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::VehicleSpec_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::VehicleSpec_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__VehicleSpec
    std::shared_ptr<morai_msgs::msg::VehicleSpec_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__VehicleSpec
    std::shared_ptr<morai_msgs::msg::VehicleSpec_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleSpec_ & other) const
  {
    if (this->size != other.size) {
      return false;
    }
    if (this->wheel_base != other.wheel_base) {
      return false;
    }
    if (this->max_steering != other.max_steering) {
      return false;
    }
    if (this->overhang != other.overhang) {
      return false;
    }
    if (this->rear_overhang != other.rear_overhang) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleSpec_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleSpec_

// alias to use template instance with default allocator
using VehicleSpec =
  morai_msgs::msg::VehicleSpec_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__VEHICLE_SPEC__STRUCT_HPP_
