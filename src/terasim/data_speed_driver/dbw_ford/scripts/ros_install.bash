#! /bin/bash

# Screen lock settings
echo "Disabling screen lock..."
gsettings set org.gnome.desktop.screensaver lock-enabled false
gsettings set org.gnome.desktop.session idle-delay 0

# Disable suspend on lid close
echo "Disabling suspend on lid close..."
gsettings set org.gnome.settings-daemon.plugins.power lid-close-ac-action nothing
gsettings set org.gnome.settings-daemon.plugins.power lid-close-battery-action nothing

# Remove unnecessary packages
echo "Removing unnecessary packages..."
sudo apt-get update
sudo apt-get remove -y thunderbird transmission-gtk transmission-common unity-webapps-common brasero-common
sudo apt-get autoremove -y

# Disable error reporting and Amazon search results
gsettings set com.canonical.Unity.Lenses remote-content-search 'none'
sudo apt-get purge unity-webapps-common apport -y

# Upgrade
echo "Upgrading system..."
sudo apt-get update
sudo apt-get dist-upgrade -y
sudo apt-get update
sudo apt-get dist-upgrade -y
sudo apt-get autoremove -y

# Determine ROS version to install
codename=`lsb_release -sc`
if   [ "$codename" = "focal" ]; then
  ROS_DISTRO=foxy
elif [ "$codename" = "jammy" ]; then
  ROS_DISTRO=humble
else
  echo "Unable to determine ROS version for OS codename '"$codename"'"
  exit 1
fi

# Install ROS
echo "Installing ROS $ROS_DISTRO..."
sudo apt-get install -y curl
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null
sudo apt-get update
sudo apt-get install -y ros-$ROS_DISTRO-desktop python3-rosdep
sudo rosdep init

# Update rosdep rules
echo "Updating rosdep rules..."
rosdep update

# Setup environment
echo "source /opt/ros/$ROS_DISTRO/setup.bash" >> ~/.bashrc
echo "export RCUTILS_COLORIZED_OUTPUT=1" >> ~/.bashrc
echo "export ROS_LOCALHOST_ONLY=1" >> ~/.bashrc

# Install SDK
echo "Installing SDK..."
bash <(wget -q -O - https://bitbucket.org/DataspeedInc/dbw_ros/raw/ros2/dbw_ford/scripts/sdk_install.bash)

# Configure startup script
mkdir -p $HOME/.config/autostart
wget -q https://bitbucket.org/DataspeedInc/dbw_ros/raw/ros2/dbw_ford/scripts/joystick_demo.desktop -O $HOME/.config/autostart/joystick_demo.desktop

### Misc fixes ###
# Fix launcher icons
echo "Setting up launcher icons..."
gsettings set com.canonical.Unity.Launcher favorites "['application://nautilus.desktop', 'application://gnome-terminal.desktop']"

# List view in folders
echo "Setting list view in folders..."
gsettings set org.gnome.nautilus.preferences default-folder-viewer 'list-view'

# Launch files open in gedit
echo "Configuring launch files to open in gedit..."
xdg-mime default gedit.desktop application/xml

echo "ROS install: Done"

