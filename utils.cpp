//
// Created by tnrdll on 5.12.2018.
//

#include "utils.h"


#include <cstdlib>      //rand
#include <ctime>        //rand

using namespace std;


bool utils::in_array(int array[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (array[i] == target) {
            return true;
        }
    }
    return false;
}


int utils::rand(int min, int max) //range : [min, max)
{
    static bool first = true;
    if (first)
    {
        srand(static_cast<unsigned int>(time(NULL))); //seeding for the first time only!
        first = false;
    }
    return min + std::rand() % (( max + 1 ) - min);
}