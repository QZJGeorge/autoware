# vehicle-platform-drivers

<!-- ABOUT THE PROJECT -->
## About the Project

This repo contains all necessary sensor drivers and control packages for MTL vehicle platform (Ubuntu 18.04, ROS Melodic). 

Prepared by Tom Shi, Haojie Zhu and Sean Shen   

Features:
- Velodyne
- PointGrey camera
- Dataspeed drive-by-wire controller 
    - mkz description
    - mkz msgs
    - twist controller
- gps_driver
- gps correction
- mcity-self-designed packages
    -  mcity_msg
    -  mkz_bywire
    -  mkz_tf_define

## Get Started
### Prerequisites
ROS 1 Melodic, follow installation guidance in http://wiki.ros.org/Installation/Ubuntu
or
```sh
    sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'
    curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | sudo apt-key add -
    sudo apt update
    sudo apt install ros-melodic-desktop-full
    echo "source /opt/ros/melodic/setup.bash" >> ~/.bashrc
    source ~/.bashrc
    sudo apt install python-rosdep python-rosinstall python-rosinstall-generator python-wstool build-essential
    sudo apt install python-rosdep
    sudo rosdep init
    rosdep update
``` 

* Install Dataspeed By-wire Control
```sh
bash <(wget -q -O - https://bitbucket.org/DataspeedInc/dbw_mkz_ros/raw/master/dbw_mkz/scripts/sdk_install.bash)
```

* Install Velodyne Driver
```sh
sudo apt install ros-melodic-velodyne
```

* Install PointGrey Camera Driver
```sh
sudo apt-get install ros-melodic-pointgrey-camera-driver
```

* GPS RTK and other Mcity packages
```sh
cd MKZ_drivers/
install all dependencies using rosdep
rosdep install --from-paths src --ignore-src -r -y
```


<!-- CONTRIBUTING -->
## Contributing

Contributions are what make the open source community such an amazing place to be learn, inspire, and create. Any contributions you make are **greatly appreciated**.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request



<!-- LICENSE -->
## License




<!-- CONTACT -->
## Contact

Henry Liu - henryliu@umich.edu

## Developer


## Reviewer

Haojie Zhu
Sean Shen


<!-- MARKDOWN LINKS & IMAGES -->

[product-screenshot]: images/screenshot.png


# vehicle-platform-drivers
