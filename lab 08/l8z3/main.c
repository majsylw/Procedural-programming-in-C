#include "complexc.h"
#include <stdio.h>


int main()
{
    //deklaracja zmiennych a, b
    //bedacych strukturami
    struct complex a, b, c;

    //przypisanie wartosci polom struktury a i b
    readNumber(&a);
    readNumber(&b);

    //wyswietlenie wspolrzednych punktow
    //z wykorzystaniem funkcji printNumber()
    printf("a = ");
    printNumber(a);
    printf("\n");
    printf("b = ");
    printNumber(b);
    printf("\n");

    printf("a + b = ");
    printNumber(add(a, b));
    printf("\n");

    printf("a - b = ");
    printNumber(substract(a, b));
    printf("\n");

    printf("conj(a) = ");
    printNumber(conj(a));
    printf("\n");
    printf("|a| = %.1f\n", modules(a));
    printf("arg(a) = %.1f\n",arg(a));

    printf("conj(b) = ");
    printNumber(conj(b));
    printf("\n");
    printf("|b| = %.1f\n", modules(b));
    printf("arg(b) = %.1f\n",arg(b));

    return 0;
}
