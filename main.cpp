#include <iostream>
#include "utils.h"
#include <stdlib.h>

#include "functions/sayisal.h"      //sayisal

#define AUTHOR "TANER";


using namespace std;




int main() {

    sayisal_kolon_uret();
    cout << AUTHOR;


    return 0;




    /*
     * utils in_array
    int enFazla = 49, enAz = 1;

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
    */


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


/*
class epikod {
public:
    epikod() {
        this->name = "yuklendi";
    }

    string getName() {
        return name;
    }

    void setName(string s1) {
        name = s1;
    }

    ~epikod() {
        cout << "destructor";
    }

private:
    string name;
};
 */


