cmake_minimum_required(VERSION 3.14)
project(mcity_realcar)

find_package(autoware_cmake REQUIRED)

autoware_package()

# Add include directories
include_directories(
    include
)

########################### AUTOWARE INTERFACE #####################################

ament_auto_add_library(autoware_interface_realcar_component SHARED
  src/autoware_interface_realcar.cpp
)

rclcpp_components_register_node(autoware_interface_realcar_component
  PLUGIN "autoware_interface_realcar::AutowareInterfaceRealcar"
  EXECUTABLE autoware_interface_realcar
)

########################################################################################

ament_auto_package(
  INSTALL_TO_SHARE
  launch  
  include
)
