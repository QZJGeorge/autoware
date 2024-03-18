cmake_minimum_required(VERSION 3.14)
project(mcity_mr)

find_package(autoware_cmake REQUIRED)

autoware_package()

# Add include directories
include_directories(
    include
    ../redis_client/
    /usr/include/hiredis
    /usr/include/GeographicLib
)

############################  TRAFFIC SIGNAL  #############################

ament_auto_add_library(sumo_light_converter_component SHARED
  src/sumo_light_converter.cpp
  ../redis_client/RedisClient.cpp
)

target_link_libraries(sumo_light_converter_component hiredis)

rclcpp_components_register_node(sumo_light_converter_component
  PLUGIN "sumo_light_converter::SumoLightConverter"
  EXECUTABLE sumo_light_converter
)

############################  CAV STATE CONVERTER ###########################

ament_auto_add_library(cav_state_converter_component SHARED
  src/cav_state_converter.cpp
  ../redis_client/RedisClient.cpp
)

target_link_libraries(cav_state_converter_component hiredis Geographic)

rclcpp_components_register_node(cav_state_converter_component
  PLUGIN "cav_state_converter::CavStateConverter"
  EXECUTABLE cav_state_converter
)

############################  CAV CONTEXT CONVERTER #########################

ament_auto_add_library(cav_context_converter_component SHARED
  src/cav_context_converter.cpp
  ../redis_client/RedisClient.cpp
)

target_link_libraries(cav_context_converter_component hiredis Geographic)

rclcpp_components_register_node(cav_context_converter_component
  PLUGIN "cav_context_converter::CavContextConverter"
  EXECUTABLE cav_context_converter
)

#########################  CAV CONTEXT REPLAY  ################################

ament_auto_add_library(cav_context_replay_component SHARED
  src/cav_context_replay.cpp
  ../redis_client/RedisClient.cpp
)

target_link_libraries(cav_context_replay_component hiredis)

rclcpp_components_register_node(cav_context_replay_component
  PLUGIN "cav_context_replay::CavContextReplay"
  EXECUTABLE cav_context_replay
)

############################### OCCUPANCY GRID ####################################

ament_auto_add_library(occ_grid_converter_component SHARED
  src/occ_grid_converter.cpp
)

rclcpp_components_register_node(occ_grid_converter_component
  PLUGIN "occ_grid_converter::OccGridConverter"
  EXECUTABLE occ_grid_converter
)

#######################################################################################

ament_auto_package(
  INSTALL_TO_SHARE
  include
)