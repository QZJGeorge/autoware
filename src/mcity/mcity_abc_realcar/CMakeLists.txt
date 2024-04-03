cmake_minimum_required(VERSION 3.14)
project(mcity_abc_realcar)

find_package(autoware_cmake REQUIRED)

autoware_package()

# Add include directories
include_directories(
    include                 # for header files
    /usr/include/hiredis
)

# Add link directories (also for redis)
link_directories(/usr/local/lib)


##########################  TEST_01 ####################################

ament_auto_add_library(test_01_realcar_component SHARED
  src/test_01_realcar.cpp
)

target_link_libraries(test_01_realcar_component hiredis)

rclcpp_components_register_node(test_01_realcar_component
  PLUGIN "test_01_realcar::Test01Realcar"
  EXECUTABLE 01_lane_change_realcar
)

##########################  TEST_02 ####################################

ament_auto_add_library(test_02_realcar_component SHARED
  src/test_02_realcar.cpp
)

target_link_libraries(test_02_realcar_component hiredis)

rclcpp_components_register_node(test_02_realcar_component
  PLUGIN "test_02_realcar::Test02Realcar"
  EXECUTABLE 02_car_following_realcar
)

##########################  TEST_03 ####################################

ament_auto_add_library(test_03_realcar_component SHARED
  src/test_03_realcar.cpp
)

target_link_libraries(test_03_realcar_component hiredis)

rclcpp_components_register_node(test_03_realcar_component
  PLUGIN "test_03_realcar::Test03Realcar"
  EXECUTABLE 03_lane_departure_same_realcar
)

##########################  TEST_04 ####################################

ament_auto_add_library(test_04_realcar_component SHARED
  src/test_04_realcar.cpp
)

target_link_libraries(test_04_realcar_component hiredis)

rclcpp_components_register_node(test_04_realcar_component
  PLUGIN "test_04_realcar::Test04Realcar"
  EXECUTABLE 04_lane_departure_opposite_realcar
)

##########################  TEST_05 ####################################

ament_auto_add_library(test_05_realcar_component SHARED
  src/test_05_realcar.cpp
)

target_link_libraries(test_05_realcar_component hiredis)

rclcpp_components_register_node(test_05_realcar_component
  PLUGIN "test_05_realcar::Test05Realcar"
  EXECUTABLE 05_left_turn_straight_realcar
)

##########################  TEST_06 ####################################

ament_auto_add_library(test_06_realcar_component SHARED
  src/test_06_realcar.cpp
)

target_link_libraries(test_06_realcar_component hiredis)

rclcpp_components_register_node(test_06_realcar_component
  PLUGIN "test_06_realcar::Test06Realcar"
  EXECUTABLE 06_left_turn_turn_realcar
)

##########################  TEST_07 ####################################

ament_auto_add_library(test_07_realcar_component SHARED
  src/test_07_realcar.cpp
)

target_link_libraries(test_07_realcar_component hiredis)

rclcpp_components_register_node(test_07_realcar_component
  PLUGIN "test_07_realcar::Test07Realcar"
  EXECUTABLE 07_right_turn_straight_realcar
)

##########################  TEST_08 ####################################

ament_auto_add_library(test_08_realcar_component SHARED
  src/test_08_realcar.cpp
)

target_link_libraries(test_08_realcar_component hiredis)

rclcpp_components_register_node(test_08_realcar_component
  PLUGIN "test_08_realcar::Test08Realcar"
  EXECUTABLE 08_right_turn_turn_realcar
)

##########################  TEST_09 ####################################

ament_auto_add_library(test_09_realcar_component SHARED
  src/test_09_realcar.cpp
)

target_link_libraries(test_09_realcar_component hiredis)

rclcpp_components_register_node(test_09_realcar_component
  PLUGIN "test_09_realcar::Test09Realcar"
  EXECUTABLE 09_jaywalking_realcar
)

##########################  TEST_10 ####################################

ament_auto_add_library(test_10_realcar_component SHARED
  src/test_10_realcar.cpp
)

target_link_libraries(test_10_realcar_component hiredis)

rclcpp_components_register_node(test_10_realcar_component
  PLUGIN "test_10_realcar::Test10Realcar"
  EXECUTABLE 10_vru_crosswalk_realcar
)

##########################  TEST_11 ####################################

ament_auto_add_library(test_11_realcar_component SHARED
  src/test_11_realcar.cpp
)

target_link_libraries(test_11_realcar_component hiredis)

rclcpp_components_register_node(test_11_realcar_component
  PLUGIN "test_11_realcar::Test11Realcar"
  EXECUTABLE 11_roundabout_outside_realcar
)

##########################  TEST_12 ####################################

ament_auto_add_library(test_12_realcar_component SHARED
  src/test_12_realcar.cpp
)

target_link_libraries(test_12_realcar_component hiredis)

rclcpp_components_register_node(test_12_realcar_component
  PLUGIN "test_12_realcar::Test12Realcar"
  EXECUTABLE 12_roundabout_inside_realcar
)

##########################  TEST_13 ####################################

ament_auto_add_library(test_13_realcar_component SHARED
  src/test_13_realcar.cpp
)

target_link_libraries(test_13_realcar_component hiredis)

rclcpp_components_register_node(test_13_realcar_component
  PLUGIN "test_13_realcar::Test13Realcar"
  EXECUTABLE 13_vehicle_encroachment_realcar
)

##########################  TEST_15 ####################################

ament_auto_add_library(test_15_realcar_component SHARED
  src/test_15_realcar.cpp
)

target_link_libraries(test_15_realcar_component hiredis)

rclcpp_components_register_node(test_15_realcar_component
  PLUGIN "test_15_realcar::Test15Realcar"
  EXECUTABLE 15_traffic_signal_realcar
)


ament_auto_package(
  INSTALL_TO_SHARE
  launch  
  include
)
