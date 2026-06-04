#pragma once
#include <cstdint>
namespace xr {
namespace status_code {
// 临时会有抽象的节点，但是后面建议都用真实的节点，这个对业务划分和多域协同会有比较高的要求。
enum class NodeEnum : uint8_t
{
    NODE_CAMERA = 1,
    NODE_LEFT_GRIPPER = 2,
    NODE_RIGHT_GRIPPER = 3,
    NODE_REALTIME_CONTROLLER = 4,
    NODE_HAL_PERIPHERIAL = 5,
    NODE_LOCALIZATION = 6,
    NODE_WHOLE_BODY_CONTROLLER = 7,
    COMPUTER_MONITOR_COMPONENT = 8,
};

} // namespace status_code
} // namespace xr
