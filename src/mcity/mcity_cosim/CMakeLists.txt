cmake_minimum_required(VERSION 3.14)
project(mcity_cosim)

find_package(autoware_cmake REQUIRED)

autoware_package()

# Add include directories
include_directories(
    include
    ../redis_client/
    /usr/include/hiredis
)

##########################  MCITY COSIM  ####################################

ament_auto_add_library(autoware_interface_cosim_component SHARED
  src/autoware_interface_cosim.cpp
  ../redis_client/RedisClient.cpp
)

target_link_libraries(autoware_interface_cosim_component hiredis)

rclcpp_components_register_node(autoware_interface_cosim_component
  PLUGIN "autoware_interface_cosim::AutowareInterfaceCosim"
  EXECUTABLE autoware_interface_cosim
)

##########################  UW ROUTE TEST  ####################################

ament_auto_add_library(uw_route_test_component SHARED
  src/uw_route_test.cpp
  ../redis_client/RedisClient.cpp
)

target_link_libraries(uw_route_test_component hiredis)

rclcpp_components_register_node(uw_route_test_component
  PLUGIN "uw_route_test::UwRouteTest"
  EXECUTABLE uw_route_test
)

########################################################################################

ament_auto_package(
  INSTALL_TO_SHARE
  launch  
  include
)
