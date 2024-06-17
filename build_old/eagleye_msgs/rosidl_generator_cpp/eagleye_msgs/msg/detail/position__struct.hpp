// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from eagleye_msgs:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__POSITION__STRUCT_HPP_
#define EAGLEYE_MSGS__MSG__DETAIL__POSITION__STRUCT_HPP_

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
// Member 'enu_pos'
// Member 'ecef_base_pos'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'status'
#include "eagleye_msgs/msg/detail/status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__eagleye_msgs__msg__Position __attribute__((deprecated))
#else
# define DEPRECATED__eagleye_msgs__msg__Position __declspec(deprecated)
#endif

namespace eagleye_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Position_
{
  using Type = Position_<ContainerAllocator>;

  explicit Position_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    enu_pos(_init),
    ecef_base_pos(_init),
    status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 9>::iterator, double>(this->covariance.begin(), this->covariance.end(), 0.0);
    }
  }

  explicit Position_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    enu_pos(_alloc, _init),
    ecef_base_pos(_alloc, _init),
    covariance(_alloc),
    status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 9>::iterator, double>(this->covariance.begin(), this->covariance.end(), 0.0);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _enu_pos_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _enu_pos_type enu_pos;
  using _ecef_base_pos_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _ecef_base_pos_type ecef_base_pos;
  using _covariance_type =
    std::array<double, 9>;
  _covariance_type covariance;
  using _status_type =
    eagleye_msgs::msg::Status_<ContainerAllocator>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__enu_pos(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->enu_pos = _arg;
    return *this;
  }
  Type & set__ecef_base_pos(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->ecef_base_pos = _arg;
    return *this;
  }
  Type & set__covariance(
    const std::array<double, 9> & _arg)
  {
    this->covariance = _arg;
    return *this;
  }
  Type & set__status(
    const eagleye_msgs::msg::Status_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    eagleye_msgs::msg::Position_<ContainerAllocator> *;
  using ConstRawPtr =
    const eagleye_msgs::msg::Position_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eagleye_msgs::msg::Position_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eagleye_msgs::msg::Position_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eagleye_msgs::msg::Position_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eagleye_msgs::msg::Position_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eagleye_msgs::msg::Position_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eagleye_msgs::msg::Position_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eagleye_msgs::msg::Position_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eagleye_msgs::msg::Position_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eagleye_msgs__msg__Position
    std::shared_ptr<eagleye_msgs::msg::Position_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eagleye_msgs__msg__Position
    std::shared_ptr<eagleye_msgs::msg::Position_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Position_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->enu_pos != other.enu_pos) {
      return false;
    }
    if (this->ecef_base_pos != other.ecef_base_pos) {
      return false;
    }
    if (this->covariance != other.covariance) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const Position_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Position_

// alias to use template instance with default allocator
using Position =
  eagleye_msgs::msg::Position_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace eagleye_msgs

#endif  // EAGLEYE_MSGS__MSG__DETAIL__POSITION__STRUCT_HPP_
