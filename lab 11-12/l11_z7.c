
/*odczyt_z_pliku.c*/
/*Odczyt danych z pliku.*/
#include <stdio.h>

#define M 50

void fswap(float *tab, int l, int r) {
    float tmp = tab[l];
    tab[l] = tab[r];
    tab[r] = tmp;
}

void fbubblesort(float *tab, int N)
{
    int i, j;
    for (i = N; i > 0; i--)
        for (j = 1; j < i; j++)
            if (tab[j - 1] > tab[j])
                fswap(tab, j - 1, j);
}

int main()
{
    //deklaracja zmiennych
    //i wskaznika do pliku
    int i, n;
    char nazwa[M];
    float * zmienne;

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
        zmienne = malloc(n * sizeof(*zmienne));
        for(i=0; i < n; ++i){
            fscanf(fptr,"%f\t", &zmienne[i]);
        }
        fclose(fptr);

        //wypisz dane na ekran przed sortowaniem
        for(i=0; i < n; ++i){
            printf("%.3f ", zmienne[i]);
        }
        printf("\n");

        fbubblesort(zmienne, n);

        //wypisz dane na ekran po sortowaniu
        for(i=0; i < n; ++i){
            printf("%.3f ", zmienne[i]);
        }
        printf("\n");

    } else {
        printf("\nWystapil blad z otwarciem pliku!");
    }

    free(zmienne);
    return 0;
}

