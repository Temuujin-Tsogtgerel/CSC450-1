cmake_minimum_required(VERSION 3.30)
project(untitled)

set(CMAKE_CXX_STANDARD 26)

add_executable(untitled main.cpp
        Week1/PersonInfoDisplay.cpp
        Week1/uninitialized_variable.cpp
        Week2/StringInput.cpp
        Week2/Kaylas_shocase.cpp
        Week2/Kaylas_shocase.h
        Week2/Mouakongs_showcase.cpp
        Week2/Mouakongs_showcase.h
        Week3/PointersWithDynamicMemory.cpp
)
