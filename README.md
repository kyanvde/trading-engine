# Trading Engine

**trading-engine** is a modular trading engine
written in modern C++. It supports historical backtesting and is
designed for extensibility, high testability, and integration 
with live trading APIs (e.g., Alpaca, Binance, IEX). The project 
emphasizes clean system design, component reuse, and strict separation
of concerns.

---

## Features

- 📈 **Historical Backtesting**  
  Simulate trading strategies on historical market data with realistic execution and portfolio tracking.

- 🔌 **Extensible API Layer**  
  Abstracted integration with broker APIs starting with Alpaca — easily extendable to others.

- 📊 **Clean Data Model**  
  Core entities are well-separated and unit-tested.

- 🧪 **High Test Coverage**  
  Designed from the ground up to support unit and integration testing, with mocks where needed.

- 🏗️ **Modular Architecture**  
  Clear separation between core logic, data providers, and execution engines.

---

## Project Structure

```
trading-engine/ # Project root
├── api # API layer interfacing with live trading APIs
├── backtesting # Historical backtesting engine 
├── CMakeLists.txt
├── core # The core entities of the object-domain model
├── external # 3rd party dependencies
├── README.md
└── tests # Integration tests
```

---

## Building
```
git clone --recurse-submodules https://github.com/kyanvde/trading-engine.git
cd trading-engine
mkdir build && cd build
cmake ..
make
```
---

## Testing
WIP

---

## TODO
- Finish backtesting engine
- Live trading execution
- Strategy scripting or plugin interface
- UI dashboard for backtest results

## License
This project is licensed under the GNU General Public License v3.0 (GPLv3).  
© 2025 Kyan Van den Eynde
