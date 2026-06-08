#pragma once

#include "protocol/qos.h"

template <typename T, typename... Ts>
struct is_all_same_type : std::conjunction<std::is_same<T, Ts>...>
{
};

template <typename Service>
using ServiceTypeOf = typename Service::ServiceType;

template <typename... Services>
class ServiceGroup;

template <>
class ServiceGroup<>
{
   public:
    template <typename TargetService>
    static void Use()
    {
        static_assert(sizeof(TargetService) == 0, "cannot match Service in ServiceGroup");
    }
    static std::string Url() { return ""; }

    template <typename TargetService>
    using ServiceType = void;
};

template <typename FirstService, typename... RemainingServices>
class ServiceGroup<FirstService, RemainingServices...>
{
    static_assert(is_all_same_type<ServiceTypeOf<FirstService>, ServiceTypeOf<RemainingServices>...>::value,
                  "ServiceGroup must be instantiated with Services of the same type");

   public:
    using ServiceType = typename FirstService::ServiceType;
    using Request = typename ServiceType::Request;
    using Response = typename ServiceType::Response;
    using RequestPtr = std::shared_ptr<Request>;
    using ResponsePtr = std::shared_ptr<Response>;
    using RequestUniquePtr = std::unique_ptr<Request>;
    using ResponseUniquePtr = std::unique_ptr<Response>;

    template <typename TargetService>
    static void Use()
    {
        if constexpr (std::is_same_v<TargetService, FirstService>)
        {
            useFirst = true;
        }
        else
        {
            useFirst = false;
            RemainingServiceGroup::template Use<TargetService>();
        }
    }

    static std::string Url() { return useFirst ? FirstService::Url() : RemainingServiceGroup::Url(); }

   private:
    static inline bool useFirst{true};
    using RemainingServiceGroup = ServiceGroup<RemainingServices...>;
};

template <typename Topic>
using MessageTypeOf = typename Topic::MessageType;

template <typename... Topics>
class TopicGroup;

template <>
class TopicGroup<>
{
   public:
    template <typename TargetTopic>
    static void Use()
    {
        static_assert(false, "cannot match topic in TopicGroup");
    }
    static std::string Url() { return ""; }
    static rclcpp::QoS GetQoS() { return QoS::SystemDefaultQoS().inner_qos; }

    template <typename TargetTopic>
    using MessageType = void;
};

template <typename FirstTopic, typename... RemainingTopics>
class TopicGroup<FirstTopic, RemainingTopics...>
{
    static_assert(is_all_same_type<MessageTypeOf<FirstTopic>, MessageTypeOf<RemainingTopics>...>::value,
                  "TopicGroup must be instantiated with topics of the same type");

   public:
    using MessageType = typename FirstTopic::MessageType;
    using SharedPtr = std::shared_ptr<MessageType>;
    using ConstSharedPtr = std::shared_ptr<const MessageType>;
    using UniquePtr = std::unique_ptr<MessageType>;

    /**
     * @brief 选择Topic列表中其中一个来使用
     */
    template <typename TargetTopic>
    static void Use()
    {
        if constexpr (std::is_same_v<TargetTopic, FirstTopic>)
        {
            useFirst = true;
        }
        else
        {
            useFirst = false;
            RemainingTopicGroup::template Use<TargetTopic>();
        }
    }

    static std::string Url() { return useFirst ? FirstTopic::Url() : RemainingTopicGroup::Url(); }

    static rclcpp::QoS GetQoS() { return useFirst ? FirstTopic::GetQoS() : RemainingTopicGroup::GetQoS(); }

   private:
    static inline bool useFirst = true;
    using RemainingTopicGroup = TopicGroup<RemainingTopics...>;
};