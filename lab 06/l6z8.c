
#include <stdio.h>
#define N 5

void fswap(float *tab, int l, int r);
void fbubblesort(float *tab, int n);

int main(){
    int i;
    float tablica[N] = {3,2.5,4,56.8,12.6};

    printf("Przed posortowaniem:\n");
    for(i = 0; i < N; ++i){
        printf("%.1f ",tablica[i]);
    }

    fbubblesort(tablica, N);

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

void fbubblesort(float *tab, int n)
{
    int i, j;
    for (i = n; i > 0; i--)
        for (j = 1; j < i; j++)
            if (tab[j - 1] > tab[j])
                fswap(tab, j - 1, j);
}
