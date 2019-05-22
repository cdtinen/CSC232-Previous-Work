cmake_minimum_required(VERSION 3.0)
project(hw06-bank-sim-cdtinen)

set(CMAKE_CXX_STANDARD 14)

set(SRC_MAIN_FILES
        src/main/cpp/Event.cpp
        src/main/cpp/Event.h
        src/main/cpp/Queue.h
        src/main/cpp/Queue.cpp
		src/main/cpp/Main.cpp
		src/main/cpp/Node.h
		src/main/cpp/Node.cpp
		src/main/cpp/PriorityQueue.h
		src/main/cpp/PriorityQueue.cpp)

add_executable(hw06 ${SRC_MAIN_FILES})