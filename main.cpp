#include <iostream>
#include "utils.h"

#include "functions/print_multi_array.h"

//#define AUTHOR "TANER";

using namespace std;





int main() {


    int array[2][3] = {{22,33,44},{55,66,77}};

    print_multi_dimensional_array(array);




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


