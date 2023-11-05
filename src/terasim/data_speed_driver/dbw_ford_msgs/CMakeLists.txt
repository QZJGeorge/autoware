cmake_minimum_required(VERSION 3.5)
project(dbw_ford_msgs)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/AmbientLight.msg"
  "msg/BrakeCmd.msg"
  "msg/BrakeInfoReport.msg"
  "msg/BrakeReport.msg"
  "msg/DriverAssistReport.msg"
  "msg/FuelLevelReport.msg"
  "msg/GearCmd.msg"
  "msg/Gear.msg"
  "msg/GearNum.msg"
  "msg/GearReject.msg"
  "msg/GearReport.msg"
  "msg/HillStartAssist.msg"
  "msg/Ignition.msg"
  "msg/MiscCmd.msg"
  "msg/Misc1Report.msg"
  "msg/OnePedal.msg"
  "msg/ParkingBrake.msg"
  "msg/ParkingBrakeCmd.msg"
  "msg/QualityFactor.msg"
  "msg/SteeringCmd.msg"
  "msg/SteeringReport.msg"
  "msg/SurroundReport.msg"
  "msg/ThrottleCmd.msg"
  "msg/ThrottleInfoReport.msg"
  "msg/ThrottleReport.msg"
  "msg/TirePressureReport.msg"
  "msg/TurnSignal.msg"
  "msg/TwistCmd.msg"
  "msg/WatchdogCounter.msg"
  "msg/WheelPositionReport.msg"
  "msg/WheelSpeedReport.msg"
  "msg/Wiper.msg"
  DEPENDENCIES
  "std_msgs"
  "geometry_msgs"
)

install(
  FILES "mapping_rules.yaml"
  DESTINATION share/${PROJECT_NAME})

ament_package()
