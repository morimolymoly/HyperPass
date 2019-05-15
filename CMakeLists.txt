cmake_minimum_required(VERSION 3.10)

find_package(LLVM REQUIRED CONFIG)

set(LLVM_INCLUDE_DIRS "/home/moly/llvm-project/llvm/include")
set(LLVM_LIBRARY_DIRS "/home/moly/llvm-project/llvm/lib")

add_definitions(${LLVM_DEFINITIONS})
include_directories(${LLVM_INCLUDE_DIRS})
link_directories(${LLVM_LIBRARY_DIRS})

message(${LLVM_INCLUDE_DIRS})
message(${LLVM_LIBRARY_DIRS})
message(${LLVM_DEFINITIONS})

add_subdirectory(Super)