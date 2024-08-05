cmake_minimum_required(VERSION 3.14)
project(mcity_usdot)

find_package(autoware_cmake REQUIRED)

autoware_package()

# Add include directories
include_directories(
    ../redis_client/
    include
)

##########################  MCITY USDOT COSIM ####################################

ament_auto_add_library(autoware_interface_usdot_cosim_component SHARED
  src/autoware_interface_usdot_cosim.cpp
  ../redis_client/RedisClient.cpp
)

# target_link_libraries(autoware_interface_usdot_cosim_component hiredis)

rclcpp_components_register_node(autoware_interface_usdot_cosim_component
  PLUGIN "autoware_interface_usdot_cosim::AutowareInterfaceUSDOTCosim"
  EXECUTABLE autoware_interface_usdot_cosim
)

##########################  MCITY USDOT REALCAR ####################################

ament_auto_add_library(autoware_interface_usdot_realcar_component SHARED
  src/autoware_interface_usdot_realcar.cpp
  ../redis_client/RedisClient.cpp
)

# target_link_libraries(autoware_interface_usdot_realcar_component hiredis)

rclcpp_components_register_node(autoware_interface_usdot_realcar_component
  PLUGIN "autoware_interface_usdot_realcar::AutowareInterfaceUSDOTrealcar"
  EXECUTABLE autoware_interface_usdot_realcar
)

########################################################################################

ament_auto_package(
  INSTALL_TO_SHARE
  launch  
  include
)
