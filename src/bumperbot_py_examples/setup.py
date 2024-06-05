from setuptools import find_packages, setup

package_name = 'bumperbot_py_examples'

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
    maintainer='thinhcuong',
    maintainer_email='thinhcuong@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'simple_publisher = bumperbot_py_examples.simple_publisher:main',
            'simple_subscriber = bumperbot_py_examples.simple_subscriber:main',
            'simple_parameter = bumperbot_py_examples.simple_subscriber:main',
            'simple_turtlesim_kinematics = bumperbot_py_examples.simple_turtlesim_kinematics:main',
            'simple_tf_kinematics = bumperbot_py_examples.simple_tf_kinematics:main',
            'simple_service_server = bumperbot_py_examples.simple_service_server:main',
            "simple_service_client = bumperbot_py_examples.simple_service_client:main"
        ],
    },
)