from setuptools import find_packages
from setuptools import setup

setup(
    name='yabloc_particle_filter',
    version='0.1.0',
    packages=find_packages(
        include=('yabloc_particle_filter', 'yabloc_particle_filter.*')),
)
