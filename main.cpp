#include <iostream>
#include "utils.h"

#include "functions/function_overloading.h"

//#define AUTHOR "TANER";

using namespace std;

int main() {

    float x = 15.67;
    int y = 8;

    printNumber(y);
    printNumber(x);


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


