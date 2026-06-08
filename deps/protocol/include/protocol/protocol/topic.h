#pragma once

#include <std_msgs/msg/string.hpp>

#include "protocol/qos.h"

/**
 * @brief 关于topic接口的定义封装
 * @note  这里使用了宏定义，主要是为了方便使用
 * @param classname 接口类名，由开发人员自己定义
 * @param topic_url 接口url
 * @param topic_type 接口类型，填入.srv文件编译后的类型
 * @param qos 接口的qos配置，填入frame::communication::QoS中的选项
 * history数据缓存数量，实时性要求较高的场景推荐填1，可靠性要求较高的场景值推荐>1
 */
#define TOPIC(classname, topic_url, topic_type, qos)               \
    class classname                                                \
    {                                                              \
       public:                                                     \
        using MessageType = topic_type;                            \
        using SharedPtr = std::shared_ptr<MessageType>;            \
        using ConstSharedPtr = std::shared_ptr<const MessageType>; \
        using UniquePtr = std::unique_ptr<MessageType>;            \
        using QoSType = rclcpp::QoS;                               \
        static MessageType Message()                               \
        {                                                          \
            return MessageType();                                  \
        }                                                          \
        static std::string Url()                                   \
        {                                                          \
            return topic_url;                                      \
        }                                                          \
        static QoSType GetQoS()                                    \
        {                                                          \
            return qos.inner_qos;                                  \
        }                                                          \
    }
