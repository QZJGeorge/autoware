# Terasim-Autoware-Universe

This is the terasim version of Autoware Universe repository. For more information check out the [Autoware Documentation](https://autowarefoundation.github.io/autoware-documentation/main/)

## Install Autoware Dependencies
You can automatically install the dependencies by using the provided Ansible script. Note that this step involves chaging some system settings. When prompted to enter BECOME password, enter system password,
```bash
./setup-dev-env.sh
```

## Install Terasim Depedencies
```bash
sudo apt-get install libhiredis-dev
sudo apt-get install libgeographic-dev
```

## Installation
```bash
# Clone the repository
git clone git@github.com:QZJGeorge/autoware.git

cd autoware

# Install dependencies
rosdep install -y --from-paths src --ignore-src --rosdistro $ROS_DISTRO

# Build packages
colcon build --symlink-install --cmake-args -DCMAKE_BUILD_TYPE=Release

# Source the autoware workspace
. install/setup.bash
```

## Launch Terasim Autoware
To launch the simulation (change path to your own)
```bash
ros2 launch autoware_launch planning_simulator.launch.xml map_path:=$HOME/autoware/map vehicle_model:=sample_vehicle sensor_model:=sample_sensor_kit lanelet2_map_file:=lanelet2_mcity_v11.osm
```

To launch the real car (change path to your own)
```bash
ros2 launch autoware_launch autoware.launch.xml map_path:=$HOME/autoware/map vehicle_model:=sample_vehicle sensor_model:=sample_sensor_kit lanelet2_map_file:=lanelet2_mcity_v11.osm
```
