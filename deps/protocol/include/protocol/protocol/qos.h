#pragma once

#include <rclcpp/rclcpp.hpp>

struct QoSSetting
{
    rclcpp::QoS inner_qos;
};

/**
 * @brief 常用qos配置封装
 */
class QoS
{
   public:
    // 系统默认qos
    static QoSSetting SystemDefaultQoS()
    {
        return QoSSetting{rclcpp::QoS(rclcpp::QoSInitialization::from_rmw(rmw_qos_profile_system_default))};
    }
    // 日志系统qos
    static QoSSetting LogSystemQoS()
    {
        return QoSSetting{rclcpp::QoS(rclcpp::QoSInitialization::from_rmw(rmw_qos_profile_system_default))
                              .durability(rclcpp::DurabilityPolicy::TransientLocal)
                              .keep_last(1)};
    }

    // sensor qos
    static QoSSetting SensorQoS() { return QoSSetting{rclcpp::SensorDataQoS()}; };

    // 多样性功能topic qos
    static QoSSetting DiversityQoS()
    {
        return QoSSetting{rclcpp::QoS(1).durability(rclcpp::DurabilityPolicy::TransientLocal)};
    }

    // 在default qos基础上设置history queue size为1
    static QoSSetting KeepLastMessageQos()
    {
        return QoSSetting{
            rclcpp::QoS(rclcpp::QoSInitialization::from_rmw(rmw_qos_profile_system_default)).keep_last(1)};
    }

    // Config message Qos
    static QoSSetting ConfigMessageQoS()
    {
        return QoSSetting{rclcpp::QoS(rclcpp::QoSInitialization::from_rmw(rmw_qos_profile_system_default))
                              .durability(rclcpp::DurabilityPolicy::TransientLocal)
                              .keep_last(1)
                              .liveliness(rclcpp::LivelinessPolicy::Automatic)};
    }

    // 多源汇聚topic qos，适用于多个节点同时向同一topic发布消息的场景
    static QoSSetting AggregatedTopicQoS()
    {
        return QoSSetting{
            rclcpp::QoS(rclcpp::QoSInitialization::from_rmw(rmw_qos_profile_system_default)).keep_last(10)};
    }
};
