# Console App — C++ Ticket Manager

A modular C++ console application demonstrating object-oriented principles, data encapsulation, and clean project architecture using CMake and Make.

## Project Structure

```text
Console-App/
├── include/
│   └── Point.hpp       # Ticket structure definition & encapsulation
├── src/
│   └── main.cpp        # Entry point and user input handling
├── CMakeLists.txt      # CMake build configuration
├── Makefile            # Root Makefile for quick commands
└── README.md
```

## Prerequisites

- A C++ compiler supporting C++17 or later (e.g., `g++`)
- `CMake` (version 3.15 or higher)
- `Make`

## Quick Make Commands

You can manage the project using simple commands from the root directory thanks to the root `Makefile`:

```bash
# 1. Build the project (creates build directory, runs cmake, and compiles)
make

# 2. Run the compiled application
make run

# 3. Clean up build artifacts (removes the build directory)
make clean
```

## Features
- **Encapsulation:** Private passenger fields with public getters, setters, and display methods.
- **Input Safety:** Handles multi-word names using `std::getline`.
- **Modern C++ practices:** Constant member functions and efficient parameter passing via const references.