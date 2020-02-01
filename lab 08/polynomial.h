#ifndef POLYNOMIAL_H_INCLUDED
#define POLYNOMIAL_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

struct Polynomial{
    int degree; //stopien wielomianu
    double *coefficients; //wskaznik na tablice wspolczynnikow
};

// tworzymy nowa zmienna typu Polynomial z tablica wspolczynnikow o odpowiednim rozmiarze
struct Polynomial * newPolynomial(int n);

// drukujemy wielomian na ekranie
void printPolynomial(struct Polynomial *wielomian);

void deletePolynimial(struct Polynomial ** wielomian_coef);

void setPolynomial(struct Polynomial *, double *);


#endif // POLYNOMIAL_H_INCLUDED
