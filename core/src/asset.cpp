#include "core/asset.h"

core::Asset::Asset(const std::string& symbol, const std::string& name,
                   const bool tradable) {
  symbol_ = symbol;
  name_ = name;
  tradable_ = tradable;
}

void core::Asset::Print(std::ostream& os) const {
  os << "Asset(Symbol: " << symbol_ << ", Name: " << name_
     << ", Tradable: " << std::boolalpha << tradable_ << ")";
}

const std::string& core::Asset::Symbol() const { return symbol_; }
const std::string& core::Asset::Name() const { return name_; }
bool core::Asset::Tradable() const { return tradable_; }
