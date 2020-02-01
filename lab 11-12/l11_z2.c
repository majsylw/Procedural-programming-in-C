/*zapis_do_pliku.c*/
/*Zapis danych do pliku.*/
#include <stdio.h>

int main()
{
    int i, n;

    printf("Podaj liczbe n: ");
    scanf("%d", &n);
    //deklaracja wskaznika do pliku
    FILE* fptr;

    //otworzenie pliku do zapisu
    fptr = fopen("zadanie2.txt","w");
    //zapis danych sformatowanych do pliku
    //(tylko jesli plik zostal poprawnie otwarty)
    if( fptr != NULL ){
        for(i=0; i < n; ++i){
            fprintf(fptr,"%i\t",i);
        }
        fclose(fptr);

    } else {
        printf("\n");
        for(i=0; i < n; ++i){
            printf("%i\t",i);
        }
    }
    return 0;
}


