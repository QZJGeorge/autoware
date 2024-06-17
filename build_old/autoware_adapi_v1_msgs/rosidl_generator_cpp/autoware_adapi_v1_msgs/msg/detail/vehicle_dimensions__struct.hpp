// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_adapi_v1_msgs:msg/VehicleDimensions.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_DIMENSIONS__STRUCT_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_DIMENSIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'footprint'
#include "geometry_msgs/msg/detail/polygon__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_adapi_v1_msgs__msg__VehicleDimensions __attribute__((deprecated))
#else
# define DEPRECATED__autoware_adapi_v1_msgs__msg__VehicleDimensions __declspec(deprecated)
#endif

namespace autoware_adapi_v1_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleDimensions_
{
  using Type = VehicleDimensions_<ContainerAllocator>;

  explicit VehicleDimensions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : footprint(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wheel_radius = 0.0f;
      this->wheel_width = 0.0f;
      this->wheel_base = 0.0f;
      this->wheel_tread = 0.0f;
      this->front_overhang = 0.0f;
      this->rear_overhang = 0.0f;
      this->left_overhang = 0.0f;
      this->right_overhang = 0.0f;
      this->height = 0.0f;
    }
  }

  explicit VehicleDimensions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : footprint(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wheel_radius = 0.0f;
      this->wheel_width = 0.0f;
      this->wheel_base = 0.0f;
      this->wheel_tread = 0.0f;
      this->front_overhang = 0.0f;
      this->rear_overhang = 0.0f;
      this->left_overhang = 0.0f;
      this->right_overhang = 0.0f;
      this->height = 0.0f;
    }
  }

  // field types and members
  using _wheel_radius_type =
    float;
  _wheel_radius_type wheel_radius;
  using _wheel_width_type =
    float;
  _wheel_width_type wheel_width;
  using _wheel_base_type =
    float;
  _wheel_base_type wheel_base;
  using _wheel_tread_type =
    float;
  _wheel_tread_type wheel_tread;
  using _front_overhang_type =
    float;
  _front_overhang_type front_overhang;
  using _rear_overhang_type =
    float;
  _rear_overhang_type rear_overhang;
  using _left_overhang_type =
    float;
  _left_overhang_type left_overhang;
  using _right_overhang_type =
    float;
  _right_overhang_type right_overhang;
  using _height_type =
    float;
  _height_type height;
  using _footprint_type =
    geometry_msgs::msg::Polygon_<ContainerAllocator>;
  _footprint_type footprint;

  // setters for named parameter idiom
  Type & set__wheel_radius(
    const float & _arg)
  {
    this->wheel_radius = _arg;
    return *this;
  }
  Type & set__wheel_width(
    const float & _arg)
  {
    this->wheel_width = _arg;
    return *this;
  }
  Type & set__wheel_base(
    const float & _arg)
  {
    this->wheel_base = _arg;
    return *this;
  }
  Type & set__wheel_tread(
    const float & _arg)
  {
    this->wheel_tread = _arg;
    return *this;
  }
  Type & set__front_overhang(
    const float & _arg)
  {
    this->front_overhang = _arg;
    return *this;
  }
  Type & set__rear_overhang(
    const float & _arg)
  {
    this->rear_overhang = _arg;
    return *this;
  }
  Type & set__left_overhang(
    const float & _arg)
  {
    this->left_overhang = _arg;
    return *this;
  }
  Type & set__right_overhang(
    const float & _arg)
  {
    this->right_overhang = _arg;
    return *this;
  }
  Type & set__height(
    const float & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__footprint(
    const geometry_msgs::msg::Polygon_<ContainerAllocator> & _arg)
  {
    this->footprint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_adapi_v1_msgs::msg::VehicleDimensions_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_adapi_v1_msgs::msg::VehicleDimensions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::msg::VehicleDimensions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::msg::VehicleDimensions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::msg::VehicleDimensions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::msg::VehicleDimensions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::msg::VehicleDimensions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::msg::VehicleDimensions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::msg::VehicleDimensions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::msg::VehicleDimensions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_adapi_v1_msgs__msg__VehicleDimensions
    std::shared_ptr<autoware_adapi_v1_msgs::msg::VehicleDimensions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_adapi_v1_msgs__msg__VehicleDimensions
    std::shared_ptr<autoware_adapi_v1_msgs::msg::VehicleDimensions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleDimensions_ & other) const
  {
    if (this->wheel_radius != other.wheel_radius) {
      return false;
    }
    if (this->wheel_width != other.wheel_width) {
      return false;
    }
    if (this->wheel_base != other.wheel_base) {
      return false;
    }
    if (this->wheel_tread != other.wheel_tread) {
      return false;
    }
    if (this->front_overhang != other.front_overhang) {
      return false;
    }
    if (this->rear_overhang != other.rear_overhang) {
      return false;
    }
    if (this->left_overhang != other.left_overhang) {
      return false;
    }
    if (this->right_overhang != other.right_overhang) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->footprint != other.footprint) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleDimensions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleDimensions_

// alias to use template instance with default allocator
using VehicleDimensions =
  autoware_adapi_v1_msgs::msg::VehicleDimensions_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_DIMENSIONS__STRUCT_HPP_
