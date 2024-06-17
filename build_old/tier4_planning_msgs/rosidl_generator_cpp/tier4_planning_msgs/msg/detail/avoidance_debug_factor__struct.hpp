// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_planning_msgs:msg/AvoidanceDebugFactor.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_FACTOR__STRUCT_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_FACTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tier4_planning_msgs__msg__AvoidanceDebugFactor __attribute__((deprecated))
#else
# define DEPRECATED__tier4_planning_msgs__msg__AvoidanceDebugFactor __declspec(deprecated)
#endif

namespace tier4_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AvoidanceDebugFactor_
{
  using Type = AvoidanceDebugFactor_<ContainerAllocator>;

  explicit AvoidanceDebugFactor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit AvoidanceDebugFactor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> OBJECT_IS_NOT_TYPE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> OBJECT_IS_BEHIND_THRESHOLD;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> OBJECT_IS_IN_FRONT_THRESHOLD;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> OBJECT_BEHIND_PATH_GOAL;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> NOT_PARKING_OBJECT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> MOVING_OBJECT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SAME_DIRECTION_SHIFT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TOO_NEAR_TO_CENTERLINE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> INSUFFICIENT_LATERAL_MARGIN;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> REMAINING_DISTANCE_LESS_THAN_ZERO;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TOO_LARGE_JERK;

  // pointer types
  using RawPtr =
    tier4_planning_msgs::msg::AvoidanceDebugFactor_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_planning_msgs::msg::AvoidanceDebugFactor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_planning_msgs::msg::AvoidanceDebugFactor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_planning_msgs::msg::AvoidanceDebugFactor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_planning_msgs::msg::AvoidanceDebugFactor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_planning_msgs::msg::AvoidanceDebugFactor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_planning_msgs::msg::AvoidanceDebugFactor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_planning_msgs::msg::AvoidanceDebugFactor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_planning_msgs::msg::AvoidanceDebugFactor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_planning_msgs::msg::AvoidanceDebugFactor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_planning_msgs__msg__AvoidanceDebugFactor
    std::shared_ptr<tier4_planning_msgs::msg::AvoidanceDebugFactor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_planning_msgs__msg__AvoidanceDebugFactor
    std::shared_ptr<tier4_planning_msgs::msg::AvoidanceDebugFactor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AvoidanceDebugFactor_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const AvoidanceDebugFactor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AvoidanceDebugFactor_

// alias to use template instance with default allocator
using AvoidanceDebugFactor =
  tier4_planning_msgs::msg::AvoidanceDebugFactor_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
AvoidanceDebugFactor_<ContainerAllocator>::OBJECT_IS_NOT_TYPE = "ObjectIsNotType";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
AvoidanceDebugFactor_<ContainerAllocator>::OBJECT_IS_BEHIND_THRESHOLD = "ObjectIsBehindThreshold";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
AvoidanceDebugFactor_<ContainerAllocator>::OBJECT_IS_IN_FRONT_THRESHOLD = "ObjectIsInFrontThreshold";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
AvoidanceDebugFactor_<ContainerAllocator>::OBJECT_BEHIND_PATH_GOAL = "ObjectBehindPathGoal";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
AvoidanceDebugFactor_<ContainerAllocator>::NOT_PARKING_OBJECT = "NotParkingObject";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
AvoidanceDebugFactor_<ContainerAllocator>::MOVING_OBJECT = "MovingObject";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
AvoidanceDebugFactor_<ContainerAllocator>::SAME_DIRECTION_SHIFT = "SameDirectionShift";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
AvoidanceDebugFactor_<ContainerAllocator>::TOO_NEAR_TO_CENTERLINE = "TooNearToCenterLine";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
AvoidanceDebugFactor_<ContainerAllocator>::INSUFFICIENT_LATERAL_MARGIN = "InsufficientLateralMargin";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
AvoidanceDebugFactor_<ContainerAllocator>::REMAINING_DISTANCE_LESS_THAN_ZERO = "RemainingDistanceLessThanZero";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
AvoidanceDebugFactor_<ContainerAllocator>::TOO_LARGE_JERK = "TooLargeJerk";

}  // namespace msg

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_FACTOR__STRUCT_HPP_
