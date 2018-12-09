//
// Created by tnrdll on 9.12.2018.
//

#include <c++/4.8.3/iostream>
#include "function_overloading.h"


void printNumber(int number){
    std::cout << "this is integer value: " << number;
}

void printNumber(float number){
    std::cout << "this is float value: " << number;
}