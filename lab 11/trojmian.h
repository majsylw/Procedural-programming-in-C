#ifndef TROJMIAN_H_INCLUDED
#define TROJMIAN_H_INCLUDED

// biblioteka
#include <stdio.h>

// deklaracja struktury
struct Trojmian {
    float a;
    float b;
    float c;
};

 //funkcja, kt�ra wczytuje dane od u�ytkownika
void readTrojmian(struct Trojmian*);

 //funkcja, kt�ra wy�wietla dane na ekran
void printTrojmian(struct Trojmian);

 //funkcja, kt�ra wylicza wartosc trojmianu w okreslonym punkcie
float valueTrojmian(struct Trojmian, float);

 //funkcja, kt�ra wczytuje dane z pliku
void readTrojmianfromfile(struct Trojmian*, FILE*);

 //funkcja, kt�ra zapisuje dane do pliku
void printTrojmiantofile(struct Trojmian, FILE*);

#endif // TROJMIAN_H_INCLUDED
