from setuptools import find_packages
from setuptools import setup

setup(
    name='dummy_perception_publisher',
    version='0.1.0',
    packages=find_packages(
        include=('dummy_perception_publisher', 'dummy_perception_publisher.*')),
)
