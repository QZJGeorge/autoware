from setuptools import find_packages
from setuptools import setup

setup(
    name='control_performance_analysis',
    version='0.1.0',
    packages=find_packages(
        include=('control_performance_analysis', 'control_performance_analysis.*')),
)
