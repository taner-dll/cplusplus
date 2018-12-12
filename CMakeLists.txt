cmake_minimum_required(VERSION 3.12)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(
        untitled main.cpp
        functions/faktoriyel.h
        functions/faktoriyel.cpp
        classes/aforizma.cpp classes/aforizma.h
        utils.cpp utils.h
        functions/sayisal.cpp functions/sayisal.h
        programs/1_girilen_bes_sayiyi_topla.cpp
        programs/1_girilen_bes_sayiyi_topla.h
        programs/2_menu_switch.cpp
        programs/2_menu_switch.h
        functions/function_overloading.cpp
        functions/function_overloading.h
        functions/print_array.cpp
        functions/print_array.h
        functions/print_multi_array.cpp functions/print_multi_array.h)