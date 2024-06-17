// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_external_api_msgs:msg/RouteSection.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROUTE_SECTION__STRUCT_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROUTE_SECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tier4_external_api_msgs__msg__RouteSection __attribute__((deprecated))
#else
# define DEPRECATED__tier4_external_api_msgs__msg__RouteSection __declspec(deprecated)
#endif

namespace tier4_external_api_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RouteSection_
{
  using Type = RouteSection_<ContainerAllocator>;

  explicit RouteSection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->preferred_lane_id = 0ll;
    }
  }

  explicit RouteSection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->preferred_lane_id = 0ll;
    }
  }

  // field types and members
  using _preferred_lane_id_type =
    int64_t;
  _preferred_lane_id_type preferred_lane_id;
  using _lane_ids_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _lane_ids_type lane_ids;
  using _continued_lane_ids_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _continued_lane_ids_type continued_lane_ids;

  // setters for named parameter idiom
  Type & set__preferred_lane_id(
    const int64_t & _arg)
  {
    this->preferred_lane_id = _arg;
    return *this;
  }
  Type & set__lane_ids(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->lane_ids = _arg;
    return *this;
  }
  Type & set__continued_lane_ids(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->continued_lane_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_external_api_msgs::msg::RouteSection_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_external_api_msgs::msg::RouteSection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_external_api_msgs::msg::RouteSection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_external_api_msgs::msg::RouteSection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::msg::RouteSection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::msg::RouteSection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::msg::RouteSection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::msg::RouteSection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_external_api_msgs::msg::RouteSection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_external_api_msgs::msg::RouteSection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_external_api_msgs__msg__RouteSection
    std::shared_ptr<tier4_external_api_msgs::msg::RouteSection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_external_api_msgs__msg__RouteSection
    std::shared_ptr<tier4_external_api_msgs::msg::RouteSection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RouteSection_ & other) const
  {
    if (this->preferred_lane_id != other.preferred_lane_id) {
      return false;
    }
    if (this->lane_ids != other.lane_ids) {
      return false;
    }
    if (this->continued_lane_ids != other.continued_lane_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const RouteSection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RouteSection_

// alias to use template instance with default allocator
using RouteSection =
  tier4_external_api_msgs::msg::RouteSection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROUTE_SECTION__STRUCT_HPP_
