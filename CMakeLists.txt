cmake_minimum_required(VERSION 3.5)

project(grocery LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)



file(GLOB SOURCES
   database.h
   product.h
   main.cpp
   product.cpp
   database.cpp
   productbyweight.h
   productbyweight.cpp
   orderedproduct.h
   orderedproduct.cpp
   cashregister.cpp
   cashregister.h
   order.h
   order.cpp
)

add_executable(grocery ${SOURCES})
