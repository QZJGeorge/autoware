cmake_minimum_required(VERSION 3.14)
project(preview_control)

find_package(autoware_cmake REQUIRED)

autoware_package()

# Add include directories
include_directories(
    include
    src/path_follow
    src/speed_control
)

#############################  PREVIEW CONTROL  ##############################

ament_auto_add_library(preview_control_component SHARED
  src/preview_control.cpp
  src/path_follow/path_follow.cpp
  src/speed_control/speed_control.cpp
)

# target_link_libraries(preview_control_component hiredis)

rclcpp_components_register_node(preview_control_component
  PLUGIN "preview_control::PreviewControl"
  EXECUTABLE preview_control
)

#############################  PREVIEW Path Gen  ##############################

ament_auto_add_library(preview_path_gen_component SHARED
  src/preview_path_gen.cpp
)

rclcpp_components_register_node(preview_path_gen_component
  PLUGIN "preview_path_gen::PreviewPathGen"
  EXECUTABLE preview_path_gen
)

ament_auto_package(
  INSTALL_TO_SHARE
  include
  launch
)
