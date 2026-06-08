#ifndef SOCKETCAN_BRIDGE_HPP__
#define SOCKETCAN_BRIDGE_HPP__

#include <linux/can.h>
#include <linux/can/raw.h>
#include <pthread.h>
#include <sched.h>

#include <boost/asio.hpp>
#include <chrono>
#include <cstring>
#include <deque>
#include <mutex>
#include <unordered_map>

#include "diagnostic_updater/diagnostic_updater.hpp"
#include "diagnostic_updater/publisher.hpp"
#include "rclcpp/rclcpp.hpp"
#include "x2robot_msgs/msg/can_frame.hpp"
#include "x2robot_msgs/msg/can_frame_batch.hpp"

namespace x2robot_socketcan_bridge {

class SocketcanBridgeNode {
 public:
  SocketcanBridgeNode(const rclcpp::NodeOptions& options);

  ~SocketcanBridgeNode();

  rclcpp::node_interfaces::NodeBaseInterface::SharedPtr get_node_base_interface() const {
    return this->node_->get_node_base_interface();
  }

 private:
  typedef boost::asio::posix::basic_stream_descriptor<> asio_descriptor;
  std::map<std::string, rclcpp::Publisher<x2robot_msgs::msg::CanFrame>::SharedPtr> publishers_;
  std::map<std::string, rclcpp::Subscription<x2robot_msgs::msg::CanFrameBatch>::SharedPtr> subscriptions_;
  std::unique_ptr<diagnostic_updater::Updater> diag_updater_;

  void Init();

  void canSendConfirm(const boost::system::error_code& error, std::size_t bytes_transferred, const std::string& can_if);

  void canPublisher(const x2robot_msgs::msg::CanFrameBatch& msg, const std::string& can_if);

  void canListener(struct canfd_frame& rec_frame, const std::string& can_if);

  void doSend(const std::string& can_if);

  void Stop();

  void ProduceDiagnostics(diagnostic_updater::DiagnosticStatusWrapper& stat);

  rclcpp::Node::SharedPtr node_;
  boost::asio::io_service ios_;
  std::unordered_map<std::string, asio_descriptor> streams_;
  boost::asio::signal_set signals_;
  std::unordered_map<std::string, struct canfd_frame> can_frame_buffers_;
  std::unordered_map<std::string, std::pair<int, std::string>> current_error_;

  int send_interval_us_;
  size_t max_queue_size_;
  std::map<std::string, std::deque<x2robot_msgs::msg::CanFrame>> send_queues_;
  std::map<std::string, std::unique_ptr<std::mutex>> send_queue_mutexes_;
  std::map<std::string, std::unique_ptr<boost::asio::steady_timer>> send_timers_;
  std::map<std::string, bool> sending_;
};

}  // namespace x2robot_socketcan_bridge
#endif
