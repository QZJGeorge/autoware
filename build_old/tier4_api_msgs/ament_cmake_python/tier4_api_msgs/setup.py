from setuptools import find_packages
from setuptools import setup

setup(
    name='tier4_api_msgs',
    version='0.1.0',
    packages=find_packages(
        include=('tier4_api_msgs', 'tier4_api_msgs.*')),
)
