cmake_minimum_required(VERSION 3.14)
project(mcity_voices)

find_package(autoware_cmake REQUIRED)

autoware_package()

# Add include directories
include_directories(
    include                 # for header files
    /usr/include/hiredis
)

# Add link directories (also for redis)
link_directories(/usr/local/lib)

##########################  MCITY VOICES COSIM ####################################

ament_auto_add_library(autoware_interface_voices_cosim_component SHARED
  src/autoware_interface_voices_cosim.cpp
)

target_link_libraries(autoware_interface_voices_cosim_component hiredis)

rclcpp_components_register_node(autoware_interface_voices_cosim_component
  PLUGIN "autoware_interface_voices_cosim::AutowareInterfaceVoicesCosim"
  EXECUTABLE autoware_interface_voices_cosim
)

##########################  MCITY VOICES REALCAR ####################################

ament_auto_add_library(autoware_interface_voices_realcar_component SHARED
  src/autoware_interface_voices_realcar.cpp
)

target_link_libraries(autoware_interface_voices_realcar_component hiredis)

rclcpp_components_register_node(autoware_interface_voices_realcar_component
  PLUGIN "autoware_interface_voices_realcar::AutowareInterfaceVoicesRealcar"
  EXECUTABLE autoware_interface_voices_realcar
)

########################################################################################

ament_auto_package(
  INSTALL_TO_SHARE
  launch  
  include
)
