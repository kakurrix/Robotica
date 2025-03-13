import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/kakurrix/Documents/Robotica/parcial1_ws/install/ejer3py'
