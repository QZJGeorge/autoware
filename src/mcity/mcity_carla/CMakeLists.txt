cmake_minimum_required(VERSION 3.14)
project(mcity_carla)

find_package(autoware_cmake REQUIRED)
find_package(Eigen3 REQUIRED)

autoware_package()

# Add include directories
include_directories(
    include
    ${EIGEN3_INCLUDE_DIR}
)

#############################  CARLA LOCALIZATION  ###################################

ament_auto_add_library(carla_localization_component SHARED
  src/carla_localization.cpp
  ../redis_client/RedisClient.cpp
)

target_link_libraries(carla_localization_component Eigen3::Eigen)

rclcpp_components_register_node(carla_localization_component
  PLUGIN "carla_localization::CarlaLocalization"
  EXECUTABLE carla_localization
)

########################################################################################

ament_auto_package(
  INSTALL_TO_SHARE
  include
)
