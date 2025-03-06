import rclpy
from rclpy.node import Node
from std_msgs.msg import Int8
import random

class Nodo1(Node):
    def __init__(self):
        super().__init__('nodo1')
        self.publisher_ = self.create_publisher(Int8, 'numbers', 10)
        self.timer = self.create_timer(1.0, self.publicar_numero)

    def publicar_numero(self):
        msg = Int8()
        msg.data = random.randint(0, 255)
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publicando: {msg.data}')

def main(args=None):
    rclpy.init(args=args)
    nodo = Nodo1()
    rclpy.spin(nodo)
    nodo.destroy_node()
    rclpy.shutdown()
