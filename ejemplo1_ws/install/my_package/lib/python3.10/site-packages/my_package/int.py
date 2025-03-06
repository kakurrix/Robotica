import rclpy
from rclpy.node import Node
from std_msgs.msg import String, Int32

class NodoIntermediario(Node):
    def __init__(self):
        super().__init__('nodo_intermediario')
        self.publisher = self.create_publisher(Int32, 'kuka', 10)  # 'respuesta' es el topic para el nodo suscriptor
        self.subscription = self.create_subscription(String, 'kaku', self.listener_callback, 10)
        
        # Almacena el contador
        self.i = 0

    def listener_callback(self, msg):
        # Recibe el mensaje String, procesa el contenido y genera un Int32
        self.get_logger().info('Recibido desde publicador: "%s"' % msg.data)
        
        # Convertir el string recibido (como ejemplo, se usa el conteo de los mensajes)
        # Aquí podrías realizar alguna operación para convertir el String a un valor entero
        # En este caso simplemente tomamos un número secuencial como ejemplo.
        self.i += 1
        int_msg = Int32()
        int_msg.data = self.i  # Ejemplo simple, puede cambiarse según lo que necesites hacer con el String recibido
        
        # Publica el valor entero hacia el nodo suscriptor
        self.publisher.publish(int_msg)
        self.get_logger().info('Publicando int: "%d"' % int_msg.data)

def main(args=None):
    rclpy.init(args=args)  # Inicializa el nodo
    nodo_intermediario = NodoIntermediario()  # Crea el nodo intermediario
    rclpy.spin(nodo_intermediario)  # Mantiene el nodo activo
    nodo_intermediario.destroy_node()  # Destruye el nodo
    rclpy.shutdown()  # Apaga el nodo

if __name__ == '__main__':
    main()
