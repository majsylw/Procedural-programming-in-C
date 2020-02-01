#include <stdio.h>
#define N 5

float el_max(float *tab, int n);
int ind_el_max(float *tab, int n);

float el_min(float *tab, int n);
int ind_el_min(float *tab, int n);

void fswap(float *tab, int l, int r);
void fselectsort(float *tab, int n);

int main(){
    int i;
    float tablica[N] = {3,2.5,4,56.8,12.6};

    printf("Przed posortowaniem:\n");
    for(i = 0; i < N; ++i){
        printf("%.1f ",tablica[i]);
    }

    fselectsort(tablica, N);

    printf("\nPo posortowaniu:\n");
    for(i = 0; i < N; ++i){
        printf("%.1f ",tablica[i]);
    }
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

void fswap(float *tab, int l, int r) {
    float tmp = tab[l];
    tab[l] = tab[r];
    tab[r] = tmp;
}

void fselectsort(float *tab, int n) {
// wersja 1
//    if (n > 1) {
//        fswap(tab, ind_el_min(tab, n), 0);
//        fselectsort(++tab, --n);
//    }
// wersja 2
    int i;
    for (i = 0; i < n - 1; i++)
        fswap(tab + i, ind_el_min(tab + i, n - i), 0);
// wersja 3
//    int i;
//    for (i = 1; i < n; i++)
//        fswap(tab, ind_el_max(tab, n - i), n - i);
}
