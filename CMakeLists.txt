cmake_minimum_required(VERSION 3.15)

project(MyConsoleApp VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(app 
    src/main.cpp
)