//
// Created by tnrdll on 2.12.2018.
//
long faktoriyel(int sayi) {
    long carp = 1;
    for (int i = 1; i <= sayi; sayi--) {
        carp = carp * sayi;
    }
    return carp;
}