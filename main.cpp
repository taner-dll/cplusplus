#include <iostream>
#include "functions/faktoriyel.h"
#include "classes/aforizma.h"
#include "classes/utils.h"
#include <ctime>


using namespace std;


int main() {

    int enFazla = 49, enAz = 1;

    srand(time(0));
    int sayilar[6];

    for(int i = 0; i < 6; i++){
        sayilar[i] = rand() % (enFazla - enAz + 1 ) + enAz;
    }

    for(int i = 0; i < (sizeof(sayilar)/sizeof(*sayilar)); i++){
        cout << sayilar[i] << " ";
    }

    utils u;

    if(u.in_array(sayilar,6,14)){
        cout << endl << "14 dizide var" ;
    } else{
        cout << endl << "14 dizide yok";
    }

    //todo sayısal loto

    return 0;

    /* class include
    aforizma a_obj;
    a_obj.yazi1();
    */

    /*
    //class denemesi
    aforizmalar af_obj;
    af_obj.yazi1();
    return 0;
    */

    /*
    int sayi;
    std::cout << "Faktoriyeli alinacak sayiyi giriniz:";
    std::cin >> sayi;
    cout << faktoriyel(sayi);
    return 0;
     */

}


