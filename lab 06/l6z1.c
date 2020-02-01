#include <stdio.h>
#define N 5

float el_max(float *tab, int n);
int ind_el_max(float *tab, int n);

int main(){

    float tablica[N] = {3,2.5,4,56.8,12.6};

    printf("Najwiekszym elementem w tablicy jest %.1f.", el_max(tablica, N));

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
