cmake_minimum_required(VERSION 3.16)
project(SAPExamPrep)

set(CMAKE_CXX_STANDARD 14)

add_executable(SAPExamPrep Generic/GenericFunction.cpp)
add_executable(containers Generic/Iterators.cpp)
add_executable(comparator Generic/Compartor.cpp)
add_executable(findfunction Algorithms/FindFunction.cpp)
add_executable(binarySearch Algorithms/BinarySearch.cpp)
add_executable(sort Algorithms/Sort.cpp)