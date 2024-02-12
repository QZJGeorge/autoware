# DBW_ROS2

## Launch

* Joystick demo
    * `ros2 launch dbw_fca_joystick_demo joystick_demo.launch.xml sys:=true`
    * `ros2 launch dbw_ford_joystick_demo joystick_demo.launch.xml sys:=true`
    * `ros2 launch dbw_polaris_joystick_demo joystick_demo.launch.xml sys:=true`
* Drive-by-wire only
    * `ros2 launch dbw_fca_can dbw.launch.xml`
    * `ros2 launch dbw_ford_can dbw.launch.xml`
    * `ros2 launch dbw_polaris_can dbw.launch.xml`
* RViz visualization
    * `ros2 launch dbw_fca_description rviz.launch.xml`
    * `ros2 launch dbw_ford_description rviz.launch.xml`
    * `ros2 launch dbw_polaris_description rviz.launch.xml`

## Binaries

* ROS buildfarm with infrequent updates:
    * http://repo.ros2.org/status_page/ros_humble_default.html?q=dbw_ros
* Dataspeed buildfarm with frequent updates:
    * https://bitbucket.org/DataspeedInc/ros_binaries/
