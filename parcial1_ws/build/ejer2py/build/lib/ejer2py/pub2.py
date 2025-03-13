import rclpy
import random
from rclpy.node import Node
from std_msgs.msg import Float64

class SensorPubrand(Node):
    def __init__(self):
        super().__init__('Nodo_2')
        self.publisher_ = self.create_publisher(Float64, 'sensor_2', 10)
        self.timer = self.create_timer(1, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        msg = Float64()
        msg.data = round(random.uniform(0.0, 10.0),2)
        self.publisher_.publish(msg)
        self.get_logger().info('Publicando: "%s"' % msg.data)
def main(args=None):
    rclpy.init(args=args)
    sensor_pubrand = SensorPubrand()
    rclpy.spin(sensor_pubrand)
    sensor_pubrand.destroy_node()
    rclpy.shutdown()
if __name__ == '__main__':
    main()