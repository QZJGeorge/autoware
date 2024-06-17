// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_planning_msgs:msg/LaneChangeDebugMsg.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_DEBUG_MSG__STRUCT_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_DEBUG_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'relative_distance'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_planning_msgs__msg__LaneChangeDebugMsg __attribute__((deprecated))
#else
# define DEPRECATED__tier4_planning_msgs__msg__LaneChangeDebugMsg __declspec(deprecated)
#endif

namespace tier4_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneChangeDebugMsg_
{
  using Type = LaneChangeDebugMsg_<ContainerAllocator>;

  explicit LaneChangeDebugMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : relative_distance(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = "";
      this->allow_lane_change = false;
      this->is_front = false;
      this->velocity = 0.0;
      this->failed_reason = "";
    }
  }

  explicit LaneChangeDebugMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_id(_alloc),
    relative_distance(_alloc, _init),
    failed_reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = "";
      this->allow_lane_change = false;
      this->is_front = false;
      this->velocity = 0.0;
      this->failed_reason = "";
    }
  }

  // field types and members
  using _object_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_id_type object_id;
  using _allow_lane_change_type =
    bool;
  _allow_lane_change_type allow_lane_change;
  using _is_front_type =
    bool;
  _is_front_type is_front;
  using _relative_distance_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _relative_distance_type relative_distance;
  using _velocity_type =
    double;
  _velocity_type velocity;
  using _failed_reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _failed_reason_type failed_reason;

  // setters for named parameter idiom
  Type & set__object_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->object_id = _arg;
    return *this;
  }
  Type & set__allow_lane_change(
    const bool & _arg)
  {
    this->allow_lane_change = _arg;
    return *this;
  }
  Type & set__is_front(
    const bool & _arg)
  {
    this->is_front = _arg;
    return *this;
  }
  Type & set__relative_distance(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->relative_distance = _arg;
    return *this;
  }
  Type & set__velocity(
    const double & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__failed_reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->failed_reason = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_planning_msgs::msg::LaneChangeDebugMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_planning_msgs::msg::LaneChangeDebugMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_planning_msgs::msg::LaneChangeDebugMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_planning_msgs::msg::LaneChangeDebugMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_planning_msgs::msg::LaneChangeDebugMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_planning_msgs::msg::LaneChangeDebugMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_planning_msgs::msg::LaneChangeDebugMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_planning_msgs::msg::LaneChangeDebugMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_planning_msgs::msg::LaneChangeDebugMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_planning_msgs::msg::LaneChangeDebugMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_planning_msgs__msg__LaneChangeDebugMsg
    std::shared_ptr<tier4_planning_msgs::msg::LaneChangeDebugMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_planning_msgs__msg__LaneChangeDebugMsg
    std::shared_ptr<tier4_planning_msgs::msg::LaneChangeDebugMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneChangeDebugMsg_ & other) const
  {
    if (this->object_id != other.object_id) {
      return false;
    }
    if (this->allow_lane_change != other.allow_lane_change) {
      return false;
    }
    if (this->is_front != other.is_front) {
      return false;
    }
    if (this->relative_distance != other.relative_distance) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->failed_reason != other.failed_reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneChangeDebugMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneChangeDebugMsg_

// alias to use template instance with default allocator
using LaneChangeDebugMsg =
  tier4_planning_msgs::msg::LaneChangeDebugMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_DEBUG_MSG__STRUCT_HPP_
