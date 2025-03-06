import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32

class Misubscripyot(Node):
    def __init__(self):
        super().__init__('mi_subscriptor')
        self.subscription = self.create_subscription(Int32, 'kuka', self.listener_callback, 10)
        self.subscription

    def listener_callback(self, msg):
        self.get_logger().info('Recived: "%s"' % msg.data)

def main(args=None):
    rclpy.init(args=args)#inicializa el nodo
    minodo = Misubscripyot()#crea el nodo
    rclpy.spin(minodo)# mantiene el nodo activo
    minodo.destroy_node()#destruye el nodo
    rclpy.shutdown()#apaga el nodo

if __name__ == '__main__':
        main()