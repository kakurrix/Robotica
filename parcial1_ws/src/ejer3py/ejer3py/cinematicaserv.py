import rclpy
from rclpy.node import Node
from mensaje.srv import Kinematics  # Mensaje de servicio personalizado
import sympy as sp # Importar sympy para cálculos simbólicos


class KinematicsServer(Node):
    def __init__(self):
        super().__init__('kinematics_server')

        # Definir servicio
        self.srv = self.create_service(Kinematics, 'compute_kinematics', self.compute_kinematics_callback) # Crear servicio
        self.get_logger().info("Kinematics Server is ready.") # Mensaje de información sobre si el srv esta leyendo bien

        # Definir variables simbólicas
        self.th1, self.th2, self.th3, self.th4, self.L1, self.L2 = sp.symbols('th1 th2 th3 th4 L1 L2')

        # Definir matrices de transformación
        self.Ry1 = sp.Matrix([
            [sp.cos(-self.th1), 0, sp.sin(-self.th1), 0],
            [0, 1, 0, 0],
            [-sp.sin(-self.th1), 0, sp.cos(-self.th1), 0],
            [0, 0, 0, 1]
        ])

        self.Rx1 = sp.Matrix([
            [1, 0, 0, 0],
            [0, sp.cos(self.th2), -sp.sin(self.th2), 0],
            [0, sp.sin(self.th2), sp.cos(self.th2), 0],
            [0, 0, 0, 1]
        ])

        self.Tz1 = sp.Matrix([
            [1, 0, 0, 0],
            [0, 1, 0, 0],
            [0, 0, 1, -self.L1],
            [0, 0, 0, 1]
        ])

        self.Ry2 = sp.Matrix([
            [sp.cos(-self.th3), 0, sp.sin(-self.th3), 0],
            [0, 1, 0, 0],
            [-sp.sin(-self.th3), 0, sp.cos(-self.th3), 0],
            [0, 0, 0, 1]
        ])

        self.Tz2 = sp.Matrix([
            [1, 0, 0, 0],
            [0, 1, 0, 0],
            [0, 0, 1, -self.L2],
            [0, 0, 0, 1]
        ])
        self.Ry3 =sp.Matrix([
            [sp.cos(-self.th4), 0, sp.sin(-self.th4), 0],
            [0, 1, 0, 0],
            [-sp.sin(-self.th4), 0, sp.cos(-self.th4), 0],
            [0, 0, 0, 1]
        ]
        )

        # Calcular la matriz M (Matriz de transformación homogénea)
        self.M = self.Ry1 * self.Rx1 * self.Tz1 * self.Ry2 * self.Tz2 * self.Ry3

        # Simplificar M * [0, 0, 0, 1] para obtener la posición final
        self.M_simplified = sp.simplify(self.M * sp.Matrix([0, 0, 0, 1]))

        # Extraer x, y, z
        self.x = self.M_simplified[0] 
        self.y = self.M_simplified[1]
        self.z = self.M_simplified[2]

        self.get_logger().info("Transformation matrix computed.") # Mensaje de información sobre si la matriz de transformación se calculó correctamente

    def compute_kinematics_callback(self, request, response): # Método para calcular la cinemática
        # Sustituir valores numéricos en la ecuación simbólica
        M_numeric = self.M_simplified.subs({
            self.th1: sp.rad(request.theta1),
            self.th2: sp.rad(request.theta2),
            self.th3: sp.rad(request.theta3),
            self.L1: 69.5,  # mm (distancia del hombro al codo)
            self.L2: 71.5   # mm (distancia del codo a la pata)
        })

        # Extraer valores finales
        response.pose.position.x = float(M_numeric[0])
        response.pose.position.y = float(M_numeric[1])
        response.pose.position.z = float(M_numeric[2])

        self.get_logger().info(f"Computed position: x={response.pose.position.x}, y={response.pose.position.y}, z={response.pose.position.z}")
        return response


def main(args=None):
    rclpy.init(args=args)
    node = KinematicsServer()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
