/*Programowanie proceduralne
grupa P00-07f
9.04.2018 Zaliczenie czastkowe 2
imie:
nazwisko:
indeks:
*/

/*Zadanie 1 (4pkt)
Napisz program wczytujacy n liczb calkowitych z zakresu od -2 do 8 i wyznaczajacy ich pierwszy kwartyl.
W tym celu napisz funkcje pierwszy_kwartyl(), ktora bedzie pobierac jako argumenty tablice i jej rozmiar,
a zwracac wyznaczony pierwszy kwartyl(2pkt) - liczbe stanowiaca 1/4 posortowanych danych.
W funkcji pierwszy_kwartyl() wywolaj pomocnicza funkcje sortowanie(),
w ktorej zaimplementujesz sortowanie szybkie - quicksort (2pkt). Dla ulatwienia przetestowania
dzialania funkcji czesc wykonawcza programu zostala juz zaimplementowana w funkcji main().
*/

#include <stdio.h>
#include <stdlib.h>

void swap(int[], int, int);
void sortowanie(int, int[]);

float pierwszy_kwartyl(int, int[]);

main(){
    srand(time(NULL));
    int i, j, t, n;
    int *tab;
    float kwartyl;

    printf("Podaj liczbe n: ");
    scanf("%d", &n);

    tab = malloc(n * sizeof(*tab));

    for(i=0; i<n; ++i){
        tab[i] = rand()%11 - 2;
    }

    kwartyl = pierwszy_kwartyl(n, tab);

    for(i=0; i<n; ++i){
        printf("%d ", tab[i]);
    }

    printf("\nPierwszy kwartyl dla tego zestawu liczb wynosi %.1f.", kwartyl);

    free(tab);
    return 0;
}

void swap(int *tab, int l, int r) {
    int tmp = tab[l];
    tab[l] = tab[r];
    tab[r] = tmp;
}

void sortowanie(int rozmiar, int tab[]){ // sortowanie quicksort -> 2pkt
    int p = 0, k;
    if (rozmiar > 1) {
        swap(tab, p, rozmiar - 1);
        for (k = 0; k < rozmiar; k++)
            if (tab[k] < tab[rozmiar - 1]){
                swap(tab, k, p);
                p++;
            }
        swap(tab, p, rozmiar - 1);
        sortowanie(p, tab);
        sortowanie(rozmiar - (p + 1), tab + (p + 1));
    }
}

float pierwszy_kwartyl(int rozmiar, int tab[]){
    sortowanie(rozmiar, tab); // skorzystanie z funkcji sortujacej wewnatrz funkcji wyznaczajacej kwartyl -> 1pkt
    float kwartyl = tab[(int)floor(rozmiar/4.0)]; // poprawne wyznaczenie kwartylu -> 1pkt
    return kwartyl;
}

