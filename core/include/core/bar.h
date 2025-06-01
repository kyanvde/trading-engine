#ifndef CORE_BAR_H_
#define CORE_BAR_H_

#include <chrono>

namespace core {

class Bar {
 public:
  using TimePoint = std::chrono::system_clock::time_point;

  virtual ~Bar() = default;

  virtual void Print(std::ostream& os) const = 0;

  virtual TimePoint StartTime() const = 0;
  virtual double Open() const = 0;
  virtual double High() const = 0;
  virtual double Low() const = 0;
  virtual double Close() const = 0;
  virtual double Volume() const = 0;
};

inline std::ostream& operator<<(std::ostream& os, const Bar& bar) {
  bar.Print(os);
  return os;
}

}  // namespace core

#endif  // CORE_BAR_H_
