// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_perception_msgs:msg/TrafficLightRoiArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ROI_ARRAY__STRUCT_HPP_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ROI_ARRAY__STRUCT_HPP_

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
// Member 'rois'
#include "tier4_perception_msgs/msg/detail/traffic_light_roi__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_perception_msgs__msg__TrafficLightRoiArray __attribute__((deprecated))
#else
# define DEPRECATED__tier4_perception_msgs__msg__TrafficLightRoiArray __declspec(deprecated)
#endif

namespace tier4_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficLightRoiArray_
{
  using Type = TrafficLightRoiArray_<ContainerAllocator>;

  explicit TrafficLightRoiArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit TrafficLightRoiArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _rois_type =
    std::vector<tier4_perception_msgs::msg::TrafficLightRoi_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_perception_msgs::msg::TrafficLightRoi_<ContainerAllocator>>>;
  _rois_type rois;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__rois(
    const std::vector<tier4_perception_msgs::msg::TrafficLightRoi_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_perception_msgs::msg::TrafficLightRoi_<ContainerAllocator>>> & _arg)
  {
    this->rois = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_perception_msgs::msg::TrafficLightRoiArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_perception_msgs::msg::TrafficLightRoiArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_perception_msgs::msg::TrafficLightRoiArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_perception_msgs::msg::TrafficLightRoiArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_perception_msgs::msg::TrafficLightRoiArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_perception_msgs::msg::TrafficLightRoiArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_perception_msgs::msg::TrafficLightRoiArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_perception_msgs::msg::TrafficLightRoiArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_perception_msgs::msg::TrafficLightRoiArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_perception_msgs::msg::TrafficLightRoiArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_perception_msgs__msg__TrafficLightRoiArray
    std::shared_ptr<tier4_perception_msgs::msg::TrafficLightRoiArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_perception_msgs__msg__TrafficLightRoiArray
    std::shared_ptr<tier4_perception_msgs::msg::TrafficLightRoiArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficLightRoiArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->rois != other.rois) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficLightRoiArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficLightRoiArray_

// alias to use template instance with default allocator
using TrafficLightRoiArray =
  tier4_perception_msgs::msg::TrafficLightRoiArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_perception_msgs

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ROI_ARRAY__STRUCT_HPP_
