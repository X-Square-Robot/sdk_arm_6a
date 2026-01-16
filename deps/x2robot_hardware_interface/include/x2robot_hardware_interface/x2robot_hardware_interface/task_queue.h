#ifndef X2ROBOT_HARDWARE_INTERFACE_TASK_QUEUE_H
#define X2ROBOT_HARDWARE_INTERFACE_TASK_QUEUE_H

#include <atomic>
#include <condition_variable>
#include <functional>
#include <future>
#include <mutex>
#include <queue>
#include <thread>
#include <vector>

namespace x2robot_hardware_interface {
class TaskQueue {
 public:
  explicit TaskQueue(size_t thread_num = 1) : stop_flag_(false) {
    for (size_t i = 0; i < thread_num; ++i) {
      workers_.emplace_back([this] {
        while (true) {
          std::function<void()> task;
          {
            std::unique_lock<std::mutex> lock(mutex_);
            cond_var_.wait(lock, [this] { return stop_flag_ || !tasks_.empty(); });
            if (stop_flag_ && tasks_.empty()) return;
            task = std::move(tasks_.front());
            tasks_.pop();
          }
          task();
        }
      });
    }
  }

  ~TaskQueue() {
    {
      std::unique_lock<std::mutex> lock(mutex_);
      stop_flag_ = true;
    }
    cond_var_.notify_all();
    for (auto& t : workers_) {
      if (t.joinable()) t.join();
    }
  }

  // task enqueue
  template <typename F, typename... Args>
  void enqueue(F&& f, Args&&... args) {
    {
      std::unique_lock<std::mutex> lock(mutex_);
      if (stop_flag_)
        // will not insert task on destruction
        return;
      tasks_.emplace(std::bind(std::forward<F>(f), std::forward<Args>(args)...));
    }
    cond_var_.notify_one();
  }

 private:
  std::vector<std::thread> workers_;
  std::queue<std::function<void()>> tasks_;
  std::mutex mutex_;
  std::condition_variable cond_var_;
  std::atomic<bool> stop_flag_;
};
}  // namespace x2robot_hardware_interface
#endif  // X2ROBOT_HARDWARE_INTERFACE_TASK_QUEUE_H