#include "complex.h"
#include <stdio.h>


int main()
{
    //deklaracja zmiennych a, b
    //bedacych strukturami
    struct complex a, b;

    //przypisanie wartosci polom struktury a i b
    readNumber(&a);
    readNumber(&b);

    //wyswietlenie wspolrzêdnych punktów
    //z wykorzystaniem funkcji printNumber()
    printf("a = ");
    printNumber(&a);
    printf("\n");
    printf("b = ");
    printNumber(&b);
    printf("\n");

    return 0;
}
