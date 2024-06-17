// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_external_api_msgs:msg/LocalizationScoreArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__LOCALIZATION_SCORE_ARRAY__STRUCT_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__LOCALIZATION_SCORE_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'values'
#include "tier4_external_api_msgs/msg/detail/localization_score__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_external_api_msgs__msg__LocalizationScoreArray __attribute__((deprecated))
#else
# define DEPRECATED__tier4_external_api_msgs__msg__LocalizationScoreArray __declspec(deprecated)
#endif

namespace tier4_external_api_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocalizationScoreArray_
{
  using Type = LocalizationScoreArray_<ContainerAllocator>;

  explicit LocalizationScoreArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit LocalizationScoreArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _values_type =
    std::vector<tier4_external_api_msgs::msg::LocalizationScore_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_external_api_msgs::msg::LocalizationScore_<ContainerAllocator>>>;
  _values_type values;

  // setters for named parameter idiom
  Type & set__values(
    const std::vector<tier4_external_api_msgs::msg::LocalizationScore_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_external_api_msgs::msg::LocalizationScore_<ContainerAllocator>>> & _arg)
  {
    this->values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_external_api_msgs::msg::LocalizationScoreArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_external_api_msgs::msg::LocalizationScoreArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_external_api_msgs::msg::LocalizationScoreArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_external_api_msgs::msg::LocalizationScoreArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::msg::LocalizationScoreArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::msg::LocalizationScoreArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::msg::LocalizationScoreArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::msg::LocalizationScoreArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_external_api_msgs::msg::LocalizationScoreArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_external_api_msgs::msg::LocalizationScoreArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_external_api_msgs__msg__LocalizationScoreArray
    std::shared_ptr<tier4_external_api_msgs::msg::LocalizationScoreArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_external_api_msgs__msg__LocalizationScoreArray
    std::shared_ptr<tier4_external_api_msgs::msg::LocalizationScoreArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocalizationScoreArray_ & other) const
  {
    if (this->values != other.values) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocalizationScoreArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocalizationScoreArray_

// alias to use template instance with default allocator
using LocalizationScoreArray =
  tier4_external_api_msgs::msg::LocalizationScoreArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__LOCALIZATION_SCORE_ARRAY__STRUCT_HPP_
