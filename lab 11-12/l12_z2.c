#include <stdio.h>

#define N 50

float suma_elementow(float tab[], int rozmiar){
    int i;
    float suma = 0;
    for(i = 0; i < rozmiar; i++){
        suma += tab[i];
    }
    return suma;
}

float mnozenie_elementow(float tab1[], float tab2[], int rozmiar){
    int i;
    float mnozenie = 0;
    for(i = 0; i < rozmiar; i++){
        mnozenie += tab1[i] * tab2[i];
    }
    return mnozenie;
}

int main()
{
    //deklaracja zmiennych
    //i wskaznika do pliku
    int i, n;
    char nazwa[N];
    float a, b;

    float * zmienne_x;
    float * zmienne_y;

    FILE* fptr;
    printf("Podaj nazwe pliku do odczytu: ");
    scanf("%s", nazwa);

    //otworzenie pliku do odczytu
    fptr = fopen(nazwa,"r");

    //jesli otwarto plik poprawnie
    if( fptr != NULL ){

        //wczytaj dane
        fscanf(fptr,"%i\n",&n);
        printf("\n%i\n", n);
        zmienne_x = malloc(n * sizeof(*zmienne_x));
        zmienne_y = malloc(n * sizeof(*zmienne_y));
        for(i=0; i < n; ++i){
            fscanf(fptr,"%f\t", &zmienne_x[i]);
            fscanf(fptr,"%f\n", &zmienne_y[i]);
        }
        fclose(fptr);

        //wypisz dane na ekran
        for(i=0; i < n; ++i){
            printf("%.3f ", zmienne_x[i]);
            printf("%.3f ", zmienne_y[i]);
            printf("\n");
        }

        a = (n * mnozenie_elementow(zmienne_x, zmienne_y, n) - suma_elementow(zmienne_x, n) * suma_elementow(zmienne_y, n))/(n * mnozenie_elementow(zmienne_x, zmienne_x, n) - suma_elementow(zmienne_x, n) * suma_elementow(zmienne_x, n));
        b = 1./n * (suma_elementow(zmienne_y, n) - a * suma_elementow(zmienne_x, n));

        printf("\nProsta regresji: y = %.3fx + %.3f", a, b);
    } else {
        printf("\nWystapil blad z otwarciem pliku!");
    }

    free(zmienne_x);
    free(zmienne_y);
    return 0;
}
