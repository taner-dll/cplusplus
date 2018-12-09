//
// Created by tnrdll on 9.12.2018.
//

#include <c++/4.8.3/iostream>
#include "2_menu_switch.h"

void menu_switch(){

    int menu_no;

    ana_menu_bilgi();

    std::cout << std::endl <<"seciminiz: ";
    std::cin >> menu_no;

    switch (menu_no){
        case 1:
            std::cout << "teknik destege hosgeldiniz...";
            break;
        case 2:
            std::cout << "borcunuz 47.75 TL'dir";
            break;
        case 3:
            std::cout << "hosgeldiniz, nasil yardimci olabilirim?";
            break;
        case 0:
            ana_menu_bilgi();
            break;

        default:
            std::cout << "gectiniz";
            break;

    }

}

void ana_menu_bilgi(){
    std::cout << "teknik destek icin 1'e," << std::endl;
    std::cout << "borcunuzu ogrenmek icin 2'ye," << std::endl;
    std::cout << "operatore baglanmak icin 3'e," << std::endl;
    std::cout << "ana menuye donmek icin 0'a basiniz." << std::endl;

}