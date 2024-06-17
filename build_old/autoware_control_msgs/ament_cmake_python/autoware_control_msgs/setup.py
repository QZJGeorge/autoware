from setuptools import find_packages
from setuptools import setup

setup(
    name='autoware_control_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('autoware_control_msgs', 'autoware_control_msgs.*')),
)
