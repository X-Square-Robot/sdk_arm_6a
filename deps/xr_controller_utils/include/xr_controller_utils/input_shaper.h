/**
 * @file input_shaper.h
 * @author Li Hengjin (lihengin@x2robot.com)
 * @brief 输入整形器
 * @version 0.1
 * @date 2025-11-18
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <vector>

#ifndef INPUT_SHAPER_H
#define INPUT_SHAPER_H

enum class ShaperType
{
    ZV,  // Zero Vibration (2 pulses) - 最快，鲁棒性一般
    ZVD  // Zero Vibration Derivative (3 pulses) - 稍慢，鲁棒性强（推荐）
};

class InputShaper
{
   public:
    /**
     * @brief 构造函数
     * @param dt 控制周期 (秒), 例如 0.001
     */
    explicit InputShaper(double dt);

    /**
     * @brief 初始化或重新配置整形器参数
     * @param f_n 固有频率 (Hz)
     * @param zeta 阻尼比 (通常 0.0 ~ 0.2)
     * @param type 整形器类型 (ZV 或 ZVD)
     */
    void configure(double f_n, double zeta, ShaperType type = ShaperType::ZVD);

    /**
     * @brief 实时更新函数，放入控制循环中调用
     * @param raw_input 当前时刻的原始指令 (位置或速度)
     * @return 整形后的指令
     */
    double update(double raw_input);

    /**
     * @brief 重置缓冲区（例如机器人急停后复位）
     * @param initial_value 初始值，默认为 0.0
     */
    void reset(double initial_value = 0.0);

   private:
    struct Impulse
    {
        double time;
        double amp;
    };

    double dt_;
    std::vector<Impulse> impulses_;
    std::vector<int> impulse_ticks_;  // 延迟对应的 tick 数

    // Ring Buffer 变量
    std::vector<double> input_history_;
    int max_delay_ticks_ = 0;
    int buffer_head_;
};

#endif  // INPUT_SHAPER_H