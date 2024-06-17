// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_perception_msgs:msg/TrafficSignal.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL__STRUCT_HPP_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'elements'
#include "tier4_perception_msgs/msg/detail/traffic_light_element__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_perception_msgs__msg__TrafficSignal __attribute__((deprecated))
#else
# define DEPRECATED__tier4_perception_msgs__msg__TrafficSignal __declspec(deprecated)
#endif

namespace tier4_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficSignal_
{
  using Type = TrafficSignal_<ContainerAllocator>;

  explicit TrafficSignal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->traffic_light_id = 0ll;
    }
  }

  explicit TrafficSignal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->traffic_light_id = 0ll;
    }
  }

  // field types and members
  using _traffic_light_id_type =
    int64_t;
  _traffic_light_id_type traffic_light_id;
  using _elements_type =
    std::vector<tier4_perception_msgs::msg::TrafficLightElement_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_perception_msgs::msg::TrafficLightElement_<ContainerAllocator>>>;
  _elements_type elements;

  // setters for named parameter idiom
  Type & set__traffic_light_id(
    const int64_t & _arg)
  {
    this->traffic_light_id = _arg;
    return *this;
  }
  Type & set__elements(
    const std::vector<tier4_perception_msgs::msg::TrafficLightElement_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_perception_msgs::msg::TrafficLightElement_<ContainerAllocator>>> & _arg)
  {
    this->elements = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_perception_msgs::msg::TrafficSignal_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_perception_msgs::msg::TrafficSignal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_perception_msgs::msg::TrafficSignal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_perception_msgs::msg::TrafficSignal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_perception_msgs::msg::TrafficSignal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_perception_msgs::msg::TrafficSignal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_perception_msgs::msg::TrafficSignal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_perception_msgs::msg::TrafficSignal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_perception_msgs::msg::TrafficSignal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_perception_msgs::msg::TrafficSignal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_perception_msgs__msg__TrafficSignal
    std::shared_ptr<tier4_perception_msgs::msg::TrafficSignal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_perception_msgs__msg__TrafficSignal
    std::shared_ptr<tier4_perception_msgs::msg::TrafficSignal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficSignal_ & other) const
  {
    if (this->traffic_light_id != other.traffic_light_id) {
      return false;
    }
    if (this->elements != other.elements) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficSignal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficSignal_

// alias to use template instance with default allocator
using TrafficSignal =
  tier4_perception_msgs::msg::TrafficSignal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_perception_msgs

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL__STRUCT_HPP_
