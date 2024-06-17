from setuptools import find_packages
from setuptools import setup

setup(
    name='pandar_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('pandar_msgs', 'pandar_msgs.*')),
)
