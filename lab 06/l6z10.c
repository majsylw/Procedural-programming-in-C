#include <stdio.h>
#define N 5

void fswap(float *tab, int l, int r);
void fquicksort(float *tab, int n);

int main(){
    int i;
    float tablica[N] = {3,2.5,4,56.8,12.6};

    printf("Przed posortowaniem:\n");
    for(i = 0; i < N; ++i){
        printf("%.1f ",tablica[i]);
    }

    fquicksort(tablica, N);

    printf("\nPo posortowaniu:\n");
    for(i = 0; i < N; ++i){
        printf("%.1f ",tablica[i]);
    }
    return 0;
}

void fswap(float *tab, int l, int r) {
    float tmp = tab[l];
    tab[l] = tab[r];
    tab[r] = tmp;
}

void fquicksort(float *tab, int n) {
    int p = 0, k;
    if (n > 1) {
        fswap(tab, p, n - 1);
        for (k = 0; k < n; k++)
            if (tab[k] < tab[n - 1])
                fswap(tab, k, p), p++;
        fswap(tab, p, n - 1);
        fquicksort(tab, p);
        fquicksort(tab + (p + 1), n - (p + 1));
    }
}
