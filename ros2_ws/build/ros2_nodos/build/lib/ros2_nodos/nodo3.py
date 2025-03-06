import rclpy
from rclpy.node import Node
from std_msgs.msg import Int8

class Nodo3(Node):
    def __init__(self):
        super().__init__('nodo3')
        self.subscription = self.create_subscription(Int8, 'sum', self.callback, 10)
        self.contador = 0
        self.suma_total = 0

    def callback(self, msg):
        self.contador += 1
        self.suma_total += msg.data
        promedio = self.suma_total / self.contador if self.contador > 0 else 0
        self.get_logger().info(f'Promedio: {promedio:.2f}')

def main(args=None):
    rclpy.init(args=args)
    nodo = Nodo3()
    rclpy.spin(nodo)
    nodo.destroy_node()
    rclpy.shutdown()
