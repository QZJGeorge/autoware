// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_planning_msgs:msg/AvoidanceDebugMsg.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_MSG__STRUCT_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tier4_planning_msgs__msg__AvoidanceDebugMsg __attribute__((deprecated))
#else
# define DEPRECATED__tier4_planning_msgs__msg__AvoidanceDebugMsg __declspec(deprecated)
#endif

namespace tier4_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AvoidanceDebugMsg_
{
  using Type = AvoidanceDebugMsg_<ContainerAllocator>;

  explicit AvoidanceDebugMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = "";
      this->allow_avoidance = false;
      this->longitudinal_distance = 0.0;
      this->lateral_distance_from_centerline = 0.0;
      this->to_furthest_linestring_distance = 0.0;
      this->max_shift_length = 0.0;
      this->required_jerk = 0.0;
      this->maximum_jerk = 0.0;
      this->failed_reason = "";
    }
  }

  explicit AvoidanceDebugMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_id(_alloc),
    failed_reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = "";
      this->allow_avoidance = false;
      this->longitudinal_distance = 0.0;
      this->lateral_distance_from_centerline = 0.0;
      this->to_furthest_linestring_distance = 0.0;
      this->max_shift_length = 0.0;
      this->required_jerk = 0.0;
      this->maximum_jerk = 0.0;
      this->failed_reason = "";
    }
  }

  // field types and members
  using _object_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_id_type object_id;
  using _allow_avoidance_type =
    bool;
  _allow_avoidance_type allow_avoidance;
  using _longitudinal_distance_type =
    double;
  _longitudinal_distance_type longitudinal_distance;
  using _lateral_distance_from_centerline_type =
    double;
  _lateral_distance_from_centerline_type lateral_distance_from_centerline;
  using _to_furthest_linestring_distance_type =
    double;
  _to_furthest_linestring_distance_type to_furthest_linestring_distance;
  using _max_shift_length_type =
    double;
  _max_shift_length_type max_shift_length;
  using _required_jerk_type =
    double;
  _required_jerk_type required_jerk;
  using _maximum_jerk_type =
    double;
  _maximum_jerk_type maximum_jerk;
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
  Type & set__allow_avoidance(
    const bool & _arg)
  {
    this->allow_avoidance = _arg;
    return *this;
  }
  Type & set__longitudinal_distance(
    const double & _arg)
  {
    this->longitudinal_distance = _arg;
    return *this;
  }
  Type & set__lateral_distance_from_centerline(
    const double & _arg)
  {
    this->lateral_distance_from_centerline = _arg;
    return *this;
  }
  Type & set__to_furthest_linestring_distance(
    const double & _arg)
  {
    this->to_furthest_linestring_distance = _arg;
    return *this;
  }
  Type & set__max_shift_length(
    const double & _arg)
  {
    this->max_shift_length = _arg;
    return *this;
  }
  Type & set__required_jerk(
    const double & _arg)
  {
    this->required_jerk = _arg;
    return *this;
  }
  Type & set__maximum_jerk(
    const double & _arg)
  {
    this->maximum_jerk = _arg;
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
    tier4_planning_msgs::msg::AvoidanceDebugMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_planning_msgs::msg::AvoidanceDebugMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_planning_msgs::msg::AvoidanceDebugMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_planning_msgs::msg::AvoidanceDebugMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_planning_msgs::msg::AvoidanceDebugMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_planning_msgs::msg::AvoidanceDebugMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_planning_msgs::msg::AvoidanceDebugMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_planning_msgs::msg::AvoidanceDebugMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_planning_msgs::msg::AvoidanceDebugMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_planning_msgs::msg::AvoidanceDebugMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_planning_msgs__msg__AvoidanceDebugMsg
    std::shared_ptr<tier4_planning_msgs::msg::AvoidanceDebugMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_planning_msgs__msg__AvoidanceDebugMsg
    std::shared_ptr<tier4_planning_msgs::msg::AvoidanceDebugMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AvoidanceDebugMsg_ & other) const
  {
    if (this->object_id != other.object_id) {
      return false;
    }
    if (this->allow_avoidance != other.allow_avoidance) {
      return false;
    }
    if (this->longitudinal_distance != other.longitudinal_distance) {
      return false;
    }
    if (this->lateral_distance_from_centerline != other.lateral_distance_from_centerline) {
      return false;
    }
    if (this->to_furthest_linestring_distance != other.to_furthest_linestring_distance) {
      return false;
    }
    if (this->max_shift_length != other.max_shift_length) {
      return false;
    }
    if (this->required_jerk != other.required_jerk) {
      return false;
    }
    if (this->maximum_jerk != other.maximum_jerk) {
      return false;
    }
    if (this->failed_reason != other.failed_reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const AvoidanceDebugMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AvoidanceDebugMsg_

// alias to use template instance with default allocator
using AvoidanceDebugMsg =
  tier4_planning_msgs::msg::AvoidanceDebugMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_MSG__STRUCT_HPP_
