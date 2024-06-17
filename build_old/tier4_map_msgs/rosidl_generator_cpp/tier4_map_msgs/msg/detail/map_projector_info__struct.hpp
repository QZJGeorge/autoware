// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_map_msgs:msg/MapProjectorInfo.idl
// generated code does not contain a copyright notice

#ifndef TIER4_MAP_MSGS__MSG__DETAIL__MAP_PROJECTOR_INFO__STRUCT_HPP_
#define TIER4_MAP_MSGS__MSG__DETAIL__MAP_PROJECTOR_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'map_origin'
#include "geographic_msgs/msg/detail/geo_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_map_msgs__msg__MapProjectorInfo __attribute__((deprecated))
#else
# define DEPRECATED__tier4_map_msgs__msg__MapProjectorInfo __declspec(deprecated)
#endif

namespace tier4_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MapProjectorInfo_
{
  using Type = MapProjectorInfo_<ContainerAllocator>;

  explicit MapProjectorInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map_origin(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->projector_type = "";
      this->vertical_datum = "";
      this->mgrs_grid = "";
    }
  }

  explicit MapProjectorInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : projector_type(_alloc),
    vertical_datum(_alloc),
    mgrs_grid(_alloc),
    map_origin(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->projector_type = "";
      this->vertical_datum = "";
      this->mgrs_grid = "";
    }
  }

  // field types and members
  using _projector_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _projector_type_type projector_type;
  using _vertical_datum_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _vertical_datum_type vertical_datum;
  using _mgrs_grid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mgrs_grid_type mgrs_grid;
  using _map_origin_type =
    geographic_msgs::msg::GeoPoint_<ContainerAllocator>;
  _map_origin_type map_origin;

  // setters for named parameter idiom
  Type & set__projector_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->projector_type = _arg;
    return *this;
  }
  Type & set__vertical_datum(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->vertical_datum = _arg;
    return *this;
  }
  Type & set__mgrs_grid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mgrs_grid = _arg;
    return *this;
  }
  Type & set__map_origin(
    const geographic_msgs::msg::GeoPoint_<ContainerAllocator> & _arg)
  {
    this->map_origin = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> LOCAL;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> LOCAL_CARTESIAN_UTM;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> MGRS;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TRANSVERSE_MERCATOR;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> WGS84;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> EGM2008;

  // pointer types
  using RawPtr =
    tier4_map_msgs::msg::MapProjectorInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_map_msgs::msg::MapProjectorInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_map_msgs::msg::MapProjectorInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_map_msgs::msg::MapProjectorInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_map_msgs::msg::MapProjectorInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_map_msgs::msg::MapProjectorInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_map_msgs::msg::MapProjectorInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_map_msgs::msg::MapProjectorInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_map_msgs::msg::MapProjectorInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_map_msgs::msg::MapProjectorInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_map_msgs__msg__MapProjectorInfo
    std::shared_ptr<tier4_map_msgs::msg::MapProjectorInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_map_msgs__msg__MapProjectorInfo
    std::shared_ptr<tier4_map_msgs::msg::MapProjectorInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapProjectorInfo_ & other) const
  {
    if (this->projector_type != other.projector_type) {
      return false;
    }
    if (this->vertical_datum != other.vertical_datum) {
      return false;
    }
    if (this->mgrs_grid != other.mgrs_grid) {
      return false;
    }
    if (this->map_origin != other.map_origin) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapProjectorInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapProjectorInfo_

// alias to use template instance with default allocator
using MapProjectorInfo =
  tier4_map_msgs::msg::MapProjectorInfo_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
MapProjectorInfo_<ContainerAllocator>::LOCAL = "local";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
MapProjectorInfo_<ContainerAllocator>::LOCAL_CARTESIAN_UTM = "LocalCartesianUTM";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
MapProjectorInfo_<ContainerAllocator>::MGRS = "MGRS";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
MapProjectorInfo_<ContainerAllocator>::TRANSVERSE_MERCATOR = "TransverseMercator";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
MapProjectorInfo_<ContainerAllocator>::WGS84 = "WGS84";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
MapProjectorInfo_<ContainerAllocator>::EGM2008 = "EGM2008";

}  // namespace msg

}  // namespace tier4_map_msgs

#endif  // TIER4_MAP_MSGS__MSG__DETAIL__MAP_PROJECTOR_INFO__STRUCT_HPP_
