

cmake_minimum_required(VERSION 2.8.3)
project(mkz_bywire)


add_definitions(-std=c++11)


find_package(catkin REQUIRED COMPONENTS
	roscpp
	rospy
	std_msgs
	mcity_msg
  	sensor_msgs
  	geometry_msgs
  	nav_msgs
)

catkin_package(CATKIN_DEPENDS
	roscpp
	std_msgs
	rospy
)



## Build 
include_directories(
	${catkin_INCLUDE_DIRS}
	${PROJECT_SOURCE_DIR}/include
	../include
)


add_executable(${PROJECT_NAME}
	src/main.cpp
	src/rosNode.cpp
	src/check.cpp
	src/recv.cpp
)

target_link_libraries(${PROJECT_NAME} ${catkin_LIBRARIES})
add_dependencies(${PROJECT_NAME} ${catkin_EXPORTED_TARGETS})

## Install
install(TARGETS ${PROJECT_NAME}
        RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

install(DIRECTORY launch
        DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
)