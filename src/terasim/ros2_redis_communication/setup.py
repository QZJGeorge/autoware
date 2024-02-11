from setuptools import find_packages, setup

package_name = 'ros2_redis_communication'

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
            'autoware2redis = ros2_redis_communication.autoware2redis:main',
            'realvehicle2redis = ros2_redis_communication.realvehicle2redis:main',
            'redis2autoware = ros2_redis_communication.redis2autoware:main',
            'redis2realvehicle = ros2_redis_communication.redis2realvehicle:main',
        ],
    },
)
