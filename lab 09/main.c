#include <stdio.h>
#include <stdlib.h>
#include "trojmian.h"

int main()
{
    struct trojmian w1, w2;
    float liczba = 5;
    float value = 2;
    float zmiana = 1;
    char wsp = 'a', wsp2 = 'c';

    readTrojmian(&w1);
    readTrojmian(&w2);

    printf("\n\nPodany trojmian W: ");
    printTrojmian(w1);
    printf("\nPodany trojmian P: ");
    printTrojmian(w2);

    printf("\nW + P = ");
    printTrojmian(dodawanie(w1, w2));
    printf("\nW - P = ");
    printTrojmian(odejmowanie(w1, w2));
    printf("\n%.2f * W = ", liczba);
    printTrojmian(mnozenie_stala(w1, liczba));
    printf("\nW(%.2f) = %.2f", value, wartosc_wielomianu(w1, value));

    printf("\n\nZmieniam wspolczynnik %c na %.2f dla wielomianu W: ", wsp, zmiana);
    zmien_wspolczynnik(&w1, wsp, zmiana);
    printTrojmian(w1);
    printf("\nWspolczynnikiem %c dla wielomianu P jest: %.2f", wsp2, podaj_wspolczynnik(w2, wsp2));

    //printf("\nWspolczynnikiem d dla wielomianu W jest: ", podaj_wspolczynnik(w1, 'd'));

    printf("\n");
    return 0;
}
