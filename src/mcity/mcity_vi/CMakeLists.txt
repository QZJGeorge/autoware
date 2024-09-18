cmake_minimum_required(VERSION 3.14)
project(mcity_vi)

find_package(autoware_cmake REQUIRED)

autoware_package()

# Add include directories
include_directories(
    include
    ../redis_client/
    /usr/include/hiredis
)

##########################  VI ROUTE COSIM  ####################################

ament_auto_add_library(autoware_interface_vi_cosim_component SHARED
  src/autoware_interface_vi_cosim.cpp
  ../redis_client/RedisClient.cpp
)

target_link_libraries(autoware_interface_vi_cosim_component hiredis)

rclcpp_components_register_node(autoware_interface_vi_cosim_component
  PLUGIN "autoware_interface_vi_cosim::AutowareInterfaceVICosim"
  EXECUTABLE autoware_interface_vi_cosim
)

##########################  VI ROUTE REALCAR  ####################################

ament_auto_add_library(autoware_interface_vi_realcar_component SHARED
  src/autoware_interface_vi_realcar.cpp
  ../redis_client/RedisClient.cpp
)

target_link_libraries(autoware_interface_vi_realcar_component hiredis)

rclcpp_components_register_node(autoware_interface_vi_realcar_component
  PLUGIN "autoware_interface_vi_realcar::AutowareInterfaceVIRealcar"
  EXECUTABLE autoware_interface_vi_realcar
)

########################################################################################

ament_auto_package(
  INSTALL_TO_SHARE
  launch  
  include
)
