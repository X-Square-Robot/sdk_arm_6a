#ifndef X2ROBOT_HARDWARE_INTERFACE_TASK_QUEUE_H
#define X2ROBOT_HARDWARE_INTERFACE_TASK_QUEUE_H

#include <atomic>
#include <condition_variable>
#include <memory>
#include <mutex>
#include <queue>
#include <thread>
#include <type_traits>
#include <vector>

namespace x2robot_hardware_interface {
class TaskQueue {
 public:
  explicit TaskQueue(size_t thread_num = 1) : stop_flag_(false) {
    for (size_t i = 0; i < thread_num; ++i) {
      workers_.emplace_back([this] {
        while (true) {
          std::unique_ptr<TaskBase> task;
          {
            std::unique_lock<std::mutex> lock(mutex_);
            cond_var_.wait(lock, [this] { return stop_flag_ || !tasks_.empty(); });
            if (stop_flag_ && tasks_.empty()) return;
            task = std::move(tasks_.front());
            tasks_.pop();
          }
          task->call();
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

  // task enqueue — supports move-only callables (e.g. lambdas capturing unique_ptr)
  // Returns the number of consecutive overruns (0 = queue was empty, normal).
  template <typename F>
  size_t enqueue(F&& f) {
    size_t overruns = 0;
    {
      std::unique_lock<std::mutex> lock(mutex_);
      if (stop_flag_)
        // will not insert task on destruction
        return 0;
      if (!tasks_.empty()) {
        ++consecutive_overruns_;
        // Only keep the latest task — discard the pending one
        tasks_.pop();
      } else {
        consecutive_overruns_ = 0;
      }
      overruns = consecutive_overruns_;
      tasks_.emplace(std::make_unique<TaskImpl<std::decay_t<F>>>(std::forward<F>(f)));
    }
    cond_var_.notify_one();
    return overruns;
  }

 private:
  struct TaskBase {
    virtual ~TaskBase() = default;
    virtual void call() = 0;
  };

  template <typename F>
  struct TaskImpl : TaskBase {
    F func;
    explicit TaskImpl(F&& f) : func(std::forward<F>(f)) {}
    void call() override { func(); }
  };

  std::vector<std::thread> workers_;
  std::queue<std::unique_ptr<TaskBase>> tasks_;
  std::mutex mutex_;
  std::condition_variable cond_var_;
  std::atomic<bool> stop_flag_;
  size_t consecutive_overruns_ = 0;  // protected by mutex_
};
}  // namespace x2robot_hardware_interface
#endif  // X2ROBOT_HARDWARE_INTERFACE_TASK_QUEUE_H
