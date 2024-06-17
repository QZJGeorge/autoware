from setuptools import find_packages
from setuptools import setup

setup(
    name='planning_validator',
    version='0.1.0',
    packages=find_packages(
        include=('planning_validator', 'planning_validator.*')),
)
