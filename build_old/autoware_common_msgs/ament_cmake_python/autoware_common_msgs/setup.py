from setuptools import find_packages
from setuptools import setup

setup(
    name='autoware_common_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('autoware_common_msgs', 'autoware_common_msgs.*')),
)
