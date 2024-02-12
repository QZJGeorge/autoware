import os
from glob import glob
from setuptools import find_packages, setup

package_name = 'dbw_ford_input_test'

setup(
    name=package_name,
    version='0.0.1',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),
        (os.path.join('share', package_name, 'config'), glob('config/*.yaml'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='zhijie Qiao',
    maintainer_email='zhijieq@umich.edu',
    description='basic drive by wire test for lincoln mkz',
    license='BSD',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        	'dbw_test_node = dbw_ford_input_test.dbw_test:main',
        ],
    },
)
