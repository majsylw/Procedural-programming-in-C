#include "Header.h"

Hole new_hole(char *name_new, double t_new) // 1 - definicja zgodna z deklaracja i o wymaganym dzialaniu
{
    Hole nowa_dziura;
    for(int i=0; i<6; ++i)
        nowa_dziura.name[i] = name_new[i];
    nowa_dziura.T = t_new;
    return nowa_dziura;
}

double hole_mass(Hole* dziura) // 1 - definicja zgodna z deklaracja i o wymaganym dzialaniu
{
    return (hbar * c * c * c) / (8.0 * pi * kB * G * dziura->T);
}
