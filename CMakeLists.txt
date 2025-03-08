cmake_minimum_required(VERSION 3.10)

project(myChatServer)

set(CMAKE_VERBOSE_MAKEFILE on)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")
set(CMAKE_CXX_STANDARD 20)

# 头文件搜索路径
include_directories(${PROJECT_SOURCE_DIR}/third-party/json)
include_directories(${PROJECT_SOURCE_DIR}/third-party/muduo/include)

# 库搜索路径
link_directories(${PROJECT_SOURCE_DIR}/third-party/muduo/lib)

# 子目录
add_subdirectory(./src)
add_subdirectory(./test)