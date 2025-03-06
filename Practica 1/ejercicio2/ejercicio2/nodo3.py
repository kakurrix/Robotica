import rclpy  # Importar la librería de ROS 2
from rclpy.node import Node  # Importar la clase Node
from std_msgs.msg import Int32  # Para manejar los números enteros

class SumaCuadrados(Node):
    def __init__(self):
        super().__init__('nodo3')  # Nombre del nodo

        # Suscribirse a los tópicos "numeros_impares" y "numeros_pares"
        self.sub_impares = self.create_subscription(Int32, 'odd', self.callback_impar, 10)
        self.sub_pares = self.create_subscription(Int32, 'even', self.callback_par, 10)

        # Publicador del resultado en "suma_cuadrados"
        self.publisher_ = self.create_publisher(Int32, 'suma_cuadrados', 10)

        self.suma_cuadrados = 0  # Inicializamos la suma de los cuadrados
        self.get_logger().info("Nodo suma_cuadrados iniciado - Calculando suma de cuadrados.")

    def callback_impar(self, msg):
        cuadrado = msg.data ** 2  # Elevar al cuadrado
        self.suma_cuadrados += cuadrado  # Sumar el cuadrado
        self.publicar_resultado()

    def callback_par(self, msg):
        cuadrado = msg.data ** 2  # Elevar al cuadrado
        self.suma_cuadrados += cuadrado  # Sumar el cuadrado
        self.publicar_resultado()

    def publicar_resultado(self):
        msg = Int32()
        msg.data = self.suma_cuadrados  # Asignar la suma de los cuadrados
        self.publisher_.publish(msg)  # Publicar el resultado
        self.get_logger().info(f'Suma de cuadrados actualizada: {msg.data}')

def main(args=None):
    rclpy.init(args=args)
    nodo = SumaCuadrados()
    rclpy.spin(nodo)
    nodo.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
