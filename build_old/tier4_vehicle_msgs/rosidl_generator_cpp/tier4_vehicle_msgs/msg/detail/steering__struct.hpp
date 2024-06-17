// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_vehicle_msgs:msg/Steering.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__STEERING__STRUCT_HPP_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__STEERING__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__tier4_vehicle_msgs__msg__Steering __attribute__((deprecated))
#else
# define DEPRECATED__tier4_vehicle_msgs__msg__Steering __declspec(deprecated)
#endif

namespace tier4_vehicle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Steering_
{
  using Type = Steering_<ContainerAllocator>;

  explicit Steering_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0.0f;
    }
  }

  explicit Steering_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _data_type =
    float;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__data(
    const float & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_vehicle_msgs::msg::Steering_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_vehicle_msgs::msg::Steering_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_vehicle_msgs::msg::Steering_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_vehicle_msgs::msg::Steering_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_vehicle_msgs::msg::Steering_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_vehicle_msgs::msg::Steering_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_vehicle_msgs::msg::Steering_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_vehicle_msgs::msg::Steering_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_vehicle_msgs::msg::Steering_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_vehicle_msgs::msg::Steering_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_vehicle_msgs__msg__Steering
    std::shared_ptr<tier4_vehicle_msgs::msg::Steering_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_vehicle_msgs__msg__Steering
    std::shared_ptr<tier4_vehicle_msgs::msg::Steering_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Steering_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Steering_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Steering_

// alias to use template instance with default allocator
using Steering =
  tier4_vehicle_msgs::msg::Steering_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_vehicle_msgs

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__STEERING__STRUCT_HPP_
