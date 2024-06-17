from setuptools import find_packages
from setuptools import setup

setup(
    name='rtklib_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('rtklib_msgs', 'rtklib_msgs.*')),
)
