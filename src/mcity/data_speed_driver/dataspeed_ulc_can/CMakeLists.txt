cmake_minimum_required(VERSION 3.5)
project(dataspeed_ulc_can)

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
find_package(geometry_msgs REQUIRED)
find_package(dataspeed_ulc_msgs REQUIRED)

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
  message(STATUS "Enabling coverage testing")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage")
endif()

add_library(${PROJECT_NAME} SHARED
  "src/UlcNode.cpp"
)

ament_target_dependencies(${PROJECT_NAME}
  "rclcpp_components"
  "rclcpp"
  "dataspeed_dbw_common"
  "std_msgs"
  "can_msgs"
  "geometry_msgs"
  "dataspeed_ulc_msgs"
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
  PLUGIN "${PROJECT_NAME}::UlcNode"
  EXECUTABLE ulc_node
)

ament_export_include_directories(include)
install(DIRECTORY include/
  DESTINATION include
)

install(DIRECTORY scripts
  DESTINATION lib/${PROJECT_NAME}
  USE_SOURCE_PERMISSIONS
)

find_package(ament_cmake_python REQUIRED)

ament_python_install_package(${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_cmake_gtest REQUIRED)
  find_package(ros_testing REQUIRED)

  ament_add_gtest_executable(ulc_test_node
    tests/test_ulc.cpp
  )
  ament_target_dependencies(ulc_test_node
    "rclcpp"
    "std_msgs"
    "can_msgs"
    "geometry_msgs"
    "dataspeed_ulc_msgs"
  )
  target_include_directories(ulc_test_node PUBLIC
    "include"
    "src"
  )
  target_link_libraries(ulc_test_node
    ${PROJECT_NAME}
  )
  add_ros_test(tests/ulc_test_launch.py TIMEOUT 120 ARGS "test_binary_dir:=${CMAKE_CURRENT_BINARY_DIR}")

endif()

ament_package()