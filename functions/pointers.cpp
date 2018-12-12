//
// Created by tnrdll on 12.12.2018.
//

#include "pointers.h"


// değiştirmeyecek.
void passByValue(int x){

    x = 99;

}

// adrese erişerek kaçınılmaz değişikliği sağlayacak.
void passByReferance(int *x){

    *x = 66;
}


//kullanım

/*
int a = 10;
int b = 10;
*/

/*
 * pointer değişkene, integer değer atamak için
 * int *degisken_adi = 99
 *
 * herhangi bir değişkenin bellekteki adresine ulaşmak için (&)
 * &degisken
 *
 */

/*
passByValue(a);
passByReferance(&b);

cout << a << endl;
cout << b << endl;
 */
