#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

#define ELEMS_PER_LINE 10

float *wygeneruj_tablice(int);
void wyswietl_tabele(float *, int);
float el_max(float *, int);
int ind_el_max(float *, int);
float el_min(float *, int);
int ind_el_min(float *, int);
void fswap(float *, int, int);
void fselectsort(float *, int);
void fbubblesort(float *, int);
void fquicksort(float *, int);
void fmergesort(float *, int);

#endif // SORT_H_INCLUDED
