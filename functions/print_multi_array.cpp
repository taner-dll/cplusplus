//
// Created by tnrdll on 12.12.2018.
//

#include <c++/4.8.3/iostream>
#include "print_multi_array.h"

void print_multi_dimensional_array(int arr[][3]){

    for (int i = 0; i <2 ; ++i) {
        for (int j = 0; j < 3 ; ++j) {
            std::cout << arr[i][j] << std::endl;
        }
    }

}