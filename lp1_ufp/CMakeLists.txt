cmake_minimum_required(VERSION 3.17)
project(lp1_ufp C)

set(CMAKE_C_STANDARD 99)

add_executable(lp1_ufp main.c pr01.c pr01.h tp03.c tp03.h pr02.h pr02.c pr03.c pr03.h tp04.c tp04.h pr04.c pr04.h pr05.c pr05.h tp05.h tp06.h tp05.c tp06.c tp07e08.c tp07e08.h tp11.h tp11.c)

target_link_libraries(lp1_ufp PRIVATE m)
