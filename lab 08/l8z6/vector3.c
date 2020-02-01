#include "vector3.h"
#include <math.h>

void readVector(struct vector3* c){
    printf("Wspolrzedna x: ");
    scanf("%f",&(c->x));

    printf("Wspolrzedna y: ");
    scanf("%f",&(c->y));

    printf("Wspolrzedna z: ");
    scanf("%f",&(c->z));
}

void printVector(struct vector3 c){
    printf("[%.2f, %.2f, %.2f]",c.x,c.y,c.z);
}

struct vector3 add(struct vector3 v1, struct vector3 v2){
    struct vector3 wynik;
    wynik.x = v1.x + v2.x;
    wynik.y = v1.y + v2.y;
    wynik.z = v1.z + v2.z;
    return wynik;
};

void changeSign(struct vector3* v1){
    v1->x = -(v1->x);
    v1->y = -(v1->y);
    v1->z = -(v1->z);
};

struct vector3 substract(struct vector3 v1, struct vector3 v2){
    struct vector3 wynik;
    wynik.x = v1.x - v2.x;
    wynik.y = v1.y - v2.y;
    wynik.z = v1.z - v2.z;
    return wynik;
};

struct vector3 vectorMultiple(struct vector3 v1, struct vector3 v2){
    struct vector3 wynik;
    wynik.x = v1.y*v2.z - v1.z*v2.y;
    wynik.y = v1.z*v2.x - v1.x*v2.z;
    wynik.z = v1.x*v2.y - v1.y*v2.x;
    return wynik;
};

float scalarMultiple(struct vector3 v1, struct vector3 v2){
    return v1.x*v2.x + v1.y*v2.y + v1.z*v2.z;
};

float norm(struct vector3 v1){
    return sqrt(v1.x*v1.x + v1.y*v1.y + v1.z*v1.z);
};

struct vector3 constMultiple(struct vector3 v1, float c){
    struct vector3 wynik;
    wynik.x = v1.x * c;
    wynik.y = v1.y * c;
    wynik.z = v1.z * c;
    return wynik;
};
