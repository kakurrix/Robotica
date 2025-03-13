from setuptools import find_packages, setup

package_name = 'publicador'

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
    maintainer='mario',
    maintainer_email='mario.hernandez@ucb.edu.bo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
          'pub_bin = publicador.pub_bin:main',
      	  'sus_bin = publicador.sus_bin:main',
        
        ],
    },
)
