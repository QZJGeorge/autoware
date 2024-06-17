// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_rtc_msgs:msg/CooperateStatusArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_STATUS_ARRAY__STRUCT_HPP_
#define TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_STATUS_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'statuses'
#include "tier4_rtc_msgs/msg/detail/cooperate_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_rtc_msgs__msg__CooperateStatusArray __attribute__((deprecated))
#else
# define DEPRECATED__tier4_rtc_msgs__msg__CooperateStatusArray __declspec(deprecated)
#endif

namespace tier4_rtc_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CooperateStatusArray_
{
  using Type = CooperateStatusArray_<ContainerAllocator>;

  explicit CooperateStatusArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    (void)_init;
  }

  explicit CooperateStatusArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _statuses_type =
    std::vector<tier4_rtc_msgs::msg::CooperateStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_rtc_msgs::msg::CooperateStatus_<ContainerAllocator>>>;
  _statuses_type statuses;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__statuses(
    const std::vector<tier4_rtc_msgs::msg::CooperateStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_rtc_msgs::msg::CooperateStatus_<ContainerAllocator>>> & _arg)
  {
    this->statuses = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_rtc_msgs::msg::CooperateStatusArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_rtc_msgs::msg::CooperateStatusArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_rtc_msgs::msg::CooperateStatusArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_rtc_msgs::msg::CooperateStatusArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_rtc_msgs::msg::CooperateStatusArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_rtc_msgs::msg::CooperateStatusArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_rtc_msgs::msg::CooperateStatusArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_rtc_msgs::msg::CooperateStatusArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_rtc_msgs::msg::CooperateStatusArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_rtc_msgs::msg::CooperateStatusArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_rtc_msgs__msg__CooperateStatusArray
    std::shared_ptr<tier4_rtc_msgs::msg::CooperateStatusArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_rtc_msgs__msg__CooperateStatusArray
    std::shared_ptr<tier4_rtc_msgs::msg::CooperateStatusArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CooperateStatusArray_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->statuses != other.statuses) {
      return false;
    }
    return true;
  }
  bool operator!=(const CooperateStatusArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CooperateStatusArray_

// alias to use template instance with default allocator
using CooperateStatusArray =
  tier4_rtc_msgs::msg::CooperateStatusArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_rtc_msgs

#endif  // TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_STATUS_ARRAY__STRUCT_HPP_
