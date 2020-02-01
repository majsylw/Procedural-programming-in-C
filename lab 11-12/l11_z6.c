
/*odczyt_z_pliku.c*/
/*Odczyt danych z pliku.*/
#include <stdio.h>

#define N 50

int main()
{
    //deklaracja zmiennych
    //i wskaznika do pliku
    int i, n;
    char nazwa[N];
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
        float zmienne[n];
        for(i=0; i < n; ++i){
            fscanf(fptr,"%f\t", &zmienne[i]);
        }

        //wypisz dane na ekran
        for(i=0; i < n; ++i){
            printf("%.3f ", zmienne[i]);
        }

        fclose(fptr);

    } else {
        printf("\nWystapil blad z otwarciem pliku!");
    }

    return 0;
}
