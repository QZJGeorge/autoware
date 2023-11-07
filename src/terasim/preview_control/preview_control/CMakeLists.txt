cmake_minimum_required(VERSION 2.8.3)
project(mkz_control)
add_compile_options(-std=c++11)


find_package( catkin REQUIRED COMPONENTS 
	mcity_msg	
	roscpp 
	rospy 
	std_msgs)

catkin_package(CATKIN_DEPENDS mcity_msg)


include_directories(
	${catkin_INCLUDE_DIRS}
	include 
	src/rosNode
    src/speed_track
    src/path_follow
    src/rosNode
	../include
	)


## src
file(GLOB SRC "src/*.cpp" "src/*/*.cpp")


add_executable(${PROJECT_NAME} ${SRC})
target_link_libraries(${PROJECT_NAME} ${catkin_LIBRARIES})
