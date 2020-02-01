#include<stdio.h>

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
    int i;
    float x;
    float tab[3];
    printf("Podaj argument x: ");
    scanf("%f", &x);
    printf("\n");
    for(i = 0; i <= 2; ++i){
        printf("Podaj wspolczynnik %d: ", i);
        scanf("%f", &tab[i]);
        //printf("\n");
    }

    printf("\nW(x) = %f\n", horner(2, tab, x));
    return 0;
}

