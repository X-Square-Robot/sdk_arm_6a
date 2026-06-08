#ifndef PHASE_REFERENCE_H
#define PHASE_REFERENCE_H

#include <atomic>
#include <cstdint>

namespace x2robot_hardware_interface {

// Global phase reference time (steady_clock nanoseconds) set by the control loop
// in x2robot_control_node.cpp before entering the real-time loop.
// Hardware interfaces in the same process can read this to get the true loop phase,
// avoiding the inaccuracy of capturing time during the first read() which may be
// affected by activation-time overruns.
inline std::atomic<std::uint64_t> g_phase_reference_time_ns{0};

}  // namespace x2robot_hardware_interface

#endif
