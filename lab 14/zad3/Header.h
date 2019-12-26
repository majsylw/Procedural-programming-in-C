#pragma once // 1 - dyrektywa odpowiednia dla plikow naglowkowych oraz definicje stalych
#define c 299792458.
#define G 6.6743e-11
#define pi 3.141592653
#define hbar 1.05457917
#define kB 1.380649e-23

struct BlackHole // 1 - w pelni poprawni zdefiniowana struktura
{
    char name [6];
    double T;
};

typedef struct BlackHole Hole; // 1 - alias

Hole new_hole(char *name_new, double r_new);// 1 - deklaracja zgodna z opisem

double hole_mass(Hole *dziura);// 1 - deklaracja zgodna z opisem
