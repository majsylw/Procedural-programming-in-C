/*Programowanie proceduralne
grupa P00-07f
21.03.2017 Zaliczenie czastkowe 1
imie:
nazwisko:
indeks:*/

/*Zadanie 2 (4 pkt.)

Zaimplementuj funkcje int newton(int, int),
ktora oblicza wartosc symbolu Newtona korzystaj�c z formu�y rekurencyjnej

n po k =
   1                          gdy k = 0 lub k = n
   (n-1 po k-1) + (n-1 po k)  gdy 0 < k < n

Dla przypadk�w nieobj�tych powy�szym wzorem funkcja powinna wy�wietli� komunikat
o niepoprawnych danych i zwr�ci� 0. Zobrazuj dzia�anie funkcji na co najmniej
trzech przyk�adach w funkcji main.
*/

#include <stdio.h>

int newton(int, int);

int main(){

   int n = -5;
   int k = -1;
   printf("newton(%d,%d)=%d\n",n,k,newton(n,k));

   return 0;
}

int newton(int n, int k){
    if (n == k || k == 0)
        return 1;
    if (k < n && k > 0)
        return newton(n-1, k-1) + newton(n-1, k-1);
    else{
        printf("Niepoprawne dane!\n");
        return 0;
    }
}
