from setuptools import find_packages
from setuptools import setup

setup(
    name='autoware_localization_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('autoware_localization_msgs', 'autoware_localization_msgs.*')),
)
