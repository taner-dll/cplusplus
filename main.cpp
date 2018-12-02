#include <iostream>


int faktoriyel(int sayi) {
    int carp = 1;
    for (int i = 1; i <= sayi; sayi--) {
        carp = carp * sayi;
    }
    return carp;
}

int main() {
    std::cout << faktoriyel(5);
    return 0;
}


