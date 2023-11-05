^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package dbw_ford_can
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

2.1.3 (2023-09-11)
------------------
* Bump firmware versions
* Add one-pedal-drive mode status
* Add ready flag to GearReport message
* Contributors: Kevin Hallenbeck

2.1.2 (2023-05-10)
------------------
* Bump firmware versions
* Contributors: Kevin Hallenbeck

2.1.1 (2023-01-24)
------------------
* Bump firmware versions
* Update install scripts for ROS2
* Add P702 platform (2021+ F-150)
* Add warning for steering configuration fault
* Contributors: Kevin Hallenbeck

2.1.0 (2022-11-30)
------------------
* Bump firmware versions
* Add missing ament_cmake_gtest dependency
* Sync ament_cmake and ament_cmake_ros in each CMakeLists.txt/package.xml
* Change unsigned vehicle speed to signed vehicle velocity
* Contributors: Kevin Hallenbeck, Micho Radovnikovich

2.0.3 (2022-10-14)
------------------
* Fix socketcan options
* Contributors: Kevin Hallenbeck

2.0.2 (2022-05-13)
------------------
* Periodically publish DBW enabled status in addition to latched and on change
* Bump firmware versions
* Contributors: Kevin Hallenbeck

2.0.1 (2022-02-23)
------------------
* Add Ford GE1 platform (Ford Mustang Mach-E)
* Add electric parking brake control
* Change parameters to work in Foxy and Galactic
* Export include directories from DBW CAN interface packages
* Contributors: Kevin Hallenbeck, Micho Radovnikovich

2.0.0 (2021-11-03)
------------------
* Initial ROS2 release
* Contributors: Kevin Hallenbeck
