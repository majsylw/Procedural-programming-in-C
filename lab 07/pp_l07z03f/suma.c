#include "suma.h" // sumowanie -> 1 pkt

int suma(int rozmiar, int tablica[]){

    int i, suma = 0;
    for(i = 0; i < rozmiar; ++i){
        suma += tablica[i];
    }
    return suma;
}
