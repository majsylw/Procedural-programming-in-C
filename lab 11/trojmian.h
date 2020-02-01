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

 //funkcja, która wczytuje dane od u¿ytkownika
void readTrojmian(struct Trojmian*);

 //funkcja, która wyœwietla dane na ekran
void printTrojmian(struct Trojmian);

 //funkcja, która wylicza wartosc trojmianu w okreslonym punkcie
float valueTrojmian(struct Trojmian, float);

 //funkcja, która wczytuje dane z pliku
void readTrojmianfromfile(struct Trojmian*, FILE*);

 //funkcja, która zapisuje dane do pliku
void printTrojmiantofile(struct Trojmian, FILE*);

#endif // TROJMIAN_H_INCLUDED
