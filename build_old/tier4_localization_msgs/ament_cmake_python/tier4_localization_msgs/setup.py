from setuptools import find_packages
from setuptools import setup

setup(
    name='tier4_localization_msgs',
    version='0.1.0',
    packages=find_packages(
        include=('tier4_localization_msgs', 'tier4_localization_msgs.*')),
)
