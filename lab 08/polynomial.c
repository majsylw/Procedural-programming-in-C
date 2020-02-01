#include "polynomial.h"

// tworzymy nowa zmienna typu Polynomial z tablica wspolczynnikow o odpowiednim rozmiarze
struct Polynomial * newPolynomial(int n){
    struct Polynomial *wielomian = malloc(sizeof(struct Polynomial));

    // przypisujemy wartosci polom struktury wielomian
    wielomian->degree = n;
    wielomian->coefficients = malloc((n+1) * sizeof(*(wielomian->coefficients)));//bo potrzebujemy n+1 wspolczynnikow, np dla wielomianu stopnia 2 mamy a,b i c -> ax^2+bx+c (3 wspolczynniki)

    int i;
    for(i = 0; i <= n; ++i){ // wypelniamy tabele wspolczynnikow zerami
        wielomian->coefficients[i] = 0;
    }
    return wielomian;
};

// drukujemy wielomian na ekranie
void printPolynomial(struct Polynomial *wielomian){
    if(wielomian != NULL){//sprawdzamy czy w ogóle nasz wskaznik przekazany jako argument funkcji wskazuje na jakiekolwiek miejsce w pamieci
        int i;
        printf("f(x) = ");
        for(i = wielomian->degree; i > -1; --i){
            printf("%+.2lfx^%d", wielomian->coefficients[i], i);
        }
    } else{
        printf("\nWskaznik jest pusty!\n");
    }
};

void deletePolynimial(struct Polynomial ** wielomian_coef){
    if(wielomian_coef != NULL){
        free(wielomian_coef); // zwalniamy pamiec
        wielomian_coef = NULL; // ustawiamy wskaznik 'w nicosc'
    }
};

void setPolynomial(struct Polynomial * wielomian, double *tab){
    int i;
    for(i = 0; i <= wielomian->degree; ++i){ // wypelniamy tabele wspolczynnikow
        wielomian->coefficients[i] = tab[i];
    }
};
