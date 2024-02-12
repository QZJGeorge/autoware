cmake_minimum_required(VERSION 3.14)
project(mcity_control)

find_package(autoware_cmake REQUIRED)

autoware_package()

# Add include directories
include_directories(
    include
    src/preview_control
    src/path_process
    src/path_follow
    src/speed_control
    src/mkz_bywire
)

#############################  PREVIEW CONTROL  ##############################

ament_auto_add_library(preview_control_component SHARED
  src/preview_control/preview_control.cpp
  src/path_process/path_process.cpp
  src/path_follow/path_follow.cpp
  src/speed_control/speed_control.cpp
)

rclcpp_components_register_node(preview_control_component
  PLUGIN "preview_control::PreviewControl"
  EXECUTABLE preview_control
)

#################################  MKZ BYWIRE  ##################################

ament_auto_add_library(mkz_bywire_component SHARED
  src/mkz_bywire/mkz_bywire.cpp
)

rclcpp_components_register_node(mkz_bywire_component
  PLUGIN "mkz_bywire::MkzBywire"
  EXECUTABLE mkz_bywire
)

ament_auto_package(
  INSTALL_TO_SHARE
  include
  launch
)
