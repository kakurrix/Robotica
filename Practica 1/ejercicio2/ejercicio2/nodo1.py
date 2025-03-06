import rclpy  # Importar la librería de ROS 2
from rclpy.node import Node  # Importar la clase Node
from std_msgs.msg import Int32  # Usamos Int32 para manejar números más grandes

class Nodo1(Node):
    def __init__(self):
        super().__init__('nodo1')  # Nombre del nodo
        self.publisher_ = self.create_publisher(Int32, 'odd', 10)  # Crear publicador en "numeros_impares"
        self.timer = self.create_timer(1.0, self.timer_callback)  # Temporizador cada 1s
        self.numero = 1  # Empezamos desde el primer número impar

        self.get_logger().info("Nodo1 iniciado - Publicando números impares.")

    def timer_callback(self):
        msg = Int32()
        msg.data = self.numero  # Asignar el número impar actual
        self.publisher_.publish(msg)  # Publicar el número
        self.get_logger().info(f'Publicado: {msg.data}')  # Mostrar en consola

        self.numero += 2  # Incrementar al siguiente número impar

def main(args=None):
    rclpy.init(args=args)
    nodo = Nodo1()
    rclpy.spin(nodo)
    nodo.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
