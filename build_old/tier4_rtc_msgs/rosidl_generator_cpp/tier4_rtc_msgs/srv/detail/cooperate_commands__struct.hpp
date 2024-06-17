// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_rtc_msgs:srv/CooperateCommands.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__SRV__DETAIL__COOPERATE_COMMANDS__STRUCT_HPP_
#define TIER4_RTC_MSGS__SRV__DETAIL__COOPERATE_COMMANDS__STRUCT_HPP_

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
// Member 'commands'
#include "tier4_rtc_msgs/msg/detail/cooperate_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_rtc_msgs__srv__CooperateCommands_Request __attribute__((deprecated))
#else
# define DEPRECATED__tier4_rtc_msgs__srv__CooperateCommands_Request __declspec(deprecated)
#endif

namespace tier4_rtc_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CooperateCommands_Request_
{
  using Type = CooperateCommands_Request_<ContainerAllocator>;

  explicit CooperateCommands_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    (void)_init;
  }

  explicit CooperateCommands_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _commands_type =
    std::vector<tier4_rtc_msgs::msg::CooperateCommand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_rtc_msgs::msg::CooperateCommand_<ContainerAllocator>>>;
  _commands_type commands;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__commands(
    const std::vector<tier4_rtc_msgs::msg::CooperateCommand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_rtc_msgs::msg::CooperateCommand_<ContainerAllocator>>> & _arg)
  {
    this->commands = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_rtc_msgs::srv::CooperateCommands_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_rtc_msgs::srv::CooperateCommands_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_rtc_msgs::srv::CooperateCommands_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_rtc_msgs::srv::CooperateCommands_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_rtc_msgs::srv::CooperateCommands_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_rtc_msgs::srv::CooperateCommands_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_rtc_msgs::srv::CooperateCommands_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_rtc_msgs::srv::CooperateCommands_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_rtc_msgs::srv::CooperateCommands_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_rtc_msgs::srv::CooperateCommands_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_rtc_msgs__srv__CooperateCommands_Request
    std::shared_ptr<tier4_rtc_msgs::srv::CooperateCommands_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_rtc_msgs__srv__CooperateCommands_Request
    std::shared_ptr<tier4_rtc_msgs::srv::CooperateCommands_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CooperateCommands_Request_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->commands != other.commands) {
      return false;
    }
    return true;
  }
  bool operator!=(const CooperateCommands_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CooperateCommands_Request_

// alias to use template instance with default allocator
using CooperateCommands_Request =
  tier4_rtc_msgs::srv::CooperateCommands_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tier4_rtc_msgs


// Include directives for member types
// Member 'responses'
#include "tier4_rtc_msgs/msg/detail/cooperate_response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_rtc_msgs__srv__CooperateCommands_Response __attribute__((deprecated))
#else
# define DEPRECATED__tier4_rtc_msgs__srv__CooperateCommands_Response __declspec(deprecated)
#endif

namespace tier4_rtc_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CooperateCommands_Response_
{
  using Type = CooperateCommands_Response_<ContainerAllocator>;

  explicit CooperateCommands_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit CooperateCommands_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _responses_type =
    std::vector<tier4_rtc_msgs::msg::CooperateResponse_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_rtc_msgs::msg::CooperateResponse_<ContainerAllocator>>>;
  _responses_type responses;

  // setters for named parameter idiom
  Type & set__responses(
    const std::vector<tier4_rtc_msgs::msg::CooperateResponse_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_rtc_msgs::msg::CooperateResponse_<ContainerAllocator>>> & _arg)
  {
    this->responses = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_rtc_msgs::srv::CooperateCommands_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_rtc_msgs::srv::CooperateCommands_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_rtc_msgs::srv::CooperateCommands_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_rtc_msgs::srv::CooperateCommands_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_rtc_msgs::srv::CooperateCommands_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_rtc_msgs::srv::CooperateCommands_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_rtc_msgs::srv::CooperateCommands_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_rtc_msgs::srv::CooperateCommands_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_rtc_msgs::srv::CooperateCommands_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_rtc_msgs::srv::CooperateCommands_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_rtc_msgs__srv__CooperateCommands_Response
    std::shared_ptr<tier4_rtc_msgs::srv::CooperateCommands_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_rtc_msgs__srv__CooperateCommands_Response
    std::shared_ptr<tier4_rtc_msgs::srv::CooperateCommands_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CooperateCommands_Response_ & other) const
  {
    if (this->responses != other.responses) {
      return false;
    }
    return true;
  }
  bool operator!=(const CooperateCommands_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CooperateCommands_Response_

// alias to use template instance with default allocator
using CooperateCommands_Response =
  tier4_rtc_msgs::srv::CooperateCommands_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tier4_rtc_msgs

namespace tier4_rtc_msgs
{

namespace srv
{

struct CooperateCommands
{
  using Request = tier4_rtc_msgs::srv::CooperateCommands_Request;
  using Response = tier4_rtc_msgs::srv::CooperateCommands_Response;
};

}  // namespace srv

}  // namespace tier4_rtc_msgs

#endif  // TIER4_RTC_MSGS__SRV__DETAIL__COOPERATE_COMMANDS__STRUCT_HPP_
