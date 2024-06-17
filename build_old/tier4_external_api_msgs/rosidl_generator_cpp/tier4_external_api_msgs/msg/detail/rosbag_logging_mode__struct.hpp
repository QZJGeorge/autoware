// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_external_api_msgs:msg/RosbagLoggingMode.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROSBAG_LOGGING_MODE__STRUCT_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROSBAG_LOGGING_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tier4_external_api_msgs__msg__RosbagLoggingMode __attribute__((deprecated))
#else
# define DEPRECATED__tier4_external_api_msgs__msg__RosbagLoggingMode __declspec(deprecated)
#endif

namespace tier4_external_api_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RosbagLoggingMode_
{
  using Type = RosbagLoggingMode_<ContainerAllocator>;

  explicit RosbagLoggingMode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_operation_mode = false;
    }
  }

  explicit RosbagLoggingMode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_operation_mode = false;
    }
  }

  // field types and members
  using _is_operation_mode_type =
    bool;
  _is_operation_mode_type is_operation_mode;

  // setters for named parameter idiom
  Type & set__is_operation_mode(
    const bool & _arg)
  {
    this->is_operation_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_external_api_msgs::msg::RosbagLoggingMode_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_external_api_msgs::msg::RosbagLoggingMode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_external_api_msgs::msg::RosbagLoggingMode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_external_api_msgs::msg::RosbagLoggingMode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::msg::RosbagLoggingMode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::msg::RosbagLoggingMode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::msg::RosbagLoggingMode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::msg::RosbagLoggingMode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_external_api_msgs::msg::RosbagLoggingMode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_external_api_msgs::msg::RosbagLoggingMode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_external_api_msgs__msg__RosbagLoggingMode
    std::shared_ptr<tier4_external_api_msgs::msg::RosbagLoggingMode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_external_api_msgs__msg__RosbagLoggingMode
    std::shared_ptr<tier4_external_api_msgs::msg::RosbagLoggingMode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosbagLoggingMode_ & other) const
  {
    if (this->is_operation_mode != other.is_operation_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosbagLoggingMode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosbagLoggingMode_

// alias to use template instance with default allocator
using RosbagLoggingMode =
  tier4_external_api_msgs::msg::RosbagLoggingMode_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROSBAG_LOGGING_MODE__STRUCT_HPP_
