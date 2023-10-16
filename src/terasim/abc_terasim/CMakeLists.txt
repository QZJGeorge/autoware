cmake_minimum_required(VERSION 3.14)
project(abc_terasim)

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

##########################  TEST_01 ####################################

ament_auto_add_library(test_01_component SHARED
  src/test_01.cpp
)

target_link_libraries(test_01_component hiredis Geographic)

rclcpp_components_register_node(test_01_component
  PLUGIN "test_01::Test01"
  EXECUTABLE test_01
)

##########################  TEST_05 ####################################

ament_auto_add_library(test_05_component SHARED
  src/test_05.cpp
)

target_link_libraries(test_05_component hiredis Geographic)

rclcpp_components_register_node(test_05_component
  PLUGIN "test_05::Test05"
  EXECUTABLE test_05
)

##########################  TEST_06 ####################################

ament_auto_add_library(test_06_component SHARED
  src/test_06.cpp
)

target_link_libraries(test_06_component hiredis Geographic)

rclcpp_components_register_node(test_06_component
  PLUGIN "test_06::Test06"
  EXECUTABLE test_06
)

##########################  TEST_07 ####################################

ament_auto_add_library(test_07_component SHARED
  src/test_07.cpp
)

target_link_libraries(test_07_component hiredis Geographic)

rclcpp_components_register_node(test_07_component
  PLUGIN "test_07::Test07"
  EXECUTABLE test_07
)

##########################  TEST_08 ####################################

ament_auto_add_library(test_08_component SHARED
  src/test_08.cpp
)

target_link_libraries(test_08_component hiredis Geographic)

rclcpp_components_register_node(test_08_component
  PLUGIN "test_08::Test08"
  EXECUTABLE test_08
)

##########################  TEST_09 ####################################

ament_auto_add_library(test_09_component SHARED
  src/test_09.cpp
)

target_link_libraries(test_09_component hiredis Geographic)

rclcpp_components_register_node(test_09_component
  PLUGIN "test_09::Test09"
  EXECUTABLE test_09
)


ament_auto_package(
  INSTALL_TO_SHARE
  launch  
  include
)
