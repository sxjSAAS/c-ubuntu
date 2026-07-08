cmake_minimum_required(VERSION 3.10) #版本要求3.10以上

project(demo3)
#set(src log.cpp log.h test.cpp) #设置源文件
aux_source_directory(${PROJECT_SOURCE_DIR} src) #设置Cmakelists所在位置源文件

set(CMAKE_CXX_STANDARD 11) #执行C++11标准
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin) #设置可执行文件输出路径
add_executable(demo3 ${src})
