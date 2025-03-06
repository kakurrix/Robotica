import rclpy
from rclpy.node import Node
from ucb_interface.msg import Num
class minodoPublicador(Node):
    def __init__(self):
        super().__init__('mi_nodo_publicador')
        self.publisher = self.create_publisher(Num, 'kaku', 10) #10 es el buffer
        time_period = 0.5 #seconds enviamos el mensaje
        self.timer = self.create_timer(time_period, self.timer_callback)#crea un timer
        self.i = 0
    def timer_callback(self):
        msg = Num()#crea un mensaje de tipo string
        msg.num = 2
        self.publisher.publish(msg)
        self.get_logger().info('Publicando: "%s"' % msg.num)
        self.i += 1
def main(args=None):
    rclpy.init(args=args)#inicializa el nodo
    minodo = minodoPublicador()#crea el nodo
    rclpy.spin(minodo)# mantiene el nodo activo
    minodo.destroy_node()#destruye el nodo
    rclpy.shutdown()#apaga el nodo
if __name__ == '__main__':
        main()