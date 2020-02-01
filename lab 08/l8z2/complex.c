#include <stdio.h>
#include "complex.h"

void readNumber(struct complex* c){
    printf("Real part: ");
    scanf("%f",&(c->real));

    printf("Imaginary part: ");
    scanf("%f",&(c->imaginary));
}

void printNumber(struct complex* c){
    printf("%.2f + %.2fi",c->real,c->imaginary);
}
