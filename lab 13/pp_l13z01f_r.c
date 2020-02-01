/*Programowanie proceduralne
grupa P00-24f
23.05.2018 Zaliczenie czastkowe 4
imie:
nazwisko:
indeks:
*/

/*
Zadanie 1 (6 pkt.) //
    W ponizszym programie jest 6 bledow, znajdz je i popraw.
    Kazda poprawke opisz krotko, w linijce w ktorej zostala naniesiona, za pomoca komentarza.
*/


#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main()
{
    FILE *out;
    int i = 100;
    char znak = 'c';

    out = fopen("raport.txt", "w");

    if (out == NULL)
    {
         fprintf(stderr, "Nie mozna otworzyc pliku.\n");
         return 1;
    } else{
         // fprintf - zapis do pliku out
         fprintf(out,"\nRaportu z dzialania programu:\n\n");
         fprintf(out,"Wydruk do pliku zmiennej pi = %lf \n", M_PI);
         fprintf(out,"Wydruk do pliku zmiennej calkowitoliczbowej i = %d \n", i);
         fprintf(out,"Wydruk do pliku powiekszonej zmiennej znak = %c \n", toupper(znak));

         // zamkniecie pliku i wyswietlenie na ekranie komunikatu o poprawnosci dzialania
         fclose(out);
         printf("\nDane zostaly zapisane do pliku raport.txt");
    }
    return 0;
}
