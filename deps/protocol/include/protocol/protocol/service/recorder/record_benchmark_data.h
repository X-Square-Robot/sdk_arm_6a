#pragma once

#include "protocol/service.h"
#include "protocol/srv/record_benchmark.hpp"

namespace xr {
namespace recorder {
namespace service {

SERVICE(RecordBenchmarkData, "bag_recorder/record_benchmark_data", protocol::srv::RecordBenchmark);

}  // namespace service
}  // namespace recorder
}  // namespace xr
