from setuptools import find_packages
from setuptools import setup

setup(
    name='morai_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('morai_msgs', 'morai_msgs.*')),
)
