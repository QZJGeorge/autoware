from setuptools import find_packages
from setuptools import setup

setup(
    name='autoware_external_api_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('autoware_external_api_msgs', 'autoware_external_api_msgs.*')),
)
