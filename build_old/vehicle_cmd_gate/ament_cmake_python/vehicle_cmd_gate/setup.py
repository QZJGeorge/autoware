from setuptools import find_packages
from setuptools import setup

setup(
    name='vehicle_cmd_gate',
    version='0.1.0',
    packages=find_packages(
        include=('vehicle_cmd_gate', 'vehicle_cmd_gate.*')),
)
