cmake_minimum_required(VERSION 3.5)
project(dataspeed_dbw_msgs)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
"msg/BrakeCmd.msg"
"msg/BrakeReport.msg"
"msg/GearCmd.msg"
"msg/Gear.msg"
"msg/GearReject.msg"
"msg/GearReport.msg"
"msg/MiscCmd.msg"
"msg/MiscReport.msg"
"msg/SteeringCmd.msg"
"msg/SteeringReport.msg"
"msg/ThrottleCmd.msg"
"msg/ThrottleReport.msg"
"msg/TurnSignal.msg"
"msg/WatchdogCounter.msg"
DEPENDENCIES
"std_msgs"
)

ament_package()
