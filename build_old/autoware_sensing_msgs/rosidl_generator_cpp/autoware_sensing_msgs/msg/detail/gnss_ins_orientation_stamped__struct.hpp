// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_sensing_msgs:msg/GnssInsOrientationStamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION_STAMPED__STRUCT_HPP_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION_STAMPED__STRUCT_HPP_

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
// Member 'orientation'
#include "autoware_sensing_msgs/msg/detail/gnss_ins_orientation__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_sensing_msgs__msg__GnssInsOrientationStamped __attribute__((deprecated))
#else
# define DEPRECATED__autoware_sensing_msgs__msg__GnssInsOrientationStamped __declspec(deprecated)
#endif

namespace autoware_sensing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GnssInsOrientationStamped_
{
  using Type = GnssInsOrientationStamped_<ContainerAllocator>;

  explicit GnssInsOrientationStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    orientation(_init)
  {
    (void)_init;
  }

  explicit GnssInsOrientationStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    orientation(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _orientation_type =
    autoware_sensing_msgs::msg::GnssInsOrientation_<ContainerAllocator>;
  _orientation_type orientation;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__orientation(
    const autoware_sensing_msgs::msg::GnssInsOrientation_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_sensing_msgs::msg::GnssInsOrientationStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_sensing_msgs::msg::GnssInsOrientationStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_sensing_msgs::msg::GnssInsOrientationStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_sensing_msgs::msg::GnssInsOrientationStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_sensing_msgs::msg::GnssInsOrientationStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_sensing_msgs::msg::GnssInsOrientationStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_sensing_msgs::msg::GnssInsOrientationStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_sensing_msgs::msg::GnssInsOrientationStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_sensing_msgs::msg::GnssInsOrientationStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_sensing_msgs::msg::GnssInsOrientationStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_sensing_msgs__msg__GnssInsOrientationStamped
    std::shared_ptr<autoware_sensing_msgs::msg::GnssInsOrientationStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_sensing_msgs__msg__GnssInsOrientationStamped
    std::shared_ptr<autoware_sensing_msgs::msg::GnssInsOrientationStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GnssInsOrientationStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    return true;
  }
  bool operator!=(const GnssInsOrientationStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GnssInsOrientationStamped_

// alias to use template instance with default allocator
using GnssInsOrientationStamped =
  autoware_sensing_msgs::msg::GnssInsOrientationStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_sensing_msgs

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION_STAMPED__STRUCT_HPP_
