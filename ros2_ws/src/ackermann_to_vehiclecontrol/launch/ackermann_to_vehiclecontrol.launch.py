from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    # Get the package share directory
    pkg_dir = get_package_share_directory('ackermann_to_vehiclecontrol')
    
    # Path to the config file
    config_file = os.path.join(pkg_dir, 'config', 'params.yaml')

    return LaunchDescription([
        Node(
            package='ackermann_to_vehiclecontrol',
            executable='ackermann_to_vehiclecontrol_node',
            name='ackermann_to_vehiclecontrol_node',
            output='screen',
            parameters=[config_file]
        )
    ])
