#ifndef _SIMPLE_TF_KINEMATICS_HPP_
#define _SIMPLE_TF_KINEMATICS_HPP_

#include <rclcpp/rclcpp.hpp>
#include <rclcpp/clock.hpp>
#include <tf2_ros/transform_broadcaster.h>
#include <tf2_ros/static_transform_broadcaster.h>
#include <tf2_msgs/msg/tf_message.hpp>
#include <geometry_msgs/msg/transform_stamped.hpp>
#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h>
#include <tf2/LinearMath/Quaternion.h>
#include <chrono> 
#include <memory>
#include <bumperbot_msgs/srv/get_transform.hpp>

class SimpleTFKinematics : public rclcpp::Node
{
    public:
        SimpleTFKinematics(const std::string &name);
    private:
        void timerCallback();
        bool getTransformCallback(const std::shared_ptr<bumperbot_msgs::srv::GetTransform::Request> req,
                                                const std::shared_ptr<bumperbot_msgs::srv::GetTransform::Response> res);
        rclcpp::Service<bumperbot_msgs::srv::GetTransform>::SharedPtr get_transform_srv_;
        
        rclcpp::TimerBase::SharedPtr timer_;
        double x_increment_ = 0.05;
        double last_x = 0.0;
        int rotations_counter_;
        tf2::Quaternion last_orientation_;
        tf2::Quaternion orientation_increment_;
        std::unique_ptr<tf2_ros::Buffer> tf_buffer_;
        std::shared_ptr<tf2_ros::TransformListener> tf_listener_ {nullptr};
        std::shared_ptr<tf2_ros::StaticTransformBroadcaster> static_tf_broadcaster_;
        geometry_msgs::msg::TransformStamped static_transform_stamp_;
        std::unique_ptr<tf2_ros::TransformBroadcaster> dynamic_tf_broadcaster_;
        geometry_msgs::msg::TransformStamped dynamic_transform_stamp_;
};

#endif