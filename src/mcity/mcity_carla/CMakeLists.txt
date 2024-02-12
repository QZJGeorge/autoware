cmake_minimum_required(VERSION 3.14)
project(mcity_carla)

find_package(autoware_cmake REQUIRED)

autoware_package()

# Add include directories
include_directories(
    include                 # for header files
    /usr/include/hiredis
    /usr/include/GeographicLib
    /usr/include/glm
)

#############################  CARLA TO LOCAL  ###################################

ament_auto_add_library(carla_to_local_component SHARED
  src/carla_to_local.cpp
)

target_link_libraries(carla_to_local_component hiredis Geographic)

rclcpp_components_register_node(carla_to_local_component
  PLUGIN "carla_to_local::CarlaToLocal"
  EXECUTABLE carla_to_local
)

########################################################################################

ament_auto_package(
  INSTALL_TO_SHARE
  include
)
