cmake_minimum_required(VERSION 3.5)
project(dbw_ford_can)

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(dataspeed_dbw_common REQUIRED)
find_package(std_msgs REQUIRED)
find_package(can_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(dbw_ford_msgs REQUIRED)
find_package(dataspeed_can_msg_filters REQUIRED)

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
  message(STATUS "Enabling coverage testing")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage")
endif()

add_library(${PROJECT_NAME} SHARED
  "src/DbwNode.cpp"
)

ament_target_dependencies(${PROJECT_NAME}
  "rclcpp_components"
  "rclcpp"
  "dataspeed_dbw_common"
  "std_msgs"
  "can_msgs"
  "sensor_msgs"
  "geometry_msgs"
  "dbw_ford_msgs"
  "dataspeed_can_msg_filters"
)

target_include_directories(
  ${PROJECT_NAME} PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)

install(TARGETS ${PROJECT_NAME}
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
  RUNTIME DESTINATION bin
)

rclcpp_components_register_node(${PROJECT_NAME}
  PLUGIN "${PROJECT_NAME}::DbwNode"
  EXECUTABLE dbw_node
)

ament_export_include_directories(include)
install(DIRECTORY include/
  DESTINATION include
)

install(DIRECTORY scripts
  DESTINATION lib/${PROJECT_NAME}
  USE_SOURCE_PERMISSIONS
)

install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_cmake_gtest REQUIRED)
  
  ament_add_gtest(${PROJECT_NAME}_test_pedal_lut "tests/test_pedal_lut.cpp")
  target_include_directories(${PROJECT_NAME}_test_pedal_lut PUBLIC "include")

  ament_add_gtest(${PROJECT_NAME}_test_sonar_lut "tests/test_sonar_lut.cpp")
  target_include_directories(${PROJECT_NAME}_test_sonar_lut PUBLIC "include")
  ament_target_dependencies(${PROJECT_NAME}_test_sonar_lut "sensor_msgs" "dbw_ford_msgs")
endif()

ament_package()