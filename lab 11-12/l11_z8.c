
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
    char odczyt[M];
    char zapis[M];
    float * zmienne;

    FILE* odczyt_ptr;
    printf("Podaj nazwe pliku do odczytu: ");
    scanf("%s", odczyt);

    //otworzenie pliku do odczytu
    odczyt_ptr = fopen(odczyt,"r");

    FILE* zapis_ptr;
    printf("\nPodaj nazwe pliku do zapisu: ");
    scanf("%s", zapis);
    //otworzenie pliku do zapisu
    zapis_ptr = fopen(zapis,"w");

    //jesli otwarto plik poprawnie
    if( odczyt_ptr != NULL ){

        //wczytaj dane
        fscanf(odczyt_ptr,"%i\n",&n);
        printf("\n%i\n", n);
        zmienne = malloc(n * sizeof(*zmienne));
        for(i=0; i < n; ++i){
            fscanf(odczyt_ptr,"%f\t", &zmienne[i]);
        }
        fclose(odczyt_ptr);

        if( zapis_ptr != NULL ){

            fbubblesort(zmienne, n);

            //wypisz do pliku po sortowaniu
            for(i=0; i < n; ++i){
                fprintf(zapis_ptr, "%.3f ", zmienne[i]);
            }

            fclose(zapis_ptr);
        } else {
            printf("\nWystapil blad z otwarciem pliku do zapisu!");
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
        }

    } else {
        printf("\nWystapil blad z otwarciem pliku do odczytu!");
    }

    free(zmienne);
    return 0;
}

