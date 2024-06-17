// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtklib_msgs:msg/RtklibNav.idl
// generated code does not contain a copyright notice

#ifndef RTKLIB_MSGS__MSG__DETAIL__RTKLIB_NAV__STRUCT_HPP_
#define RTKLIB_MSGS__MSG__DETAIL__RTKLIB_NAV__STRUCT_HPP_

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
// Member 'ecef_pos'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'ecef_vel'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'status'
#include "sensor_msgs/msg/detail/nav_sat_fix__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rtklib_msgs__msg__RtklibNav __attribute__((deprecated))
#else
# define DEPRECATED__rtklib_msgs__msg__RtklibNav __declspec(deprecated)
#endif

namespace rtklib_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RtklibNav_
{
  using Type = RtklibNav_<ContainerAllocator>;

  explicit RtklibNav_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    ecef_pos(_init),
    ecef_vel(_init),
    status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tow = 0ll;
    }
  }

  explicit RtklibNav_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ecef_pos(_alloc, _init),
    ecef_vel(_alloc, _init),
    status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tow = 0ll;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _tow_type =
    int64_t;
  _tow_type tow;
  using _ecef_pos_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _ecef_pos_type ecef_pos;
  using _ecef_vel_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _ecef_vel_type ecef_vel;
  using _status_type =
    sensor_msgs::msg::NavSatFix_<ContainerAllocator>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__tow(
    const int64_t & _arg)
  {
    this->tow = _arg;
    return *this;
  }
  Type & set__ecef_pos(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->ecef_pos = _arg;
    return *this;
  }
  Type & set__ecef_vel(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->ecef_vel = _arg;
    return *this;
  }
  Type & set__status(
    const sensor_msgs::msg::NavSatFix_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtklib_msgs::msg::RtklibNav_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtklib_msgs::msg::RtklibNav_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtklib_msgs::msg::RtklibNav_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtklib_msgs::msg::RtklibNav_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtklib_msgs::msg::RtklibNav_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtklib_msgs::msg::RtklibNav_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtklib_msgs::msg::RtklibNav_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtklib_msgs::msg::RtklibNav_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtklib_msgs::msg::RtklibNav_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtklib_msgs::msg::RtklibNav_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtklib_msgs__msg__RtklibNav
    std::shared_ptr<rtklib_msgs::msg::RtklibNav_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtklib_msgs__msg__RtklibNav
    std::shared_ptr<rtklib_msgs::msg::RtklibNav_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RtklibNav_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->tow != other.tow) {
      return false;
    }
    if (this->ecef_pos != other.ecef_pos) {
      return false;
    }
    if (this->ecef_vel != other.ecef_vel) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const RtklibNav_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RtklibNav_

// alias to use template instance with default allocator
using RtklibNav =
  rtklib_msgs::msg::RtklibNav_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtklib_msgs

#endif  // RTKLIB_MSGS__MSG__DETAIL__RTKLIB_NAV__STRUCT_HPP_
