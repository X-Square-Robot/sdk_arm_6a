#ifndef SENSOR_BROADCASTER_H_
#define SENSOR_BROADCASTER_H_

#include <memory>
#include <string>
#include <vector>

#include <realtime_tools/realtime_publisher.hpp>

#include "controller_interface/controller_interface.hpp"
#include "rclcpp_lifecycle/node_interfaces/lifecycle_node_interface.hpp"
#include "rclcpp_lifecycle/state.hpp"

namespace x2robot_controllers {

template <typename SensorMsgT>
class SensorBroadcaster : public controller_interface::ControllerInterface
{
   public:
    SensorBroadcaster() { is_activated_ = false; }

    controller_interface::InterfaceConfiguration command_interface_configuration() const override
    {
        return controller_interface::InterfaceConfiguration{controller_interface::interface_configuration_type::NONE};
    }

    controller_interface::InterfaceConfiguration state_interface_configuration() const override
    {
        controller_interface::InterfaceConfiguration config;
        config.type = controller_interface::interface_configuration_type::INDIVIDUAL;
        for (const auto& sensor : sensor_names_)
        {
            for (const auto& interface : sensor_interfaces_)
            {
                config.names.push_back(sensor + "/" + interface);
            }
        }

        return config;
    }

    controller_interface::CallbackReturn on_init() override
    {
        try
        {
            // Declare parameters
            auto_declare<std::vector<std::string>>("sensor_names", {});
            auto_declare<std::vector<std::string>>("frame_ids", {});
            auto_declare<std::string>("topic_name", "");
            auto_declare<std::vector<std::string>>("sensor_interfaces", {});
            auto_declare<double>("publish_rate", 10);

            // Initialize sensor interfaces
            if (!init_sensor_interfaces())
            {
                return controller_interface::CallbackReturn::ERROR;
            }
        }
        catch (const std::exception& e)
        {
            RCLCPP_ERROR(get_node()->get_logger(), "Exception thrown during init: %s", e.what());
            return controller_interface::CallbackReturn::ERROR;
        }

        return controller_interface::CallbackReturn::SUCCESS;
    }

    controller_interface::CallbackReturn on_configure(const rclcpp_lifecycle::State& previous_state) override
    {
        (void)previous_state;

        // Get parameters
        sensor_names_ = get_node()->get_parameter("sensor_names").as_string_array();
        frame_ids_ = get_node()->get_parameter("frame_ids").as_string_array();
        topic_name_ = get_node()->get_parameter("topic_name").as_string();
        sensor_interfaces_ = get_node()->get_parameter("sensor_interfaces").as_string_array();
        auto publish_rate = get_node()->get_parameter("publish_rate").as_double();

        if (publish_rate <= 0.0)
        {
            RCLCPP_ERROR(get_node()->get_logger(), "Invalid publish_rate %.2f Hz - must be positive number",
                         publish_rate);
            return CallbackReturn::ERROR;
        }

        min_period_ = 1.0 / publish_rate;

        if (sensor_names_.empty())
        {
            RCLCPP_ERROR(get_node()->get_logger(), "'sensor_names' parameter is empty");
            return controller_interface::CallbackReturn::ERROR;
        }

        if (sensor_names_.size() != frame_ids_.size())
        {
            RCLCPP_ERROR(get_node()->get_logger(), "sensor_names and frame_ids size mismatch!");
            return CallbackReturn::ERROR;
        }

        // Create publisher
        sensor_publisher_ = std::make_shared<realtime_tools::RealtimePublisher<SensorMsgT>>(
            get_node()->create_publisher<SensorMsgT>(topic_name_, rclcpp::SystemDefaultsQoS()));
        last_update_time_ = rclcpp::Time(0, 0, std::make_shared<rclcpp::Clock>(RCL_ROS_TIME)->get_clock_type());

        return controller_interface::CallbackReturn::SUCCESS;
    }

    controller_interface::CallbackReturn on_activate(const rclcpp_lifecycle::State& previous_state) override
    {
        (void)previous_state;

        if (!sensor_publisher_)
        {
            RCLCPP_FATAL(get_node()->get_logger(), "Publisher not initialized!");
            return CallbackReturn::ERROR;
        }

        is_activated_ = true;
        return controller_interface::CallbackReturn::SUCCESS;
    }

    controller_interface::CallbackReturn on_deactivate(const rclcpp_lifecycle::State& previous_state) override
    {
        (void)previous_state;

        is_activated_ = false;
        return controller_interface::CallbackReturn::SUCCESS;
    }

    controller_interface::return_type update(const rclcpp::Time& time, const rclcpp::Duration& period) override
    {
        (void)period;

        // if ((time - last_update_time_).seconds() < min_period_) {
        //   return controller_interface::return_type::OK;
        // }

        if (is_activated_)
        {
            // Initialize message
            auto msg = SensorMsgT();
            msg.stamp = time;

            // Read data from interfaces
            if (!read_data_from_interfaces(msg))
            {
                return controller_interface::return_type::ERROR;
            }

            // Process data
            process_data(msg);

            // Publish
            sensor_publisher_->tryPublish(msg);
        }
        last_update_time_ = time;

        return controller_interface::return_type::OK;
    }

   private:
    rclcpp::Time last_update_time_;
    double min_period_;

   protected:
    // Parameters
    std::vector<std::string> sensor_names_;
    std::vector<std::string> frame_ids_;
    std::vector<std::string> sensor_interfaces_;
    std::string topic_name_;

    // Publisher
    typename realtime_tools::RealtimePublisherSharedPtr<SensorMsgT> sensor_publisher_;

    // Helper methods
    virtual bool init_sensor_interfaces() = 0;
    virtual bool read_data_from_interfaces(SensorMsgT& data) = 0;
    virtual void process_data(SensorMsgT& data) = 0;

    // State interfaces
    std::vector<double> sensor_values_;
    bool is_activated_;
};

}  // namespace x2robot_controllers

#endif  // SENSOR_BROADCASTER_H_
