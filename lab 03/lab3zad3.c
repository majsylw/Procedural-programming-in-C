#include<stdio.h>
#include<stdlib.h>

float horner(int n, float wsp[], float x){
    int i;
    float wynik = wsp[0];
    for(i = 1; i <= n; ++i){
        wynik = wynik*x + wsp[i];
    }
    return wynik;
}

int main()
{
    int i, n;
    float x;
    float* tab;

    printf("Podaj stopien wielomianu: ");
    scanf("%d", &n);
    printf("\n");

    tab = malloc(n * sizeof(*tab));

    printf("Podaj argument x: ");
    scanf("%f", &x);
    printf("\n");
    for(i = 0; i <= n; ++i){
        printf("Podaj wspolczynnik %d: ", i);
        scanf("%f", &tab[i]);
        //printf("\n");
    }

    printf("\nW(x) = %f\n", horner(n, tab, x));
    return 0;
}


