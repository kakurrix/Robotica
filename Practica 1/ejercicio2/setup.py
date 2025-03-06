from setuptools import find_packages, setup

package_name = 'ejercicio2'

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
    maintainer='rod-0310',
    maintainer_email='rod-0310@todo.todo',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'nodo1 = ejercicio2.nodo1:main',
            'nodo2 = ejercicio2.nodo2:main',
            'nodo3 = ejercicio2.nodo3:main',
    
        ],
    },
)
