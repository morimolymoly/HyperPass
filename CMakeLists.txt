cmake_minimum_required(VERSION 3.10)

find_package(LLVM REQUIRED CONFIG)
message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

set(llvm_include_dir2 "${LLVM_INCLUDE_DIRS}/../../llvm/include")

add_definitions(${LLVM_DEFINITIONS})
include_directories(${llvm_include_dir2})
include_directories(${LLVM_INCLUDE_DIRS})
link_directories(${LLVM_LIBRARY_DIRS})

#include_directories("/home/moly/llvm-project/llvm/include")
#include_directories("/home/moly/llvm-project/build/include")
#link_directories("/home/moly/llvm-project/build/lib")

message(STATUS "INCLUDE DIRS1 ${LLVM_INCLUDE_DIRS}")
message(STATUS "INCLUDE DIRS2 ${llvm_include_dir2}")
message(STATUS "LIBRARY DIR ${LLVM_LIBRARY_DIRS}")

add_subdirectory(Hyper)