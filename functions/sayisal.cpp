//
// Created by tnrdll on 6.12.2018.
//

#include <c++/4.8.3/iostream>
#include "sayisal.h"
#include "../utils.h"
#include <algorithm>


void sayisal_kolon_uret() {

    utils u;
    int sayilar[6];
    int yeni_sayi = 0;

    for (int i = 0; i < 6; i++) {
        do {
            yeni_sayi = u.rand(1, 49);
        } while (u.in_array(sayilar, 6, yeni_sayi));
        sayilar[i] = yeni_sayi;
    }

    std::sort(std::begin(sayilar),std::end(sayilar));   //array sord asc

    for(int x : sayilar){
        std::cout << x << '\t';
    }


}
