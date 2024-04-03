cmake_minimum_required(VERSION 3.14)
project(mcity_abc_realcar)

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


##########################  TEST_01 ####################################

ament_auto_add_library(test_01_realcar_component SHARED
  src/test_01_realcar.cpp
)

target_link_libraries(test_01_realcar_component hiredis Geographic)

rclcpp_components_register_node(test_01_realcar_component
  PLUGIN "test_01_realcar::Test01Realcar"
  EXECUTABLE 01_lane_change_realcar
)

ament_auto_package(
  INSTALL_TO_SHARE
  launch  
  include
)
