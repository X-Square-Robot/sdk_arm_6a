#pragma once

/**
 * @brief 关于service接口的定义封装
 * @note  这里使用了宏定义，主要是为了方便使用
 * @param classname 接口类名，由开发人员自己定义
 * @param service_url 接口url
 * @param service_type 接口类型，填入.srv文件编译后的类型
 */
#define SERVICE(classname, service_url, service_type)        \
    class classname                                          \
    {                                                        \
       public:                                               \
        using ServiceType = service_type;                    \
        using Request = service_type::Request;               \
        using Response = service_type::Response;             \
        using RequestPtr = std::shared_ptr<Request>;         \
        using ResponsePtr = std::shared_ptr<Response>;       \
        using RequestUniquePtr = std::unique_ptr<Request>;   \
        using ResponseUniquePtr = std::unique_ptr<Response>; \
        static std::string Url() { return service_url; }     \
    }\
