from setuptools import find_packages
from setuptools import setup

setup(
    name='mcity_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('mcity_msgs', 'mcity_msgs.*')),
)
