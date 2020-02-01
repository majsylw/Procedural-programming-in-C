/*Programowanie proceduralne
grupa P00-33a
13.05.2019 Laboratorium 10
imie:
nazwisko:
indeks:
*/

/* Zadanie

Otworz plik tekst.txt, a nastepnie (jesli zostal poprawnie otwarty)
wypisz na ekran znaki znajdujące się na parzystych pozycjach
(co druga zaczynajac od pierwszego znaku).

Program bedzie oceniany tylko w przypadku,
gdy bedzie mozna go skompilowac i uruchomic!
----------------------------------------------------

*/
#include <stdio.h>
#include <stdlib.h>


int main()
{
    char c;
    int indeks=0;
    FILE* fptr;
    fptr = fopen("tekst.txt", "r");
    if(fptr != NULL){
        printf("Tresc pliku to:\n");
        while((c = getc(fptr)) != EOF){
            if(indeks%2)
                putc(c,stdout);
            indeks++;
        }
    }else{
        printf("\nCos nie wyszlo z otwieraniem pliku!\n");
    }


    fclose(fptr);
    return 0;
}
