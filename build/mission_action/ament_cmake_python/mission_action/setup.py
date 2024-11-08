from setuptools import find_packages
from setuptools import setup

setup(
    name='mission_action',
    version='0.0.0',
    packages=find_packages(
        include=('mission_action', 'mission_action.*')),
)
