#include "core/asset.h"

core::Asset::Asset(const std::string& symbol, const std::string& name,
                   const std::string& exchange, const std::string& asset_class,
                   const bool tradable, const bool marginable,
                   const bool shortable, const bool easy_to_borrow,
                   const bool fractionable) {
  symbol_ = symbol;
  name_ = name;
  exchange_ = exchange;
  asset_class_ = asset_class;
  tradable_ = tradable;
  marginable_ = marginable;
  shortable_ = shortable;
  easy_to_borrow_ = easy_to_borrow;
  fractionable_ = fractionable;
}

void core::Asset::Print(std::ostream& os) const {
  os << "Asset(Symbol: " << symbol_ << ", Name: " << name_
     << ", Tradable: " << std::boolalpha << tradable_ << ")";
}

const std::string& core::Asset::Symbol() const { return symbol_; }
const std::string& core::Asset::Name() const { return name_; }
bool core::Asset::Tradable() const { return tradable_; }
