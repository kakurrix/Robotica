import rclpy
from rclpy.node import Node
from mensaje.srv import Kinematics  # Mensaje de servicio personalizado (servicio)

class KinematicsClient(Node):
    def __init__(self):
        super().__init__('kinematics_client')
        self.cli = self.create_client(Kinematics, 'compute_kinematics') # Crear cliente del servicio
        self.get_logger().info("Connected to Kinematics Service")
        self.send_requests()

    def send_requests(self):
        # Lista de configuraciones de ángulos (convertidos a float)
        angles_list = [
            (0.0, 0.0, 0.0, 0.0),  # Convertir los valores a float
            (20.0, 45.0, 10.0, 0.0),
            (10.0, -30.0, 25.0, 0.0)
        ]

        for angles in angles_list:
            req = Kinematics.Request() # Crear mensaje de petición
            req.theta1, req.theta2, req.theta3, req.theta4 = map(float, angles)  # Convertir cada ángulo a float

            future = self.cli.call_async(req) # Enviar petición asincrónica
            rclpy.spin_until_future_complete(self, future) # Esperar a que se complete la petición

            if future.result(): # Si la petición se completó
                response = future.result() # Obtener respuesta
                self.get_logger().info(f"Angles: {angles} -> Position: ({response.pose.position.x:.2f}, {response.pose.position.y:.2f}, {response.pose.position.z:.2f})")


def main(args=None):
    rclpy.init(args=args)
    node = KinematicsClient()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
