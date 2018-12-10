#include <iostream>
#include "utils.h"

#include "functions/print_array.h"

//#define AUTHOR "TANER";

using namespace std;

int main() {


    int arr[5] = {44,33,22,77,88};

    print_array(arr, 5);


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


