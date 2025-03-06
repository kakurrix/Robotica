import rclpy
from rclpy.node import Node
from std_msgs.msg import Int8

class Nodo2(Node):
    def __init__(self):
        super().__init__('nodo2')
        self.subscription = self.create_subscription(Int8, 'numbers', self.callback, 10)
        self.publisher_ = self.create_publisher(Int8, 'sum', 10)
        self.suma_total = 0

    def callback(self, msg):
        self.suma_total += msg.data
        new_msg = Int8()
        new_msg.data = self.suma_total
        self.publisher_.publish(new_msg)
        self.get_logger().info(f'Suma acumulada: {self.suma_total}')

def main(args=None):
    rclpy.init(args=args)
    nodo = Nodo2()
    rclpy.spin(nodo)
    nodo.destroy_node()
    rclpy.shutdown()
