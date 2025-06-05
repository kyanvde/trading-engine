#ifndef CORE_ASSET_H_
#define CORE_ASSET_H_

#include <ostream>
#include <string>

namespace core {

class Asset {
  std::string symbol_;
  std::string name_;
  std::string exchange_;
  std::string asset_class_;
  bool tradable_;
  bool marginable_;
  bool shortable_;
  bool easy_to_borrow_;
  bool fractionable_;

 public:
  Asset(const std::string& symbol, const std::string& name,
        const std::string& exchange, const std::string& asset_class,
        bool tradable, bool marginable, bool shortable, bool easy_to_borrow,
        bool fractionable);

  void Print(std::ostream& os) const;

  const std::string& Symbol() const;
  const std::string& Name() const;
  bool Tradable() const;
};

inline std::ostream& operator<<(std::ostream& os, const Asset& asset) {
  asset.Print(os);
  return os;
}

}  // namespace core

#endif  // CORE_ASSET_H_