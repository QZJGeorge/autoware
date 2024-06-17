// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:srv/MoraiSyncModeCmdSrv.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__SRV__DETAIL__MORAI_SYNC_MODE_CMD_SRV__STRUCT_HPP_
#define MORAI_MSGS__SRV__DETAIL__MORAI_SYNC_MODE_CMD_SRV__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'request'
#include "morai_msgs/msg/detail/sync_mode_cmd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__morai_msgs__srv__MoraiSyncModeCmdSrv_Request __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__srv__MoraiSyncModeCmdSrv_Request __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoraiSyncModeCmdSrv_Request_
{
  using Type = MoraiSyncModeCmdSrv_Request_<ContainerAllocator>;

  explicit MoraiSyncModeCmdSrv_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_init)
  {
    (void)_init;
  }

  explicit MoraiSyncModeCmdSrv_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _request_type =
    morai_msgs::msg::SyncModeCmd_<ContainerAllocator>;
  _request_type request;

  // setters for named parameter idiom
  Type & set__request(
    const morai_msgs::msg::SyncModeCmd_<ContainerAllocator> & _arg)
  {
    this->request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::srv::MoraiSyncModeCmdSrv_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::srv::MoraiSyncModeCmdSrv_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::srv::MoraiSyncModeCmdSrv_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::srv::MoraiSyncModeCmdSrv_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::srv::MoraiSyncModeCmdSrv_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::srv::MoraiSyncModeCmdSrv_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::srv::MoraiSyncModeCmdSrv_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::srv::MoraiSyncModeCmdSrv_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::srv::MoraiSyncModeCmdSrv_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::srv::MoraiSyncModeCmdSrv_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__srv__MoraiSyncModeCmdSrv_Request
    std::shared_ptr<morai_msgs::srv::MoraiSyncModeCmdSrv_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__srv__MoraiSyncModeCmdSrv_Request
    std::shared_ptr<morai_msgs::srv::MoraiSyncModeCmdSrv_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoraiSyncModeCmdSrv_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoraiSyncModeCmdSrv_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoraiSyncModeCmdSrv_Request_

// alias to use template instance with default allocator
using MoraiSyncModeCmdSrv_Request =
  morai_msgs::srv::MoraiSyncModeCmdSrv_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace morai_msgs


// Include directives for member types
// Member 'response'
#include "morai_msgs/msg/detail/sync_mode_cmd_response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__morai_msgs__srv__MoraiSyncModeCmdSrv_Response __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__srv__MoraiSyncModeCmdSrv_Response __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoraiSyncModeCmdSrv_Response_
{
  using Type = MoraiSyncModeCmdSrv_Response_<ContainerAllocator>;

  explicit MoraiSyncModeCmdSrv_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_init)
  {
    (void)_init;
  }

  explicit MoraiSyncModeCmdSrv_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _response_type =
    morai_msgs::msg::SyncModeCmdResponse_<ContainerAllocator>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const morai_msgs::msg::SyncModeCmdResponse_<ContainerAllocator> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::srv::MoraiSyncModeCmdSrv_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::srv::MoraiSyncModeCmdSrv_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::srv::MoraiSyncModeCmdSrv_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::srv::MoraiSyncModeCmdSrv_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::srv::MoraiSyncModeCmdSrv_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::srv::MoraiSyncModeCmdSrv_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::srv::MoraiSyncModeCmdSrv_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::srv::MoraiSyncModeCmdSrv_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::srv::MoraiSyncModeCmdSrv_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::srv::MoraiSyncModeCmdSrv_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__srv__MoraiSyncModeCmdSrv_Response
    std::shared_ptr<morai_msgs::srv::MoraiSyncModeCmdSrv_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__srv__MoraiSyncModeCmdSrv_Response
    std::shared_ptr<morai_msgs::srv::MoraiSyncModeCmdSrv_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoraiSyncModeCmdSrv_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoraiSyncModeCmdSrv_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoraiSyncModeCmdSrv_Response_

// alias to use template instance with default allocator
using MoraiSyncModeCmdSrv_Response =
  morai_msgs::srv::MoraiSyncModeCmdSrv_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace morai_msgs

namespace morai_msgs
{

namespace srv
{

struct MoraiSyncModeCmdSrv
{
  using Request = morai_msgs::srv::MoraiSyncModeCmdSrv_Request;
  using Response = morai_msgs::srv::MoraiSyncModeCmdSrv_Response;
};

}  // namespace srv

}  // namespace morai_msgs

#endif  // MORAI_MSGS__SRV__DETAIL__MORAI_SYNC_MODE_CMD_SRV__STRUCT_HPP_
