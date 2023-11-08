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


############################  CAV INFO CONVERTER  ####################################

ament_auto_add_library(abc_info_converter_component SHARED
  src/abc_info_converter.cpp
)

target_link_libraries(abc_info_converter_component hiredis Geographic)

rclcpp_components_register_node(abc_info_converter_component
  PLUGIN "abc_info_converter::AbcInfoConverter"
  EXECUTABLE abc_info_converter
)

##########################  CAV CONTEXT CONVERTER  ##################################

ament_auto_add_library(abc_context_converter_component SHARED
  src/abc_context_converter.cpp
)

target_link_libraries(abc_context_converter_component hiredis Geographic)

rclcpp_components_register_node(abc_context_converter_component
  PLUGIN "abc_context_converter::AbcContextConverter"
  EXECUTABLE abc_context_converter
)

##########################  TEST_01 ####################################

ament_auto_add_library(test_01_component SHARED
  src/test_01.cpp
)

target_link_libraries(test_01_component hiredis Geographic)

rclcpp_components_register_node(test_01_component
  PLUGIN "test_01::Test01"
  EXECUTABLE 01_lane_change
)

##########################  TEST_02 ####################################

ament_auto_add_library(test_02_component SHARED
  src/test_02.cpp
)

target_link_libraries(test_02_component hiredis Geographic)

rclcpp_components_register_node(test_02_component
  PLUGIN "test_02::Test02"
  EXECUTABLE 02_car_following
)

##########################  TEST_03 ####################################

ament_auto_add_library(test_03_component SHARED
  src/test_03.cpp
)

target_link_libraries(test_03_component hiredis Geographic)

rclcpp_components_register_node(test_03_component
  PLUGIN "test_03::Test03"
  EXECUTABLE 03_lane_departure_same
)

##########################  TEST_04 ####################################

ament_auto_add_library(test_04_component SHARED
  src/test_04.cpp
)

target_link_libraries(test_04_component hiredis Geographic)

rclcpp_components_register_node(test_04_component
  PLUGIN "test_04::Test04"
  EXECUTABLE 04_lane_departure_opposite
)

##########################  TEST_05 ####################################

ament_auto_add_library(test_05_component SHARED
  src/test_05.cpp
)

target_link_libraries(test_05_component hiredis Geographic)

rclcpp_components_register_node(test_05_component
  PLUGIN "test_05::Test05"
  EXECUTABLE 05_left_turn_straight
)

##########################  TEST_06 ####################################

ament_auto_add_library(test_06_component SHARED
  src/test_06.cpp
)

target_link_libraries(test_06_component hiredis Geographic)

rclcpp_components_register_node(test_06_component
  PLUGIN "test_06::Test06"
  EXECUTABLE 06_left_turn_turn
)

##########################  TEST_07 ####################################

ament_auto_add_library(test_07_component SHARED
  src/test_07.cpp
)

target_link_libraries(test_07_component hiredis Geographic)

rclcpp_components_register_node(test_07_component
  PLUGIN "test_07::Test07"
  EXECUTABLE 07_right_turn_straight
)

##########################  TEST_08 ####################################

ament_auto_add_library(test_08_component SHARED
  src/test_08.cpp
)

target_link_libraries(test_08_component hiredis Geographic)

rclcpp_components_register_node(test_08_component
  PLUGIN "test_08::Test08"
  EXECUTABLE 08_right_turn_turn
)

##########################  TEST_09 ####################################

ament_auto_add_library(test_09_component SHARED
  src/test_09.cpp
)

target_link_libraries(test_09_component hiredis Geographic)

rclcpp_components_register_node(test_09_component
  PLUGIN "test_09::Test09"
  EXECUTABLE 09_jaywalking
)

##########################  TEST_10 ####################################

ament_auto_add_library(test_10_component SHARED
  src/test_10.cpp
)

target_link_libraries(test_10_component hiredis Geographic)

rclcpp_components_register_node(test_10_component
  PLUGIN "test_10::Test10"
  EXECUTABLE 10_vru_crosswalk
)

##########################  TEST_11 ####################################

ament_auto_add_library(test_11_component SHARED
  src/test_11.cpp
)

target_link_libraries(test_11_component hiredis Geographic)

rclcpp_components_register_node(test_11_component
  PLUGIN "test_11::Test11"
  EXECUTABLE 11_roundabout_outside
)

##########################  TEST_12 ####################################

ament_auto_add_library(test_12_component SHARED
  src/test_12.cpp
)

target_link_libraries(test_12_component hiredis Geographic)

rclcpp_components_register_node(test_12_component
  PLUGIN "test_12::Test12"
  EXECUTABLE 12_roundabout_inside
)

ament_auto_package(
  INSTALL_TO_SHARE
  launch  
  include
)
