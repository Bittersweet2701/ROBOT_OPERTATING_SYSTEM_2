import rclpy                                     # Import the rclpy library for ROS 2 Python.
from rclpy.node import Node                      # Import the Node class from rclpy.node.
from std_msgs.msg import String                  # Import the String message from the std_msgs package.

class SimplePublisher(Node):                     # Define a class SimplePublisher inheriting from the Node class.
    def __init__(self):                          # Constructor method.
        super().__init__("simple_publisher")     # Call the constructor of the parent class with the node name.

        self.pub_ = self.create_publisher(String, "chatter", 10)  # Create a publisher with String message type, named "chatter", with a buffer size of 10.

        self.counter_ = 0                         # Initialize a counter variable.
        self.frequency_ = 1.0                     # Set the frequency at which to publish messages.

        self.get_logger().info("Publishing at %d Hz" % self.frequency_)  # Log a message indicating the publishing frequency.

        self.timer_ = self.create_timer(self.frequency_, self.timerCallback)  # Create a timer to trigger the timerCallback method at the specified frequency.

    def timerCallback(self):                      # Define a method to be called by the timer at each interval.
        msg = String()                            # Create a String message object.
        msg.data = "Hello ROS2 - counter: %d" % self.counter_  # Set the data of the message.

        self.pub_.publish(msg)                    # Publish the message.
        self.counter_ += 1                        # Increment the counter for the next message.

def main():                                       # Define the main function.
    rclpy.init()                                  # Initialize the ROS 2 system.
    simple_publisher = SimplePublisher()          # Create an instance of the SimplePublisher class.
    rclpy.spin(simple_publisher)                  # Start spinning the node to process messages and callbacks.
    simple_publisher.destroy_node()               # Destroy the node.
    rclpy.shutdown()                              # Shutdown the ROS 2 system.

if __name__ == "__main__":                       # Check if the script is being run directly.
    main()                                       # Call the main function if the script is run directly.
