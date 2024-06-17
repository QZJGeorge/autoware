from setuptools import find_packages
from setuptools import setup

setup(
    name='autoware_sensing_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('autoware_sensing_msgs', 'autoware_sensing_msgs.*')),
)
