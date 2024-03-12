cmake_minimum_required(VERSION 3.14)
project(mcity_perception)

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

ament_auto_add_library(sumo_traffic_light_converter_component SHARED
  src/sumo_traffic_light_converter.cpp
  ../redis_client/RedisClient.cpp
)

target_link_libraries(sumo_traffic_light_converter_component hiredis)

rclcpp_components_register_node(sumo_traffic_light_converter_component
  PLUGIN "sumo_traffic_light_converter::SumoTrafficLightConverter"
  EXECUTABLE sumo_traffic_light_converter
)

############################  BACKGROUND VEHICLES  ################################

ament_auto_add_library(sumo_background_vehicle_converter_component SHARED
  src/sumo_background_vehicle_converter.cpp
  ../redis_client/RedisClient.cpp
)

target_link_libraries(sumo_background_vehicle_converter_component hiredis Geographic)

rclcpp_components_register_node(sumo_background_vehicle_converter_component
  PLUGIN "sumo_background_vehicle_converter::SumoBackgroundVehicleConverter"
  EXECUTABLE sumo_background_vehicle_converter
)

#########################  BACKGROUND VEHICLES REPLAY  #############################

ament_auto_add_library(sumo_traffic_vehicle_replay_component SHARED
  src/sumo_traffic_vehicle_replay.cpp
  ../redis_client/RedisClient.cpp
)

target_link_libraries(sumo_traffic_vehicle_replay_component hiredis)

rclcpp_components_register_node(sumo_traffic_vehicle_replay_component
  PLUGIN "sumo_traffic_vehicle_replay::SumoTrafficVehicleReplay"
  EXECUTABLE sumo_traffic_vehicle_replay
)

############################### OCCUPANCY GRID ####################################

ament_auto_add_library(sumo_occ_grid_converter_component SHARED
  src/sumo_occ_grid_converter.cpp
)

rclcpp_components_register_node(sumo_occ_grid_converter_component
  PLUGIN "sumo_occ_grid_converter::SumoOccGridConverter"
  EXECUTABLE sumo_occ_grid_converter
)

#######################################################################################

ament_auto_package(
  INSTALL_TO_SHARE
  include
)
