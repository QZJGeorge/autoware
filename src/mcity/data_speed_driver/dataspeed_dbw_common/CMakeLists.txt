cmake_minimum_required(VERSION 3.5)
project(dataspeed_dbw_common)

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake_ros REQUIRED)
find_package(rclcpp REQUIRED)

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
  message(STATUS "Enabling coverage testing")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage")
endif()

install(
  DIRECTORY include/${PROJECT_NAME}/
  DESTINATION include/${PROJECT_NAME}
)

install(DIRECTORY scripts
  DESTINATION lib/${PROJECT_NAME}
  USE_SOURCE_PERMISSIONS
)

install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

ament_export_include_directories(include)

if(BUILD_TESTING)
  find_package(ament_cmake_gtest REQUIRED)
  ament_add_gtest(${PROJECT_NAME}_test_module_version "tests/test_module_version.cpp")
  target_include_directories(${PROJECT_NAME}_test_module_version PUBLIC "include")

  ament_add_gtest(${PROJECT_NAME}_test_platform_map "tests/test_platform_map.cpp")
  target_include_directories(${PROJECT_NAME}_test_platform_map PUBLIC "include")

  ament_add_gtest(${PROJECT_NAME}_test_platform_version "tests/test_platform_version.cpp")
  target_include_directories(${PROJECT_NAME}_test_platform_version PUBLIC "include")
endif()

ament_package()