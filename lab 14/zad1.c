/*Programowanie proceduralne
grupa P00-33a
10.06.2019 Kolokwium zaliczeniowe
imie:
nazwisko:
indeks:
*/

/*
Zadanie 1 (10 pkt.)

Napisz program, ktory dla podanych przez uzytkownika wartosci
a oraz n oblicza potege a^n. Liczba a jest liczba calkowita
liczba n liczba calkowita nieujemna. Obliczenia powinne byc wykonane w funkcji.
Deklaracja funkcji powinna znajdowac sie w osobnym pliku.


*/

#include <stdio.h>          // umieszczenie funkcji w osobnym pliku 2 pkt.

int potega(int, int);      // deklaracja 1 pkt.

int main()
{
    int a, n, wynik;
    printf("Podaj podstawe potegi (a): \n");
    scanf("%d", &a);
    printf("Podaj wykladnik potegi (n): \n");   // wczytanie zmiennych 1 pkt.
    scanf("%d", &n);
    wynik=potega(a,n);
    printf("a^n = %d \n", wynik);   // wywolanie funkcji i wyswietlenie wyniku 1 pkt.
    return 0;
}

int potega(int a, int n)  // definicja 1 pkt.
{
    int i;                        // licznik 1 pkt.
    int wynik=1;
    for (i = 0; i < n; i++)       // petla 1 pkt.
        wynik=wynik*a;            // konstrukcja wyniku 1 pkt.

    return wynik;                 // zwrocenie wyniku 1 pkt.
}
