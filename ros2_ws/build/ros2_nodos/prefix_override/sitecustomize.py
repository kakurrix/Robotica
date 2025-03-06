import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/kakurrix/Documents/Robotica/ros2_ws/install/ros2_nodos'
