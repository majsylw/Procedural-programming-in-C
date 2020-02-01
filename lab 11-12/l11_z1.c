/*zapis_do_pliku.c*/
/*Zapis danych do pliku.*/
#include <stdio.h>

int main()
{
    int i;
    //deklaracja wskaznika do pliku
    FILE* fptr;

    //otworzenie pliku do zapisu
    fptr = fopen("zadanie1.txt","w");
    //zapis danych sformatowanych do pliku
    //(tylko jesli plik zostal poprawnie otwarty)
    if( fptr != NULL ){
        for(i=0; i < 10; ++i){
            fprintf(fptr,"%i\t",i);
        }
        fclose(fptr);

    } else {
        for(i=0; i < 10; ++i){
            printf("%i\t",i);
        }
    }
    return 0;
}

