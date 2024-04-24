cmake_minimum_required(VERSION 3.14)
project(mcity_uw)

find_package(autoware_cmake REQUIRED)

autoware_package()

# Add include directories
include_directories(
    include
    ../redis_client/
    /usr/include/hiredis
)

##########################  UW ROUTE COSIM  ####################################

ament_auto_add_library(uw_route_cosim_component SHARED
  src/uw_route_cosim.cpp
  ../redis_client/RedisClient.cpp
)

target_link_libraries(uw_route_cosim_component hiredis)

rclcpp_components_register_node(uw_route_cosim_component
  PLUGIN "uw_route_cosim::UwRouteCosim"
  EXECUTABLE uw_route_cosim
)

##########################  UW ROUTE REALCAR  ####################################

ament_auto_add_library(uw_route_realcar_component SHARED
  src/uw_route_realcar.cpp
  ../redis_client/RedisClient.cpp
)

target_link_libraries(uw_route_realcar_component hiredis)

rclcpp_components_register_node(uw_route_realcar_component
  PLUGIN "uw_route_realcar::UwRouteRealcar"
  EXECUTABLE uw_route_realcar
)

##########################  AUTOWARE PATH UW ###################################

ament_auto_add_library(autoware_path_uw_component SHARED
  src/autoware_path_uw.cpp
)

target_link_libraries(autoware_path_uw_component hiredis)

rclcpp_components_register_node(autoware_path_uw_component
  PLUGIN "autoware_path_uw::AutowarePathUW"
  EXECUTABLE autoware_path_uw
)

########################################################################################

ament_auto_package(
  INSTALL_TO_SHARE
  launch  
  include
)
