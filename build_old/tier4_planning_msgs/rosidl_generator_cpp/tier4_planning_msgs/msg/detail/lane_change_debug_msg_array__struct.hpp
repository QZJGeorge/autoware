// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_planning_msgs:msg/LaneChangeDebugMsgArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_DEBUG_MSG_ARRAY__STRUCT_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_DEBUG_MSG_ARRAY__STRUCT_HPP_

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
// Member 'lane_change_info'
#include "tier4_planning_msgs/msg/detail/lane_change_debug_msg__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_planning_msgs__msg__LaneChangeDebugMsgArray __attribute__((deprecated))
#else
# define DEPRECATED__tier4_planning_msgs__msg__LaneChangeDebugMsgArray __declspec(deprecated)
#endif

namespace tier4_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneChangeDebugMsgArray_
{
  using Type = LaneChangeDebugMsgArray_<ContainerAllocator>;

  explicit LaneChangeDebugMsgArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit LaneChangeDebugMsgArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _lane_change_info_type =
    std::vector<tier4_planning_msgs::msg::LaneChangeDebugMsg_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_planning_msgs::msg::LaneChangeDebugMsg_<ContainerAllocator>>>;
  _lane_change_info_type lane_change_info;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__lane_change_info(
    const std::vector<tier4_planning_msgs::msg::LaneChangeDebugMsg_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_planning_msgs::msg::LaneChangeDebugMsg_<ContainerAllocator>>> & _arg)
  {
    this->lane_change_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_planning_msgs::msg::LaneChangeDebugMsgArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_planning_msgs::msg::LaneChangeDebugMsgArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_planning_msgs::msg::LaneChangeDebugMsgArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_planning_msgs::msg::LaneChangeDebugMsgArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_planning_msgs::msg::LaneChangeDebugMsgArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_planning_msgs::msg::LaneChangeDebugMsgArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_planning_msgs::msg::LaneChangeDebugMsgArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_planning_msgs::msg::LaneChangeDebugMsgArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_planning_msgs::msg::LaneChangeDebugMsgArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_planning_msgs::msg::LaneChangeDebugMsgArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_planning_msgs__msg__LaneChangeDebugMsgArray
    std::shared_ptr<tier4_planning_msgs::msg::LaneChangeDebugMsgArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_planning_msgs__msg__LaneChangeDebugMsgArray
    std::shared_ptr<tier4_planning_msgs::msg::LaneChangeDebugMsgArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneChangeDebugMsgArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->lane_change_info != other.lane_change_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneChangeDebugMsgArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneChangeDebugMsgArray_

// alias to use template instance with default allocator
using LaneChangeDebugMsgArray =
  tier4_planning_msgs::msg::LaneChangeDebugMsgArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_DEBUG_MSG_ARRAY__STRUCT_HPP_
