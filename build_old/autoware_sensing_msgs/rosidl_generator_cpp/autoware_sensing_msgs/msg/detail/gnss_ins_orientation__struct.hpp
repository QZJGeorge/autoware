// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_sensing_msgs:msg/GnssInsOrientation.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION__STRUCT_HPP_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_sensing_msgs__msg__GnssInsOrientation __attribute__((deprecated))
#else
# define DEPRECATED__autoware_sensing_msgs__msg__GnssInsOrientation __declspec(deprecated)
#endif

namespace autoware_sensing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GnssInsOrientation_
{
  using Type = GnssInsOrientation_<ContainerAllocator>;

  explicit GnssInsOrientation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : orientation(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rmse_rotation_x = 0.0f;
      this->rmse_rotation_y = 0.0f;
      this->rmse_rotation_z = 0.0f;
    }
  }

  explicit GnssInsOrientation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : orientation(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rmse_rotation_x = 0.0f;
      this->rmse_rotation_y = 0.0f;
      this->rmse_rotation_z = 0.0f;
    }
  }

  // field types and members
  using _orientation_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _orientation_type orientation;
  using _rmse_rotation_x_type =
    float;
  _rmse_rotation_x_type rmse_rotation_x;
  using _rmse_rotation_y_type =
    float;
  _rmse_rotation_y_type rmse_rotation_y;
  using _rmse_rotation_z_type =
    float;
  _rmse_rotation_z_type rmse_rotation_z;

  // setters for named parameter idiom
  Type & set__orientation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__rmse_rotation_x(
    const float & _arg)
  {
    this->rmse_rotation_x = _arg;
    return *this;
  }
  Type & set__rmse_rotation_y(
    const float & _arg)
  {
    this->rmse_rotation_y = _arg;
    return *this;
  }
  Type & set__rmse_rotation_z(
    const float & _arg)
  {
    this->rmse_rotation_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_sensing_msgs::msg::GnssInsOrientation_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_sensing_msgs::msg::GnssInsOrientation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_sensing_msgs::msg::GnssInsOrientation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_sensing_msgs::msg::GnssInsOrientation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_sensing_msgs::msg::GnssInsOrientation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_sensing_msgs::msg::GnssInsOrientation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_sensing_msgs::msg::GnssInsOrientation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_sensing_msgs::msg::GnssInsOrientation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_sensing_msgs::msg::GnssInsOrientation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_sensing_msgs::msg::GnssInsOrientation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_sensing_msgs__msg__GnssInsOrientation
    std::shared_ptr<autoware_sensing_msgs::msg::GnssInsOrientation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_sensing_msgs__msg__GnssInsOrientation
    std::shared_ptr<autoware_sensing_msgs::msg::GnssInsOrientation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GnssInsOrientation_ & other) const
  {
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->rmse_rotation_x != other.rmse_rotation_x) {
      return false;
    }
    if (this->rmse_rotation_y != other.rmse_rotation_y) {
      return false;
    }
    if (this->rmse_rotation_z != other.rmse_rotation_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const GnssInsOrientation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GnssInsOrientation_

// alias to use template instance with default allocator
using GnssInsOrientation =
  autoware_sensing_msgs::msg::GnssInsOrientation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_sensing_msgs

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION__STRUCT_HPP_
