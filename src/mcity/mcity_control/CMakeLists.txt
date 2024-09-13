cmake_minimum_required(VERSION 3.14)
project(mcity_control)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(std_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(mcity_msgs REQUIRED)

# Add include directories
include_directories(
    include
    src/preview_control
    src/path_process
    src/path_follow
    src/speed_control
    ../redis_client/
    /usr/include/hiredis
)

# Declare a library
add_library(preview_control_component SHARED
  src/preview_control/preview_control.cpp
  src/path_process/path_process.cpp
  src/path_follow/path_follow.cpp
  src/speed_control/speed_control.cpp
  ../redis_client/RedisClient.cpp
)

target_link_libraries(preview_control_component hiredis)

ament_target_dependencies(preview_control_component
  rclcpp
  rclcpp_components
  std_msgs
  nav_msgs
  sensor_msgs
  geometry_msgs
  mcity_msgs
)

rclcpp_components_register_node(preview_control_component
  PLUGIN "preview_control::PreviewControl"
  EXECUTABLE preview_control
)

# Install rules for the component library
install(TARGETS
  preview_control_component
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

install(DIRECTORY
  include/
  DESTINATION include
)

install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}/
)

# Must be called for ament package
ament_package()

