#include "trojmian.h"


 //definicja -> funkcja, która wczytuje dane od u¿ytkownika
void readTrojmian(struct Trojmian* t){
    printf("Podaj wspolczynnik a: ");
    scanf("%f", &(t->a));
    printf("Podaj wspolczynnik b: ");
    scanf("%f", &(t->b));
    printf("Podaj wspolczynnik c: ");
    scanf("%f", &(t->c));
}

 //definicja -> funkcja, która wyœwietla trojmian na ekran
void printTrojmian(struct Trojmian t){
    printf("f(x) = %.2fx^2 + %.2fx + %.2f", t.a, t.b, t.c);
}

 //definicja -> funkcja, która wylicza wartosc trojmianu w okreslonym punkcie
float valueTrojmian(struct Trojmian t, float x){
    return x*x*t.a + x*t.b + t.c;
}

 //definicja -> funkcja, która wczytuje dane z pliku
int readTrojmianfromfile(struct Trojmian* t, FILE* rfptr){
    rozmiar = -1;
    if(rfptr != NULL){
        fscanf(rfptr,"f(x) = %fx^2 + %fx + %f\n", &(t->a),&(t->b),&(t->c));
    }else{
        printf("\nCos nie wyszlo z otwieraniem pliku!\n");
    }
    return rozmiar;
}

 //definicja -> funkcja, która zapisuje dane do pliku
void printTrojmiantofile(struct Trojmian* t, int rozmiar, FILE* fptr){
    if(fptr != NULL){
        for(i=0; i<rozmiar; i++)
            fprintf(fptr, "f(x) = %.2fx^2 + %.2fx + %.2f\n", (t+i)->a, (t+i)->b, (t+i)->c);
    }else{
        printf("\nCos nie wyszlo z otwieraniem pliku!\n");
    }
}
