#include <rclcpp/rclcpp.hpp> // Include the ROS 2 C++ library

#include <std_msgs/msg/string.hpp> // Include the message type String

using std::placeholders::_1; // Using _1 from std::placeholders

class SimpleSubscriber : public rclcpp::Node // Define a class SimpleSubscriber inheriting from rclcpp::Node
{
    public:
        SimpleSubscriber() : Node("simple_subcriber") // Constructor definition
        {
            // Create a subscription to the "chatter" topic with a message queue size of 10,
            // and bind the callback function msgCallback to the subscriber
            sub_ = create_subscription<std_msgs::msg::String>("chatter", 10, std::bind(&SimpleSubscriber::msgCallback, this, _1));
        }

    private:
        rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub_; // Declare a shared pointer to the subscription

        // Callback function to process received messages
        void msgCallback(const std_msgs::msg::String &msg) const
        {
            // Log an information-level message indicating the received message
            RCLCPP_INFO_STREAM(get_logger(), "I heard: " << msg.data.c_str());
        }
};

int main(int argc, char * argv[])
{
    // Initialize the ROS 2 node
    rclcpp::init(argc, argv);

    // Create an instance of the SimpleSubscriber class
    auto node = std::make_shared<SimpleSubscriber>();

    // Spin the node, which means to process messages until shutdown is called
    rclcpp::spin(node);

    // Shutdown the ROS 2 node
    rclcpp::shutdown();

    return 0; // Return 0 to indicate successful execution
}
