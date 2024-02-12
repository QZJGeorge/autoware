from setuptools import find_packages, setup

package_name = 'mcity_light'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='zhijie',
    maintainer_email='zhijieq@umich.edu',
    description='Read real time traffic light information from Mcity OS and publish to redis',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'mcity_light = mcity_light.mcity_light:main',
        ],
    },
)
