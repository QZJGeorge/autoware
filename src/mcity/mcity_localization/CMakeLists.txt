cmake_minimum_required(VERSION 3.14)
project(mcity_localization)

find_package(autoware_cmake REQUIRED)

autoware_package()

# Add include directories
include_directories(
    include
    /usr/include/GeographicLib
    /usr/include/glm
)

#############################  GNSS TO AUTOWARE ###################################

ament_auto_add_library(mcity_localization_component SHARED
  src/mcity_localization.cpp
)

target_link_libraries(mcity_localization_component Geographic)

rclcpp_components_register_node(mcity_localization_component
  PLUGIN "mcity_localization::McityLocalization"
  EXECUTABLE mcity_localization
)

ament_auto_package(
  INSTALL_TO_SHARE
  include
)