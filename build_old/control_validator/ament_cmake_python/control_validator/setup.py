from setuptools import find_packages
from setuptools import setup

setup(
    name='control_validator',
    version='0.1.0',
    packages=find_packages(
        include=('control_validator', 'control_validator.*')),
)
