from setuptools import find_packages, setup

package_name = 'ejer2py'

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
    maintainer='weimar',
    maintainer_email='rufo.huallpara@ucb.edu.bo',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'pub1 = ejer2py.pub1:main',
            'pub2 = ejer2py.pub2:main',
            'pub3 = ejer2py.pub3:main',
            'pubsubprome = ejer2py.pubsubprome:main',
            'versub = ejer2py.versub:main',
        ],
    },
)
