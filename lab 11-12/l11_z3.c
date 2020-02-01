/*zapis_do_pliku.c*/
/*Zapis danych do pliku.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int i, n;

    printf("Podaj liczbe n: ");
    scanf("%d", &n);
    //deklaracja wskaznika do pliku
    FILE* fptr;

    //otworzenie pliku do zapisu
    fptr = fopen("zadanie3.txt","w");
    //zapis danych sformatowanych do pliku
    //(tylko jesli plik zostal poprawnie otwarty)
    if( fptr != NULL ){
        for(i=0; i < n; ++i){
            fprintf(fptr,"%.3f\t",rand()/(float)RAND_MAX);
        }
        fclose(fptr);

    } else {
        printf("\n");
        for(i=0; i < 10; ++i){
            printf("%i\t",i);
        }
    }
    return 0;
}


