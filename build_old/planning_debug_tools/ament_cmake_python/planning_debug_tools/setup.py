from setuptools import find_packages
from setuptools import setup

setup(
    name='planning_debug_tools',
    version='0.1.0',
    packages=find_packages(
        include=('planning_debug_tools', 'planning_debug_tools.*')),
)
