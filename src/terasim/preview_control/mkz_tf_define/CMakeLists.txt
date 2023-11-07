cmake_minimum_required(VERSION 2.8.3)
project(mkz_tf_define)

 add_compile_options(-std=c++11)

 
find_package(catkin REQUIRED COMPONENTS
  mcity_msg
  #delphi_esr_msgs 
  geometry_msgs
  roscpp
  rospy
  tf
)

 
catkin_package(CATKIN_DEPENDS mcity_msg	)
 
include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

 
add_executable(${PROJECT_NAME} src/main.cpp)
 
target_link_libraries(${PROJECT_NAME} ${catkin_LIBRARIES})
 