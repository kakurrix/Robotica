import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64
from mensaje.msg import Num

class SensPromSusPubNode(Node):
    def __init__(self):
        super().__init__('Nodo_4')
        self.sub_sensor1 = self.create_subscription(Float64, 'sensor_1', self.listener_callback, 10) #nombre del topico subscriptor
        self.sub_sensor2 = self.create_subscription(Float64, 'sensor_2', self.listener_callback1, 10)
        self.sub_sensor3 = self.create_subscription(Float64, 'sensor_3', self.listener_callback2, 10)

        self.publisher_ = self.create_publisher(Num, 'filtered_sensor', 10) #nombre del topico publicador
        
        self.sensor_values = {'sensor_1': None, 'sensor_2': None, 'sensor_3': None} #diccionario para almacenar los valores de los sensores
        self.timer = self.create_timer(1.0, self.publish_filtered_data) #timer para publicar el promedio de los sensores
    
    def listener_callback(self, msg):   #callback para el sensor 1
        self.sensor_values['sensor_1'] = msg.data  #almacenar el valor del sensor 1 en el diccionario

    def listener_callback1(self, msg):  
        self.sensor_values['sensor_2'] = msg.data  

    def listener_callback2(self, msg):  
        self.sensor_values['sensor_3'] = msg.data


    def publish_filtered_data(self):
        avg_value = round(sum(self.sensor_values.values()) / len(self.sensor_values),2) #calcular el promedio de los valores de los sensores
        msg = Num() #crear un mensaje de tipo Num (definicion de mesaje)
        msg.sensor_value = avg_value
        msg.name = "Promedio Sensores"
        self.publisher_.publish(msg)
        self.get_logger().info(f'Published Filtered Sensor: {avg_value}')

def main(args=None):
    rclpy.init(args=args) # Inicializar el nodo
    sens_prom_sus_pub_node = SensPromSusPubNode() #crear el nodo
    rclpy.spin(sens_prom_sus_pub_node) #mantener el nodo en ejecucion
    sens_prom_sus_pub_node.destroy_node() # destruir el nodo
    rclpy.shutdown() #apagar el nodo
if __name__ == '__main__':
    main()