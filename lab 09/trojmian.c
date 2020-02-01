#include <stdio.h>
#include <stdlib.h>
#include "trojmian.h"

void readTrojmian(struct trojmian * wielo){
    printf("\nPodaj wspolczynniki wielomianu ax^2 + bx + c:\n");
    printf("Wspolczynnik a: ");
    scanf("%f", &(wielo->a));
    printf("Wspolczynnik b: ");
    scanf("%f", &(wielo->b));
    printf("Wspolczynnik c: ");
    scanf("%f", &(wielo->c));
};

void printTrojmian(struct trojmian wielo){
    printf("%.2fx^2 + %.2fx + %.2f", wielo.a, wielo.b, wielo.c);
};

struct trojmian dodawanie(struct trojmian w1, struct trojmian w2){
    struct trojmian wynik;
    wynik.a = w1.a + w2.a;
    wynik.b = w1.b + w2.b;
    wynik.c = w1.c + w2.c;
    return wynik;
};

struct trojmian odejmowanie(struct trojmian w1, struct trojmian w2){
    struct trojmian wynik;
    wynik.a = w1.a - w2.a;
    wynik.b = w1.b - w2.b;
    wynik.c = w1.c - w2.c;
    return wynik;
};

struct trojmian mnozenie_stala(struct trojmian w1, float liczba){
    struct trojmian wynik;
    wynik.a = w1.a * liczba;
    wynik.b = w1.b * liczba;
    wynik.c = w1.c * liczba;
    return wynik;
};

float wartosc_wielomianu(struct trojmian w, float x){
    float wynik;
    wynik = w.a * x * x + w.b * x + w.c;

    return wynik;
}

float podaj_wspolczynnik(struct trojmian t, char wsp){
    switch(wsp){
    case 'a':
        return t.a;
    case 'b':
        return t.b;
    case 'c':
        return t.c;
    default:
        printf(" Nie ma takiego wspolczynnika!");
    }
}

void zmien_wspolczynnik(struct trojmian * t, char wsp, float liczba){

    switch(wsp){
    case 'a':
        t->a = liczba;
        break;
    case 'b':
        t->b = liczba;
        break;
    case 'c':
        t->c = liczba;
        break;
    default:
        printf(" Nie ma takiego wspolczynnika!");
        break;
    }

}
