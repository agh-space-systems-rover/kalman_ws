import rclpy
import rclpy.node
import std_msgs.msg

class MySubscriber(rclpy.node.Node):
    def __init__(self):
        super().__init__("my_subscriber")
        self.create_subscription(std_msgs.msg.String, "my_topic", self.my_topic_callback, 10)

    def my_topic_callback(self, msg):
        self.get_logger().info(f"I heard: {msg.data}")

def main():
    rclpy.init()
    
    node = MySubscriber()
    rclpy.spin(node)

    rclpy.shutdown()
