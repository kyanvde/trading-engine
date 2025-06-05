#ifndef CORE_ASSET_H_
#define CORE_ASSET_H_

#include <ostream>
#include <string>

namespace core {

class Asset {
  std::string symbol_;
  std::string name_;
  bool tradable_;

 public:
  Asset(const std::string& symbol, const std::string& name, bool tradable);

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
