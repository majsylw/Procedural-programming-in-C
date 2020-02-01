#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


float *wygeneruj_tablice(int N) {
    int i;
    float *tab;
    srand(time(NULL));
    //srand(1234);
    tab = malloc(N*sizeof(*tab));
    for (i = 0; i < N; i++)
        tab[i] = 100.0*rand()/RAND_MAX;
    return tab;
}

void wyswietl_tabele(float *tab, int N) {
    int i;
    for (i = 0; i < N; i++) {
        if (i%ELEMS_PER_LINE == 0)
            printf("|");
        printf("%6.2f|", tab[i]);
        if ((i + 1)%ELEMS_PER_LINE == 0)
            printf("\n");
    }
    printf("\n\n");
}

float el_max(float *tab, int N) {
    return tab[ind_el_max(tab, N)];
}

int ind_el_max(float *tab, int N) {
    int i, kand = 0;
    for (i = 1; i < N; i++)
        if (tab[i] > tab[kand])
            kand = i;
    return kand;
}

float el_min(float *tab, int N) {
    return tab[ind_el_min(tab, N)];
}

int ind_el_min(float *tab, int N) {
    int i, kand = 0;
    for (i = 1; i < N; i++)
        if (tab[i] < tab[kand])
            kand = i;
    return kand;
}

void fswap(float *tab, int l, int r) {
    float tmp = tab[l];
    tab[l] = tab[r];
    tab[r] = tmp;
}

void fselectsort(float *tab, int N) {
// wersja 1
    if (N > 1) {
        fswap(tab, ind_el_min(tab, N), 0);
        fselectsort(++tab, --N);
    }
// wersja 2
//    int i;
//    for (i = 0; i < N - 1; i++)
//        fswap(tab + i, ind_el_min(tab + i, N - i), 0);
// wersja 3
//    int i;
//    for (i = 1; i < N; i++)
//        fswap(tab, ind_el_max(tab, N - i), N - i);
}

void fbubblesort(float *tab, int N)
{
    int i, j;
    for (i = N; i > 0; i--)
        for (j = 1; j < i; j++)
            if (tab[j - 1] > tab[j])
                fswap(tab, j - 1, j);
}

void fquicksort(float *tab, int N) {
    int p = 0, k;
    if (N > 1) {
        fswap(tab, p, N - 1);
        for (k = 0; k < N; k++)
            if (tab[k] < tab[N - 1])
                fswap(tab, k, p), p++;
        fswap(tab, p, N - 1);
        fquicksort(tab, p);
        fquicksort(tab + (p + 1), N - (p + 1));
    }
}

void fmergesort(float *tab, int N) {
    int i, j, k, n, m;
    float *a, *b, *c;
    if (N > 1) {
        i = j = k = 0;
        n = N/2;
        m = N - n;
        a = tab;
        b = tab + n;
        // podzial
        fmergesort(a, n);
        fmergesort(b, m);
        // scalanie
        c = malloc(N*sizeof(*c));
        while (i < n && j < m)
            if (a[i] <= b[j])
                c[k] = a[i], i++, k++;
            else
                c[k] = b[j], j++, k++;
        while (j < m)
            c[k] = b[j], j++, k++;
        while (i < n)
            c[k] = a[i], i++, k++;
        // przepisywanie
        for (k = 0; k < N; k++)
            tab[k] = c[k];
        free(c);
    }
}
