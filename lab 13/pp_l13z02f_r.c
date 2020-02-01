/*Programowanie proceduralne
grupa P00-24f
23.05.2018 Zaliczenie czastkowe 4
imie:
nazwisko:
indeks:
*/

/*
Zadanie 2 (6 pkt.) //
    Napisz program obliczajacy pierwiastki rzeczywiste rownania kwadratowego: ax^2 + bx + c = 0.
    Nastepnie wczytaj wartosci wspolczynnikow wielomianu z pliku wspolczynniki.txt i
    rozbuduj program o mozliwosc zapisu do pliku tekstowego raportu wykonywanych operacji postaci:
    wspolczynnik a = ...
    wspolczynnik b = ...
    wspolczynnik c = ...
    Dla rownania kwadratowego .(a).x^2 +/- .(b).x +/- .(c). zostalo wyznaczonych .(0/1/2). pierwiastkow/pierwiastek/pierwiastkow
    Sa to ... i ...
*/


#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main()
{
    FILE* out;
    FILE* in;

    double a, b, c;

    in = fopen("wspolczynniki.txt", "r");
    out = fopen("raport_2.txt", "w");

    if (in == NULL)
    {
         fprintf(stderr, "Nie mozna otworzyc pliku.\n");
         return 1;
    } else{
         // fprintf - zapis do pliku out
         fscanf(in,"a = %lf\n", &a);
         fscanf(in,"b = %lf\n", &b);
         fscanf(in,"c = %lf\n", &c);

         double delta = b*b - 4*a*c;

         printf("a->%lf\n", a);
         printf("b->%lf\n", b);
         printf("c->%lf\n", c);

         printf("delta->%lf\n", delta);

         // zamkniecie pliku
         fclose(in);
    }
    return 0;
}
