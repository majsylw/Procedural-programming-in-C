#include "complexc.h"
#include <stdio.h>
#include <math.h>

void readNumber(struct complex* c){
    printf("Real part: ");
    scanf("%f",&(c->real));

    printf("Imaginary part: ");
    scanf("%f",&(c->imaginary));
}

void printNumber(struct complex c){
    printf("%.2f + %.2fi",c.real,c.imaginary);
}

struct complex add(struct complex a, struct complex b){
    struct complex dodawanie;
    dodawanie.real = a.real + b.real;
    dodawanie.imaginary = a.imaginary + b.imaginary;
    return dodawanie;
}

struct complex substract(struct complex a, struct complex b){
    struct complex wynik;
    wynik.real = a.real - b.real;
    wynik.imaginary = a.imaginary - b.imaginary;
    return wynik;
}

struct complex multiple(struct complex a, struct complex b){
    struct complex wynik;
    wynik.real = a.real * b.real - a.imaginary * b.imaginary;
    wynik.imaginary = a.real * b.imaginary + b.real * a.imaginary;
    return wynik;
}

struct complex conj(struct complex a){
    struct complex wynik;
    wynik.real = a.real;
    wynik.imaginary = - a.imaginary;
    return wynik;
}

float modules(struct complex a){
    return sqrt(a.real*a.real + a.imaginary*a.imaginary);
}

float arg(struct complex a){
    return 180*cos(a.real/modules(a))/M_PI; // w stopniach
}
