from setuptools import find_packages, setup

package_name = 'mcity_remote'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='haojie',
    maintainer_email='zhuhj@umich.edu',
    description='\
        Receive trajectory from redis server and convert to ros2 message\
        Convert vehicle state information from ros2 message and send to redis server\
    ',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'redis_to_ros_input_path = mcity_remote.redis_to_ros_input_path:main',
            'redis_to_ros_vehicle_state = mcity_remote.redis_to_ros_vehicle_state:main',
            'ros_to_redis_input_path = mcity_remote.ros_to_redis_input_path:main',
            'ros_to_redis_vehicle_state = mcity_remote.ros_to_redis_vehicle_state:main',
            'ros_to_redis_vehicle_control = mcity_remote.ros_to_redis_vehicle_control:main',
        ],
    },
)