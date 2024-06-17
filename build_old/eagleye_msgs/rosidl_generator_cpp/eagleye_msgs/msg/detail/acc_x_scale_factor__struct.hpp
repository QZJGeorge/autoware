// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from eagleye_msgs:msg/AccXScaleFactor.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__ACC_X_SCALE_FACTOR__STRUCT_HPP_
#define EAGLEYE_MSGS__MSG__DETAIL__ACC_X_SCALE_FACTOR__STRUCT_HPP_

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
// Member 'status'
#include "eagleye_msgs/msg/detail/status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__eagleye_msgs__msg__AccXScaleFactor __attribute__((deprecated))
#else
# define DEPRECATED__eagleye_msgs__msg__AccXScaleFactor __declspec(deprecated)
#endif

namespace eagleye_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AccXScaleFactor_
{
  using Type = AccXScaleFactor_<ContainerAllocator>;

  explicit AccXScaleFactor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acc_x_scale_factor = 0.0;
    }
  }

  explicit AccXScaleFactor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acc_x_scale_factor = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _acc_x_scale_factor_type =
    double;
  _acc_x_scale_factor_type acc_x_scale_factor;
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
  Type & set__acc_x_scale_factor(
    const double & _arg)
  {
    this->acc_x_scale_factor = _arg;
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
    eagleye_msgs::msg::AccXScaleFactor_<ContainerAllocator> *;
  using ConstRawPtr =
    const eagleye_msgs::msg::AccXScaleFactor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eagleye_msgs::msg::AccXScaleFactor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eagleye_msgs::msg::AccXScaleFactor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eagleye_msgs::msg::AccXScaleFactor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eagleye_msgs::msg::AccXScaleFactor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eagleye_msgs::msg::AccXScaleFactor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eagleye_msgs::msg::AccXScaleFactor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eagleye_msgs::msg::AccXScaleFactor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eagleye_msgs::msg::AccXScaleFactor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eagleye_msgs__msg__AccXScaleFactor
    std::shared_ptr<eagleye_msgs::msg::AccXScaleFactor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eagleye_msgs__msg__AccXScaleFactor
    std::shared_ptr<eagleye_msgs::msg::AccXScaleFactor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AccXScaleFactor_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->acc_x_scale_factor != other.acc_x_scale_factor) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const AccXScaleFactor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AccXScaleFactor_

// alias to use template instance with default allocator
using AccXScaleFactor =
  eagleye_msgs::msg::AccXScaleFactor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace eagleye_msgs

#endif  // EAGLEYE_MSGS__MSG__DETAIL__ACC_X_SCALE_FACTOR__STRUCT_HPP_
