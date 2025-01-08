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
        Week3/Incorrect_Pointers.cpp
        Week3/Correct_pointers.cpp
        Week3/Justins_code.cpp
        Week3/\$_sign_demonstration.cpp
        Week4/InputHandlingWithSpecialCharacters.cpp
        Week5/FileHandlingWithReversal.cpp
)
