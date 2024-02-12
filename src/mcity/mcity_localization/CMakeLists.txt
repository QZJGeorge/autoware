cmake_minimum_required(VERSION 3.14)
project(mcity_localization)

find_package(autoware_cmake REQUIRED)

autoware_package()

# Add include directories
include_directories(
    include
    /usr/include/GeographicLib
    /usr/include/glm
    /usr/include/hiredis
)

# Add link directories (also for redis)
link_directories(/usr/local/lib)

#############################  GNSS TO AUTOWARE ###################################

ament_auto_add_library(gnss_to_autoware_component SHARED
  src/gnss_to_autoware.cpp
)

target_link_libraries(gnss_to_autoware_component Geographic)

rclcpp_components_register_node(gnss_to_autoware_component
  PLUGIN "gnss_to_autoware::GnssToAutoware"
  EXECUTABLE gnss_to_autoware
)

############################  AUTOWARE TO SUMO  ####################################

ament_auto_add_library(autoware_to_sumo_component SHARED
  src/autoware_to_sumo.cpp
)

target_link_libraries(autoware_to_sumo_component hiredis)

rclcpp_components_register_node(autoware_to_sumo_component
  PLUGIN "autoware_to_sumo::AutowareToSumo"
  EXECUTABLE autoware_to_sumo
)

ament_auto_package(
  INSTALL_TO_SHARE
  include
)
