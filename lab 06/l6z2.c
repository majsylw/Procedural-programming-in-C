#include <stdio.h>
#define N 5

float el_max(float *tab, int n);
int ind_el_max(float *tab, int n);

float el_min(float *tab, int n);
int ind_el_min(float *tab, int n);

int main(){

    float tablica[N] = {3,2.5,4,56.8,12.6};

    printf("Najwiekszym elementem w tablicy jest %.1f na indeksie %d.\n", el_max(tablica, N), ind_el_max(tablica, N));
    printf("Najmniejszym elementem w tablicy jest %.1f na indeksie %d.\n", el_min(tablica, N), ind_el_min(tablica, N));

    return 0;
}

float el_max(float *tab, int n){
    return tab[ind_el_max(tab, n)];
}

int ind_el_max(float *tab, int n) {
    int i, kand = 0;
    for (i = 1; i < n; i++)
        if (tab[i] > tab[kand])
            kand = i;
    return kand;
}

float el_min(float *tab, int n) {
    return tab[ind_el_min(tab, n)];
}

int ind_el_min(float *tab, int n) {
    int i, kand = 0;
    for (i = 1; i < n; i++)
        if (tab[i] < tab[kand])
            kand = i;
    return kand;
}
