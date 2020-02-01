#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"

#define M 9

int main() {
    //float tab[] = {5, 7, 6, 1, 9, 2, 8, 4, 3};
    float *tab = wygeneruj_tablice(M);
    printf("Wylosowana tablica:\n");
    wyswietl_tabele(tab, M);
    //fselectsort(tab, M);
    //fbubblesort(tab, M);
    //fquicksort(tab, M);
    fmergesort(tab, M);
    printf("Posortowana tablica:\n");
    wyswietl_tabele(tab, M);
    free(tab);
    return 0;
}
