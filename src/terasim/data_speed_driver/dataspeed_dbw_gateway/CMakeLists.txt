cmake_minimum_required(VERSION 3.5)
project(dataspeed_dbw_gateway)

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(ros_environment REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(dbw_fca_msgs REQUIRED)
find_package(dbw_ford_msgs REQUIRED)
find_package(dbw_polaris_msgs REQUIRED)
find_package(dataspeed_dbw_common REQUIRED)
find_package(dataspeed_dbw_msgs REQUIRED)
find_package(diagnostic_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/BoundedDynamicArrays.msg"
  "msg/DynamicArrays.msg"
  "msg/ExampleMessage.msg"
  "msg/ExampleMessageExt.msg"
  "msg/StaticArrays.msg"
  "msg/Types.msg"
)

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
  message(STATUS "Enabling coverage testing")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage")
endif()

set(project_dependencies
  "rclcpp_components"
  "rclcpp"
  "dbw_fca_msgs"
  "dbw_ford_msgs"
  "dbw_polaris_msgs"
  "dataspeed_dbw_common"
  "dataspeed_dbw_msgs"
  "diagnostic_msgs"
  "sensor_msgs"
)

add_library(${PROJECT_NAME}_fca SHARED
  "src/FcaGateway.cpp"
)
ament_target_dependencies(${PROJECT_NAME}_fca
  ${project_dependencies}
)
rclcpp_components_register_node(${PROJECT_NAME}_fca
  PLUGIN "${PROJECT_NAME}::FcaGateway"
  EXECUTABLE fca_gateway
)

add_library(${PROJECT_NAME}_ford SHARED
  "src/FordGateway.cpp"
)
ament_target_dependencies(${PROJECT_NAME}_ford
  ${project_dependencies}
)
rclcpp_components_register_node(${PROJECT_NAME}_ford
  PLUGIN "${PROJECT_NAME}::FordGateway"
  EXECUTABLE ford_gateway
)

add_library(${PROJECT_NAME}_polaris SHARED
  "src/PolarisGateway.cpp"
)
ament_target_dependencies(${PROJECT_NAME}_polaris
  ${project_dependencies}
)
rclcpp_components_register_node(${PROJECT_NAME}_polaris
  PLUGIN "${PROJECT_NAME}::PolarisGateway"
  EXECUTABLE polaris_gateway
)

install(TARGETS
  ${PROJECT_NAME}_fca
  ${PROJECT_NAME}_ford
  ${PROJECT_NAME}_polaris
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
  RUNTIME DESTINATION bin
)

if(BUILD_TESTING)
  find_package(ament_cmake_gtest REQUIRED)
  ament_add_gtest(${PROJECT_NAME}_test_generic_message "tests/test_generic_message.cpp")
  target_include_directories(${PROJECT_NAME}_test_generic_message PUBLIC "src")
  # these are required to work with message files from the same package
  add_dependencies(${PROJECT_NAME}_test_generic_message ${PROJECT_NAME})
  if ($ENV{ROS_DISTRO} STRLESS "humble")
    rosidl_target_interfaces(${PROJECT_NAME}_test_generic_message ${PROJECT_NAME} rosidl_typesupport_introspection_cpp)
  else()
    rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME} "rosidl_typesupport_introspection_cpp")
    target_link_libraries(${PROJECT_NAME}_test_generic_message "${cpp_typesupport_target}")
  endif()
endif()

ament_package()