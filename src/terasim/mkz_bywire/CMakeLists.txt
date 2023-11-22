# cmake_minimum_required(VERSION 3.14)
# project(mkz_bywire)

# find_package(autoware_cmake REQUIRED)

# autoware_package()

# # Add include directories
# include_directories(
#     include                 # for header files
# )

# #############################  TRAFFIC SIGNAL CONTROL  ##############################

# ament_auto_add_library(mkz_bywire_component SHARED
#   src/mkz_bywire.cpp
# )

# # target_link_libraries(mkz_bywire_component hiredis)

# rclcpp_components_register_node(mkz_bywire_component
#   PLUGIN "mkz_bywire::MkzBywire"
#   EXECUTABLE mkz_bywire
# )

# ament_auto_package(
#   INSTALL_TO_SHARE
#   include
# )
