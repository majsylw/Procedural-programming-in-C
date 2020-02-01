# Zaliczenie cząstkowe 4

## Zadanie 1
W ponizszym programie jest 6 bledow, znajdz je i popraw.
Kazda poprawke opisz krotko, w linijce w ktorej zostala naniesiona, za pomoca komentarza.

<pre>
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
</pre>


## Zadanie 2
Napisz program obliczajacy pierwiastki rzeczywiste rownania kwadratowego: ax^2 + bx + c = 0.
Nastepnie wczytaj wartosci wspolczynnikow wielomianu z pliku wspolczynniki.txt i
rozbuduj program o mozliwosc zapisu do pliku tekstowego raportu wykonywanych operacji postaci:<br>
wspolczynnik a = ... <br>
wspolczynnik b = ... <br>
wspolczynnik c = ... <br>
Dla rownania kwadratowego .(a).x^2 +/- .(b).x +/- .(c). zostalo wyznaczonych .(0/1/2). pierwiastkow/pierwiastek/pierwiastkow <br>
Sa to ... i ... <br>