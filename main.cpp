#include <iostream>
#include "utils.h"

#include "functions/pointers.h"

//#define AUTHOR "TANER";

using namespace std;


int main() {


    int a = 10;
    int b = 10;

    /*
     * pointer değişkene, integer değer atamak için
     * int *degisken_adi = 99
     *
     * herhangi bir değişkenin bellekteki adresine ulaşmak için (&)
     * &degisken
     *
     */

    passByValue(a);
    passByReferance(&b);

    cout << a << endl;
    cout << b << endl;

    return 0;
}


/*
class epikod {
public:
    epikod() { //constructor

        this->name = "yuklendi";
    }

    string getName() {
        return name;
    }

    void setName(string s1) {
        name = s1;
    }

    ~epikod() { //destructor
        cout << "destructor";
    }

private:
    string name;
};
 */


/*
  int x = 5;

    //sadece koşul sağlandığında çalışır
    while (x > 5){
        x--;
        cout << "works" << x;
    }

    //önce çalışmaya başlar, sonra koşula bakar
    do{
        x--;
        cout << "works" << x;
    }while (x > 5);

 */


