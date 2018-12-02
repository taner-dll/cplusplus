#include <iostream>
#include "functions/faktoriyel.h"


int main() {

    std::cout << "Faktoriyeli alinacak sayiyi giriniz:";

    int sayi;
    std::cin >> sayi;

    std::cout << faktoriyel(sayi);
    return 0;
}


