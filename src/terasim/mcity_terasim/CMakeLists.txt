cmake_minimum_required(VERSION 3.14)
project(mcity_terasim)

find_package(autoware_cmake REQUIRED)

autoware_package()

# Add include directories
include_directories(
    include                 # for header files
    /usr/include/hiredis
    /usr/include/GeographicLib
)

# Add link directories (also for redis)
link_directories(/usr/local/lib)

#############################  TRAFFIC SIGNAL CONTROL  ##############################

ament_auto_add_library(traffic_signal_control_component SHARED
  src/traffic_signal_control.cpp
)

target_link_libraries(traffic_signal_control_component hiredis)

rclcpp_components_register_node(traffic_signal_control_component
  PLUGIN "traffic_signal_control::TrafficSignalControl"
  EXECUTABLE traffic_signal_control
)

############################  CAV INFO CONVERTER  ####################################

ament_auto_add_library(cav_info_converter_component SHARED
  src/cav_info_converter.cpp
)

target_link_libraries(cav_info_converter_component hiredis Geographic)

rclcpp_components_register_node(cav_info_converter_component
  PLUGIN "cav_info_converter::CavInfoConverter"
  EXECUTABLE cav_info_converter
)

##########################  CAV CONTEXT CONVERTER  ##################################

ament_auto_add_library(cav_context_converter_component SHARED
  src/cav_context_converter.cpp
)

target_link_libraries(cav_context_converter_component hiredis Geographic)

rclcpp_components_register_node(cav_context_converter_component
  PLUGIN "cav_context_converter::CavContextConverter"
  EXECUTABLE cav_context_converter
)

##########################  CAV CONTEXT REPLAY  ##################################

ament_auto_add_library(cav_context_replay_component SHARED
  src/cav_context_replay.cpp
)

target_link_libraries(cav_context_replay_component hiredis)

rclcpp_components_register_node(cav_context_replay_component
  PLUGIN "cav_context_replay::CavContextReplay"
  EXECUTABLE cav_context_replay
)


##########################  SUMO AUTOWARE COSIM  ####################################

ament_auto_add_library(sumo_autoware_cosim_component SHARED
  src/sumo_autoware_cosim.cpp
)

target_link_libraries(sumo_autoware_cosim_component hiredis Geographic)

rclcpp_components_register_node(sumo_autoware_cosim_component
  PLUGIN "sumo_autoware_cosim::SumoAutowareCosim"
  EXECUTABLE sumo_autoware_cosim
)

#############################  GNSS TO POSE TWIST  ###################################

ament_auto_add_library(gnss_to_pose_twist_component SHARED
  src/gnss_to_pose_twist.cpp
)

target_link_libraries(gnss_to_pose_twist_component Geographic)

rclcpp_components_register_node(gnss_to_pose_twist_component
  PLUGIN "gnss_to_pose_twist::GnssToPoseTwist"
  EXECUTABLE gnss_to_pose_twist
)

#############################  GNSS TO POSE TWIST  ###################################

ament_auto_add_library(gnss_to_dummy_pose_twist_component SHARED
  src/gnss_to_dummy_pose_twist.cpp
)

target_link_libraries(gnss_to_dummy_pose_twist_component Geographic)

rclcpp_components_register_node(gnss_to_dummy_pose_twist_component
  PLUGIN "gnss_to_dummy_pose_twist::GnssToDummyPoseTwist"
  EXECUTABLE gnss_to_dummy_pose_twist
)

########################################################################################

ament_auto_package(
  INSTALL_TO_SHARE
  launch  
  include
)
