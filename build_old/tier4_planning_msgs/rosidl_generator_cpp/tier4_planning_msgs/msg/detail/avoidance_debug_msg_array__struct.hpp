// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_planning_msgs:msg/AvoidanceDebugMsgArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_MSG_ARRAY__STRUCT_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_MSG_ARRAY__STRUCT_HPP_

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
// Member 'avoidance_info'
#include "tier4_planning_msgs/msg/detail/avoidance_debug_msg__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_planning_msgs__msg__AvoidanceDebugMsgArray __attribute__((deprecated))
#else
# define DEPRECATED__tier4_planning_msgs__msg__AvoidanceDebugMsgArray __declspec(deprecated)
#endif

namespace tier4_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AvoidanceDebugMsgArray_
{
  using Type = AvoidanceDebugMsgArray_<ContainerAllocator>;

  explicit AvoidanceDebugMsgArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit AvoidanceDebugMsgArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _avoidance_info_type =
    std::vector<tier4_planning_msgs::msg::AvoidanceDebugMsg_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_planning_msgs::msg::AvoidanceDebugMsg_<ContainerAllocator>>>;
  _avoidance_info_type avoidance_info;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__avoidance_info(
    const std::vector<tier4_planning_msgs::msg::AvoidanceDebugMsg_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_planning_msgs::msg::AvoidanceDebugMsg_<ContainerAllocator>>> & _arg)
  {
    this->avoidance_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_planning_msgs::msg::AvoidanceDebugMsgArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_planning_msgs::msg::AvoidanceDebugMsgArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_planning_msgs::msg::AvoidanceDebugMsgArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_planning_msgs::msg::AvoidanceDebugMsgArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_planning_msgs::msg::AvoidanceDebugMsgArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_planning_msgs::msg::AvoidanceDebugMsgArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_planning_msgs::msg::AvoidanceDebugMsgArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_planning_msgs::msg::AvoidanceDebugMsgArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_planning_msgs::msg::AvoidanceDebugMsgArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_planning_msgs::msg::AvoidanceDebugMsgArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_planning_msgs__msg__AvoidanceDebugMsgArray
    std::shared_ptr<tier4_planning_msgs::msg::AvoidanceDebugMsgArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_planning_msgs__msg__AvoidanceDebugMsgArray
    std::shared_ptr<tier4_planning_msgs::msg::AvoidanceDebugMsgArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AvoidanceDebugMsgArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->avoidance_info != other.avoidance_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const AvoidanceDebugMsgArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AvoidanceDebugMsgArray_

// alias to use template instance with default allocator
using AvoidanceDebugMsgArray =
  tier4_planning_msgs::msg::AvoidanceDebugMsgArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_MSG_ARRAY__STRUCT_HPP_
