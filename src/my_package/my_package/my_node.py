import rclpy
import rclpy.node

class MyNode(rclpy.node.Node):
    def __init__(self):
        super().__init__("my_node")
        self.get_logger().info("Hello, world!")

def main():
    rclpy.init()
    
    node = MyNode()
    rclpy.spin(node)

    rclpy.shutdown()
