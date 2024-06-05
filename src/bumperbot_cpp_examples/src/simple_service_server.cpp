#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <bumperbot_msgs/srv/add_two_int.hpp>

using namespace std::placeholders;

class SimpleServiceServer : public rclcpp::Node
{
    public:
        SimpleServiceServer() : Node("simple_service_server")
        {
            service_ = create_service<bumperbot_msgs::srv::AddTwoInt>("add_two_int", 
                                    std::bind(&SimpleServiceServer::ServiceCallback, this, _1, _2));
            RCLCPP_INFO_STREAM(get_logger(), "service add_two_int is all Ready");
        }
    private:
        void ServiceCallback(std::shared_ptr<bumperbot_msgs::srv::AddTwoInt::Request> req,
                            std::shared_ptr<bumperbot_msgs::srv::AddTwoInt::Response> res)
        {
            RCLCPP_INFO_STREAM(get_logger(), "New Request received a = " << req->a << " and b = " << req->b);
            res->sum = req->a + req->b;
            RCLCPP_INFO_STREAM(get_logger(), "Returning sum value: " << res->sum);
        }
        rclcpp::Service<bumperbot_msgs::srv::AddTwoInt>::SharedPtr service_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<SimpleServiceServer>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}