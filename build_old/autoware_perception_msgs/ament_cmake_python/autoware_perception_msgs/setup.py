from setuptools import find_packages
from setuptools import setup

setup(
    name='autoware_perception_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('autoware_perception_msgs', 'autoware_perception_msgs.*')),
)
