from setuptools import find_packages
from setuptools import setup

setup(
    name='operation_mode_transition_manager',
    version='0.1.0',
    packages=find_packages(
        include=('operation_mode_transition_manager', 'operation_mode_transition_manager.*')),
)
