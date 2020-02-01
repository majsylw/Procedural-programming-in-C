#include <stdio.h>

#define N 50

int main()
{
    //deklaracja zmiennych
    //i wskaznika do pliku
    int i, n;
    char nazwa[N];

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

    } else {
        printf("\nWystapil blad z otwarciem pliku!");
    }

    free(zmienne_x);
    free(zmienne_y);
    return 0;
}
