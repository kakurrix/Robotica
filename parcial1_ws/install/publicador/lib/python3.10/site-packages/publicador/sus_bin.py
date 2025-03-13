import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class SensorSubscriber(Node):

    def __init__(self):
        super().__init__('sensor_subscriber') #Nombre del nodo
        self.subscription = self.create_subscription(String,'estadobin', self.listener_callback, 10) #Nombre del topico
        self.subscription  

    def listener_callback(self, msg):
        binary_str = msg.data
        if len(binary_str) == 3:
            si = int(binary_str[0])  # Sensor Izquierdo
            sc = int(binary_str[1])  # Sensor Central
            sd = int(binary_str[2])  # Sensor Derecho
            motores, estado = self.interpretar_sensores(si, sc, sd) # Motores, Estado
            self.get_logger().info(f'binario: {binary_str} -> ' 
                                   f'Motor Izquierdo: {motores[0]}, Motor Derecho: {motores[1]}, Estado: {estado}') #Mensaje
            

    def interpretar_sensores(self, si, sc, sd):    #Interpretar los sens
        tabla_control = {
            "000": ((1, 1), "Adelante"), #Motor Izquierdo, Motor Derecho, Estado
            "001": ((0, 1), "Derecha"),
            "010": ((0, 0), "Alto"),
            "011": ((0, 1), "Derecha"),
            "100": ((1, 0), "Izquierda"),
            "101": ((1, 1), "Adelante"),
            "110": ((1, 0), "Izquierda"),
            "111": ((0, 0), "Alto"),
        }
        clave = f"{si}{sc}{sd}"  #Clave
        return tabla_control.get(clave, ((0, 0), "Desconocido")) 


def main(args=None):
    rclpy.init(args=args)

    sensor_subscriber = SensorSubscriber()

    rclpy.spin(sensor_subscriber)

    sensor_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
