#include <stdio.h>
#define N 5

void fmergesort(float *tab, int n);

int main(){
    int i;
    float tablica[N] = {3,2.5,4,56.8,12.6};

    printf("Przed posortowaniem:\n");
    for(i = 0; i < N; ++i){
        printf("%.1f ",tablica[i]);
    }

    fmergesort(tablica, N);

    printf("\nPo posortowaniu:\n");
    for(i = 0; i < N; ++i){
        printf("%.1f ",tablica[i]);
    }
    return 0;
}

void fmergesort(float *tab, int nn) {
    int i, j, k, n, m;
    float *a, *b, *c;
    if (nn > 1) {
        i = j = k = 0;
        n = nn/2;
        m = nn - n;
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
        for (k = 0; k < nn; k++)
            tab[k] = c[k];
        free(c);
    }
}
