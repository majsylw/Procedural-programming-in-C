/*Programowanie proceduralne
grupa P00-33a
08.04.2019 Zaliczenie czastkowe 1
imie:
nazwisko:
indeks:
*/

/*Zadanie 3 ( 10 pkt.)

Zadeklaruj i zdefiniuj funkcje iseven(), ktora zwraca wartosc calkowita 1,
jesli wszystkie elementy tablicy podanej jako pierwszy argument funkcji
sa parzyste; w przeciwnym przypadku funkcja zwraca 0.
Rozmiar tablicy przekazywany jest jako drugi argument funkcji.

Dla ulatwienia w programie zdefiniowano funkcje int main(),
ktora sluzy do testowania funkcji iseven().

*/

/* uzyskano ??/10 pkt*/

#include <stdio.h>


int main()
{
    int a1[] = {2, 4, 6, 8, 0};
    int a2[] = {1, 2, 3, 4, 5};
    int n = 5;
    printf("iseven(a1): %d\n", iseven(a1, n));
    printf("iseven(a2): %d\n", iseven(a2, n));
    return 0;
}