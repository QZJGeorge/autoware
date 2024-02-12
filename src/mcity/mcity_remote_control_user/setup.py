from setuptools import find_packages, setup

package_name = 'mcity_remote_control_user'

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
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'redis_to_ros_vehicle_state = mcity_remote_control_user.redis_to_ros_vehicle_state:main',
            'ros_to_redis_input_path = mcity_remote_control_user.ros_to_redis_input_path:main',
        ],
    },
)
