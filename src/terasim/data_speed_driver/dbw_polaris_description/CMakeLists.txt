cmake_minimum_required(VERSION 3.5)
project(dbw_polaris_description)

find_package(ament_cmake REQUIRED)

# Uncompress meshes in root of meshes folder
FILE(GLOB files RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}/meshes" "${CMAKE_CURRENT_SOURCE_DIR}/meshes/*.tar.gz")
FOREACH(filename ${files})
  MESSAGE(STATUS "Extracting file: ${filename}")
  execute_process(
    COMMAND ${CMAKE_COMMAND} -E tar xzf ${filename}
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/meshes
  )
ENDFOREACH(filename)

install(DIRECTORY meshes urdf launch
        DESTINATION share/${PROJECT_NAME}
        PATTERN *.tar.gz EXCLUDE
)

ament_package()