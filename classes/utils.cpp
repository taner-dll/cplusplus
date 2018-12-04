//
// Created by tnrdll on 5.12.2018.
//

#include "utils.h"

bool utils::in_array(int array[], int size, int target) {

    for (int i = 0; i < size; ++i) {
        if(array[i]==target){
            return true;
        }
    }

    return false;

}