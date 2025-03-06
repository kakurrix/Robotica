import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/kakurrix/Documents/Robotica/ejemplo1_ws/install/my_package'
