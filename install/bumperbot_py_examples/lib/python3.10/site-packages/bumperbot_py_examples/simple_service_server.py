import rclpy 
from rclpy.node import Node
from bumperbot_msgs.srv import AddTwoInt

class SimpleServiceServer(Node):
    def __init__(self):
        super().__init__("simple_service_server")

        self.service_ = self.create_service(AddTwoInt, "add_two_int", self.serviceCallback)
        self.get_logger().info("service add_two_int is all Ready")
    
    def serviceCallback(self, req, res):
        self.get_logger().info("New Request received a = %s and b = %s" % (req.a, req.b))
        res.sum = req.a + req.b
        self.get_logger().info("Returning sum value: %s" % res.sum)
        return res
    
def main():
    rclpy.init()
    simple_service_server = SimpleServiceServer()
    rclpy.spin(simple_service_server)
    simple_service_server.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()