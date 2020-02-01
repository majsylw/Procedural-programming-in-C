#include <stdio.h>
#define N 5

float maksymalny(float *tab, int n, int * max_ind);

int main(){
    int indeks = 0;
    float wynik;

    float tablica[N] = {3,2.5,4,56.8,12.6};

    wynik = maksymalny(tablica, N, &indeks);

    printf("Najwiekszym elementem w tablicy jest %.1f na indeksie %d.\n", wynik, indeks);

    return 0;
}

float maksymalny(float *tab, int n, int * max_ind){
    int i, kand = 0;
    for (i = 1; i < n; i++)
        if (tab[i] > tab[kand])
            kand = i;
    *(max_ind) = kand;
    return tab[kand];
}
