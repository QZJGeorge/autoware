#! /bin/bash

# Detect ROS version
if [ -e /opt/ros/foxy/setup.bash ]; then
  echo "Detected ROS Foxy."
  source /opt/ros/foxy/setup.bash
elif [ -e /opt/ros/humble/setup.bash ]; then
  echo "Detected ROS Humble."
  source /opt/ros/humble/setup.bash
else
  echo "Failed to detected ROS version."
  exit 1
fi

# Setup apt-get
echo "Adding Dataspeed server to apt..."
sudo apt-get install -y curl
sudo curl -sSL https://bitbucket.org/DataspeedInc/ros_binaries/raw/master/dataspeed.key -o /usr/share/keyrings/dataspeed-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/dataspeed-archive-keyring.gpg] http://packages.dataspeedinc.com/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2-dataspeed-public.list > /dev/null
sudo apt-get update

# Setup rosdep
echo "Setting up rosdep..."
if [ -z "$ROS_DISTRO" ]; then
  echo "Error! ROS not detected. Not updating rosdep!"
else
  sudo sh -c 'echo "yaml http://packages.dataspeedinc.com/ros2/ros-public-'$ROS_DISTRO'.yaml '$ROS_DISTRO'" > /etc/ros/rosdep/sources.list.d/30-dataspeed-public-'$ROS_DISTRO'.list'
  rosdep update
fi

sudo apt-get install -y ros-$ROS_DISTRO-dbw-ford
sudo apt-get upgrade

echo "SDK install: Done"

