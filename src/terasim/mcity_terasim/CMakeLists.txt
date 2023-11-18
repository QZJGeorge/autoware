cmake_minimum_required(VERSION 3.14)
project(mcity_terasim)

find_package(autoware_cmake REQUIRED)

autoware_package()

# Add include directories
include_directories(
    include                 # for header files
    /usr/include/hiredis
    /usr/include/GeographicLib
    /usr/include/glm
)

# Add link directories (also for redis)
link_directories(/usr/local/lib)

##########################  SUMO AUTOWARE REAL  #####################################

ament_auto_add_library(sumo_autoware_real_component SHARED
  src/sumo_autoware_real.cpp
)

target_link_libraries(sumo_autoware_real_component hiredis)

rclcpp_components_register_node(sumo_autoware_real_component
  PLUGIN "sumo_autoware_real::SumoAutowareReal"
  EXECUTABLE sumo_autoware_real
)

#############################  GNSS TO LOCAL  ###################################

ament_auto_add_library(gnss_to_local_component SHARED
  src/gnss_to_local.cpp
)

target_link_libraries(gnss_to_local_component Geographic)

rclcpp_components_register_node(gnss_to_local_component
  PLUGIN "gnss_to_local::GnssToLocal"
  EXECUTABLE gnss_to_local
)

#############################  PUBLISH POINTCLOUD  ###################################

ament_auto_add_library(publish_pointcloud_component SHARED
  src/publish_pointcloud.cpp
)

target_link_libraries(publish_pointcloud_component)

rclcpp_components_register_node(publish_pointcloud_component
  PLUGIN "publish_pointcloud::PublishPointcloud"
  EXECUTABLE publish_pointcloud
)

#############################  DBW ULC CONVERTER$$ ###################################

ament_auto_add_library(dbw_ulc_converter_component SHARED
  src/dbw_ulc_converter.cpp
)

target_link_libraries(dbw_ulc_converter_component Geographic)

rclcpp_components_register_node(dbw_ulc_converter_component
  PLUGIN "dbw_ulc_converter::DbwUlcConverter"
  EXECUTABLE dbw_ulc_converter
)

#################################  PREVIEW PATH ######################################

ament_auto_add_library(preview_path_component SHARED
  src/preview_path.cpp
)

target_link_libraries(preview_path_component)

rclcpp_components_register_node(preview_path_component
  PLUGIN "preview_path::PreviewPath"
  EXECUTABLE preview_path
)

########################################################################################

ament_auto_package(
  INSTALL_TO_SHARE
  launch  
  include
)
