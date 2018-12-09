//
// Created by tnrdll on 9.12.2018.
//

#include <c++/4.8.3/iostream>
#include "1_girilen_bes_sayiyi_topla.h"

int girilen_bes_sayiyi_topla() {

    int x = 1;
    int toplam = 0;
    int number;

    while (x <= 5) {

        std::cout << x <<". sayiyi giriniz: ";
        std::cin >> number;
        toplam = toplam + number;
        x++;
    }

    return toplam;
}