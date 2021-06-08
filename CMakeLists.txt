cmake_minimum_required(VERSION 3.17)
project("Tarea_Extraclase_IV")

set(CMAKE_CXX_STANDARD 20)


include_directories(src)

add_executable(MD5_reference
        src/MD5/RFC_version/global.h
        src/MD5/RFC_version/md5.cpp
        src/MD5/RFC_version/md5.h
        src/MD5/RFC_version/mddriver.cpp
)

add_executable(MD5
        "src/MD5/Adapatation to c++/MD5.cpp"
        "src/MD5/Adapatation to c++/MD5.h"
        )