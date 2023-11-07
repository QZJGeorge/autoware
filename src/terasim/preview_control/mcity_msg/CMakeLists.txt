

cmake_minimum_required(VERSION 2.8.3)
project(mcity_msg)

find_package(catkin REQUIRED COMPONENTS
	roscpp
	rospy
	message_generation
	std_msgs
)
                      

add_message_files( DIRECTORY msg FILES
	Control.msg
	VehicleState.msg
	PlanedPath.msg
	PlanedPath2.msg
	BSM.msg
	SPaT.msg
	BSMVec.msg
	SPaTVec.msg
	SegLane.msg
	SafeGuardResults.msg
	SensorCheck.msg
	FacilityState.msg
	LocPoint.msg
	LocVec.msg
	Point.msg
	PointVec.msg
	OnePath.msg
	Obstacle.msg
	RefPath.msg	
	Goal.msg
)
 
generate_messages(DEPENDENCIES
	std_msgs
)


catkin_package(CATKIN_DEPENDS	
	message_runtime
	std_msgs
)

 
  
