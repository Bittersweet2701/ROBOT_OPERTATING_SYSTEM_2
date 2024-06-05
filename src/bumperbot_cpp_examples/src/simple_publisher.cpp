#include <rclcpp/rclcpp.hpp>                // This line imports the RCLCPP library, which includes basic ROS 2 functionalities.
#include <std_msgs/msg/string.hpp>          // This line imports the String message from the std_msgs package.

#include <chrono>                           // This line imports the chrono library to use time-related constants and features.

using namespace std::chrono_literals;      // Using the chrono_literals namespace to use time constants, such as 1s.

class SimplePublisher : public rclcpp::Node  // Define a class SimplePublisher inheriting from the RCLCPP Node class.
{
public:
    SimplePublisher() : Node("simple_publisher"), counter_(0)  // Constructor of the SimplePublisher class.
    {
        pub_ = create_publisher<std_msgs::msg::String>("chatter", 10);  // Create a publisher with String message, named "chatter", with a buffer size of 10.
        timer_ = create_wall_timer(1s, std::bind(&SimplePublisher::timerCallback, this));  // Create a timer running every 1 second, calling the timerCallback function.
        RCLCPP_INFO(get_logger(), "publishing at 1Hz");  // Log the message "publishing at 1Hz" with INFO level.
    }

private:
    unsigned int counter_;  // Variable to count the number of times timerCallback is called.
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_;  // Publisher of the String message.
    rclcpp::TimerBase::SharedPtr timer_;  // Timer to call the callback function periodically.

    void timerCallback()  // Callback function called each time the timer triggers.
    {
        auto message = std_msgs::msg::String();  // Create a String message.
        message.data = "Hello ROS2 - counter: " + std::to_string(counter_++);  // Set data for the message.

        pub_->publish(message);  // Publish the message through the publisher.
    }
};

int main(int argc, char* argv[])  // Main function of the program.
{   
    rclcpp::init(argc, argv);  // Initialize ROS 2.
    auto node = std::make_shared<SimplePublisher>();  // Create a SimplePublisher node.
    rclcpp::spin(node);  // Spin the node to handle ROS 2 events.
    rclcpp::shutdown();  // Shutdown ROS 2.
    return 0;  // End the program.
}
