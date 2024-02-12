cmake_minimum_required(VERSION 3.14)
project(mcity_planning)

find_package(autoware_cmake REQUIRED)

autoware_package()

# Add include directories
include_directories(
    include
)

################################# AUTOWARE PATH ######################################

ament_auto_add_library(autoware_path_component SHARED
  src/autoware_path.cpp
)

rclcpp_components_register_node(autoware_path_component
  PLUGIN "autoware_path::AutowarePath"
  EXECUTABLE autoware_path
)

########################################################################################

ament_auto_package(
  INSTALL_TO_SHARE
  include
)
