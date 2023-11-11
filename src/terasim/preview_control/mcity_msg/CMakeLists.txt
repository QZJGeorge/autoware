cmake_minimum_required(VERSION 3.5)
project(mcity_msgs)

find_package(ament_cmake_auto REQUIRED)
ament_auto_find_build_dependencies()

set(msg_files
	"msg/Control.msg"
	"msg/VehicleState.msg"
	"msg/PlanedPath.msg"
	"msg/PlanedPath2.msg"
	"msg/BSM.msg"
	"msg/SPaT.msg"
	"msg/BSMVec.msg"
	"msg/SPaTVec.msg"
	"msg/SegLane.msg"
	"msg/SafeGuardResults.msg"
	"msg/SensorCheck.msg"
	"msg/FacilityState.msg"
	"msg/LocPoint.msg"
	"msg/LocVec.msg"
	"msg/Point.msg"
	"msg/PointVec.msg"
	"msg/OnePath.msg"
	"msg/Obstacle.msg"
	"msg/RefPath.msg"	
	"msg/Goal.msg"
)

set(msg_dependencies
  builtin_interfaces)

rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
  DEPENDENCIES ${msg_dependencies}
  ADD_LINTER_TESTS)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_auto_package()
