# generated from
# ament_cmake_core/cmake/symlink_install/ament_cmake_symlink_install.cmake.in

# create empty symlink install manifest before starting install step
file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/symlink_install_manifest.txt")

#
# Reimplement CMake install(DIRECTORY) command to use symlinks instead of
# copying resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_directory cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION" "DIRECTORY;PATTERN;PATTERN_EXCLUDE" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_directory() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/mtl12345/autoware/install/morai_msgs/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  # default pattern to include
  if(NOT ARG_PATTERN)
    set(ARG_PATTERN "*")
  endif()

  # iterate over directories
  foreach(dir ${ARG_DIRECTORY})
    # make dir an absolute path
    if(NOT IS_ABSOLUTE "${dir}")
      set(dir "${cmake_current_source_dir}/${dir}")
    endif()

    if(EXISTS "${dir}")
      # if directory has no trailing slash
      # append folder name to destination
      set(destination "${ARG_DESTINATION}")
      string(LENGTH "${dir}" length)
      math(EXPR offset "${length} - 1")
      string(SUBSTRING "${dir}" ${offset} 1 dir_last_char)
      if(NOT dir_last_char STREQUAL "/")
        get_filename_component(destination_name "${dir}" NAME)
        set(destination "${destination}/${destination_name}")
      else()
        # remove trailing slash
        string(SUBSTRING "${dir}" 0 ${offset} dir)
      endif()

      # glob recursive files
      set(relative_files "")
      foreach(pattern ${ARG_PATTERN})
        file(
          GLOB_RECURSE
          include_files
          RELATIVE "${dir}"
          "${dir}/${pattern}"
        )
        if(NOT include_files STREQUAL "")
          list(APPEND relative_files ${include_files})
        endif()
      endforeach()
      foreach(pattern ${ARG_PATTERN_EXCLUDE})
        file(
          GLOB_RECURSE
          exclude_files
          RELATIVE "${dir}"
          "${dir}/${pattern}"
        )
        if(NOT exclude_files STREQUAL "")
          list(REMOVE_ITEM relative_files ${exclude_files})
        endif()
      endforeach()
      list(SORT relative_files)

      foreach(relative_file ${relative_files})
        set(absolute_file "${dir}/${relative_file}")
        # determine link name for file including destination path
        set(symlink "${destination}/${relative_file}")

        # ensure that destination exists
        get_filename_component(symlink_dir "${symlink}" PATH)
        if(NOT EXISTS "${symlink_dir}")
          file(MAKE_DIRECTORY "${symlink_dir}")
        endif()

        _ament_cmake_symlink_install_create_symlink("${absolute_file}" "${symlink}")
      endforeach()
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_directory() can't find '${dir}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(FILES) command to use symlinks instead of copying
# resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_files cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION;RENAME" "FILES" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_files() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination an absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/mtl12345/autoware/install/morai_msgs/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  if(ARG_RENAME)
    list(LENGTH ARG_FILES file_count)
    if(NOT file_count EQUAL 1)
    message(FATAL_ERROR "ament_cmake_symlink_install_files() called with "
      "RENAME argument but not with a single file")
    endif()
  endif()

  # iterate over files
  foreach(file ${ARG_FILES})
    # make file an absolute path
    if(NOT IS_ABSOLUTE "${file}")
      set(file "${cmake_current_source_dir}/${file}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      if(NOT ARG_RENAME)
        set(symlink "${ARG_DESTINATION}/${filename}")
      else()
        set(symlink "${ARG_DESTINATION}/${ARG_RENAME}")
      endif()
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_files() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(PROGRAMS) command to use symlinks instead of copying
# resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_programs cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION" "PROGRAMS" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_programs() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination an absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/mtl12345/autoware/install/morai_msgs/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  # iterate over programs
  foreach(file ${ARG_PROGRAMS})
    # make file an absolute path
    if(NOT IS_ABSOLUTE "${file}")
      set(file "${cmake_current_source_dir}/${file}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      set(symlink "${ARG_DESTINATION}/${filename}")
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_programs() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(TARGETS) command to use symlinks instead of copying
# resources.
#
# :param TARGET_FILES: the absolute files, replacing the name of targets passed
#   in as TARGETS
# :type TARGET_FILES: list of files
# :param ARGN: the same arguments as the CMake install command except that
#   keywords identifying the kind of type and the DESTINATION keyword must be
#   joined with an underscore, e.g. ARCHIVE_DESTINATION.
# :type ARGN: various
#
function(ament_cmake_symlink_install_targets)
  cmake_parse_arguments(ARG "OPTIONAL" "ARCHIVE_DESTINATION;DESTINATION;LIBRARY_DESTINATION;RUNTIME_DESTINATION"
    "TARGETS;TARGET_FILES" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_targets() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # iterate over target files
  foreach(file ${ARG_TARGET_FILES})
    if(NOT IS_ABSOLUTE "${file}")
      message(FATAL_ERROR "ament_cmake_symlink_install_targets() target file "
        "'${file}' must be an absolute path")
    endif()

    # determine destination of file based on extension
    set(destination "")
    get_filename_component(fileext "${file}" EXT)
    if(fileext STREQUAL ".a" OR fileext STREQUAL ".lib")
      set(destination "${ARG_ARCHIVE_DESTINATION}")
    elseif(fileext STREQUAL ".dylib" OR fileext MATCHES "\\.so(\\.[0-9]+)?(\\.[0-9]+)?(\\.[0-9]+)?$")
      set(destination "${ARG_LIBRARY_DESTINATION}")
    elseif(fileext STREQUAL "" OR fileext STREQUAL ".dll" OR fileext STREQUAL ".exe")
      set(destination "${ARG_RUNTIME_DESTINATION}")
    endif()
    if(destination STREQUAL "")
      set(destination "${ARG_DESTINATION}")
    endif()

    # make destination an absolute path and ensure that it exists
    if(NOT IS_ABSOLUTE "${destination}")
      set(destination "/home/mtl12345/autoware/install/morai_msgs/${destination}")
    endif()
    if(NOT EXISTS "${destination}")
      file(MAKE_DIRECTORY "${destination}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      set(symlink "${destination}/${filename}")
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_targets() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

function(_ament_cmake_symlink_install_create_symlink absolute_file symlink)
  # register symlink for being removed during install step
  file(APPEND "${CMAKE_CURRENT_BINARY_DIR}/symlink_install_manifest.txt"
    "${symlink}\n")

  # avoid any work if correct symlink is already in place
  if(EXISTS "${symlink}" AND IS_SYMLINK "${symlink}")
    get_filename_component(destination "${symlink}" REALPATH)
    get_filename_component(real_absolute_file "${absolute_file}" REALPATH)
    if(destination STREQUAL real_absolute_file)
      message(STATUS "Up-to-date symlink: ${symlink}")
      return()
    endif()
  endif()

  message(STATUS "Symlinking: ${symlink}")
  if(EXISTS "${symlink}" OR IS_SYMLINK "${symlink}")
    file(REMOVE "${symlink}")
  endif()

  execute_process(
    COMMAND "/usr/bin/cmake" "-E" "create_symlink"
      "${absolute_file}"
      "${symlink}"
  )
  # the CMake command does not provide a return code so check manually
  if(NOT EXISTS "${symlink}" OR NOT IS_SYMLINK "${symlink}")
    get_filename_component(destination "${symlink}" REALPATH)
    message(FATAL_ERROR
      "Could not create symlink '${symlink}' pointing to '${absolute_file}'")
  endif()
endfunction()

# end of template

message(STATUS "Execute custom install script")

# begin of custom install code

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/morai_msgs" "DESTINATION" "share/ament_index/resource_index/rosidl_interfaces")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/morai_msgs" "DESTINATION" "share/ament_index/resource_index/rosidl_interfaces")

# install(DIRECTORY "/home/mtl12345/autoware/build/morai_msgs/rosidl_generator_c/morai_msgs/" "DESTINATION" "include/morai_msgs/morai_msgs" "PATTERN" "*.h")
ament_cmake_symlink_install_directory("/home/mtl12345/autoware/src/universe/external/morai_msgs" DIRECTORY "/home/mtl12345/autoware/build/morai_msgs/rosidl_generator_c/morai_msgs/" "DESTINATION" "include/morai_msgs/morai_msgs" "PATTERN" "*.h")

# install(FILES "/opt/ros/humble/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh" "DESTINATION" "share/morai_msgs/environment")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/opt/ros/humble/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh" "DESTINATION" "share/morai_msgs/environment")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_environment_hooks/library_path.dsv" "DESTINATION" "share/morai_msgs/environment")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_environment_hooks/library_path.dsv" "DESTINATION" "share/morai_msgs/environment")

# install(DIRECTORY "/home/mtl12345/autoware/build/morai_msgs/rosidl_typesupport_fastrtps_c/morai_msgs/" "DESTINATION" "include/morai_msgs/morai_msgs" "PATTERN_EXCLUDE" "*.cpp")
ament_cmake_symlink_install_directory("/home/mtl12345/autoware/src/universe/external/morai_msgs" DIRECTORY "/home/mtl12345/autoware/build/morai_msgs/rosidl_typesupport_fastrtps_c/morai_msgs/" "DESTINATION" "include/morai_msgs/morai_msgs" "PATTERN_EXCLUDE" "*.cpp")

# install(DIRECTORY "/home/mtl12345/autoware/build/morai_msgs/rosidl_generator_cpp/morai_msgs/" "DESTINATION" "include/morai_msgs/morai_msgs" "PATTERN" "*.hpp")
ament_cmake_symlink_install_directory("/home/mtl12345/autoware/src/universe/external/morai_msgs" DIRECTORY "/home/mtl12345/autoware/build/morai_msgs/rosidl_generator_cpp/morai_msgs/" "DESTINATION" "include/morai_msgs/morai_msgs" "PATTERN" "*.hpp")

# install(DIRECTORY "/home/mtl12345/autoware/build/morai_msgs/rosidl_typesupport_fastrtps_cpp/morai_msgs/" "DESTINATION" "include/morai_msgs/morai_msgs" "PATTERN_EXCLUDE" "*.cpp")
ament_cmake_symlink_install_directory("/home/mtl12345/autoware/src/universe/external/morai_msgs" DIRECTORY "/home/mtl12345/autoware/build/morai_msgs/rosidl_typesupport_fastrtps_cpp/morai_msgs/" "DESTINATION" "include/morai_msgs/morai_msgs" "PATTERN_EXCLUDE" "*.cpp")

# install(DIRECTORY "/home/mtl12345/autoware/build/morai_msgs/rosidl_typesupport_introspection_c/morai_msgs/" "DESTINATION" "include/morai_msgs/morai_msgs" "PATTERN" "*.h")
ament_cmake_symlink_install_directory("/home/mtl12345/autoware/src/universe/external/morai_msgs" DIRECTORY "/home/mtl12345/autoware/build/morai_msgs/rosidl_typesupport_introspection_c/morai_msgs/" "DESTINATION" "include/morai_msgs/morai_msgs" "PATTERN" "*.h")

# install(DIRECTORY "/home/mtl12345/autoware/build/morai_msgs/rosidl_typesupport_introspection_cpp/morai_msgs/" "DESTINATION" "include/morai_msgs/morai_msgs" "PATTERN" "*.hpp")
ament_cmake_symlink_install_directory("/home/mtl12345/autoware/src/universe/external/morai_msgs" DIRECTORY "/home/mtl12345/autoware/build/morai_msgs/rosidl_typesupport_introspection_cpp/morai_msgs/" "DESTINATION" "include/morai_msgs/morai_msgs" "PATTERN" "*.hpp")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_environment_hooks/pythonpath.sh" "DESTINATION" "share/morai_msgs/environment")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_environment_hooks/pythonpath.sh" "DESTINATION" "share/morai_msgs/environment")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_environment_hooks/pythonpath.dsv" "DESTINATION" "share/morai_msgs/environment")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_environment_hooks/pythonpath.dsv" "DESTINATION" "share/morai_msgs/environment")

# install(DIRECTORY "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_python/morai_msgs/morai_msgs.egg-info/" "DESTINATION" "local/lib/python3.10/dist-packages/morai_msgs-0.0.0-py3.10.egg-info")
ament_cmake_symlink_install_directory("/home/mtl12345/autoware/src/universe/external/morai_msgs" DIRECTORY "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_python/morai_msgs/morai_msgs.egg-info/" "DESTINATION" "local/lib/python3.10/dist-packages/morai_msgs-0.0.0-py3.10.egg-info")

# install(DIRECTORY "/home/mtl12345/autoware/build/morai_msgs/rosidl_generator_py/morai_msgs/" "DESTINATION" "local/lib/python3.10/dist-packages/morai_msgs" "PATTERN_EXCLUDE" "*.pyc" "PATTERN_EXCLUDE" "__pycache__")
ament_cmake_symlink_install_directory("/home/mtl12345/autoware/src/universe/external/morai_msgs" DIRECTORY "/home/mtl12345/autoware/build/morai_msgs/rosidl_generator_py/morai_msgs/" "DESTINATION" "local/lib/python3.10/dist-packages/morai_msgs" "PATTERN_EXCLUDE" "*.pyc" "PATTERN_EXCLUDE" "__pycache__")

# install("TARGETS" "morai_msgs__rosidl_typesupport_fastrtps_c__pyext" "DESTINATION" "local/lib/python3.10/dist-packages/morai_msgs")
include("/home/mtl12345/autoware/build/morai_msgs/ament_cmake_symlink_install_targets_0_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install("TARGETS" "morai_msgs__rosidl_typesupport_introspection_c__pyext" "DESTINATION" "local/lib/python3.10/dist-packages/morai_msgs")
include("/home/mtl12345/autoware/build/morai_msgs/ament_cmake_symlink_install_targets_1_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install("TARGETS" "morai_msgs__rosidl_typesupport_c__pyext" "DESTINATION" "local/lib/python3.10/dist-packages/morai_msgs")
include("/home/mtl12345/autoware/build/morai_msgs/ament_cmake_symlink_install_targets_2_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/CollisionData.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/CollisionData.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/CtrlCmd.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/CtrlCmd.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/EgoVehicleStatus.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/EgoVehicleStatus.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/ERP42Info.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/ERP42Info.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/EventInfo.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/EventInfo.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/GetTrafficLightStatus.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/GetTrafficLightStatus.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/GhostMessage.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/GhostMessage.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/GPSMessage.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/GPSMessage.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/IntersectionControl.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/IntersectionControl.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/IntersectionStatus.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/IntersectionStatus.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/IntscnTL.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/IntscnTL.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/Lamps.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/Lamps.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/MapSpec.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/MapSpec.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/MapSpecIndex.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/MapSpecIndex.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/MoraiSimConfig.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/MoraiSimConfig.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/MoraiSimProcHandle.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/MoraiSimProcHandle.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/MoraiSimProcStatus.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/MoraiSimProcStatus.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/MoraiSrvResponse.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/MoraiSrvResponse.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/MoraiTLIndex.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/MoraiTLIndex.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/MoraiTLInfo.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/MoraiTLInfo.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/MultiEgoSetting.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/MultiEgoSetting.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/NpcGhostCmd.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/NpcGhostCmd.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/NpcGhostInfo.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/NpcGhostInfo.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/ObjectStatus.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/ObjectStatus.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/ObjectStatusList.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/ObjectStatusList.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/PRCtrlCmd.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/PRCtrlCmd.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/PREvent.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/PREvent.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/PRStatus.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/PRStatus.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/RadarTrack.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/RadarTrack.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/RadarTracks.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/RadarTracks.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/RadarDetection.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/RadarDetection.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/RadarDetections.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/RadarDetections.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/ReplayInfo.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/ReplayInfo.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SaveSensorData.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SaveSensorData.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/ScenarioLoad.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/ScenarioLoad.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SensorPosControl.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SensorPosControl.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SetTrafficLight.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SetTrafficLight.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SkidModel.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SkidModel.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SkidCtrlCmd.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SkidCtrlCmd.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SkidCtrlReport.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SkidCtrlReport.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SyncModeAddObj.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SyncModeAddObj.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SyncModeCmd.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SyncModeCmd.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SyncModeCmdResponse.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SyncModeCmdResponse.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SyncModeCtrlCmd.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SyncModeCtrlCmd.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SyncModeInfo.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SyncModeInfo.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SyncModeRemoveObj.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SyncModeRemoveObj.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SyncModeResultResponse.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SyncModeResultResponse.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SyncModeScenarioLoad.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SyncModeScenarioLoad.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SyncModeSetGear.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/SyncModeSetGear.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/TrafficLight.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/TrafficLight.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/VehicleCollision.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/VehicleCollision.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/VehicleCollisionData.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/VehicleCollisionData.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/VehicleSpec.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/VehicleSpec.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/VehicleSpecIndex.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/VehicleSpecIndex.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/WaitForTick.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/WaitForTick.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/WaitForTickResponse.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/WaitForTickResponse.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/WheelRpm.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/WheelRpm.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/WheelTorque.idl" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/msg/WheelTorque.idl" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/srv/MoraiEventCmdSrv.idl" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/srv/MoraiEventCmdSrv.idl" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/srv/MoraiMapSpecSrv.idl" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/srv/MoraiMapSpecSrv.idl" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/srv/MoraiScenarioLoadSrv.idl" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/srv/MoraiScenarioLoadSrv.idl" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/srv/MoraiSimProcSrv.idl" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/srv/MoraiSimProcSrv.idl" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/srv/MoraiSyncModeCmdSrv.idl" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/srv/MoraiSyncModeCmdSrv.idl" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/srv/MoraiSyncModeCtrlCmdSrv.idl" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/srv/MoraiSyncModeCtrlCmdSrv.idl" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/srv/MoraiSyncModeSetGearSrv.idl" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/srv/MoraiSyncModeSetGearSrv.idl" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/srv/MoraiSyncModeSLSrv.idl" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/srv/MoraiSyncModeSLSrv.idl" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/srv/MoraiTLInfoSrv.idl" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/srv/MoraiTLInfoSrv.idl" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/srv/MoraiVehicleSpecSrv.idl" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/srv/MoraiVehicleSpecSrv.idl" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/srv/MoraiWaitForTickSrv.idl" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/srv/MoraiWaitForTickSrv.idl" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/srv/PREventSrv.idl" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_adapter/morai_msgs/srv/PREventSrv.idl" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/CollisionData.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/CollisionData.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/CtrlCmd.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/CtrlCmd.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/EgoVehicleStatus.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/EgoVehicleStatus.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/ERP42Info.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/ERP42Info.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/EventInfo.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/EventInfo.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/GetTrafficLightStatus.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/GetTrafficLightStatus.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/GhostMessage.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/GhostMessage.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/GPSMessage.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/GPSMessage.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/IntersectionControl.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/IntersectionControl.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/IntersectionStatus.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/IntersectionStatus.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/IntscnTL.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/IntscnTL.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/Lamps.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/Lamps.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/MapSpec.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/MapSpec.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/MapSpecIndex.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/MapSpecIndex.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/MoraiSimConfig.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/MoraiSimConfig.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/MoraiSimProcHandle.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/MoraiSimProcHandle.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/MoraiSimProcStatus.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/MoraiSimProcStatus.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/MoraiSrvResponse.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/MoraiSrvResponse.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/MoraiTLIndex.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/MoraiTLIndex.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/MoraiTLInfo.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/MoraiTLInfo.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/MultiEgoSetting.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/MultiEgoSetting.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/NpcGhostCmd.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/NpcGhostCmd.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/NpcGhostInfo.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/NpcGhostInfo.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/ObjectStatus.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/ObjectStatus.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/ObjectStatusList.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/ObjectStatusList.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/PRCtrlCmd.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/PRCtrlCmd.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/PREvent.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/PREvent.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/PRStatus.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/PRStatus.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/RadarTrack.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/RadarTrack.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/RadarTracks.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/RadarTracks.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/RadarDetection.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/RadarDetection.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/RadarDetections.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/RadarDetections.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/ReplayInfo.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/ReplayInfo.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SaveSensorData.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SaveSensorData.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/ScenarioLoad.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/ScenarioLoad.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SensorPosControl.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SensorPosControl.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SetTrafficLight.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SetTrafficLight.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SkidModel.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SkidModel.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SkidCtrlCmd.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SkidCtrlCmd.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SkidCtrlReport.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SkidCtrlReport.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SyncModeAddObj.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SyncModeAddObj.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SyncModeCmd.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SyncModeCmd.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SyncModeCmdResponse.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SyncModeCmdResponse.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SyncModeCtrlCmd.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SyncModeCtrlCmd.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SyncModeInfo.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SyncModeInfo.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SyncModeRemoveObj.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SyncModeRemoveObj.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SyncModeResultResponse.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SyncModeResultResponse.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SyncModeScenarioLoad.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SyncModeScenarioLoad.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SyncModeSetGear.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/SyncModeSetGear.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/TrafficLight.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/TrafficLight.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/VehicleCollision.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/VehicleCollision.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/VehicleCollisionData.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/VehicleCollisionData.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/VehicleSpec.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/VehicleSpec.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/VehicleSpecIndex.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/VehicleSpecIndex.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/WaitForTick.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/WaitForTick.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/WaitForTickResponse.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/WaitForTickResponse.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/WheelRpm.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/WheelRpm.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/WheelTorque.msg" "DESTINATION" "share/morai_msgs/msg")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/msg/WheelTorque.msg" "DESTINATION" "share/morai_msgs/msg")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/srv/MoraiEventCmdSrv.srv" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/srv/MoraiEventCmdSrv.srv" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiEventCmdSrv_Request.msg" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiEventCmdSrv_Request.msg" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiEventCmdSrv_Response.msg" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiEventCmdSrv_Response.msg" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/srv/MoraiMapSpecSrv.srv" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/srv/MoraiMapSpecSrv.srv" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiMapSpecSrv_Request.msg" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiMapSpecSrv_Request.msg" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiMapSpecSrv_Response.msg" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiMapSpecSrv_Response.msg" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/srv/MoraiScenarioLoadSrv.srv" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/srv/MoraiScenarioLoadSrv.srv" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiScenarioLoadSrv_Request.msg" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiScenarioLoadSrv_Request.msg" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiScenarioLoadSrv_Response.msg" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiScenarioLoadSrv_Response.msg" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/srv/MoraiSimProcSrv.srv" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/srv/MoraiSimProcSrv.srv" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiSimProcSrv_Request.msg" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiSimProcSrv_Request.msg" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiSimProcSrv_Response.msg" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiSimProcSrv_Response.msg" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/srv/MoraiSyncModeCmdSrv.srv" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/srv/MoraiSyncModeCmdSrv.srv" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiSyncModeCmdSrv_Request.msg" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiSyncModeCmdSrv_Request.msg" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiSyncModeCmdSrv_Response.msg" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiSyncModeCmdSrv_Response.msg" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/srv/MoraiSyncModeCtrlCmdSrv.srv" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/srv/MoraiSyncModeCtrlCmdSrv.srv" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiSyncModeCtrlCmdSrv_Request.msg" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiSyncModeCtrlCmdSrv_Request.msg" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiSyncModeCtrlCmdSrv_Response.msg" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiSyncModeCtrlCmdSrv_Response.msg" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/srv/MoraiSyncModeSetGearSrv.srv" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/srv/MoraiSyncModeSetGearSrv.srv" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiSyncModeSetGearSrv_Request.msg" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiSyncModeSetGearSrv_Request.msg" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiSyncModeSetGearSrv_Response.msg" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiSyncModeSetGearSrv_Response.msg" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/srv/MoraiSyncModeSLSrv.srv" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/srv/MoraiSyncModeSLSrv.srv" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiSyncModeSLSrv_Request.msg" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiSyncModeSLSrv_Request.msg" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiSyncModeSLSrv_Response.msg" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiSyncModeSLSrv_Response.msg" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/srv/MoraiTLInfoSrv.srv" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/srv/MoraiTLInfoSrv.srv" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiTLInfoSrv_Request.msg" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiTLInfoSrv_Request.msg" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiTLInfoSrv_Response.msg" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiTLInfoSrv_Response.msg" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/srv/MoraiVehicleSpecSrv.srv" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/srv/MoraiVehicleSpecSrv.srv" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiVehicleSpecSrv_Request.msg" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiVehicleSpecSrv_Request.msg" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiVehicleSpecSrv_Response.msg" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiVehicleSpecSrv_Response.msg" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/srv/MoraiWaitForTickSrv.srv" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/srv/MoraiWaitForTickSrv.srv" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiWaitForTickSrv_Request.msg" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiWaitForTickSrv_Request.msg" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiWaitForTickSrv_Response.msg" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/MoraiWaitForTickSrv_Response.msg" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/srv/PREventSrv.srv" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/srv/PREventSrv.srv" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/PREventSrv_Request.msg" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/PREventSrv_Request.msg" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/PREventSrv_Response.msg" "DESTINATION" "share/morai_msgs/srv")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/srv/PREventSrv_Response.msg" "DESTINATION" "share/morai_msgs/srv")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/morai_msgs" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/morai_msgs" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/morai_msgs" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/morai_msgs" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")

# install(FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/morai_msgs/environment")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/morai_msgs/environment")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_environment_hooks/ament_prefix_path.dsv" "DESTINATION" "share/morai_msgs/environment")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_environment_hooks/ament_prefix_path.dsv" "DESTINATION" "share/morai_msgs/environment")

# install(FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/morai_msgs/environment")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/morai_msgs/environment")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_environment_hooks/path.dsv" "DESTINATION" "share/morai_msgs/environment")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_environment_hooks/path.dsv" "DESTINATION" "share/morai_msgs/environment")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/morai_msgs")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/morai_msgs")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/morai_msgs")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/morai_msgs")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/morai_msgs")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/morai_msgs")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_environment_hooks/local_setup.dsv" "DESTINATION" "share/morai_msgs")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_environment_hooks/local_setup.dsv" "DESTINATION" "share/morai_msgs")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_environment_hooks/package.dsv" "DESTINATION" "share/morai_msgs")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_environment_hooks/package.dsv" "DESTINATION" "share/morai_msgs")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_index/share/ament_index/resource_index/packages/morai_msgs" "DESTINATION" "share/ament_index/resource_index/packages")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_index/share/ament_index/resource_index/packages/morai_msgs" "DESTINATION" "share/ament_index/resource_index/packages")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/rosidl_cmake-extras.cmake" "DESTINATION" "share/morai_msgs/cmake")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/rosidl_cmake-extras.cmake" "DESTINATION" "share/morai_msgs/cmake")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake" "DESTINATION" "share/morai_msgs/cmake")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake" "DESTINATION" "share/morai_msgs/cmake")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake" "DESTINATION" "share/morai_msgs/cmake")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake" "DESTINATION" "share/morai_msgs/cmake")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake" "DESTINATION" "share/morai_msgs/cmake")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake" "DESTINATION" "share/morai_msgs/cmake")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake" "DESTINATION" "share/morai_msgs/cmake")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake" "DESTINATION" "share/morai_msgs/cmake")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake" "DESTINATION" "share/morai_msgs/cmake")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake" "DESTINATION" "share/morai_msgs/cmake")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake" "DESTINATION" "share/morai_msgs/cmake")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake" "DESTINATION" "share/morai_msgs/cmake")

# install(FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_core/morai_msgsConfig.cmake" "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_core/morai_msgsConfig-version.cmake" "DESTINATION" "share/morai_msgs/cmake")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_core/morai_msgsConfig.cmake" "/home/mtl12345/autoware/build/morai_msgs/ament_cmake_core/morai_msgsConfig-version.cmake" "DESTINATION" "share/morai_msgs/cmake")

# install(FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/package.xml" "DESTINATION" "share/morai_msgs")
ament_cmake_symlink_install_files("/home/mtl12345/autoware/src/universe/external/morai_msgs" FILES "/home/mtl12345/autoware/src/universe/external/morai_msgs/package.xml" "DESTINATION" "share/morai_msgs")
