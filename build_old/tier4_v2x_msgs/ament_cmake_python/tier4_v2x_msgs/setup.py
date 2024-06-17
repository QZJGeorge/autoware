from setuptools import find_packages
from setuptools import setup

setup(
    name='tier4_v2x_msgs',
    version='0.1.0',
    packages=find_packages(
        include=('tier4_v2x_msgs', 'tier4_v2x_msgs.*')),
)
