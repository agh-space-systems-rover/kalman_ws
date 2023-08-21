import rclpy
import rclpy.node
import std_msgs.msg

class MyPublisher(rclpy.node.Node):
    def __init__(self):
        super().__init__("my_subscriber")
        self.my_topic_publisher = self.create_publisher(std_msgs.msg.String, "my_topic", 10)
        self.timer = self.create_timer(1.0, self.timer_callback)

    def timer_callback(self):
        msg = std_msgs.msg.String()
        msg.data = "Hello, Unity!"
        self.my_topic_publisher.publish(msg)

def main():
    rclpy.init()
    
    node = MyPublisher()
    rclpy.spin(node)

    rclpy.shutdown()
