from setuptools import find_packages
from setuptools import setup

setup(
    name='eagleye_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('eagleye_msgs', 'eagleye_msgs.*')),
)
