cmake_minimum_required(VERSION 3.14)
project(mcity_cosim)

find_package(autoware_cmake REQUIRED)

autoware_package()

# Add include directories
include_directories(
    include                 # for header files
    /usr/include/hiredis
)

# Add link directories (also for redis)
# link_directories(/usr/local/lib)

##########################  MCITY COSIM  ####################################

ament_auto_add_library(autoware_interface_component SHARED
  src/autoware_interface.cpp
)

target_link_libraries(autoware_interface_component hiredis)

rclcpp_components_register_node(autoware_interface_component
  PLUGIN "autoware_interface::AutowareInterface"
  EXECUTABLE autoware_interface
)

########################################################################################

ament_auto_package(
  INSTALL_TO_SHARE
  launch  
  include
)
