cmake_minimum_required(VERSION 3.5)

set(CMAKE_BUILD_TYPE "Release")
# 添加c++ 11标准支持
set(CMAKE_CXX_FLAGS "-std=c++14 -O2")

# 寻找OpenCV库
find_package(OpenCV REQUIRED)
# 添加头文件
include_directories(${OpenCV_INCLUDE_DIRS})

add_subdirectory(CameraRecord)