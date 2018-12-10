//
// Created by tnrdll on 11.12.2018.
//

#include <c++/4.8.3/iostream>
#include "print_array.h"

void print_array(int array[], int array_size){

    for (int i = 0; i < array_size ; ++i) {

        std::cout << array[i] << std::endl;

    }

}