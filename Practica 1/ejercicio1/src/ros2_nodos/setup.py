from setuptools import setup

package_name = 'ros2_nodos'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='tu_nombre',
    maintainer_email='tu_email@example.com',
    description='Ejemplo de nodos en ROS2',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'nodo1 = ros2_nodos.nodo1:main',
            'nodo2 = ros2_nodos.nodo2:main',
            'nodo3 = ros2_nodos.nodo3:main',
        ],
    },
)
