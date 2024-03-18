cmake_minimum_required(VERSION 3.14)
project(mcity_localization)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(std_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)

# Add include directories
include_directories(
    include
    /usr/include/GeographicLib
    /usr/include/glm
)

# Declare a library
add_library(mcity_localization_component SHARED
  src/mcity_localization.cpp
)

ament_target_dependencies(mcity_localization_component
  rclcpp
  rclcpp_components
  std_msgs
  nav_msgs
  sensor_msgs
  geometry_msgs
)

rclcpp_components_register_node(mcity_localization_component
  PLUGIN "mcity_localization::McityLocalization"
  EXECUTABLE mcity_localization
)

# Install rules for the component library
install(TARGETS
  mcity_localization_component
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

install(DIRECTORY
  include/
  DESTINATION include
)

# Must be called for ament package
ament_package()
