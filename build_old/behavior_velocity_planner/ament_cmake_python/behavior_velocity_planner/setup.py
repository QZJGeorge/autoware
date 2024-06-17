from setuptools import find_packages
from setuptools import setup

setup(
    name='behavior_velocity_planner',
    version='0.1.0',
    packages=find_packages(
        include=('behavior_velocity_planner', 'behavior_velocity_planner.*')),
)
