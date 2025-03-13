import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import random
class SensorPub(Node):
    def __init__(self):
        super().__init__('sensor_publisher') #Nombre del nodo
        self.publisher_ = self.create_publisher(String, 'estadobin', 10) #Nombre del topico
        time_period = 3 # segundos
        self.timer = self.create_timer(time_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        randomn = random.randint(0, 7)
        msg = String()
        msg.data = format(randomn, '03b')
        self.publisher_.publish(msg)
        self.get_logger().info('Publicando: "%s"' % msg.data)



def main(args=None):
    rclpy.init(args=args)
    sensor_publisher = SensorPub()
    rclpy.spin(sensor_publisher)
    sensor_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
