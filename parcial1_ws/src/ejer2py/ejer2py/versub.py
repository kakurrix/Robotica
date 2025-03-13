import rclpy
from rclpy.node import Node
from mensaje.msg import Num


class SubDisplay(Node):
    def __init__(self):
        super().__init__('Nodo_5')
        self.subscription = self.create_subscription(Num, 'filtered_sensor', self.listener_callback, 10) 
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.get_logger().info(f'Received: {msg.name} {msg.sensor_value}')
def main(args=None):
    rclpy.init(args=args)
    sub_display = SubDisplay()
    rclpy.spin(sub_display)
    sub_display.destroy_node()
    rclpy.shutdown()
if __name__ == '__main__':
    main()