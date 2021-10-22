cmake_minimum_required(VERSION 3.5)

project(grocery LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


#[[add_executable(grocery main.cpp)]]

file(GLOB SOURCES
   database.h
   product.h
   main.cpp
   product.cpp
   database.cpp

)

add_executable(grocery ${SOURCES})

#SET(TARGET_H
#    allHeaders.h
#    database.h
#    product.h
#   )

## Local source files here
#SET(TARGET_SRC
#    main.cpp
#    database.cpp
#    product.cpp
#    )
