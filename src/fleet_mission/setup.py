from setuptools import setup

package_name = 'fleet_mission'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    py_modules=['fleet_mission.rn1', 'fleet_mission.rn2'],
    install_requires=['setuptools','mission_action'],
    #dependencies=['mission_action'],
    entry_points={
        'console_scripts': [
            'rn1 = fleet_mission.rn1:main',  # Entry for rn1 script
            'rn2 = fleet_mission.rn2:main',  # Entry for rn2 script
        ],
    },
    data_files=[
        ('share/ament_index/resource_index/packages',
         ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
)
