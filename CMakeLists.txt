cmake_minimum_required(VERSION 3.29)
project(queue)

set(CMAKE_CXX_STANDARD 20)

add_executable(queue main.cpp
        queue.cpp
        queue.h
        PriorityQueue.cpp
        PriorityQueue.h
)
