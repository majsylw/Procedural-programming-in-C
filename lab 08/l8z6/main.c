#include <stdio.h>
#include <stdlib.h>
#include "vector3.h"


int main()
{
    //deklaracja zmiennych a, b
    //bedacych strukturami
    struct vector3 a, b, c;

    //przypisanie wartosci polom struktury a i b
    printf("Set vector3\n");
    readVector(&a);
    printf("Set vector3\n");
    readVector(&b);

    //wyswietlenie wspolrzednych punktow
    //z wykorzystaniem funkcji printNumber()
    printf("a = ");
    printVector(a);
    printf("\n");
    printf("b = ");
    printVector(b);
    printf("\n");

    //dodawanie
    printf("a + b = ");
    printVector(add(a, b));
    printf("\n");

    //zmiana znaku
    printf("-a = ");
    changeSign(&a);
    printVector(a);
    printf("\n");
    changeSign(&a);

    //odejmowanie
    printf("a - b = ");
    printVector(substract(a, b));
    printf("\n");

    //mnozenie skalarne
    printf("a . b = %.1f\n", scalarMultiple(a,b));

    //mnozenie wektorowe
    printf("a x b = ");
    printVector(vectorMultiple(a,b));
    printf("\n");

    //modul wektora
    printf("|a| = %f\n", norm(a));

    //mnozenie przez stala
    printf("%.1f * a = ", 0.5);
    printVector(constMultiple(a, 0.5));
    printf("\n");


    return 0;
}
